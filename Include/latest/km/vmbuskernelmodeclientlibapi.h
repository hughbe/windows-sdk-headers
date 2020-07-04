/**

\copyright Copyright (C) Microsoft Corporation.  All Rights Reserved.

\file VmbusKernelModeClientLibApi.h

\brief This file contains the structures that define the public
       kernel-mode client interfaces.

\page vmbus_theory VMBus Theory of Operation
@{
VMBus is a collection of technologies.  At its lowest layer, it's a message
passing and signaling mechanism, allowing efficient passing of messages to and
from guest VMs.  A layer higher, it's a mechanism for defining channels of
communication, where each channel is tagged with a type (which implies a
protocol) and a instance ID.  A layer higher than that, it's a bus driver,
serving as the basis of device enumeration within a VM, where a channel can
optionally be exposed as a paravirtual device.  When a server-side (paravirtual
back-end) component wishes to offer a channel to a guest VM, it does so by
specifying a channel type, a mode, and an instance ID.  VMBus then exposes this
in the guest.

Several channel types are available.  If the software involved needs a socket,
that's available.  If it needs something that sends data through something like
a named pipe, that's available too.  These are simple programming interfaces,
but their simplicity implies that the data must be serialized and copied a
couple of times in the course of delivering it.

For larger amounts of data, or for buffers that will be reused many times, it
often makes sense to create descriptors for them which can be referenced from
both ends of the channel.  In general, the model is that the guest VM donates
the memory.  When this sort of technique is required, the server must offer a
channel from the host's kernel mode, without using the pipe or socket
abstractions.

The mechanics of setting up channels, providing shared memory for ring buffers,
other (optionally) memory for a shared heap, signaling through cross-partition
interrupts, translation of memory descriptors from guest-relative to
host-relative and exposing physical device objects is abstracted using the
VMBus Kernel Mode Client Library.
@}

\page kmcl_theory VMBus Kernel Mode Client Library Overview
@{
To use the VMBus Kernel Mode Client Library (KMCL), the first step is for the
server endpoint to create a channel object.  This object is the point of
configuration for the channel, as well as the mechanism for setting up and
tearing down the communication path.

After a channel has been allocated and enabled, the guest VM will see a channel
offer.  It can accept this offer by creating a corresponding channel object
at the client endpoint.

After the channel offer has been accepted and the channel is open, either
endpoint can allocate packet objects and send messages using them.  The packet
objects can be reused, and if they are, no further memory will be allocated
at the time that a message is sent.

When sending a packet via a packet object, the message associated with the
packet object is placed in the outgoing ring buffer.  If the ring buffer is
full, the packet object is enqueued on the channel until the ring buffer has
room.  The driver may request that a callback function is invoked when the
message is successfully sent via the ring buffer.

Packet objects can optionally be associated with a transaction.  The transaction
is complete when the opposite endpoint has sent a completion message.  If so,
the driver will probably want to supply a callback that is invoked when the
transaction is complete.

For transactions that originate in the guest VM, the driver can optionally
supply a chain of Memory Descriptor Lists (MDLs) which will be sent as part
of the transaction.  Before these are presented to the server endpoint in the
host, the associated parts of the guest VM will be pinned in memory (for the
life of the transaction) and the memory descriptors will be translated to a
host-relative MDL.

Endpoints receive messages by registering a callback function on the channel.
When a message is delivered, the receiving code must indicate when it has
finished processing the message by "completing" the packet.  If the packet
was part of a transaction and had associated pinned guest memory buffers, those
buffers are unpinned and invalid at the moment that the packet is completed.
@}

\page gpadl_theory Guest Physical Address Descriptor Lists
@{
Each operating system running on top of Hyper-V (or probably any other
hypervisor) has a virtulized view of physical memory.  We're not talking about
"virtual memory" here.  That term applies to a much older use of page tables in
the processor, virtualizing how user-mode applications address memory.  Modern
processors can also use page tables to indirect the view of physical memory that
the operating system sees, leading to confusing terms like "Guest Physical
Address" or "Host Physical Address," or the latter's synonym, "System Physical
Addresss."  System (or Host) Physical addresses, or SPAs as they're refered to
within Hyper-V, are those addresses that refer to the actual physical layout of
the machine, both with respect to RAM and to devices attached to PCI buses.

Guest Physical Address (or GPAs) are those which a guest OS uses as physical
addresses.  They are also those used by the physical hardware controlled by one
of those guest OSes.  When a device driver programs the device with addresses
to be used in a Direct Memory Access (DMA) operation, it uses GPAs.

When Hyper-V is installed, one operating system, called either the "Root
Partition," "Parent Partition" or "Management Operating System" boots before
any other.  It is, in some respects, only partly virtualized.  It runs in a mode
where all the memory that is exposed to it is given guest physical addresses
which are the same as the underlying system physical addresses.  Not all of the
machine's memory is exposed to the Root Partition, but all of the memory that
is exposed is identity-mapped onto the system physical address space.  This
allows device drivers which existed before Hyper-V to function within that
enviroment, with near perfect compatibility.

Other guest operating systems, or "Child Partitions," all run with guest
physical address spaces which have no particular relationship with the actual
system physical address space.  Just as an example, pretty much all operating
systems expect to find memory at the bottom of their physical address space, and
only one OS on the machine can occupy the actual bottom of the the machine's
memory.  Furthermore, since these child partitions are often used a full virtual
machine, we need to be able to move the VM from one physical host to another,
save it and restore it later, checkpoint it, etc., and all of these operations
require virtualizing the guest physical address map for that VM.

When software is paravirtualized, it is aware that it is running in a VM.  This
awareness allows the software to run in a much more efficient way than it could
if it was interacting with an emulation of a PC.  In Hyper-V, this mostly
amounts to drivers and other services sending messages over VMBus.  Often, the
messages are simple datagrams, and they are sent by placing the packet in a
ring buffer.  But other times, the data is large enough that it makes more sense
to send descriptors of the buffers, rather than copying the data into and then
out of the ring buffer.

These descriptors are called Guest Physical Address Descriptor Lists, or GPADLs.
They function very much like an Memory Descriptor List (MDL) does in a Windows
driver.  They have a start address, an offset within the first page, and a
length in bytes.  As with MDLs, they can be chained, so that, for instance, a
series of buffers which are not page aligned can be logically concatenated.
This would be useful, for example, when describing a network packet, where the
IP header was in one buffer somewhere in the middle of a page, the TCP header
was in another buffer, again in the middle of a page, and the payload, in yet
a third page.

In order to make full machine virtualization practical, drivers using the VMBus
Kernel Mode Client Library rely on the client endpoint (in the child partition,
which is to say the guest VM) to donate the memory for any buffer which is going
to be shared between the two endpoints.  By avoiding mapping host memory into a
guest VM, all of the state associated with that guest VM is nicely isolated.  So,
for most purposes, GPADLs describe guest memory.

When the client endpoint sends a packet to the server endpoint, the GPADL is
necessarily in terms of that child partition's guest physical address map, since
that client can't know (for lots of reasons, with security most important) how
its GPAs map onto SPAs.  The VMBus Kernel-Mode Client Library automatically
parses the VMBus packets and extracts the GPADLs embedded within them, which is
possible because they're stored as part of the packet header defined by VMBus.
It then calls through other parts of Hyper-V to ensure that, the pages of the
guest VM which are described in the GPADL are pinned for the life of the
transaction.  It then converts the GPAs in the packet which were in terms of the
child partition into GPAs in terms of the parent partition, which is to say that
they're also SPAs.  Lastly, it creates a MDL which is equivalent to the GPADL
which can be used by drivers in the parent partition.  When the transaction is
complete, client drivers call back into the the KMCL to mark it as such, at
which point the process is reversed, the MDL is freed and the regions of the
guest described by the GPADL may no longer be pinned in memory.
@}

\page channel_theory VMBus Channel Usage
@{
VMBus enables paravirtualized services.  Some of those services seem like
devices, and are exposed with device drivers in the guest OS, as with
storvsc.sys or netvsc.sys.  Others are just integrations between the host and
the guests.  The simpler integrations operate in the least expensive manner.
Other, higher-performance services require somthing a little bit more complex.

Each VMBus service is made up of one or more channels.  The protocol used with
the channel is identified by a type GUID.  The specific instance of the service
is identified by an instance GUID.  When the service is offered to the guest VM,
the server endpoint decides what the properties of the channel(s) are.

Each channel is itself just an incoming ring buffer, and outgoing ring buffer
and a signaling mechanism.  When triggered, the signal will cause code to run
in the opposite endpoint, like an interrupt service routine.  This code polls
the incoming ring buffer and, if necessary, enqueues anything into the outgoing
ring buffer that couldn't fit into it in the past.

Several options exist for the signaling mechanism.  The system as a whole
benefits when the channels share signals, and this is the default choice.  When
one channel needs attention, VMBus will interrupt another instance of VMBus in
another partition and all the channels which share a signal will be polled.

In some cases, it makes sense for a channel, particularly if it has a lot of
traffic, or if that traffic is sensitive to latency, to have its own signal,
which is not shared with other channels.  This is a configuration option at the
server endpoint.

Very high performance I/O may require that a single service instance have
multiple channels, each with its own independent ring buffers and signals.  This
makes sense when you need to ensure that, for instance, code in separate NUMA
nodes will not contend on a lock.  It also makes sense if you need to send a
signal, which will in this case mimick an interrupt, to a specific virtual
processor.

Many services perform just fine with a shared signal.  Virtual SCSI performs
just fine with a channel and signal for every 16 virtual procesors in the guest.
Virtual networking requires a channel and signal for every Receive-Side Scaling
(RSS) queue.  Virtual NVMe, were we to implement it, would probably require a
virtual channel for each NVMe queue.

The server endpoint can also optionally specify that the VMBus driver in the
child partition (if that partition is running some version of Windows) should
create a Physical Device Object associated with the channel, serving as the
basis of a device stack, and triggering the loading of device drivers on that
stack.  Alternatively, the channel may be exposed as a file handle on the
VMBus driver.  I.e. a service instance is constructed contructed of one or more
channels and zero or more device objects.
@}

\page pipe_mode VMBus Pipes
@{
VMBus channels can be offered in a mode where they operate very similarly to
a Windows Named Pipe.  When usign this mode, VMBus assumes control of the
channel itself, inserting a small header into each packet.  It then exposes a
simple read/write interface.  If an endpoint opens a file handle to the pipe,
it can issue ReadFile or WriteFile operations against the file handle.  Each
Read- or Write-File operation sends or receives a datagram.

In this mode, the channel has no transaction semantics.  It cannot describe
memory buffers, either.  All data is copied into and then out of a ring buffer.
@}

\page state_model VMBus Kernel Mode Client Library State Model
@{
VMBus channels managed by the Kernel Mode Client Library are stateful.  The
states and their side effects are described here.  The state model for the client
and server endpoints are different.  At a high level, server endpoints offer
channels and rescind those offers.  Client endpoints open channels and close
them.  Either endpoint may pause or resume channel processing locally.

Channel Lifetime
----------------

A channel allocated with \ref VmbChannelAllocate starts in
the disabled state.  At this point, the channel struct can be configured
using *Init* functions.  Once the channel has been appropriately
configured, the KMCL client calls \ref VmbChannelEnable.  On the host, this
function offers a channel to the guest.  On the guest, this function
accepts an existing offer or waits for such an offer to arrive.  In either
case, VmbChannelEnable does not wait until the opposite endpoint
offers/opens the channel and returns immediately.

At this point, the channel is enabled but not open.  When the host offers
a channel that the guest is waiting on, or the guest decides to open an
existing channel offer, KMCL will invoke the \ref EvtChannelOpened callback.
During and after this callback, the KMCL client may establish any
long-term GPADLs.   (See \ref gpadl_theory.)  After this callback, the channel
is in the open state.

When an open channel closes (i.e.  the KMCL client calls \ref VmbChannelDisable
or the opposite endpoint rescinds or closes the
channel), KMCL will invoke the \ref EvtChannelClosed callback.  The KMCL
client must destroy all existing GPADLs inside
this callback.  After this callback completes on the host, the channel
will be either closed or disabled (depending on whether the guest closed
the channel or the KMCL client called \ref VmbChannelDisable,
respectively).  On the guest, the channel will always become disabled and
must be restarted using \ref VmbChannelEnable.

Orthogonally to a channel's open/closed state, a channel also has a
paused/active state.  This state is controlled using the
\ref VmbChannelStart and \ref VmbChannelPause functions.  These functions may be
called anytime after \ref VmbChannelEnable and before \ref VmbChannelDisable.  They
may not be called within state change callbacks.

In the guest VM, which is to say the client endpoint, calling \ref VmbChannelEnable
implicitly puts the channel into the active state.  On the host, \ref VmbChannelStart
must be called manually.  This can occur immediately after \ref VmbChannelEnable.

If a paused channel is opened or an opened channel is started, KMCL will
call the \ref EvtChannelStarted callback after it calls the \ref EvtChannelOpened
callback.  The \ref EvtChannelStarted callback can call \ref VmbPacketSend functions
to queue up outgoing packets but must not block on incoming packets or
completions.  This is because the incoming queue is not running yet.

After \ref EvtChannelStarted returns, KMCL will enable the incoming queue.  This
may lead to \ref EvtChannelProcessPacket callbacks being invoked for incoming
packets.  Then, KMCL will call \ref EvtChannelPostStarted.  This callback is the
right place to perform synchronous sends, e.g.  for protocol negotiation.
At this point, the channel is in a active state.

If a running channel is suspended via \ref VmbChannelPause or closed via
\ref VmbChannelDisable or action by the opposite endpoint, KMCL will call
\ref EvtChannelSuspend.  This callback guarantees that no more
\ref EvtChannelProcessPacket callbacks are running or will be queued (at least
until the next \ref EvtChannelStarted callback).  This callback is also a
notification that the KMCL client must eventually complete all outstanding
packets indicated via EvtChannelProcessPacket.  Note that these packets do
not have to be completed synchronously.  KMCL will block until they have
been completed.  The KMCL client must also stop sending packets with
VmbPacketSend*.

A call to \ref VmbChannelPause on an active channel will block until
\ref EvtChannelSuspend is called an no more oustanding incoming packets exist.
A call to \ref VmbChannelDisable will block until the channel is disabled, i.e.
paused and closed.

Server States
-------------
- Disabled
- Enabled
- Started
- Stopped
- Paused
- Active

Client States
-------------
- Disabled
- Enabled
- Opened
- Closed
- Paused
- Active
@}

\page packet_object VMBus Kernel Mode Client Library Packet Objects
@{
The VMBus Kernel Mode Client Library includes the concept of a packet object.
This object allows the client code to abstract many of the things that mechanically
must happen when using a VMBus channel.  When sending a packet through VMBus,
the memory descriptors need to be converted into something interpretable by the
opposite endpoint, in some cases a handle need to be allocated from a handle table,
The packet needs to be inserted into the ring buffer, if the ring buffer is full
then the transaction needs to get enqueued until space frees up, a signal needs to
be sent to the opposite endpoint, etc.  By allocating and using a packet object,
all of these mechanics are handled in common code.

When a packet object is allocated, all of the resources necessary for a VMBus
transaction are allocated.  This means that while allocating the object can fail,
sending data with the packet object can't fail simply because the machine is out
of resources.  Packet objects can be reused, so that subsequent data can be sent
without further resource allocation.  Furthermore, the KMCL will keep recently
released packet objects on a list so that attempts to create new ones are
generally very cheap.

After allocating a packet object (see \ref VmbPacketAllocate), the client
driver may choose to set a completion callback, to be notified when the
entire transaction has been retired, as with \ref VmbPacketSetCompletionRoutine.
If the client doesn't use the \ref VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION
flag, then the transaction is considered complete as soon as the outgoing message
is inserted into the ring buffer.  After the packet completion routine is invoked the
packet object can be freed (see \ref VmbPacketFree) or reused.

Sometimes a VM is saved to disk, or migrated to another machine.  When this happens,
the guest VM stops running and thus stops removing incoming packets from the ring
buffer.  This often results in a situation where the ring buffer fills up and
additional packets will be queued up in the parent partition which can't be placed
into the ring buffer until after the VM has been resumed.  Because all the state
in the parent partition will be torn down while the VM is saved, or because the VM
has migrated to a new host, this same state must be recreated.  Similarly, a
transaction may have already progressed to the point where the packet has been
placed in the outgoing ring buffer but no response has get come.  For this purpose,
there are callbacks on the channel object that allow the save/restore code to
collect the state associated with outgoing packet objects and restore them later.
(See \ref EvtVmbChannelSavePacket and \ref EvtVmbChannelRestorePacket.)
@}
*/
#if NTDDI_VERSION >=NTDDI_WINBLUE

#ifdef _MSC_VER
   #pragma once
#endif //_MSC_VER

#pragma warning(push)
#pragma warning(disable: 4201)

///\name VMBCHANNEL
/// This handle identifies a VMBus channel object.
DECLARE_HANDLE(VMBCHANNEL);
///\name VMBPACKET
/// This handle identifies a VMBus packet object.
DECLARE_HANDLE(VMBPACKET);
///\name VMBPACKETCOMPLETION
/// This handle identifies the incoming packet and is used to refer to the packet
/// once processing is complete.  See \ref EvtVmbChannelProcessPacket for more
/// information.
DECLARE_HANDLE(VMBPACKETCOMPLETION);

///\def VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION
/// Use this flag to indicate that a packet cannot be considered complete
/// until the opposite endpoint has sent a completion packet, and that any
/// associated resources will not be freed until then.
#define VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION 0x1

///\def VMBUS_CHANNEL_FORMAT_FLAG_FORCE_MDL_LENGTH
/// Use this flag to override the length of the buffer described by a MDL,
/// usually because the MDL does not describe an entire page.
#define VMBUS_CHANNEL_FORMAT_FLAG_FORCE_MDL_LENGTH 0x2

///\def VMBUS_CHANNEL_FORMAT_FLAG_PAGED_BUFFER
/// Use this flag to indicate that the buffer containing a message to be sent
/// in a packet is paged, and thus must be copied before any code raises IRQL
/// to DISPATCH_LEVEL or higher.
#define VMBUS_CHANNEL_FORMAT_FLAG_PAGED_BUFFER 0x4

///\def VMBUS_CHANNEL_FORMAT_FLAG_DATA_IN_ONLY
/// Use this flag to indicate that the associated MDL expects data to be 
/// copied into it from the remote side. The initial contents of the buffer 
/// will not be preserved.
#define VMBUS_CHANNEL_FORMAT_FLAG_DATA_IN_ONLY 0x8

///\def VMBUS_CHANNEL_FORMAT_FLAG_DATA_OUT_ONLY
/// Use this flag to indicate that the associated MDL expects data to be 
/// copied from it to the remote side. The remote side will not alter the 
// contents of the buffer.
#define VMBUS_CHANNEL_FORMAT_FLAG_DATA_OUT_ONLY 0x10

#define VMBUS_CHANNEL_FORMAT_FLAGS (\
    VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION | \
    VMBUS_CHANNEL_FORMAT_FLAG_FORCE_MDL_LENGTH | \
    VMBUS_CHANNEL_FORMAT_FLAG_PAGED_BUFFER | \
    VMBUS_CHANNEL_FORMAT_FLAG_DATA_IN_ONLY | \
    VMBUS_CHANNEL_FORMAT_FLAG_DATA_OUT_ONLY)

#define VMBUS_CHANNEL_GPADL_FLAG_READ_ONLY 0x1

#define VMBUS_CHANNEL_GPADL_FLAGS (\
    VMBUS_CHANNEL_GPADL_FLAG_READ_ONLY)

///\page channel_init_flags VMBus Channel Initialization Flags - Either Endpoint
/// These flags define how a channel operates.  VMBUS_CHANNEL_INIT_FLAGS
/// defines all the flags which can apply to either a server endpoint or a client
/// endpoint.
///
/// - VMBUS_CHANNEL_INIT_FLAG_IS_PIPE
/// This flag indicates that the channel operates in the mode described by \ref pipe_mode.
#define VMBUS_CHANNEL_INIT_FLAG_IS_PIPE 0x1
#define VMBUS_CHANNEL_INIT_FLAGS (\
    VMBUS_CHANNEL_INIT_FLAG_IS_PIPE)

///\page server_init_flags VMBus Channel Initialization Flags - Server Endpoint
/// These flags define how a channel operates.  VMBUS_SERVER_CHANNEL_INIT_FLAGS
/// defines all the flags which can apply only to a server endpoint.
///
/// - VMBUS_SERVER_CHANNEL_INIT_FLAG_ENUMERATE_DEVICE_INTERFACE
/// Use this flag to request that this channel offer should trigger the PnP
/// Manager in the guest to offer a "device interface" with the same GUID
/// as the channel type, which would allow drivers or user-mode programs in
/// the guest to open a file handle to this channel.
///
/// - VMBUS_SERVER_CHANNEL_INIT_FLAG_OFFER_AS_PIPE
/// This channel should be offered in \ref pipe_mode where ReadFile and WriteFile
/// operations will trigger sending and receiving of packets.
///
/// - VMBUS_SERVER_CHANNEL_INIT_FLAG_FORCE_NEW_CHANNEL
/// This flag indicates that, after a VM has been saved and restored, this
/// channel should be reoffered to the guest and the old instance should be
/// abandoned.
///
/// - VMBUS_SERVER_CHANNEL_INIT_FLAG_TLNPI_PROVIDER_OFFER
/// This flag indicates that the channel should provide a socket interface.
#define VMBUS_SERVER_CHANNEL_INIT_FLAG_LOOPBACK_OFFER 0x1
#define VMBUS_SERVER_CHANNEL_INIT_FLAG_ENUMERATE_DEVICE_INTERFACE 0x2
#define VMBUS_SERVER_CHANNEL_INIT_FLAG_OFFER_AS_PIPE 0x4
#define VMBUS_SERVER_CHANNEL_INIT_FLAG_FORCE_NEW_CHANNEL 0x8
#define VMBUS_SERVER_CHANNEL_INIT_FLAG_TLNPI_PROVIDER_OFFER 0x10
#define VMBUS_SERVER_CHANNEL_INIT_FLAGS (\
    VMBUS_SERVER_CHANNEL_INIT_FLAG_LOOPBACK_OFFER | \
    VMBUS_SERVER_CHANNEL_INIT_FLAG_ENUMERATE_DEVICE_INTERFACE | \
    VMBUS_SERVER_CHANNEL_INIT_FLAG_OFFER_AS_PIPE | \
    VMBUS_SERVER_CHANNEL_INIT_FLAG_FORCE_NEW_CHANNEL | \
    VMBUS_SERVER_CHANNEL_INIT_FLAG_TLNPI_PROVIDER_OFFER)


///\def VMBUS_CHANNEL_PROCESS_PACKET_FLAG_EXTERNAL_DATA
/// This flag indicates that the packet which has just been received references
/// external data, and that this data can be retrived using
/// VmbChannelPacketGetExternalData.
#define VMBUS_CHANNEL_PROCESS_PACKET_FLAG_EXTERNAL_DATA 0x1
#define VMBUS_CHANNEL_PROCESS_PACKET_FLAGS (\
    VMBUS_CHANNEL_PROCESS_PACKET_FLAG_EXTERNAL_DATA)

///\def VMBUS_CHANNEL_PACKET_EXTERNAL_DATA_FLAG_READ_ONLY
/// The external data is read-only.
#define VMBUS_CHANNEL_PACKET_EXTERNAL_DATA_FLAG_READ_ONLY 0x1
#define VMBUS_CHANNEL_PACKET_EXTERNAL_DATA_FLAGS (\
    VMBUS_CHANNEL_PACKET_EXTERNAL_DATA_FLAG_READ_ONLY)

///\def VMBUS_SERVER_CHANNEL_INIT_MAXIMUM_OFFER_DATA
/// This the maximum number of bytes which can be encoded as "extra data" in a
/// channel offer.
#define VMBUS_SERVER_CHANNEL_INIT_MAXIMUM_OFFER_DATA 120

///\page EvtVmbChannelOpened EvtVmbChannelOpened
///\b EvtVmbChannelOpened
///\param Channel VMBCHANNEL
///\return NT Status code.
///
/// This callback is invoked when the client endpoint (in the guest VM) opens a
/// channel which has been offered to it.  Before this is invoked, packets can
/// be enqueued, but they can't be sent.
///
/// If the client driver returns a status code indicating failure, the channel
/// will be rolled back to a state where no traffic flows.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_OPENED)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
EVT_VMB_CHANNEL_OPENED(
    _In_        VMBCHANNEL  Channel
    );

typedef EVT_VMB_CHANNEL_OPENED *PFN_VMB_CHANNEL_OPENED;
///\endcode

///\page EvtVmbChannelOpenedEx EvtVmbChannelOpenedEx
///\b EvtVmbChannelOpenedEx
///\param Channel VMBCHANNEL
///\param CallbackContext value provided in \ref PVMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5 structure during registration.
///\return NT Status code.
///
/// This callback is invoked when the client endpoint (in the guest VM) opens a
/// channel which has been offered to it.  Before this is invoked, packets can
/// be enqueued, but they can't be sent.
///
/// If the client driver returns a status code indicating failure, the channel
/// will be rolled back to a state where no traffic flows.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_OPENED_EX)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
EVT_VMB_CHANNEL_OPENED_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext
    );

typedef EVT_VMB_CHANNEL_OPENED_EX *PFN_VMB_CHANNEL_OPENED_EX;
///\endcode


///\page EvtVmbChannelClosed EvtVmbChannelClosed
///\b EvtVmbChannelClosed
///\param Channel VMBCHANNEL
///\return NT Status code.
///
/// This callback is invoked when the client endpoint (in the guest VM) closes a
/// channel.  After this is invoked, packets can be enqueued, but they can't be sent.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_CLOSED)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_CLOSED(
    _In_  VMBCHANNEL Channel
    );

typedef EVT_VMB_CHANNEL_CLOSED *PFN_VMB_CHANNEL_CLOSED;
///\endcode


///\page EvtVmbChannelClosedEx EvtVmbChannelClosedEx
///\b EvtVmbChannelClosedEx
///\param Channel VMBCHANNEL
///\param CallbackContext value provided in \ref PVMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5 structure during registration.
///\return NT Status code.
///
/// This callback is invoked when the client endpoint (in the guest VM) closes a
/// channel.  After this is invoked, packets can be enqueued, but they can't be sent.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_CLOSED_EX)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_CLOSED_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext
    );

typedef EVT_VMB_CHANNEL_CLOSED_EX *PFN_VMB_CHANNEL_CLOSED_EX;
///\endcode


///\page EvtVmbChannelSavePacket EvtVmbChannelSavePacket
///\b EvtVmbChannelSavePacket
///\param Channel VMBCHANNEL
///\param Packet VMBPACKET
///\param SaveBuf This is the buffer into which the state can be saved.
///\param SaveBufSize This is the size in bytes of SaveBuf.
///\param BytesNeeded This is the size which would be necessary to save the state of the transaction.
///\return NT Status code.
///
/// This callback is invoked when the virtualization service provider (VSP, server
/// endpoint) must save the state associated with a packet object.  The VSP need only
/// save the state associated with the transaction that is unique to the VSP.  The KMCL
/// will save all of its own state.
///
/// Note that this function will be invoked for each packet object that is
/// currently in use.  The first invocation will pass a zero for SaveBufSize.  The
/// VSP is expected to fail this call if there is any state that needs saving, filling
/// in BytesNeeded with the actual size requirement.  If this first invocation
/// returns a failure code, the KMCL will call a second time with a buffer of at least
/// the length stipulated in the first call.
///
/// See \ref packet_object for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_SAVE_PACKET)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
EVT_VMB_CHANNEL_SAVE_PACKET(
    _In_                            VMBCHANNEL          Channel,
    _In_                            VMBPACKET           Packet,
    _Out_writes_bytes_(SaveBufSize) PVOID               SaveBuf,
    _In_                            UINT32              SaveBufSize,
    _Out_                           PUINT32             BytesNeeded
    );

typedef EVT_VMB_CHANNEL_SAVE_PACKET *PFN_VMB_CHANNEL_SAVE_PACKET;
///\endcode

///\page EvtVmbChannelSavePacketEx EvtVmbChannelSavePacketEx
///\b EvtVmbChannelSavePacketEx
///\param Channel VMBCHANNEL
///\param CallbackContext Value provded by \ref VmbServerChannelInitSetSaveRestorePacketCallbacksEx
///\param Packet VMBPACKET
///\param SaveBuf This is the buffer into which the state can be saved.
///\param SaveBufSize This is the size in bytes of SaveBuf.
///\param BytesNeeded This is the size which would be necessary to save the state of the transaction.
///\return NT Status code.
///
/// This callback is invoked when the virtualization service provider (VSP, server
/// endpoint) must save the state associated with a packet object.  The VSP need only
/// save the state associated with the transaction that is unique to the VSP.  The KMCL
/// will save all of its own state.
///
/// Note that this function will be invoked for each packet object that is
/// currently in use.  The first invocation will pass a zero for SaveBufSize.  The
/// VSP is expected to fail this call if there is any state that needs saving, filling
/// in BytesNeeded with the actual size requirement.  If this first invocation
/// returns a failure code, the KMCL will call a second time with a buffer of at least
/// the length stipulated in the first call.
///
/// See \ref packet_object for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_SAVE_PACKET_EX)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
EVT_VMB_CHANNEL_SAVE_PACKET_EX(
    _In_                            VMBCHANNEL          Channel,
    _In_                            PVOID               CallbackContext,
    _In_                            VMBPACKET           Packet,
    _Out_writes_bytes_(SaveBufSize) PVOID               SaveBuf,
    _In_                            UINT32              SaveBufSize,
    _Out_                           PUINT32             BytesNeeded
    );

typedef EVT_VMB_CHANNEL_SAVE_PACKET_EX *PFN_VMB_CHANNEL_SAVE_PACKET_EX;
///\endcode


///\page EvtVmbChannelRestorePacket EvtVmbChannelRestorePacket
///\b EvtVmbChannelRestorePacket
///\param Channel VMBCHANNEL
///\param LibBuf Pointer to packet object state internal to the KMCL.
///\param LibBufSize Size of LibBuf in bytes.
///\param SaveBuf Pointer to transaction state specific to the VSP.
///\param SaveBufSize This is the size in bytes of SaveBuf.
///\return NT Status code.
///
/// This callback is invoked when the virtualization service provider (VSP, server
/// endpoint) must restore the state associated with a packet object.  In order
/// to restore an in-flight packet object, the VSP must allocate a new packet
/// using \ref VmbPacketAllocate and the restore it to the state that it was
/// previously in by passing LibBuf and LibBufSize to \ref VmbPacketRestore.
/// If the VSP provided any internal state for the transaction in \ref EvtVmbChannelSavePacket
/// then this is provided in SaveBuf, and presumably must be restored by the VSP when
/// this callback is invoked.
///
/// See \ref packet_object for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_RESTORE_PACKET)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
EVT_VMB_CHANNEL_RESTORE_PACKET(
    _In_                            VMBCHANNEL          Channel,
    _In_reads_bytes_(LibBufSize)    PVOID               LibBuf,
    _In_                            UINT32              LibBufSize,
    _In_reads_bytes_(SaveBufSize)   PVOID               SaveBuf,
    _In_                            UINT32              SaveBufSize
    );

typedef EVT_VMB_CHANNEL_RESTORE_PACKET *PFN_VMB_CHANNEL_RESTORE_PACKET;
///\endcode


///\page EvtVmbChannelRestorePacketEx EvtVmbChannelRestorePacketEx
///\b EvtVmbChannelRestorePacketEx
///\param Channel VMBCHANNEL
///\param CallbackContext Value provded by \ref VmbServerChannelInitSetSaveRestorePacketCallbacksEx
///\param LibBuf Pointer to packet object state internal to the KMCL.
///\param LibBufSize Size of LibBuf in bytes.
///\param SaveBuf Pointer to transaction state specific to the VSP.
///\param SaveBufSize This is the size in bytes of SaveBuf.
///\return NT Status code.
///
/// This callback is invoked when the virtualization service provider (VSP, server
/// endpoint) must restore the state associated with a packet object.  In order
/// to restore an in-flight packet object, the VSP must allocate a new packet
/// using \ref VmbPacketAllocate and the restore it to the state that it was
/// previously in by passing LibBuf and LibBufSize to \ref VmbPacketRestore.
/// If the VSP provided any internal state for the transaction in \ref EvtVmbChannelSavePacket
/// then this is provided in SaveBuf, and presumably must be restored by the VSP when
/// this callback is invoked.
///
/// See \ref packet_object for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_RESTORE_PACKET_EX)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
EVT_VMB_CHANNEL_RESTORE_PACKET_EX(
    _In_                            VMBCHANNEL          Channel,
    _In_                            PVOID               CallbackContext,
    _In_reads_bytes_(LibBufSize)    PVOID               LibBuf,
    _In_                            UINT32              LibBufSize,
    _In_reads_bytes_(SaveBufSize)   PVOID               SaveBuf,
    _In_                            UINT32              SaveBufSize
    );

typedef EVT_VMB_CHANNEL_RESTORE_PACKET_EX *PFN_VMB_CHANNEL_RESTORE_PACKET_EX;


///\page EvtVmbChannelSuspend EvtVmbChannelSuspend
///\b EvtVmbChannelSuspend
///\param Channel VMBCHANNEL
///
/// This callback is invoked at the server endpoint when the channel is being
/// closed or deleted by the client endpoint, moving the server into the Stopped
/// state.  This may or may not have involved the client endpoint successfully
/// completing any outstanding transactions.  (The client may be buggy, malicious,
/// or the guest VM may have crashed.)  It is the responsibility of the server
/// endpoint to retire (probably by cancelling) any outstanding transactions at
/// this point.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_SUSPEND)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_SUSPEND(
    _In_  VMBCHANNEL    Channel
    );

typedef EVT_VMB_CHANNEL_SUSPEND *PFN_VMB_CHANNEL_SUSPEND;
///\endcode


///\page EvtVmbChannelSuspendEx EvtVmbChannelSuspendEx
///\b EvtVmbChannelSuspendEx
///\param Channel VMBCHANNEL
///\param CallbackContext value provided in \ref PVMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5 structure during registration.
///
/// This callback is invoked at the server endpoint when the channel is being
/// closed or deleted by the client endpoint, moving the server into the Stopped
/// state.  This may or may not have involved the client endpoint successfully
/// completing any outstanding transactions.  (The client may be buggy, malicious,
/// or the guest VM may have crashed.)  It is the responsibility of the server
/// endpoint to retire (probably by cancelling) any outstanding transactions at
/// this point.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_SUSPEND_EX)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_SUSPEND_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext
    );

typedef EVT_VMB_CHANNEL_SUSPEND_EX *PFN_VMB_CHANNEL_SUSPEND_EX;
///\endcode


///\page EvtVmbChannelStarted EvtVmbChannelStarted
///\b EvtVmbChannelStarted
///\param Channel VMBCHANNEL
///
/// This callback is invoked at either endpoint at the moment when a channel is
/// fully configured but before any packets have been delivered.  This will
/// happen when the opposite endpoint has opened the channel, after it has
/// reopened it after closing it, etc.  Most drivers using the KMCL don't implement
/// this callback, instead preferring \ref EvtVmbChannelPostStarted.
///
/// Note that waiting for a sent packet to complete, perhaps via \ref VmbChannelSendSynchronousRequest
/// will never return, as packets aren't flowing when this is invoked.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_STARTED)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_STARTED(
    _In_ VMBCHANNEL Channel
    );

typedef EVT_VMB_CHANNEL_STARTED *PFN_VMB_CHANNEL_STARTED;
///\endcode


///\page EvtVmbChannelStartedEx EvtVmbChannelStartedEx
///\b EvtVmbChannelStartedEx
///\param Channel VMBCHANNEL
///\param CallbackContext value provided in \ref PVMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5 structure during registration.
///
/// This callback is invoked at either endpoint at the moment when a channel is
/// fully configured but before any packets have been delivered.  This will
/// happen when the opposite endpoint has opened the channel, after it has
/// reopened it after closing it, etc.  Most drivers using the KMCL don't implement
/// this callback, instead preferring \ref EvtVmbChannelPostStarted.
///
/// Note that waiting for a sent packet to complete, perhaps via \ref VmbChannelSendSynchronousRequest
/// will never return, as packets aren't flowing when this is invoked.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_STARTED_EX)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_STARTED_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext
    );

typedef EVT_VMB_CHANNEL_STARTED_EX *PFN_VMB_CHANNEL_STARTED_EX;
///\endcode


///\page EvtVmbChannelPostStarted EvtVmbChannelPostStarted
///\b EvtVmbChannelPostStarted
///\param Channel VMBCHANNEL
///
/// This callback is invoked at either endpoint after packets can be received from
/// opposite endpoint.  Waiting for sent packets to complete in this function,
/// perhaps via \ref VmbChannelSendSynchronousRequest is fine.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_POST_STARTED)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_POST_STARTED(
    _In_ VMBCHANNEL Channel
    );

typedef EVT_VMB_CHANNEL_POST_STARTED *PFN_VMB_CHANNEL_POST_STARTED;
///\endcode

///\page EvtVmbChannelPostStartedEx EvtVmbChannelPostStartedEx
///\b EvtVmbChannelPostStartedEx
///\param Channel VMBCHANNEL
///\param CallbackContext value provided in \ref PVMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5 structure during registration.
///
/// This callback is invoked at either endpoint after packets can be received from
/// opposite endpoint.  Waiting for sent packets to complete in this function,
/// perhaps via \ref VmbChannelSendSynchronousRequest is fine.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_POST_STARTED_EX)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_POST_STARTED_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext
    );

typedef EVT_VMB_CHANNEL_POST_STARTED_EX *PFN_VMB_CHANNEL_POST_STARTED_EX;
///\endcode


/// \page EvtVmbChannelProcessPacket EvtVmbChannelProcessPacket
/// \b EvtVmbChannelProcessPacket
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Packet This completion context will be used to identify this packet to KMCL when the transaction can be retired.
/// \param Buffer This contains the packet which was sent by the opposite endpoint.  It does not contain the VMBus and KMCL headers.
/// \param BufferLength The length of Buffer in bytes.
/// \param Flags See VMBUS_CHANNEL_PROCESS_PACKET_FLAGS.
///
/// This callback is invoked when a packet has arrived in the incoming ring buffer.
/// For every invocation of this function, the implementer must eventually call
/// \ref VmbChannelPacketComplete.
///
/// This callback can be invoked at DISPATCH_LEVEL or lower, unless the channel
/// has been configured to defer packet processing to a worker thread.  See
/// \ref VmbChannelSetIncomingProcessingAtPassive for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_PROCESS_PACKET)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_VMB_CHANNEL_PROCESS_PACKET(
    _In_ VMBCHANNEL Channel,
    _In_ VMBPACKETCOMPLETION Packet,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ UINT32 BufferLength,
    _In_ UINT32 Flags
    );

typedef EVT_VMB_CHANNEL_PROCESS_PACKET *PFN_VMB_CHANNEL_PROCESS_PACKET;
///\endcode


/// \page EvtVmbChannelProcessPacketEx EvtVmbChannelProcessPacketEx
/// \b EvtVmbChannelProcessPacketEx
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate
/// \param CallbackContext Value provided by \ref VmbChannelInitSetProcessPacketCallbacksEx
/// \param Packet This completion context will be used to identify this packet to KMCL when the transaction can be retired.
/// \param Buffer This contains the packet which was sent by the opposite endpoint.  It does not contain the VMBus and KMCL headers.
/// \param BufferLength The length of Buffer in bytes.
/// \param Flags See VMBUS_CHANNEL_PROCESS_PACKET_FLAGS.
///
/// This callback is invoked when a packet has arrived in the incoming ring buffer.
/// For every invocation of this function, the implementer must eventually call
/// \ref VmbChannelPacketComplete.
///
/// This callback can be invoked at DISPATCH_LEVEL or lower, unless the channel
/// has been configured to defer packet processing to a worker thread.  See
/// \ref VmbChannelSetIncomingProcessingAtPassive for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_PROCESS_PACKET_EX)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_VMB_CHANNEL_PROCESS_PACKET_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext,
    _In_ VMBPACKETCOMPLETION Packet,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ UINT32 BufferLength,
    _In_ UINT32 Flags
    );

typedef EVT_VMB_CHANNEL_PROCESS_PACKET_EX *PFN_VMB_CHANNEL_PROCESS_PACKET_EX;
///\endcode

/// \page EvtVmbChannelProcessingComplete EvtVmbChannelProcessingComplete
/// \b EvtVmbChannelProcessingComplete
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param PacketsProcessed The number of packets which were delivered in this batch.
///
/// This callback is invoked when a group of packets has been delivered by
/// \ref EvtVmbChannelProcessPacket, if there will be any pause in delivering
/// subsequent packets.  A pause in packet processing might occur because the
/// incoming ring buffer was empty, because the number of packets which
///
/// This callback can be invoked at DISPATCH_LEVEL or lower, unless the channel
/// has been configured to defer packet processing to a worker thread.  See
/// \ref VmbChannelSetIncomingProcessingAtPassive for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_PROCESSING_COMPLETE)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_VMB_CHANNEL_PROCESSING_COMPLETE(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 PacketsProcessed
    );

typedef EVT_VMB_CHANNEL_PROCESSING_COMPLETE *PFN_VMB_CHANNEL_PROCESSING_COMPLETE;
///\endcode

/// \page EvtVmbChannelProcessingCompleteEx EvtVmbChannelProcessingCompleteEx
/// \b EvtVmbChannelProcessingCompleteEx
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param CallbackContext Value provided by \ref VmbChannelInitSetProcessPacketCallbacksEx
/// \param PacketsProcessed The number of packets which were delivered in this batch.
///
/// This callback is invoked when a group of packets has been delivered by
/// \ref EvtVmbChannelProcessPacket, if there will be any pause in delivering
/// subsequent packets.  A pause in packet processing might occur because the
/// incoming ring buffer was empty, because the number of packets which
///
/// This callback can be invoked at DISPATCH_LEVEL or lower, unless the channel
/// has been configured to defer packet processing to a worker thread.  See
/// \ref VmbChannelSetIncomingProcessingAtPassive for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_PROCESSING_COMPLETE_EX)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_VMB_CHANNEL_PROCESSING_COMPLETE_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext,
    _In_ UINT32 PacketsProcessed
    );

typedef EVT_VMB_CHANNEL_PROCESSING_COMPLETE_EX *PFN_VMB_CHANNEL_PROCESSING_COMPLETE_EX;
///\endcode

/// \page VMB_CHANNEL_STATE_CHANGE_CALLBACKS_INIT VMB_CHANNEL_STATE_CHANGE_CALLBACKS_INIT
/// @{
/// \b VMB_CHANNEL_STATE_CHANGE_CALLBACKS_INIT
///\code
typedef struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS
{
    ULONG Version;
    ULONG Size;

    PFN_VMB_CHANNEL_OPENED                    EvtChannelOpened;
    PFN_VMB_CHANNEL_CLOSED                    EvtChannelClosed;
    PFN_VMB_CHANNEL_SUSPEND                   EvtChannelSuspend;
    PFN_VMB_CHANNEL_STARTED                   EvtChannelStarted;
    PFN_VMB_CHANNEL_POST_STARTED              EvtChannelPostStarted;
} VMB_CHANNEL_STATE_CHANGE_CALLBACKS, *PVMB_CHANNEL_STATE_CHANGE_CALLBACKS;

FORCEINLINE
VOID
VMB_CHANNEL_STATE_CHANGE_CALLBACKS_INIT(
    _Out_ PVMB_CHANNEL_STATE_CHANGE_CALLBACKS Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(*Callbacks));
    Callbacks->Version = 1;
    Callbacks->Size = sizeof(*Callbacks);
}

typedef struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5
{
    ULONG Version;
    ULONG Size;

    PVOID                               CallbackContext;
    PFN_VMB_CHANNEL_OPENED_EX           EvtChannelOpenedEx;
    PFN_VMB_CHANNEL_CLOSED_EX           EvtChannelClosedEx;
    PFN_VMB_CHANNEL_SUSPEND_EX          EvtChannelSuspendEx;
    PFN_VMB_CHANNEL_STARTED_EX          EvtChannelStartedEx;
    PFN_VMB_CHANNEL_POST_STARTED_EX     EvtChannelPostStartedEx;
} VMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5, *PVMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5;

FORCEINLINE
VOID
VMB_CHANNEL_STATE_CHANGE_CALLBACKS_INIT_V5(
    _Out_ PVMB_CHANNEL_STATE_CHANGE_CALLBACKS_V5 Callbacks
    )
{
    RtlZeroMemory(Callbacks, sizeof(*Callbacks));
    Callbacks->Version = 5;
    Callbacks->Size = sizeof(*Callbacks);
}



///\endcode
///@}

/// \page VmbChannelAllocate VmbChannelAllocate
/// Allocates a new VMBus channel with default parameters and callbacks. The
/// channel may be further initialized using the VmbChannelInit* routines before
/// being enabled with VmbChannelEnable. The channel must be freed with
/// VmbChannelCleanup.
///
/// \param ParentDeviceObject A pointer to the parent device.
/// \param IsServer Whether the new channel should be a server endpoint.
/// \param Channel Returns a pointer to an allocated channel.
typedef
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
FN_VMB_CHANNEL_ALLOCATE(
    _In_ PDEVICE_OBJECT ParentDeviceObject,
    _In_ BOOLEAN IsServer,
    _Out_ _At_(*Channel, __drv_allocatesMem(Mem)) VMBCHANNEL *Channel
    );

typedef FN_VMB_CHANNEL_ALLOCATE *PFN_VMB_CHANNEL_ALLOCATE;
FN_VMB_CHANNEL_ALLOCATE VmbChannelAllocate;


/// \page VmbChannelInitSetMaximumPacketCount VmbChannelInitSetMaximumPacketCount
/// This function, which can only be called during channel initialization, sets
/// the maximum number of packets that can be sent and inflight on this channel 
/// at a given time. The size of the tracking structure for inflight packets 
/// will be derived, in part, from this value. 
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param PacketCount Maximum number of packets.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - packet count invalid; must be greater than zero.
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_COUNT(
    _In_ VMBCHANNEL Channel,
    _In_range_(>,0) UINT32 PacketCount
    );

typedef FN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_COUNT *PFN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_COUNT;
FN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_COUNT VmbChannelInitSetMaximumPacketCount;


/// \page VmbChannelInitSetMaximumPacketSize VmbChannelInitSetMaximumPacketSize
/// This function, which can only be called during channel initialization, sets
/// the maximum packet size that can be delivered through this channel, i.e. the
/// maximum size that will ever be specified by \ref VmbPacketSend.  The size of
/// the ring buffers will be derived, in part, from this value.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param PacketSize Maximum size of a packet in bytes.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - Packet size invalid (zero is invalid)
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_SIZE(
    _In_ VMBCHANNEL Channel,
    _In_range_(>,0) UINT32 PacketSize
    );

typedef FN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_SIZE *PFN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_SIZE;
FN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_SIZE VmbChannelInitSetMaximumPacketSize;

/// \page VmbChannelInitSetInlinePacketContextSize VmbChannelInitSetInlinePacketContextSize
/// This function, which can only be called during channel initialization, sets
/// the optional packet context size. Packets allocated through 
/// \ref VmbPacketAllocate will be allocated with this additional space for use by 
/// the client. The additional space may be accessed with 
/// \ref  VmbPacketGetInlinePacketContextPointer
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param ContextSize Size of context space to be allocated with each 
///        outgoing packet.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_INLINE_PACKET_CONTEXT_SIZE(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 ContextSize
    );

typedef FN_VMB_CHANNEL_INIT_SET_INLINE_PACKET_CONTEXT_SIZE *PFN_VMB_CHANNEL_INIT_SET_INLINE_PACKET_CONTEXT_SIZE;
FN_VMB_CHANNEL_INIT_SET_INLINE_PACKET_CONTEXT_SIZE VmbChannelInitSetInlinePacketContextSize;


/// \page VmbChannelInitSetMaximumExternalData VmbChannelInitSetMaximumExternalData
/// Sets the maximum size and chain length of data that will be described by a
/// packet, but not directly sent in a packet, i.e. the maximum size of the
/// buffer described by an ExternalDataMdl.  For a discussion external data and
/// the associated data structures, see \ref gpadl_theory.  The KMCL will ensure
/// that your ring buffers are large enough to send packets which contain
/// buffers described within these limits.
///
/// \param Channel A pointer to a KMCL channel.
/// \param DataSize The maximum size of external data.
/// \param ChainLength The maximum number of MDLs in an incoming MDL chain.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - Channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - DataSize invalid (zero is invalid)
/// \return STATUS_INVALID_PARAMETER_3 - ChainLength invalid (zero is invalid)
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_MAXIMUM_EXTERNAL_DATA(
    _In_ VMBCHANNEL Channel,
    _In_range_(>,0) UINT32 DataSize,
    _In_range_(>,0) UINT32 ChainLength
    );

typedef FN_VMB_CHANNEL_INIT_SET_MAXIMUM_EXTERNAL_DATA *PFN_VMB_CHANNEL_INIT_SET_MAXIMUM_EXTERNAL_DATA;
FN_VMB_CHANNEL_INIT_SET_MAXIMUM_EXTERNAL_DATA VmbChannelInitSetMaximumExternalData;

/// \page VmbChannelInitSetBounceBufferSizes VmbChannelInitSetBounceBufferSizes
/// Sets the desired initial, maximum and incremental adjustment sizes for 
/// bounce buffers used by this channel.
///
/// \param Channel A pointer to a KMCL channel.
/// \param InitialBufferSize The initial (and ever present) bounce buffer 
/// size. Must be a multiple of PAGE_SIZE.
/// \param BufferSizeIncrement The amount of increase each time the buffer 
/// needs resizing. Specify zero to leave at the default value. Must be a 
/// multiple of PAGE_SIZE.
/// \param MaximumBufferSize The maximum amount of buffer size for this 
/// channel. Specify zero to leave at the default value. Must be a multiple 
/// of PAGE_SIZE.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - Channel parameter was invalid or in 
/// an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - InitialBufferSize invalid
/// \return STATUS_INVALID_PARAMETER_3 - BufferSizeIncrement invalid
/// \return STATUS_INVALID_PARAMETER_4 - MaximumBufferSize invalid
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_BOUNCE_BUFFER_SIZES(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 InitialBufferSize,
    _In_ UINT32 BufferSizeIncrement,
    _In_ UINT32 MaximumBufferSize
    );

typedef FN_VMB_CHANNEL_INIT_SET_BOUNCE_BUFFER_SIZES *PFN_VMB_CHANNEL_INIT_SET_BOUNCE_BUFFER_SIZES;
FN_VMB_CHANNEL_INIT_SET_BOUNCE_BUFFER_SIZES VmbChannelInitSetBounceBufferSizes;

/// \page VmbChannelInitSetClientContextSize VmbChannelInitSetClientContextSize
/// Sets the size of the optional context area allocated for the client driver
/// on each incoming packet object.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param ContextSize The size of the context area allocated on each packet
///     object.
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - Channel parameter was invalid or in 
/// an invalid state(Disabled)
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_CLIENT_CONTEXT_SIZE(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 ContextSize
    );

typedef FN_VMB_CHANNEL_INIT_SET_CLIENT_CONTEXT_SIZE *PFN_VMB_CHANNEL_INIT_SET_CLIENT_CONTEXT_SIZE;
FN_VMB_CHANNEL_INIT_SET_CLIENT_CONTEXT_SIZE VmbChannelInitSetClientContextSize;


/// \page VmbChannelPacketGetClientContext VmbChannelPacketGetClientContext
/// Returns a pointer to the optional packet context, allocated by KMCL on 
/// behalf of the client.
///
/// \param PacketCompletionContext See \ref VMBPACKETCOMPLETION
typedef
PVOID
FASTCALL
FN_VMB_CHANNEL_PACKET_GET_CLIENT_CONTEXT(
    _In_ VMBPACKETCOMPLETION PacketCompletionContext
    );

typedef FN_VMB_CHANNEL_PACKET_GET_CLIENT_CONTEXT *PFN_VMB_CHANNEL_PACKET_GET_CLIENT_CONTEXT;
FN_VMB_CHANNEL_PACKET_GET_CLIENT_CONTEXT VmbChannelPacketGetClientContext;


/// \page VmbChannelGetTargetDeviceObject VmbChannelGetTargetDeviceObject
/// Retrieves the target device object for the associated VMBus device.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param TargetDeviceObject Returns a pointer to the target device object.
typedef
VOID
FN_VMB_CHANNEL_GET_TARGET_DEVICE_OBJECT(
    _In_ VMBCHANNEL Channel,
    _Out_ PDEVICE_OBJECT *TargetDeviceObject
    );

typedef FN_VMB_CHANNEL_GET_TARGET_DEVICE_OBJECT *PFN_VMB_CHANNEL_GET_TARGET_DEVICE_OBJECT;
FN_VMB_CHANNEL_GET_TARGET_DEVICE_OBJECT VmbChannelGetTargetDeviceObject;


/// \page VmbChannelGetParentDeviceObject VmbChannelGetParentDeviceObject
/// Retrieves the parent device object for the associated VMBus device.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param ParentDeviceObject Returns a pointer to the parent device object.
typedef
VOID
FN_VMB_CHANNEL_GET_PARENT_DEVICE_OBJECT(
    _In_ VMBCHANNEL Channel,
    _Out_ PDEVICE_OBJECT *ParentDeviceObject
    );

typedef FN_VMB_CHANNEL_GET_PARENT_DEVICE_OBJECT *PFN_VMB_CHANNEL_GET_PARENT_DEVICE_OBJECT;
FN_VMB_CHANNEL_GET_PARENT_DEVICE_OBJECT VmbChannelGetParentDeviceObject;


/// \page VmbChannelInitSetProcessPacketCallbacks VmbChannelInitSetProcessPacketCallbacks
/// Sets callbacks for packet processing. Only meaningful if KMCL queue
/// management is not suppressed.  TODO:  Make previous sentence more precise.
///
/// Note that ProcessPacketCallback will be invoked for every packet that
/// is received.  ProcessingCompleteCallback will be invoked every time the
/// ring buffer containing incoming packets transitions from non-empty to empty,
/// after the last invocation of ProcessPacketCallback in a single batch.
///
/// Note that a channel can have either the Ex or the legacy packet processing 
/// callbacks registered for a channel, but not both. The latest valid registration 
/// will be honored.
/// 
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param ProcessPacketCallback A callback that will be called when a packet is
///     ready for processing.
/// \param ProcessingCompleteCallback Optionally, a callback that will be called
///     when processing of a batch of packets has been completed.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS(
    _In_ VMBCHANNEL Channel,
    _In_ PFN_VMB_CHANNEL_PROCESS_PACKET ProcessPacketCallback,
    _In_opt_ PFN_VMB_CHANNEL_PROCESSING_COMPLETE ProcessingCompleteCallback
    );

typedef FN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS *PFN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS;
FN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS VmbChannelInitSetProcessPacketCallbacks;

/// \page VmbChannelInitSetProcessPacketCallbacksEx VmbChannelInitSetProcessPacketCallbacksEx
/// Sets callbacks for packet processing. Only meaningful if KMCL queue
/// management is not suppressed. 
///
/// Note that ProcessPacketCallbackEx will be invoked for every packet that
/// is received.  ProcessingCompleteCallbackEx will be invoked every time the
/// ring buffer containing incoming packets transitions from non-empty to empty,
/// after the last invocation of ProcessPacketCallback in a single batch.
///
/// Note that a channel can have either the Ex or the legacy packet processing 
/// callbacks registered for a channel, but not both. The latest valid registration 
/// will be honored.
/// 
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param CallbackContext A value to be provided with all calls to 
///     ProcessPacketCallbackEx and ProcessingCompleteCallbackEx for this channel.
/// \param ProcessPacketCallback A callback that will be called when a packet is
///     ready for processing.
/// \param ProcessingCompleteCallback Optionally, a callback that will be called
///     when processing of a batch of packets has been completed.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS_EX(
    _In_ VMBCHANNEL Channel,
    _In_ PVOID CallbackContext,
    _In_ PFN_VMB_CHANNEL_PROCESS_PACKET_EX ProcessPacketCallbackEx,
    _In_opt_ PFN_VMB_CHANNEL_PROCESSING_COMPLETE_EX ProcessingCompleteCallbackEx
    );

typedef FN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS_EX *PFN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS_EX;
FN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS_EX VmbChannelInitSetProcessPacketCallbacksEx;

/// \page VmbChannelInitSetStateChangeCallbacks VmbChannelInitSetStateChangeCallbacks
/// Sets optional callbacks for state changes.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param StateChangeCallbacks A structure of state change callbacks to be set.
///
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - StateChangeCallbacks are wrong version or size
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_STATE_CHANGE_CALLBACKS(
    _In_ VMBCHANNEL Channel,
    _In_ PVMB_CHANNEL_STATE_CHANGE_CALLBACKS StateChangeCallbacks
    );

typedef FN_VMB_CHANNEL_INIT_SET_STATE_CHANGE_CALLBACKS *PFN_VMB_CHANNEL_INIT_SET_STATE_CHANGE_CALLBACKS;
FN_VMB_CHANNEL_INIT_SET_STATE_CHANGE_CALLBACKS VmbChannelInitSetStateChangeCallbacks;


/// \page VmbChannelInitSetFriendlyName VmbChannelInitSetFriendlyName
/// Sets the friendly name of the KMCL channel.  This is used for debugging and
/// perf counter instance naming.  Channel names should be descriptive, yet
/// relatively short and easy to understand, e.g.Network, SCSI, IDE, SynthVideo etc.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Name Name of the channel.
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - Channel already has a friendly name
/// \return other - failure codes from string manipulation functions.
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_FRIENDLY_NAME(
    _In_    VMBCHANNEL          Channel,
    _In_    PCUNICODE_STRING    Name
    );

typedef FN_VMB_CHANNEL_INIT_SET_FRIENDLY_NAME *PFN_VMB_CHANNEL_INIT_SET_FRIENDLY_NAME;
FN_VMB_CHANNEL_INIT_SET_FRIENDLY_NAME VmbChannelInitSetFriendlyName;

/// \page VmbChannelInitSetFlags VmbChannelInitSetFlags
/// Sets flags common to server or client channel endpoints.
///
/// See \ref channel_init_flags.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Flags A collection of bit flags to set.
///
/// \return STATUS_INVALID_PARAMETER_1 - Channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - flags have invalid bits set
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_FLAGS(
    _In_    VMBCHANNEL          Channel,
    _In_    UINT32              Flags
    );

typedef FN_VMB_CHANNEL_INIT_SET_FLAGS *PFN_VMB_CHANNEL_INIT_SET_FLAGS;
FN_VMB_CHANNEL_INIT_SET_FLAGS VmbChannelInitSetFlags;

/// \page VmbServerChannelInitSetFlags VmbServerChannelInitSetFlags
/// Sets flags unique to server channel endpoints.
///
/// See \ref server_init_flags
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Flags A collection of bit flags to set.
///
/// \return STATUS_INVALID_PARAMETER_1 - Channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - flags have invalid bits set
typedef
NTSTATUS
FN_VMB_SERVER_CHANNEL_INIT_SET_FLAGS(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 Flags
    );

typedef FN_VMB_SERVER_CHANNEL_INIT_SET_FLAGS *PFN_VMB_SERVER_CHANNEL_INIT_SET_FLAGS;
FN_VMB_SERVER_CHANNEL_INIT_SET_FLAGS VmbServerChannelInitSetFlags;

/// \page VmbServerChannelInitSetTargetVtl VmbServerChannelInitSetTargetVtl
/// Sets the target VTL for this channel. The channel will be offered to
/// clients running in the specified VTL and no others.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param TargetVtl VTL level where this channel will be offered.
///
/// \return STATUS_INVALID_PARAMETER_1 - Channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - TargetVtl is invalid
typedef
NTSTATUS
FN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_VTL(
    _In_ VMBCHANNEL Channel,
    _In_ UINT8 TargetVtl
    );

typedef FN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_VTL *PFN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_VTL;
FN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_VTL VmbServerChannelInitSetTargetVtl;

/// \page VmbServerChannelInitSetMmioMegabytes VmbServerChannelInitSetMmioMegabytes
/// Specifies the amount of guest MMIO space to reserve for the device, in
/// megabytes.  This mechanism exists as a convenience for driver coders.
/// Everything it does could be done by interacting the with the guest plug-and-play
/// manager and requesting memory-mapped I/O space directly.  This, however, is
/// a common-enough requirement that the Windows and Linux VMBus drivers have
/// the capacity to do this on behalf of the client.  This function allows the
/// server endpoint to suggest the right amount of MMIO space to reserve.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param MmioMegabytes Number of megabytes of MMIO space to reserve.
/// \param MmioMegabytesOptional Number of megabytes of extra optional MMIO
///     space to reserve.
///
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - one of the MmioMegabytes parameters should be greater than zero
typedef
NTSTATUS
FN_VMB_SERVER_CHANNEL_INIT_SET_MMIO_MEGABYTES(
    _In_ VMBCHANNEL Channel,
    _In_range_(>,0) UINT16 MmioMegabytes,
    _In_            UINT16 MmioMegabytesOptional
    );

typedef FN_VMB_SERVER_CHANNEL_INIT_SET_MMIO_MEGABYTES *PFN_VMB_SERVER_CHANNEL_INIT_SET_MMIO_MEGABYTES;
FN_VMB_SERVER_CHANNEL_INIT_SET_MMIO_MEGABYTES VmbServerChannelInitSetMmioMegabytes;

/// \page VmbServerChannelInitSetTargetInterfaceId VmbServerChannelInitSetTargetInterfaceId
/// Sets the channel offer's target interface type and instance GUIDs.  The InterfaceType
/// GUID identifies the type of channel, and specifically the protocol that is used with
/// the channel.  If the VMBus in the child partition is creating a Physical Device Object
/// (PDO) associated with this channel, this GUID will be the basis of the PDO's hardware
/// ID reported to the PnP Manager.  The InterfaceInstance identifies a specific instance
/// of the service.  If, for instance, you have two paravirtual network interfaces, they
/// will have the same InterfaceType but different InterfaceInstances.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param InterfaceType A pointer to the interface type GUID.
/// \param InterfaceInstance A pointer to the instance type GUID.
typedef
NTSTATUS
FN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_INTERFACE_ID(
    _In_ VMBCHANNEL Channel,
    _In_ GUID InterfaceType,
    _In_ GUID InterfaceInstance
    );

typedef FN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_INTERFACE_ID *PFN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_INTERFACE_ID;
FN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_INTERFACE_ID VmbServerChannelInitSetTargetInterfaceId;

/// \page VmbServerChannelInitSetSaveRestorePacketCallbacks VmbServerChannelInitSetSaveRestorePacketCallbacks
/// Sets the save and restore callbacks that are called for each packet when the
/// driver calls VmbChannelSave* and VmbChannelRestoreFromBuffer.
///
/// Note that a channel can have either the Ex or the legacy save/restore packet  
/// callbacks registered for a channel, but not both. The latest valid registration 
/// will be honored.
/// 
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param SavePacketCallback A callback that will be called during channel
///     save.
/// \param RestorePacketCallback A callback that will be called during channel
///     restore.
///
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
typedef
NTSTATUS
FN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS(
    _In_ VMBCHANNEL Channel,
    _In_ PFN_VMB_CHANNEL_SAVE_PACKET SavePacketCallback,
    _In_ PFN_VMB_CHANNEL_RESTORE_PACKET RestorePacketCallback
    );

typedef FN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS *PFN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS;
FN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS VmbServerChannelInitSetSaveRestorePacketCallbacks;

/// \page VmbServerChannelInitSetSaveRestorePacketCallbacksEx VmbServerChannelInitSetSaveRestorePacketCallbacksEx
/// Sets the save and restore callbacks that are called for each packet when the
/// driver calls VmbChannelSave* and VmbChannelRestoreFromBuffer.
///
/// Note that a channel can have either the Ex or the legacy save/restore packet  
/// callbacks registered for a channel, but not both. The latest valid registration 
/// will be honored.
/// 
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param SaveRestoreContext A value to be provided to each call of 
///     SavePacketCallbackEx and RestorePacketCallbackEx.
/// \param SavePacketCallback A callback that will be called during channel
///     save.
/// \param RestorePacketCallback A callback that will be called during channel
///     restore.
///
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
typedef
NTSTATUS
FN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS_EX(
    _In_ VMBCHANNEL Channel,
    _In_opt_ PVOID SaveRestoreContext,
    _In_ PFN_VMB_CHANNEL_SAVE_PACKET_EX SavePacketCallbackEx,
    _In_ PFN_VMB_CHANNEL_RESTORE_PACKET_EX RestorePacketCallbackEx
    );

typedef FN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS_EX *PFN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS_EX;
FN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS_EX VmbServerChannelInitSetSaveRestorePacketCallbacksEx;


/// \page VmbServerChannelInitSetVmbusHandle VmbServerChannelInitSetVmbusHandle
/// This routine associates an instance of VMBus with this channel.  The VMBus
/// instance will have been previously initialized for the specific guest VM.
/// So invoking this routine identifies the child VM this channel is being offered
/// to.
///
/// The VmbusHandle parameter must be obtained from \ref VmbConvertVmbusHandleToKernelHandle.
/// This routine can be called while running in any thread context.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param VmbusHandle A kernel mode handle to the vmbus vdev of the partition.
typedef
NTSTATUS
FN_VMB_SERVER_CHANNEL_INIT_SET_VMBUS_HANDLE(
    _In_ VMBCHANNEL Channel,
    _In_ HANDLE VmbusHandle
    );

typedef FN_VMB_SERVER_CHANNEL_INIT_SET_VMBUS_HANDLE *PFN_VMB_SERVER_CHANNEL_INIT_SET_VMBUS_HANDLE;
FN_VMB_SERVER_CHANNEL_INIT_SET_VMBUS_HANDLE VmbServerChannelInitSetVmbusHandle;

/// \page VmbConvertVmbusHandleToKernelHandle VmbConvertVmbusHandleToKernelHandle
/// This routine converts the user mode vmbus handle to kernel mode handle. The
/// caller is responsible to close the kernel handle.
///
/// This routine must be called in the context of the user-mode process which
/// opened the VMBus handle, since the VmbusHandle parameter is a user-mode
/// handle.  Calling this routine is often immediately followed by calling
/// \ref VmbServerChannelInitSetVmbusHandle.
///
/// \param VmbusHandle The user-mode handle which was opened in the VM worker process.
/// \param KernelHandle The kernel handle referencing the same object as VmbusHandle.
typedef
NTSTATUS
FN_VMB_CONVERT_VMBUS_HANDLE_TO_KERNEL_HANDLE(
    _In_ HANDLE VmbusHandle,
    _Out_ PHANDLE KernelHandle
    );

typedef FN_VMB_CONVERT_VMBUS_HANDLE_TO_KERNEL_HANDLE *PFN_VMB_CONVERT_VMBUS_HANDLE_TO_KERNEL_HANDLE;
FN_VMB_CONVERT_VMBUS_HANDLE_TO_KERNEL_HANDLE VmbConvertVmbusHandleToKernelHandle;

/// \page VmbClientChannelInitSetRingBufferPageCount VmbClientChannelInitSetRingBufferPageCount
/// Sets the number of pages of memory the client will allocate for incoming and outgoing ring
/// buffers.  Since the client VM donates the pages for both the incoming and the outgoing ring
/// buffers, this function can only be invoked on the client endpoint.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param IncomingPageCount Number of pages to allocate for the incoming ring
///     buffer.
/// \param OutgoingPageCount Number of pages to allocate for the outgoing ring
///     buffer.
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state (expected Disabled)
typedef
NTSTATUS
FN_VMB_CLIENT_CHANNEL_INIT_SET_RING_BUFFER_PAGE_COUNT(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 IncomingPageCount,
    _In_ UINT32 OutgoingPageCount
    );

typedef FN_VMB_CLIENT_CHANNEL_INIT_SET_RING_BUFFER_PAGE_COUNT *PFN_VMB_CLIENT_CHANNEL_INIT_SET_RING_BUFFER_PAGE_COUNT;
FN_VMB_CLIENT_CHANNEL_INIT_SET_RING_BUFFER_PAGE_COUNT VmbClientChannelInitSetRingBufferPageCount;

/// \page VmbChannelCleanup VmbChannelCleanup
/// Disposes of a channel allocated with \ref VmbChannelAllocate or initialized with
/// VmbChannelInitialize. If the channel was allocated by \ref VmbChannelAllocate,
/// this routine also frees the channel.
///
/// The channel must be disabled before this routine is called.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
typedef
VOID
FN_VMB_CHANNEL_CLEANUP(
    _In_ __drv_freesMem(Mem) VMBCHANNEL Channel
    );

typedef FN_VMB_CHANNEL_CLEANUP *PFN_VMB_CHANNEL_CLEANUP;
FN_VMB_CHANNEL_CLEANUP VmbChannelCleanup;

/// \page VmbChannelSetPointer VmbChannelSetPointer
/// This function lets a client driver save an arbitrary pointer in the channel
/// context.  This is intended as a more efficient way to retrive the client
/// driver's context.  See \ref VmbChannelGetPointer.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Pointer Arbitrary pointer to save in the channel's context
typedef
VOID
FASTCALL
FN_VMB_CHANNEL_SET_POINTER(
    _In_ VMBCHANNEL Channel,
    _In_opt_ __drv_aliasesMem PVOID Pointer
    );

typedef FN_VMB_CHANNEL_SET_POINTER *PFN_VMB_CHANNEL_SET_POINTER;
FN_VMB_CHANNEL_SET_POINTER VmbChannelSetPointer;

/// \page VmbChannelGetPointer VmbChannelGetPointer
/// This function lets a client driver retrive a pointer that was previously
/// saved with VmbPacketSetPointer
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
///
/// \returns The value previously saved with \ref VmbPacketSetPointer
typedef
PVOID
FASTCALL
FN_VMB_CHANNEL_GET_POINTER(
    _In_     VMBCHANNEL  Channel
    );

typedef FN_VMB_CHANNEL_GET_POINTER *PFN_VMB_CHANNEL_GET_POINTER;
FN_VMB_CHANNEL_GET_POINTER VmbChannelGetPointer;

/// \page VmbChannelEnable VmbChannelEnable
/// Enables a channel that is in the disabled state by connecting to vmbus and
/// offering or opening a channel (whichever is appropriate for the endpoint
/// type).
///
/// See \ref state_model.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
typedef
_Must_inspect_result_
NTSTATUS
FN_VMB_CHANNEL_ENABLE(
    _In_    VMBCHANNEL  Channel
    );

typedef FN_VMB_CHANNEL_ENABLE *PFN_VMB_CHANNEL_ENABLE;
FN_VMB_CHANNEL_ENABLE VmbChannelEnable;

/// \page VmbChannelSetInterruptLatency VmbChannelSetInterruptLatency
/// Guest VM updates to the outgoing monitor latency for MNF interrupts.
///
/// This call is valid for opened channels, that is between the calls to
/// EvtChannelOpened and EvtChannelClosed, inclusive.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Latency Desired Monitor Latency in 100ns units.
/// \param OriginalLatency on success, set to the previous latency value.
typedef
_Must_inspect_result_
NTSTATUS
FN_VMB_CHANNEL_SET_INTERRUPT_LATENCY(
    _In_ VMBCHANNEL Channel,
    _In_ UINT16 Latency,
    _Out_ PUINT16 OriginalLatency
    );

typedef FN_VMB_CHANNEL_SET_INTERRUPT_LATENCY *PFN_VMB_CHANNEL_SET_INTERRUPT_LATENCY;
FN_VMB_CHANNEL_SET_INTERRUPT_LATENCY VmbChannelSetInterruptLatency;

/// \page VmbChannelDisable VmbChannelDisable
/// Disables a channel, closing it for client channels and revoking the channel
/// offer for server channels. Waits until the channel is completely torn down
/// before returning.
///
/// See \ref state_model.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
typedef
VOID
FN_VMB_CHANNEL_DISABLE(
    _In_    VMBCHANNEL  Channel
    );

typedef FN_VMB_CHANNEL_DISABLE *PFN_VMB_CHANNEL_DISABLE;
FN_VMB_CHANNEL_DISABLE VmbChannelDisable;

/// \page VmbChannelStart VmbChannelStart
/// Moves a channel out of the paused state.
///
/// See \ref state_model.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
typedef
VOID
FN_VMB_CHANNEL_START(
    _In_    VMBCHANNEL  Channel
    );

typedef FN_VMB_CHANNEL_START *PFN_VMB_CHANNEL_START;
FN_VMB_CHANNEL_START VmbChannelStart;

/// \page VmbChannelPause VmbChannelPause
/// Moves a channel into the paused state, preventing new I/O from starting.
/// Waits until the channel is in the paused state before returning, ensuring
/// that all packets that are waiting for completion have completed.
///
/// If the channel is disabled, this call sets the channel to automatically
/// pause when it is enabled.
///
/// See \ref state_model.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
typedef
VOID
FN_VMB_CHANNEL_PAUSE(
    _In_    VMBCHANNEL  Channel
    );

typedef FN_VMB_CHANNEL_PAUSE *PFN_VMB_CHANNEL_PAUSE;
FN_VMB_CHANNEL_PAUSE VmbChannelPause;

/// \page VmbChannelSaveBegin VmbChannelSaveBegin
/// This routine initializes the context for saving the channel state. The
/// caller is expected to now call VmbChannelSaveContinue multiple times until
/// all the state is saved, and then call VmbChannelSaveEnd.
///
/// \param Channel A handle for the channel to save.  Allocated by \ref VmbChannelAllocate.
///
/// \returns NT Status
typedef
_Must_inspect_result_
NTSTATUS
FN_VMB_CHANNEL_SAVE_BEGIN(
    _In_ VMBCHANNEL  Channel
    );

typedef FN_VMB_CHANNEL_SAVE_BEGIN *PFN_VMB_CHANNEL_SAVE_BEGIN;
FN_VMB_CHANNEL_SAVE_BEGIN VmbChannelSaveBegin;

/// \page VmbChannelSaveContinue VmbChannelSaveContinue
/// This routine saves the channel state to the buffer.  The save process saves
/// the data in "chunks" and can continue from the point it stopped. Multiple
/// calls may be needed of the caller did not allocate enough space in advance.
///
/// \param Channel Handle to channel to save.  \ref VmbChannelSaveBegin should be
///     called on this channel before calling this function
/// \param SaveBuffer Pointer to buffer into which to save.
/// \param SaveBufferSize The size in bytes of the save buffer.
/// \param BytesFilled Pointer to variable that will receive the number of bytes
///     that were copied to the save buffer.
/// \param BytesRequired Pointer to variable that will receive the number of
///     bytes that are needed for this function to make progress on the next
///     call.
///
/// \retval STATUS_SUCCESS The state was saved.
/// \retval STATUS_BUFFER_TOO_SMALL The save buffer was too small.  BytesNeeded
///     contains the number of bytes that are required to make any progress.
/// \retval STATUS_BUFFER_OVERFLOW Some data was written to the save
///     buffer, but there's more data to be saved.
typedef
_Must_inspect_result_
NTSTATUS
FN_VMB_CHANNEL_SAVE_CONTINUE(
    _In_    VMBCHANNEL  Channel,
    _Out_writes_bytes_to_(SaveBufferSize, *BytesFilled)
            PVOID       SaveBuffer,
    _In_    ULONG       SaveBufferSize,
    _Out_   PULONG      BytesFilled,
    _Out_   PULONG      BytesRequired
    );

typedef FN_VMB_CHANNEL_SAVE_CONTINUE *PFN_VMB_CHANNEL_SAVE_CONTINUE;
FN_VMB_CHANNEL_SAVE_CONTINUE VmbChannelSaveContinue;

/// \page VmbChannelSaveEnd VmbChannelSaveEnd
/// This routine cleans up any resources that were allocated for saving state.
///
/// \param Channel Handle of the channel to save
typedef
VOID
FN_VMB_CHANNEL_SAVE_END(
    _In_ VMBCHANNEL  Channel
    );

typedef FN_VMB_CHANNEL_SAVE_END *PFN_VMB_CHANNEL_SAVE_END;
FN_VMB_CHANNEL_SAVE_END VmbChannelSaveEnd;

/// \page VmbChannelRestoreFromBuffer VmbChannelRestoreFromBuffer
/// This routine restores the client state from previously saved state.
///
/// The caller is expected to call this function with buffers that contain whole
/// "chunks" of stored data.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Buffer Pointer to buffer that contains previously saved state
/// \param BufferSize The size in bytes of the buffer
///
/// \returns STATUS_SUCCESS - The state was restored successfully.
/// \returns STATUS_MORE_PROCESSING_REQUIRED - State was restored successfully
///     but more chunks were saved.
/// \returns Other status code for which NT_SUCCESS is FALSE - The function
///     failed.
typedef
_Must_inspect_result_
NTSTATUS
FN_VMB_CHANNEL_RESTORE_FROM_BUFFER(
    _In_                            VMBCHANNEL            Channel,
    _In_reads_bytes_(BufferSize)    PVOID                 Buffer,
    _In_                            ULONG                 BufferSize
    );

typedef FN_VMB_CHANNEL_RESTORE_FROM_BUFFER *PFN_VMB_CHANNEL_RESTORE_FROM_BUFFER;
FN_VMB_CHANNEL_RESTORE_FROM_BUFFER VmbChannelRestoreFromBuffer;


/// \page VmbChannelPacketComplete VmbChannelPacketComplete
/// This function is called when the client driver is completely finished
/// processing a packet.  This may be directly from the packet parsing function
/// or it may be later.  It is the job of this function to clean up any
/// outstanding memory mappings, release any buffers in use and send a
/// completion packet back to the opposite endpoint, if that endpoint requested
/// a completion packet.
///
/// \param PacketCompletionContext See \ref VMBPACKETCOMPLETION
/// \param PacketCompletionBuffer VMBus completion packets allow for a buffer of
/// completion data to be sent back to the originating endpoint.  While this
/// will usually just contain a status value, the exact contents are up to
/// the client driver.
/// \param BufSize Size in bytes of the completion buffer.
typedef
VOID
FN_VMB_CHANNEL_PACKET_COMPLETE(
    _In_                            VMBPACKETCOMPLETION PacketCompletionContext,
    _In_reads_bytes_opt_(BufSize)   PVOID               PacketCompletionBuffer,
    _In_                            UINT32              BufSize
    );

typedef FN_VMB_CHANNEL_PACKET_COMPLETE *PFN_VMB_CHANNEL_PACKET_COMPLETE;
FN_VMB_CHANNEL_PACKET_COMPLETE VmbChannelPacketComplete;

/// \page VmbChannelPacketDeferToPassive VmbChannelPacketDeferToPassive
/// This function is called when the client driver wishes to defer a packet
/// passed to it by either \ref EvtChannelProcessPacket.  When deferred, the
/// packet will go back onto the parsing queue and will be guaranteed to be
/// parsed again at PASSIVE_LEVEL.
///
/// This routine is designed to only be called in-line from \ref EvtChannelProcessPacket.
///
/// \param PacketCompletionContext See \ref VMBPACKETCOMPLETION
typedef
VOID
FASTCALL
FN_VMB_CHANNEL_PACKET_DEFER_TO_PASSIVE(
    _In_ VMBPACKETCOMPLETION PacketCompletionContext
    );

typedef FN_VMB_CHANNEL_PACKET_DEFER_TO_PASSIVE *PFN_VMB_CHANNEL_PACKET_DEFER_TO_PASSIVE;
FN_VMB_CHANNEL_PACKET_DEFER_TO_PASSIVE VmbChannelPacketDeferToPassive;

/// \page VmbChannelPacketFail VmbChannelPacketFail
/// This function can be called during a packet processing to fail the packet
/// due to an unrecoverable error. The queue will be stopped.  Use this for
/// packets presented to the server endpoint which seem obviously malformed, to
/// the extent that channel processing should cease.
///
/// \param PacketCompletionContext See \ref VMBPACKETCOMPLETION
typedef
VOID
FASTCALL
FN_VMB_CHANNEL_PACKET_FAIL(
    _In_ VMBPACKETCOMPLETION PacketCompletionContext
    );

typedef FN_VMB_CHANNEL_PACKET_FAIL *PFN_VMB_CHANNEL_PACKET_FAIL;
FN_VMB_CHANNEL_PACKET_FAIL VmbChannelPacketFail;


/// \page VmbChannelPacketGetExternalData VmbChannelPacketGetExternalData
/// This function can be called during packet processing to get any external
/// MDLs associated with the packet. If this function returns STATUS_PENDING,
/// the caller must return from the packet processing callback, which will be
/// called again (possibly at a different IRQL) when the external data is ready.
/// At this point, a call to this function will succeed and return the external
/// data.
///
/// Note that creating a MDL which represents the memory described by this
/// transaction (see \ref gpadl_theory) will cause these regions of the VM to be
/// pinned in memory for the remainder of the transaction lifetime.  (This is
/// what may cause the function to return STATUS_PENDING, as the regions of the
/// VM may need to be paged in.)
///
/// The MDL returned by this function will describe memory which is already
/// locked in place, which is to say that there is no need to call
/// MmProbeAndLockPages.  It will, however, have neither a user-mode virtual
/// address nor a kernel-mode virtual address.  If the driver calling this
/// function requires a VA to manipulate the memory within the VM (rather than,
/// say, just passing this on down to a driver which will use the MDL for DMA)
/// then it must call MmMapLockedPagesSpecifyCache, or MmGetSystemAddressForMdlSafe,
/// and then the corresponding unlock function later, like MmUnmapLockedPages.
///
/// The driver calling this function is not required to free this MDL.  It will
/// become invalid upon calling \ref VmbChannelPacketComplete and later freed
/// by the KMCL.
///
/// \param PacketCompletionContext See \ref VMBPACKETCOMPLETION
/// \param Flags \parblock
/// Flags to control how the MDL is mapped. Valid flags are:
/// \ref VMBUS_CHANNEL_PACKET_EXTERNAL_DATA_FLAG_READ_ONLY - Map MDL as read-only.
/// \endparblock
/// \param Mdl A pointer to return the mapped MDL.
///
/// \retval STATUS_SUCCESS The mapping was successful.
/// \retval STATUS_PENDING The regions of the VM need to be paged in. Callers
///     should do nothing; the packet processing routine will be called again once
///     the external data is resident.
/// \retval Another NTSTATUS code. The mapping was unsuccessful.
typedef
_Success_(return == 0)
NTSTATUS
FN_VMB_CHANNEL_PACKET_GET_EXTERNAL_DATA(
    _In_ VMBPACKETCOMPLETION PacketCompletionContext,
    _In_ UINT32 Flags,
    _Out_ PMDL *Mdl
    );

typedef FN_VMB_CHANNEL_PACKET_GET_EXTERNAL_DATA *PFN_VMB_CHANNEL_PACKET_GET_EXTERNAL_DATA;
FN_VMB_CHANNEL_PACKET_GET_EXTERNAL_DATA VmbChannelPacketGetExternalData;

/// \page VmbChannelMapGpadl VmbChannelMapGpadl
/// Maps a client-side buffer into server-side physical address space by GPADL
/// number. This GPADL must have been pre-established by the client, e.g. via
/// \ref VmbChannelCreateGpadlFromBuffer.  See \ref gpadl_theory for more
/// information.
///
/// Only a single mapping may exist for any given GPADL at a time.  Calls to this
/// function must eventually be paired with calls to \ref VmbChannelUnmapGpadl.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Flags \parblock The possible flags are: \ref VMBUS_CHANNEL_GPADL_FLAG_READ_ONLY If
/// not set, try to map the GPADL for write access. If the GPADL was not
/// created with write access, this mapping attempt will fail. Note that the
/// caller will not be prevented from writing to the buffer if this flag is
/// set; this scheme is used to improve the performance of live migration
/// and snapshotting.
/// \endparblock
/// \param GpadlHandle The GPADL handle of the GPADL to map.
/// \param Mdl Returns a pointer to a MDL describing the client buffer. This
/// buffer is only mapped into physical address space; the caller must take
/// additional steps to map it into virtual address space.
typedef
NTSTATUS
FN_VMB_CHANNEL_MAP_GPADL(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 Flags,
    _In_ UINT32 GpadlHandle,
    _Out_ PMDL *Mdl
    );

typedef FN_VMB_CHANNEL_MAP_GPADL *PFN_VMB_CHANNEL_MAP_GPADL;
FN_VMB_CHANNEL_MAP_GPADL VmbChannelMapGpadl;

/// \page VmbChannelUnmapGpadl VmbChannelUnmapGpadl
/// Unmaps a GPADL mapped by \ref VmbChannelMapGpadl. The buffer must no longer be in
/// use by the server before this routine can be called.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param GpadlHandle The handle of the GPADL to unmap.
typedef
VOID
FN_VMB_CHANNEL_UNMAP_GPADL(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 GpadlHandle
    );

typedef FN_VMB_CHANNEL_UNMAP_GPADL *PFN_VMB_CHANNEL_UNMAP_GPADL;
FN_VMB_CHANNEL_UNMAP_GPADL VmbChannelUnmapGpadl;

/// \page VmbChannelCreateGpadlFromMdl VmbChannelCreateGpadlFromMdl
/// Establishes a GPADL describing a client-side buffer. The GPADL may be used
/// in the server to access the buffer.  When this function returns, the server
/// endpoint may call \ref VmbChannelMapGpadl, as VMBus will already have send
/// the GPADL description to the opposite endpoint and received confirmation.
///
/// The GPADL must be deleted with \ref VmbChannelDeleteGpadl when finished.
///
/// See \ref gpadl_theory for more information.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Flags \parblock The possible flags are: \ref VMBUS_CHANNEL_GPADL_READ_ONLY If set,
///     this buffer should be considered read-only. Otherwise, it may be written
///     to by the server. Note that this is not a security measure; it only has
///     the potential to improve snapshot and live migration performance.
/// \endparblock
/// \param Mdl A pointer to a MDL chain describing the buffer. The buffer may
///     have multiple pieces (chained via the MDLs' Next pointers).
/// \param StartOffsetWithinMdl An offset in bytes within the MDL to start the
///     mapping.
/// \param DataLengthWithinMdl The length of the buffer chain, in bytes. If 0,
///     use until the end of the MDL.
/// \param GpadlHandle Returns a GPADL handle of the created MDL. This should be
///     sent to the server to use with VmbChannelMapGpadl.
typedef
NTSTATUS
FN_VMB_CHANNEL_CREATE_GPADL_FROM_MDL(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 Flags,
    _In_ PMDL Mdl,
    _In_ UINT32 StartOffsetWithinMdl,
    _In_ UINT32 DataLengthWithinMdl,
    _Out_ PUINT32 GpadlHandle
    );

typedef FN_VMB_CHANNEL_CREATE_GPADL_FROM_MDL *PFN_VMB_CHANNEL_CREATE_GPADL_FROM_MDL;
FN_VMB_CHANNEL_CREATE_GPADL_FROM_MDL VmbChannelCreateGpadlFromMdl;

/// \page VmbChannelCreateGpadlFromBuffer VmbChannelCreateGpadlFromBuffer
/// Establishes a GPADL describing a client-side buffer. The GPADL may be used
/// in the server to access the buffer.  When this function returns, the server
/// endpoint may call \ref VmbChannelMapGpadl, as VMBus will already have send
/// the GPADL description to the opposite endpoint and received confirmation.
///
/// The GPADL must be deleted with \ref VmbChannelDeleteGpadl when finished.
///
/// See \ref gpadl_theory for more information.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Flags \parblock The possible flags are: \ref VMBUS_CHANNEL_GPADL_READ_ONLY If set,
///     this buffer should be considered read-only. Otherwise, it may be written
///     to by the server. Note that this is not a security measure; it only has
///     the potential to improve snapshot and live migration performance.
/// \endparblock
/// \param Buffer A pointer to a buffer. The buffer will be probed and locked
///     until the GPADL is torndown.
/// \param ByteCount The length of the buffer, in bytes.
/// \param GpadlHandle Returns a GPADL handle of the created MDL. This should be
///     sent to the server to use with VmbChannelMapGpadl.
typedef
NTSTATUS
FN_VMB_CHANNEL_CREATE_GPADL_FROM_BUFFER(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 Flags,
    _In_reads_bytes_(ByteCount) PVOID Buffer,
    _In_ UINT32 ByteCount,
    _Out_ PUINT32 GpadlHandle
    );

typedef FN_VMB_CHANNEL_CREATE_GPADL_FROM_BUFFER *PFN_VMB_CHANNEL_CREATE_GPADL_FROM_BUFFER;
FN_VMB_CHANNEL_CREATE_GPADL_FROM_BUFFER VmbChannelCreateGpadlFromBuffer;

/// \page VmbChannelCreateGpadlFromPfnList VmbChannelCreateGpadlFromPfnList
/// Establishes a GPADL describing a client-side buffer. The GPADL may be used
/// in the server to access the buffer.  When this function returns, the server
/// endpoint may call \ref VmbChannelMapGpadl, as VMBus will already have sent
/// the GPADL description to the opposite endpoint and received confirmation.
///
/// The GPADL must be deleted with \ref VmbChannelDeleteGpadl when finished.
///
/// See \ref gpadl_theory for more information.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Flags \parblock The possible flags are: \ref VMBUS_CHANNEL_GPADL_READ_ONLY If set,
///     this buffer should be considered read-only. Otherwise, it may be written
///     to by the server. Note that this is not a security measure; it only has
///     the potential to improve snapshot and live migration performance.
/// \param PfnList A pointer to a contiguous array of PFN_NUMBERs describing 
///     pages that have been probed and locked.
/// \param PfnListCount Number of elements in PfnList
/// \param GpadlHandle Returns a GPADL handle of the created MDL. This should be
///     sent to the server to use with VmbChannelMapGpadl.
typedef
NTSTATUS
FN_VMB_CHANNEL_CREATE_GPADL_FROM_PFN_LIST(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 Flags,
    _In_reads_(PfnListCount) PPFN_NUMBER PfnList,
    _In_ UINT32 PfnListCount,
    _Out_ PUINT32 GpadlHandle
    );

typedef FN_VMB_CHANNEL_CREATE_GPADL_FROM_PFN_LIST *PFN_VMB_CHANNEL_CREATE_GPADL_FROM_PFN_LIST;
FN_VMB_CHANNEL_CREATE_GPADL_FROM_PFN_LIST VmbChannelCreateGpadlFromPfnList;


/// \page VmbChannelDeleteGpadl VmbChannelDeleteGpadl
/// Deletes a GPADL mapped by \ref VmbChannelCreateGpadlFromMdl or
/// \ref VmbChannelCreateGpadlFromBuffer. If the GPADL is currently mapped to the
/// server, this routine will block until the GPADL is unmapped.
///
/// See \ref gpadl_theory for more information.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param GpadlHandle The GPADL handle of the GPADL to delete.
typedef
VOID
FN_VMB_CHANNEL_DELETE_GPADL(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 GpadlHandle
    );

typedef FN_VMB_CHANNEL_DELETE_GPADL *PFN_VMB_CHANNEL_DELETE_GPADL;
FN_VMB_CHANNEL_DELETE_GPADL VmbChannelDeleteGpadl;

/// \page VmbPacketAllocate VmbPacketAllocate
/// Allocates a packet from the channel's lookaside list.
///
/// The packet's default completion routine will automatically free the packet.
/// If the packet is not sent or if the completion routine is changed, the
/// client should call \ref VmbPacketFree to free the packet when finished with it.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
///
/// \returns A pointer to an allocated \ref VMBPACKET, or NULL.
typedef
__drv_allocatesMem(Mem)
VMBPACKET
FN_VMB_PACKET_ALLOCATE(
    _In_ VMBCHANNEL Channel
    );

typedef FN_VMB_PACKET_ALLOCATE *PFN_VMB_PACKET_ALLOCATE;
FN_VMB_PACKET_ALLOCATE VmbPacketAllocate;

/// \page VmbPacketFree VmbPacketFree
/// Frees a packet allocated with \ref VmbPacketAllocate.
///
/// \param VmbPacket A pointer to an allocated \ref VMBPACKET.
typedef
VOID
FN_VMB_PACKET_FREE(
    _In_ __drv_freesMem(Mem) VMBPACKET VmbPacket
    );

typedef FN_VMB_PACKET_FREE *PFN_VMB_PACKET_FREE;
FN_VMB_PACKET_FREE VmbPacketFree;

/// \page VmbPacketSetPointer VmbPacketSetPointer
/// This function lets a client driver save an arbitrary pointer in the packet
/// context.  This is intended as a more efficient way to retrive the client
/// driver's context.
///
/// \param PacketObject Handle for the \ref VMBPACKET
/// \param Pointer Arbitrary pointer to save in the packet's context
typedef
VOID
FASTCALL
FN_VMB_PACKET_SET_POINTER(
    _In_     VMBPACKET PacketObject,
    _In_opt_ PVOID     Pointer
    );

typedef FN_VMB_PACKET_SET_POINTER *PFN_VMB_PACKET_SET_POINTER;
FN_VMB_PACKET_SET_POINTER VmbPacketSetPointer;

/// \page VmbPacketGetPointer VmbPacketGetPointer
/// This function lets a client driver retrive a pointer that was previously
/// saved with \ref VmbPacketSetPointer.
///
/// \param PacketObject Handle for the packet object
///
/// \returns The value previously saved with \ref VmbPacketSetPointer
typedef
PVOID
FASTCALL
FN_VMB_PACKET_GET_POINTER(
    _In_     VMBPACKET PacketObject
    );

typedef FN_VMB_PACKET_GET_POINTER *PFN_VMB_PACKET_GET_POINTER;
FN_VMB_PACKET_GET_POINTER VmbPacketGetPointer;

/// \page VmbPacketSend VmbPacketSend
/// This function sends the data in PacketBuf and/or ExternalDataMdl,
/// associating it with the \ref VMBPACKET object, which will represent the packet
/// through the lifetime of the transaction.
///
/// See also \ref VmbPacketSendWithExternalMdl and \ref VmbChannelSendSynchronousRequest
/// and \ref VmbPacketSendWithExternalPfns for sending packets
/// in different ways.
///
/// \param PacketObject This is a handle to the \ref VMBPACKET object.
/// \param Buffer Buffer containing the "command" packet which will be sent
///     through the VMBus ring buffer.
/// \param BufferLength Size in bytes of the buffer pointed to by Buffer.
///     BufferLength is constrained by the size of the ring buffer and the MTU
///     for all KMCL ring buffers (524,280 bytes). The sum of the internal 
///     packet header (up to 32 bytes), plus BufferLength, plus additional 
///     headers for each chained MDL in ExternalDataMdl (8 bytes) and each page 
///     specified in ExternalDataMdl (8 bytes) must be less than the size of 
///     the ring buffer and the MTU. 
///     See \ref VmbClientChannelInitSetRingBufferPageCount for more 
///     information about setting the size of the outgoing ring buffer.
/// \param ExternalDataMdl Optional MDL describing a data buffer associated with
///     the packet.
/// \param Flags \parblock
/// Any pertinent flags:
///
/// \ref VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION indicates that this packet
/// cannot be considered complete and its resources cannot be released until a
/// completion packet comes back from the opposite endpoint.
///
/// \ref VMBUS_CHANNEL_FORMAT_FLAG_PAGED_BUFFER indicates that the inline buffer is
/// paged and must be treated accordingly (copied before entering DPC level).
/// Note that probing user-mode buffers or handling access violations is the
/// responsibility of the caller.
/// \endparblock
///
/// \returns NT Status code.
typedef
NTSTATUS
FN_VMB_PACKET_SEND(
    _In_ __drv_aliasesMem           VMBPACKET              PacketObject,
    _In_reads_bytes_(BufferLength)  PVOID                  Buffer,
    _In_                            UINT32                 BufferLength,
    _In_opt_                        PMDL                   ExternalDataMdl,
    _In_                            UINT32                 Flags
    );

typedef FN_VMB_PACKET_SEND *PFN_VMB_PACKET_SEND;
FN_VMB_PACKET_SEND VmbPacketSend;

/// \page VmbPacketSendWithExternalMdl VmbPacketSendWithExternalMdl
/// This function sends the data in PacketBuf and ExternalDataMdl, associating
/// it with the \ref VMBPACKET object, which will represent the packet through the
/// lifetime of the transaction.
///
/// This function is different from \ref VmbPacketSend in that it allows passing a
/// MDL offset and MDL length.
///
/// \param PacketObject This is a handle to the \ref VMBPACKET object.
/// \param Buffer Buffer containing the "command" packet which will be sent
///     through the VMBus ring buffer.
/// \param BufferLength Size in bytes of the buffer pointed to by Buffer.
///     BufferLength is constrained by the size of the ring buffer and the MTU
///     for all KMCL ring buffers (524,280 bytes). The sum of the internal 
///     packet header (up to 32 bytes), plus BufferLength, plus additional 
///     headers for each chained MDL in ExternalDataMdl (8 bytes) and each page 
///     specified in ExternalDataMdl (8 bytes) must be less than the size of 
///     the ring buffer and the MTU. 
///     See \ref VmbClientChannelInitSetRingBufferPageCount for more 
///     information about setting the size of the outgoing ring buffer.
/// \param ExternalDataMdl Optional MDL describing a data buffer associated with
///     the packet.
/// \param MdlOffset The offset from the buffer described by the MDL where the
///     data starts.
/// \param MdlLength The length of the sub-buffer to send. Use 0 for the entire
///     MDL.
/// \param ForceMdlLength If TRUE,
/// \param Flags \parblock
/// Any pertinent flags:
///
/// \ref VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION indicates that this packet
/// cannot be considered complete and its resources cannot be released until a
/// completion packet comes back from the opposite endpoint. Must be set.
///
/// \ref VMBUS_CHANNEL_FORMAT_FLAG_FORCE_MDL_LENGTH - always use MdlLength for the
/// length of the external data MDL, even if this length is longer than the
/// ByteCount field of the MDL. This only allows exceeding the MDL's length by
/// rounding up to a page boundary. If this is set, only the first MDL in the
/// MDL chain will be used.
///
/// \ref VMBUS_CHANNEL_FORMAT_FLAG_PAGED_BUFFER indicates that the inline buffer is
/// paged and must be treated accordingly (copied before entering DPC level).
/// Note that probing user-mode buffers or handling access violations is the
/// responsibility of the caller.
/// \endparblock
///
/// \returns NT Status code.
typedef
NTSTATUS
FN_VMB_PACKET_SEND_WITH_EXTERNAL_MDL(
    _In_ __drv_aliasesMem           VMBPACKET              PacketObject,
    _In_reads_bytes_(BufferLength)  PVOID                  Buffer,
    _In_                            UINT32                 BufferLength,
    _In_                            PMDL                   ExternalDataMdl,
    _In_                            UINT32                 MdlOffset,
    _In_                            UINT32                 MdlLength,
    _In_                            UINT32                 Flags
    );

typedef FN_VMB_PACKET_SEND_WITH_EXTERNAL_MDL *PFN_VMB_PACKET_SEND_WITH_EXTERNAL_MDL;
FN_VMB_PACKET_SEND_WITH_EXTERNAL_MDL VmbPacketSendWithExternalMdl;

/// \page VmbPacketSendWithExternalPfns
/// VmbPacketSendWithExternalPfns This function sends the data
/// in PacketBuf and ExternalDataPfn, associating it with the
/// \ref VMBPACKET object, which will represent the packet
/// through the lifetime of the transaction.
///
/// This function is different from \ref VmbPacketSend in that it allows passing a
/// array of PFNs (Page Frame Numbers, effectively Physical
/// addresses)
///
/// \param PacketObject This is a handle to the \ref VMBPACKET object.
/// \param Buffer Buffer containing the "command" packet which will be sent
///     through the VMBus ring buffer.
/// \param BufferLength Size in bytes of the buffer pointed to by Buffer.
///     BufferLength is constrained by the size of the ring buffer and the MTU
///     for all KMCL ring buffers (524,280 bytes). The sum of the internal 
///     packet header (up to 32 bytes), plus BufferLength, plus additional 
///     headers for each chained MDL in ExternalDataMdl (8 bytes) and each page 
///     specified in ExternalDataMdl (8 bytes) must be less than the size of 
///     the ring buffer and the MTU. 
///     See \ref VmbClientChannelInitSetRingBufferPageCount for more 
///     information about setting the size of the outgoing ring buffer.
/// \param ExternalDataPfns Optional array of Physical Frame
///     nubmers describing a data buffer associated with
///     the packet.
/// \param PfnLength The number of Pfns to send from
///     ExternalDataPfns. The final referenced array index will
///     be  ExternalDataPfns[PfnLength-1] inclusive
/// \param Flags \parblock Any pertinent flags:
///
/// \ref VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION indicates that this packet
/// cannot be considered complete and its resources cannot be released until a
/// completion packet comes back from the opposite endpoint. Must be set.
///
/// \ref VMBUS_CHANNEL_FORMAT_FLAG_PAGED_BUFFER indicates that the inline buffer is
/// paged and must be treated accordingly (copied before entering DPC level).
/// Note that probing user-mode buffers or handling access violations is the
/// responsibility of the caller.
/// \endparblock
///
/// \returns NT Status code.
typedef
NTSTATUS
FN_VMB_PACKET_SEND_WITH_EXTERNAL_PFNS(
    _In_ __drv_aliasesMem           VMBPACKET              PacketObject,
    _In_reads_bytes_(BufferLength)  PVOID                  Buffer,
    _In_                            UINT32                 BufferLength,
    _In_reads_(PfnLength)           PPFN_NUMBER            ExternalDataPfns,
    _In_                            UINT32                 PfnLength,
    _In_                            UINT32                 Flags
    );

typedef FN_VMB_PACKET_SEND_WITH_EXTERNAL_PFNS *PFN_VMB_PACKET_SEND_WITH_EXTERNAL_PFNS;
FN_VMB_PACKET_SEND_WITH_EXTERNAL_PFNS VmbPacketSendWithExternalPfns;


/// \page VmbChannelSendSynchronousRequest VmbChannelSendSynchronousRequest
/// Sends a packet to the opposite endpoint and waits for a response.
///
/// Clients may call with any combination of parameters. The root may only call
/// this if *Timeout == 0 and the \ref VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION
/// flag is not set.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Buffer Data to send.
/// \param BufferLength Size in bytes of the buffer pointed to by Buffer.
///     BufferLength is constrained by the size of the ring buffer and the MTU
///     for all KMCL ring buffers (524,280 bytes). The sum of the internal 
///     packet header (up to 32 bytes), plus BufferLength, plus additional 
///     headers for each chained MDL in ExternalDataMdl (8 bytes) and each page 
///     specified in ExternalDataMdl (8 bytes) must be less than the size of 
///     the ring buffer and the MTU. 
///     See \ref VmbClientChannelInitSetRingBufferPageCount for more 
///     information about setting the size of the outgoing ring buffer.
/// \param ExternalDataMdl Optionally, a MDL describing an additional buffer to
///     send.
/// \param Flags Standard flags.
/// \param CompletionBuffer Buffer to store completion packet results in.
/// \param CompletionBufferSize Size of CompletionBuffer in bytes. Must be
///     rounded up to nearest 8 bytes, or else call will fail. On success,
///     returns the number of bytes written into CompletionBuffer.
/// \param Timeout Optionally, a timeout in the style of KeWaitForSingleObject.
///     After this time elapses, the packet will be cancelled. If set to a
///     timeout of 0, this packet will not be queued if it does not fit in the
///     ring buffer.
///
/// \returns STATUS_SUCCESS
/// \returns STATUS_BUFFER_OVERFLOW - The packet did not fit in the buffer and
///     was not queued.
/// \returns STATUS_CANCELLED - The packet was canceled.
/// \returns STATUS_DEVICE_REMOVED - The channel is being shut down.
_When_(Timeout == NULL || Timeout->QuadPart != 0 ||
       (Flags & VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION) != 0,
       _IRQL_requires_(PASSIVE_LEVEL))
_When_(Timeout != NULL && Timeout->QuadPart == 0 &&
       (Flags & VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION) == 0,
        _IRQL_requires_max_(DISPATCH_LEVEL))
typedef
NTSTATUS
FN_VMB_CHANNEL_SEND_SYNCHRONOUS_REQUEST(
    _In_                            VMBCHANNEL      Channel,
    _In_reads_bytes_(BufferSize)    PVOID           Buffer,
    _In_                            UINT32          BufferSize,
    _In_opt_                        PMDL            ExternalDataMdl,
    _In_                            UINT32          Flags,
    _Out_writes_bytes_to_opt_(*CompletionBufferSize, *CompletionBufferSize)
                                    PVOID           CompletionBuffer,
    _Inout_opt_ _Pre_satisfies_(*_Curr_ % 8 == 0)
                                    PUINT32         CompletionBufferSize,
    _In_opt_                        PLARGE_INTEGER  Timeout
    );

typedef FN_VMB_CHANNEL_SEND_SYNCHRONOUS_REQUEST *PFN_VMB_CHANNEL_SEND_SYNCHRONOUS_REQUEST;
FN_VMB_CHANNEL_SEND_SYNCHRONOUS_REQUEST VmbChannelSendSynchronousRequest;

/// \page VmbPacketRestore VmbPacketRestore
/// This routine restores packet from a buffer that contains saved packet
/// context
///
/// \param PacketObject This is a handle to the VMBPACKET object.
/// \param Buffer Pointer to buffer that contains previously saved context.
/// \param BufferSize The size in bytes of buffer
///
/// \returns NT Status
typedef
NTSTATUS
FN_VMB_PACKET_RESTORE(
    _In_ __drv_aliasesMem           VMBPACKET                  PacketObject,
    _In_reads_bytes_(BufferSize)    PVOID                      Buffer,
    _In_                            ULONG                      BufferSize
    );

typedef FN_VMB_PACKET_RESTORE *PFN_VMB_PACKET_RESTORE;
FN_VMB_PACKET_RESTORE VmbPacketRestore;

/// \page VmbPacketGetChannel VmbPacketGetChannel
/// This function returns the \ref VMBCHANNEL that a \ref VMBPACKET is associated with.
///
/// \param PacketObject The packet object.
typedef
VMBCHANNEL
FASTCALL
FN_VMB_PACKET_GET_CHANNEL(
    _In_    VMBPACKET   PacketObject
    );

typedef FN_VMB_PACKET_GET_CHANNEL *PFN_VMB_PACKET_GET_CHANNEL;
FN_VMB_PACKET_GET_CHANNEL VmbPacketGetChannel;


/// \page VmbPacketGetInlinePacketContextPointer VmbPacketGetInlinePacketContextPointer
/// This function returns the \ref VMBPACKET inline allocated context area.
///
/// \param PacketObject The packet object.
typedef
PVOID
FASTCALL
FN_VMB_PACKET_GET_INLINE_PACKET_CONTEXT_POINTER(
    _In_    VMBPACKET   PacketObject
    );

typedef FN_VMB_PACKET_GET_INLINE_PACKET_CONTEXT_POINTER *PFN_VMB_PACKET_GET_INLINE_PACKET_CONTEXT_POINTER;
FN_VMB_PACKET_GET_INLINE_PACKET_CONTEXT_POINTER VmbPacketGetInlinePacketContextPointer;

/// \page VmbChannelSetIncomingProcessingAtPassive VmbChannelSetIncomingProcessingAtPassive
/// Sets the required IRQL for incoming parsing routines for a channel to
/// PASSIVE_LEVEL.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param RequirePassive If TRUE, require PASSIVE_LEVEL. If FALSE, packets may
///     arrive at either DISPATCH_LEVEL or PASSIVE_LEVEL.
typedef
VOID
FN_VMB_CHANNEL_SET_INCOMING_PROCESSING_AT_PASSIVE(
    _In_ VMBCHANNEL Channel,
    _In_ BOOLEAN RequirePassive
    );

typedef FN_VMB_CHANNEL_SET_INCOMING_PROCESSING_AT_PASSIVE *PFN_VMB_CHANNEL_SET_INCOMING_PROCESSING_AT_PASSIVE;
FN_VMB_CHANNEL_SET_INCOMING_PROCESSING_AT_PASSIVE VmbChannelSetIncomingProcessingAtPassive;

/// \page VmbChannelSetTransactionQuota VmbChannelSetTransactionQuota
/// Sets the incoming packet quota. Can be set to be lower than the current
/// outstanding packet count; in that case, no new packets will be removed from
/// the queue until sufficient packets have been completed.
///
/// If the queue is currently blocked due to quota, this operation still will
/// not restart it. The queue will only restart once a packet is completed.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Quota The maximum outstanding packet quota. Must be greater than 0.
typedef
VOID
FN_VMB_CHANNEL_SET_TRANSACTION_QUOTA(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 Quota
    );

typedef FN_VMB_CHANNEL_SET_TRANSACTION_QUOTA *PFN_VMB_CHANNEL_SET_TRANSACTION_QUOTA;
FN_VMB_CHANNEL_SET_TRANSACTION_QUOTA VmbChannelSetTransactionQuota;

/// \page VmbChannelGetInterfaceInstance VmbChannelGetInterfaceInstance
/// Retrieves the active interface instance, a GUID that uniquely identifies a
/// channel.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param InterfaceInstance A pointer to a GUID to store the interface instance
///     of the channel.
typedef
VOID
FN_VMB_CHANNEL_GET_INTERFACE_INSTANCE(
    _In_ VMBCHANNEL Channel,
    _Out_ LPGUID InterfaceInstance
    );

typedef FN_VMB_CHANNEL_GET_INTERFACE_INSTANCE *PFN_VMB_CHANNEL_GET_INTERFACE_INSTANCE;
FN_VMB_CHANNEL_GET_INTERFACE_INSTANCE VmbChannelGetInterfaceInstance;

/// \page VmbChannelGetMmioSpace VmbChannelGetMmioSpace
/// Retrieves the kernel virtual address of the MMIO space allocated to the channel.
/// This MMIO space is reserved via /ref VmbServerChannelInitSetMmioMegabytes.  This
/// function is only valid after the open channel callback has been received.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param MmioAddress A pointer to a PVOID to fill with the MMIO physical address
/// \param MmioSize A pointer to the returned size of the MMIO space

typedef 
VOID
FN_VMB_CHANNEL_GET_MMIO_SPACE(
    _In_ VMBCHANNEL Channel,
    _Out_ UINT64* MmioAddress,
    _Out_ UINT64* MmioSize
    );

typedef FN_VMB_CHANNEL_GET_MMIO_SPACE *PFN_VMB_CHANNEL_GET_MMIO_SPACE;
FN_VMB_CHANNEL_GET_MMIO_SPACE VmbChannelGetMmioSpace;

/// \page VmbChannelAllocateBounceBuffer VmbChannelAllocateBounceBuffer
/// Allocate a buffer for the isolated and blind virtual machine scenarios. 
/// The bounce buffer is used in place of individual packet MDLs.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param BufferSize Byte count of the new bounce buffer. Must be a multiple 
/// of PAGE_SIZE.
///
/// \returns STATUS_SUCCESS
/// \returns STATUS_NOT_SUPPORTED - if called on a server channel.
/// \returns STATUS_INSUFFICIENT_RESOURCES - unable to allocate or map the 
/// requested memory.
/// \return STATUS_INVALID_PARAMETER - BufferSize is invalid.

typedef
NTSTATUS
FN_VMB_CHANNEL_ALLOCATE_BOUNCE_BUFFER(
    _In_ VMBCHANNEL Channel,
    _In_ UINT32 BufferSize
    );

typedef FN_VMB_CHANNEL_ALLOCATE_BOUNCE_BUFFER *PFN_VMB_CHANNEL_ALLOCATE_BOUNCE_BUFFER;
FN_VMB_CHANNEL_ALLOCATE_BOUNCE_BUFFER VmbChannelAllocateBounceBuffer;

/// \page VmbChannelSizeofPacket VmbChannelSizeofPacket
/// Calculates the necessary size for buffers to be used with
/// \ref VmbPacketInitialize.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
///
/// \returns The necessary buffer size in bytes.
typedef
UINT32
FN_VMB_CHANNEL_SIZEOF_PACKET(
    _In_ VMBCHANNEL Channel
    );

typedef FN_VMB_CHANNEL_SIZEOF_PACKET *PFN_VMB_CHANNEL_SIZEOF_PACKET;
FN_VMB_CHANNEL_SIZEOF_PACKET VmbChannelSizeofPacket;

/// \page VmbPacketSetPointer VmbPacketSetPointer
/// Initializes a buffer to contain a VMBPACKET. The buffer's size must be at
/// least \ref VmbChannelSizeofPacket().  This function exists as an alternative
/// to \ref VmbPacketAllocate, in the case that the caller wishes to supply the
/// memory for the packet object.  Callers of VmbPacketAllocate should not call this.
///
/// The packet's initial completion routine is invalid and must be set before
/// sending the packet.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param VmbPacket The buffer to use to store the \ref VMBPACKET.
/// \param ByteCount The length of Buffer in bytes.
/// \return STATUS_SUCCESS - function completed successfully
/// \return STATUS_INVALID_PARAMETER_3 - ByteCount needs to be greater than MaximumPacketSize + a PVOID)
typedef
NTSTATUS
FN_VMB_PACKET_INITIALIZE(
    _In_ VMBCHANNEL Channel,
    _Out_writes_bytes_(ByteCount) VMBPACKET VmbPacket,
    _In_ UINT32 ByteCount
    );

typedef FN_VMB_PACKET_INITIALIZE *PFN_VMB_PACKET_INITIALIZE;
FN_VMB_PACKET_INITIALIZE VmbPacketInitialize;

/// \page EvtVmbPacketCompletionRoutine EvtVmbPacketCompletionRoutine
/// \b EvtVmbPacketCompletionRoutine
///
/// This callback is invoked when the transaction associated with a sent packet
/// is complete.  If the sender used \ref VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION
/// then this means that the opposite endpoint received the packet and completed it.
/// If not, then this means that the outgoing packet was successfully placed into
/// the ring buffer.
///
/// See \ref VmbPacketSend and related functions for information on sending packets.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param Packet \ref VMBPACKET which just completed.
/// \param Buffer This contains the completion response from the opposite endpoint, if any.
/// \param BufferLength The length of Buffer in bytes.
///\code
typedef
_Function_class_(EVT_VMB_PACKET_COMPLETION_ROUTINE)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_VMB_PACKET_COMPLETION_ROUTINE(
    _In_ VMBPACKET Packet,
    _In_ NTSTATUS Status,
    _In_reads_bytes_opt_(BufferLength) PVOID Buffer,
    _In_ UINT32 BufferLength
    );

typedef EVT_VMB_PACKET_COMPLETION_ROUTINE *PFN_VMB_PACKET_COMPLETION_ROUTINE;
///\endcode


/// \page EvtVmbPacketCompletionRoutineEx EvtVmbPacketCompletionRoutineEx
/// \b EvtVmbPacketCompletionRoutineEx
///
/// This callback is invoked when the transaction associated with a sent packet
/// is complete.  If the sender used \ref VMBUS_CHANNEL_FORMAT_FLAG_WAIT_FOR_COMPLETION
/// then this means that the opposite endpoint received the packet and completed it.
/// If not, then this means that the outgoing packet was successfully placed into
/// the ring buffer.
///
/// See \ref VmbPacketSend and related functions for information on sending packets.
///
/// \param Channel A handle for the channel.  Allocated by \ref VmbChannelAllocate.
/// \param CallbackContext A value provided by registration call \refVmbPacketSetCompletionRoutineEx
/// \param Packet \ref VMBPACKET which just completed.
/// \param Buffer This contains the completion response from the opposite endpoint, if any.
/// \param BufferLength The length of Buffer in bytes.
///\code
typedef
_Function_class_(EVT_VMB_PACKET_COMPLETION_ROUTINE_EX)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_VMB_PACKET_COMPLETION_ROUTINE_EX(
    _In_ VMBPACKET Packet,
    _In_ PVOID CallbackContext,
    _In_ NTSTATUS Status,
    _In_reads_bytes_opt_(BufferLength) PVOID Buffer,
    _In_ UINT32 BufferLength
    );

typedef EVT_VMB_PACKET_COMPLETION_ROUTINE_EX *PFN_VMB_PACKET_COMPLETION_ROUTINE_EX;
///\endcode


/// \page VmbPacketSetCompletionRoutine VmbPacketSetCompletionRoutine
/// Sets the completion routine for a packet object. See \ref VmbPacketSend
/// and \ref VmbPacketSendWithExternalMdl and \ref
/// VmbPacketSendWithExternalPfns.  See also \ref
/// EvtVmbPacketCompletionRoutine.
///
/// \param PacketObject The packet object.
/// \param CompletionRoutine Function to call when the packet is complete.
typedef
VOID
FN_VMB_PACKET_SET_COMPLETION_ROUTINE(
    _In_    VMBPACKET                           PacketObject,
    _In_    PFN_VMB_PACKET_COMPLETION_ROUTINE   CompletionRoutine
    );

typedef FN_VMB_PACKET_SET_COMPLETION_ROUTINE *PFN_VMB_PACKET_SET_COMPLETION_ROUTINE;
FN_VMB_PACKET_SET_COMPLETION_ROUTINE VmbPacketSetCompletionRoutine;


/// \page VmbPacketSetCompletionRoutineEx VmbPacketSetCompletionRoutineEx
/// Sets the completion routine for a packet object. See \ref VmbPacketSend
/// and \ref VmbPacketSendWithExternalMdl and \ref
/// VmbPacketSendWithExternalPfns.  See also \ref
/// EvtVmbPacketCompletionRoutine.
///
/// \param PacketObject The packet object.
/// \param CallbackContext A value to be provided to CompletionRoutineEx.
/// \param CompletionRoutineEx Function to call when the packet is complete.
typedef
VOID
FN_VMB_PACKET_SET_COMPLETION_ROUTINE_EX(
    _In_    VMBPACKET                               PacketObject,
    _In_    PVOID                                   CallbackContext,
    _In_    PFN_VMB_PACKET_COMPLETION_ROUTINE_EX    CompletionRoutineEx
    );

typedef FN_VMB_PACKET_SET_COMPLETION_ROUTINE_EX *PFN_VMB_PACKET_SET_COMPLETION_ROUTINE_EX;
FN_VMB_PACKET_SET_COMPLETION_ROUTINE_EX VmbPacketSetCompletionRoutineEx;


///\page EvtChannelPnpFailure EvtChannelPnpFailure
/// \b EvtChannelPnpFailure
/// \param Channel VMBCHANNEL
/// \param FailureStatus NTSTATUS failure code
/// \return void
///
/// This callback is invoked if the client endpoint (in the
/// guest VM) asynchronously fails to connect even though the
/// PnP device was located.
///
/// See \ref state_model for more information.
///\code
typedef
_Function_class_(EVT_VMB_CHANNEL_PNP_FAILURE)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
EVT_VMB_CHANNEL_PNP_FAILURE(
    _In_  VMBCHANNEL    Channel,
    _In_  NTSTATUS      FailureStatus
    );

typedef EVT_VMB_CHANNEL_PNP_FAILURE *PFN_VMB_CHANNEL_PNP_FAILURE;
///\endcode

/// Sets a client channel's target by interface type and instance IDs. If this
/// is called, KMCL will use PnP to find the vmbus PDO corresponding to the
/// provided interface. The InterfaceType GUID identifies the
/// type of channel, and specifically the protocol that is used
/// with the channel.  The InterfaceInstance identifies a
/// specific instance of the service.  If, for instance, you
/// have two paravirtual network interfaces, they will have the
/// same InterfaceType but different InterfaceInstances.
///
/// \param Channel A pointer to a channel.
/// \param InterfaceType A pointer to the interface type GUID.
/// \param InterfaceInstance A pointer to the instance type GUID. If not
///     provided, any instance with the provided type will be accepted.
/// \param EvtChannelPnpFailure A pointer to an event callback to call if the
///     device asynchronously fails to connect even though the PnP device was
///     located.
///
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
///\code
typedef
NTSTATUS
FN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PNP(
    _In_ VMBCHANNEL Channel,
    _In_ LPCGUID InterfaceType,
    _In_opt_ LPCGUID InterfaceInstance,
    _In_opt_ PFN_VMB_CHANNEL_PNP_FAILURE PnpFailureCallback
    );

typedef FN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PNP *PFN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PNP;
FN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PNP VmbClientChannelInitSetTargetPnp;
///\endcode


/// Sets the primary channel for a subordinate channel during initialization.
/// The channel may only be enabled while the primary channel is open, and the
/// channel will be automatically disabled when the primary channel closes.
/// Additionally, the channel will pause and resume when the primary channel
/// does so.
///
/// \param Channel A pointer to a channel.
/// \param PrimaryChannel A pointer to the primary channel to assign.
/// \param SubChannelIndex The subchannel index to use for this channel.
///
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
/// \return STATUS_INVALID_PARAMETER_2 - PrimaryChannel paramter is already set
/// \return STATUS_INVALID_PARAMETER_3 - SubChannelIndex parameter must be greater than 0
///\code
typedef
NTSTATUS
FN_VMB_CHANNEL_INIT_SET_PRIMARY_CHANNEL(
    _In_ VMBCHANNEL Channel,
    _In_ VMBCHANNEL PrimaryChannel,
    _In_range_(>, 0) UINT16 SubChannelIndex
    );

typedef FN_VMB_CHANNEL_INIT_SET_PRIMARY_CHANNEL *PFN_VMB_CHANNEL_INIT_SET_PRIMARY_CHANNEL;
FN_VMB_CHANNEL_INIT_SET_PRIMARY_CHANNEL VmbChannelInitSetPrimaryChannel;
///\endcode

/// Initializes a KMCL channel with the provided parameters and callbacks. The
/// caller must call VmbSizeofChannel() to determine the required buffer size.
/// Consider using VmbChannelAllocate() instead.
///
/// The channel must be uninitialized with VmbChannelCleanup.
///
/// \param ParentDeviceObject A pointer to the parent WDF device.
/// \param IsServer Whether the new channel should be a server endpoint.
/// \param Channel A pointer to memory to use as the channel object.
/// \param BufferSize The size of the channel buffer in bytes. Must be at least
///     VmbSizeofChannel().
///\code
typedef
NTSTATUS
FN_VMB_CHANNEL_INITIALIZE(
    _In_ PDEVICE_OBJECT ParentDeviceObject,
    _In_ BOOLEAN IsServer,
    _Out_writes_bytes_(BufferSize) VMBCHANNEL Channel,
    _In_ ULONG BufferSize
    );

typedef FN_VMB_CHANNEL_INITIALIZE *PFN_VMB_CHANNEL_INITIALIZE;
FN_VMB_CHANNEL_INITIALIZE VmbChannelInitialize;
///\endcode


/// Returns the size of the buffer necessary for a successful call to
/// VmbChannelInitialize.
///
/// \returns The size of the channel object.
///\code
typedef
ULONG
FN_VMB_SIZEOF_CHANNEL(
    VOID
    );

typedef FN_VMB_SIZEOF_CHANNEL *PFN_VMB_SIZEOF_CHANNEL;
FN_VMB_SIZEOF_CHANNEL VmbSizeofChannel;
///\endcode


/// This routine calculates the maximum allowable number of TSC cycles that can
/// be used for running DPCs within the window that we track.
///
/// \param Channel A pointer to a channel.
/// \param CpuPercentage The percentage of the window time to allow in DPC
///     processing.
///\code
typedef
VOID
FN_VMB_CHANNEL_SET_ALLOWABLE_DPC_CPU_USAGE(
    _In_                VMBCHANNEL  Channel,
    _In_range_(1, 100)  UINT8       CpuPercentage
    );

typedef FN_VMB_CHANNEL_SET_ALLOWABLE_DPC_CPU_USAGE *PFN_VMB_CHANNEL_SET_ALLOWABLE_DPC_CPU_USAGE;
FN_VMB_CHANNEL_SET_ALLOWABLE_DPC_CPU_USAGE VmbChannelSetAllowableDpcCpuUsage;
///\endcode


/// Sets the target processor index for incoming interrupts.
///
/// \param Channel A pointer to a channel.
/// \param ProcessorIndex The NT processor index.
///
/// \return STATUS_INVALID_PARAMETER_1 - channel parameter was invalid or in an invalid state(Disabled)
///\code
typedef
NTSTATUS
FN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PROCESSOR_INDEX(
    _In_ VMBCHANNEL Channel,
    _In_ ULONG ProcessorIndex
    );

typedef FN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PROCESSOR_INDEX *PFN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PROCESSOR_INDEX;
FN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PROCESSOR_INDEX VmbClientChannelInitSetTargetProcessorIndex;
///\endcode


typedef struct _KMCL_SERVER_ONLY_METHODS {
    PFN_VMB_CHANNEL_MAP_GPADL                                        VmbChannelMapGpadl;
    PFN_VMB_CHANNEL_RESTORE_FROM_BUFFER                              VmbChannelRestoreFromBuffer;
    PFN_VMB_CHANNEL_SAVE_BEGIN                                       VmbChannelSaveBegin;
    PFN_VMB_CHANNEL_SAVE_CONTINUE                                    VmbChannelSaveContinue;
    PFN_VMB_CHANNEL_SAVE_END                                         VmbChannelSaveEnd;
    PFN_VMB_CHANNEL_UNMAP_GPADL                                      VmbChannelUnmapGpadl;
    PFN_VMB_CONVERT_VMBUS_HANDLE_TO_KERNEL_HANDLE                    VmbConvertVmbusHandleToKernelHandle;
    PFN_VMB_PACKET_RESTORE                                           VmbPacketRestore;
    PFN_VMB_SERVER_CHANNEL_INIT_SET_FLAGS                            VmbServerChannelInitSetFlags;
    PFN_VMB_SERVER_CHANNEL_INIT_SET_MMIO_MEGABYTES                   VmbServerChannelInitSetMmioMegabytes;
    PFN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS    VmbServerChannelInitSetSaveRestorePacketCallbacks;
    PFN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_INTERFACE_ID              VmbServerChannelInitSetTargetInterfaceId;
    PFN_VMB_SERVER_CHANNEL_INIT_SET_TARGET_VTL                       VmbServerChannelInitSetTargetVtl;
    PFN_VMB_SERVER_CHANNEL_INIT_SET_VMBUS_HANDLE                     VmbServerChannelInitSetVmbusHandle;

} KMCL_SERVER_ONLY_METHODS;

#ifdef __cplusplus

typedef struct _KMCL_SERVER_ONLY_METHODS_V5 : KMCL_SERVER_ONLY_METHODS {

#else

typedef struct _KMCL_SERVER_ONLY_METHODS_V5 {
    KMCL_SERVER_ONLY_METHODS;

#endif

    PFN_VMB_SERVER_CHANNEL_INIT_SET_SAVE_RESTORE_PACKET_CALLBACKS_EX    VmbServerChannelInitSetSaveRestorePacketCallbacksEx;

} KMCL_SERVER_ONLY_METHODS_V5, *PKMCL_SERVER_ONLY_METHODS_V5;

C_ASSERT(sizeof(KMCL_SERVER_ONLY_METHODS_V5) <= MAXUSHORT);


#define KMCL_CLIENT_INTERFACE_VERSION_V1     1
#define KMCL_CLIENT_INTERFACE_VERSION_V2     2
#define KMCL_CLIENT_INTERFACE_VERSION_V3     3
#define KMCL_CLIENT_INTERFACE_VERSION_V4     4
#define KMCL_CLIENT_INTERFACE_VERSION_V5     5
#define KMCL_CLIENT_INTERFACE_VERSION_LATEST KMCL_CLIENT_INTERFACE_VERSION_V5
/* 4aecb860-e161-42bb-a5ca-77f3a9645905 */
DEFINE_GUID(KMCL_CLIENT_INTERFACE_TYPE, 0x4aecb860, 0xe161, 0x42bb, 0xa5, 0xca, 0x77, 0xf3, 0xa9, 0x64, 0x59, 0x05);

#ifdef __cplusplus

typedef struct _KMCL_CLIENT_INTERFACE_V1 : INTERFACE {

#else

typedef struct _KMCL_CLIENT_INTERFACE_V1 {
    INTERFACE;

#endif

    PFN_VMB_CHANNEL_ALLOCATE                                         VmbChannelAllocate;
    PFN_VMB_CHANNEL_CLEANUP                                          VmbChannelCleanup;
    PFN_VMB_CHANNEL_CREATE_GPADL_FROM_BUFFER                         VmbChannelCreateGpadlFromBuffer;
    PFN_VMB_CHANNEL_CREATE_GPADL_FROM_MDL                            VmbChannelCreateGpadlFromMdl;
    PFN_VMB_CHANNEL_DELETE_GPADL                                     VmbChannelDeleteGpadl;
    PFN_VMB_CHANNEL_DISABLE                                          VmbChannelDisable;
    PFN_VMB_CHANNEL_ENABLE                                           VmbChannelEnable;
    PFN_VMB_CHANNEL_GET_INTERFACE_INSTANCE                           VmbChannelGetInterfaceInstance;
    PFN_VMB_CHANNEL_GET_MMIO_SPACE                                   VmbChannelGetMmioSpace;
    PFN_VMB_CHANNEL_GET_POINTER                                      VmbChannelGetPointer;
    PFN_VMB_CHANNEL_INIT_SET_CLIENT_CONTEXT_SIZE                     VmbChannelInitSetClientContextSize;
    PFN_VMB_CHANNEL_INIT_SET_FLAGS                                   VmbChannelInitSetFlags;
    PFN_VMB_CHANNEL_INIT_SET_FRIENDLY_NAME                           VmbChannelInitSetFriendlyName;
    PFN_VMB_CHANNEL_INIT_SET_MAXIMUM_EXTERNAL_DATA                   VmbChannelInitSetMaximumExternalData;
    PFN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_SIZE                     VmbChannelInitSetMaximumPacketSize;
    PFN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS                VmbChannelInitSetProcessPacketCallbacks;
    PFN_VMB_CHANNEL_INIT_SET_STATE_CHANGE_CALLBACKS                  VmbChannelInitSetStateChangeCallbacks;
    PFN_VMB_CHANNEL_PACKET_COMPLETE                                  VmbChannelPacketComplete;
    PFN_VMB_CHANNEL_PACKET_DEFER_TO_PASSIVE                          VmbChannelPacketDeferToPassive;
    PFN_VMB_CHANNEL_PACKET_FAIL                                      VmbChannelPacketFail;
    PFN_VMB_CHANNEL_PACKET_GET_EXTERNAL_DATA                         VmbChannelPacketGetExternalData;
    PFN_VMB_CHANNEL_PAUSE                                            VmbChannelPause;
    PFN_VMB_CHANNEL_SEND_SYNCHRONOUS_REQUEST                         VmbChannelSendSynchronousRequest;
    PFN_VMB_CHANNEL_SET_INCOMING_PROCESSING_AT_PASSIVE               VmbChannelSetIncomingProcessingAtPassive;
    PFN_VMB_CHANNEL_SET_INTERRUPT_LATENCY                            VmbChannelSetInterruptLatency;
    PFN_VMB_CHANNEL_SET_POINTER                                      VmbChannelSetPointer;
    PFN_VMB_CHANNEL_SET_TRANSACTION_QUOTA                            VmbChannelSetTransactionQuota;
    PFN_VMB_CHANNEL_SIZEOF_PACKET                                    VmbChannelSizeofPacket;
    PFN_VMB_CHANNEL_START                                            VmbChannelStart;
    PFN_VMB_CLIENT_CHANNEL_INIT_SET_RING_BUFFER_PAGE_COUNT           VmbClientChannelInitSetRingBufferPageCount;
    PFN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PNP                       VmbClientChannelInitSetTargetPnp;
    PFN_VMB_PACKET_ALLOCATE                                          VmbPacketAllocate;
    PFN_VMB_PACKET_FREE                                              VmbPacketFree;
    PFN_VMB_PACKET_GET_CHANNEL                                       VmbPacketGetChannel;
    PFN_VMB_PACKET_GET_POINTER                                       VmbPacketGetPointer;
    PFN_VMB_PACKET_INITIALIZE                                        VmbPacketInitialize;
    PFN_VMB_PACKET_SEND                                              VmbPacketSend;
    PFN_VMB_PACKET_SEND_WITH_EXTERNAL_MDL                            VmbPacketSendWithExternalMdl;
    PFN_VMB_PACKET_SEND_WITH_EXTERNAL_PFNS                           VmbPacketSendWithExternalPfns;
    PFN_VMB_PACKET_SET_COMPLETION_ROUTINE                            VmbPacketSetCompletionRoutine;
    PFN_VMB_PACKET_SET_POINTER                                       VmbPacketSetPointer;

} KMCL_CLIENT_INTERFACE_V1, *PKMCL_CLIENT_INTERFACE_V1;

C_ASSERT(sizeof(KMCL_CLIENT_INTERFACE_V1) <= MAXUSHORT);


#ifdef __cplusplus

typedef struct _KMCL_CLIENT_INTERFACE_V2 : KMCL_CLIENT_INTERFACE_V1 {

#else

typedef struct _KMCL_CLIENT_INTERFACE_V2 {
    KMCL_CLIENT_INTERFACE_V1;

#endif

    PFN_VMB_CHANNEL_PACKET_GET_CLIENT_CONTEXT               VmbChannelPacketGetClientContext;
    PFN_VMB_CHANNEL_GET_TARGET_DEVICE_OBJECT                VmbChannelGetTargetDeviceObject;
    PFN_VMB_CHANNEL_GET_PARENT_DEVICE_OBJECT                VmbChannelGetParentDeviceObject;

} KMCL_CLIENT_INTERFACE_V2, *PKMCL_CLIENT_INTERFACE_V2;

C_ASSERT(sizeof(KMCL_CLIENT_INTERFACE_V2) <= MAXUSHORT);

#ifdef __cplusplus

typedef struct _KMCL_CLIENT_INTERFACE_V3 : KMCL_CLIENT_INTERFACE_V2 {

#else

typedef struct _KMCL_CLIENT_INTERFACE_V3 {
    KMCL_CLIENT_INTERFACE_V2;

#endif

    PFN_VMB_CHANNEL_INIT_SET_BOUNCE_BUFFER_SIZES            VmbChannelInitSetBounceBufferSizes;
    PFN_VMB_CHANNEL_ALLOCATE_BOUNCE_BUFFER                  VmbChannelAllocateBounceBuffer;
} KMCL_CLIENT_INTERFACE_V3, *PKMCL_CLIENT_INTERFACE_V3;

C_ASSERT(sizeof(KMCL_CLIENT_INTERFACE_V3) <= MAXUSHORT);


#ifdef __cplusplus

typedef struct _KMCL_CLIENT_INTERFACE_V4 : KMCL_CLIENT_INTERFACE_V3 {

#else

typedef struct _KMCL_CLIENT_INTERFACE_V4 {
    KMCL_CLIENT_INTERFACE_V3;

#endif
    PFN_VMB_CHANNEL_INIT_SET_MAXIMUM_PACKET_COUNT       VmbChannelInitSetMaximumPacketCount;
    PFN_VMB_CHANNEL_CREATE_GPADL_FROM_PFN_LIST          VmbChannelCreateGpadlFromPfnList;
} KMCL_CLIENT_INTERFACE_V4, *PKMCL_CLIENT_INTERFACE_V4;


C_ASSERT(sizeof(KMCL_CLIENT_INTERFACE_V4) <= MAXUSHORT);


#ifdef __cplusplus

typedef struct _KMCL_CLIENT_INTERFACE_V5 : KMCL_CLIENT_INTERFACE_V4 {

#else

typedef struct _KMCL_CLIENT_INTERFACE_V5 {
    KMCL_CLIENT_INTERFACE_V4;

#endif
    PFN_VMB_CHANNEL_INIT_SET_PRIMARY_CHANNEL                VmbChannelInitSetPrimaryChannel;
    PFN_VMB_CHANNEL_INITIALIZE                              VmbChannelInitialize;
    PFN_VMB_CHANNEL_SET_ALLOWABLE_DPC_CPU_USAGE             VmbChannelSetAllowableDpcCpuUsage;
    PFN_VMB_CLIENT_CHANNEL_INIT_SET_TARGET_PROCESSOR_INDEX  VmbClientChannelInitSetTargetProcessorIndex;
    PFN_VMB_SIZEOF_CHANNEL                                  VmbSizeofChannel;
    PFN_VMB_CHANNEL_INIT_SET_INLINE_PACKET_CONTEXT_SIZE     VmbChannelInitSetInlinePacketContextSize;
    PFN_VMB_PACKET_GET_INLINE_PACKET_CONTEXT_POINTER        VmbPacketGetInlinePacketContextPointer;
    PFN_VMB_CHANNEL_INIT_SET_PROCESS_PACKET_CALLBACKS_EX    VmbChannelInitSetProcessPacketCallbacksEx;
    PFN_VMB_PACKET_SET_COMPLETION_ROUTINE_EX                VmbPacketSetCompletionRoutineEx;

} KMCL_CLIENT_INTERFACE_V5, *PKMCL_CLIENT_INTERFACE_V5;


C_ASSERT(sizeof(KMCL_CLIENT_INTERFACE_V5) <= MAXUSHORT);


#define KMCL_SERVER_INTERFACE_VERSION_V1     1
/* Server interface versions 2 through 4 did not ship */
#define KMCL_SERVER_INTERFACE_VERSION_V5     5
#define KMCL_SERVER_INTERFACE_VERSION_LATEST KMCL_SERVER_INTERFACE_VERSION_V5
/* 83b21474-c5b9-4f65-b5e7-720c692bd371 */
DEFINE_GUID(KMCL_SERVER_INTERFACE_TYPE, 0x83b21474, 0xc5b9, 0x4f65, 0xb5, 0xe7, 0x72, 0x0c, 0x69, 0x2b, 0xd3, 0x71);

#ifdef __cplusplus

typedef struct _KMCL_SERVER_INTERFACE_V1 : KMCL_CLIENT_INTERFACE_V1, KMCL_SERVER_ONLY_METHODS {

#else

typedef struct _KMCL_SERVER_INTERFACE_V1 {
    KMCL_CLIENT_INTERFACE_V1;
    KMCL_SERVER_ONLY_METHODS;
#endif
} KMCL_SERVER_INTERFACE_V1, *PKMCL_SERVER_INTERFACE_V1;

C_ASSERT(sizeof(KMCL_SERVER_INTERFACE_V1) <= MAXUSHORT);

#ifdef __cplusplus

typedef struct _KMCL_SERVER_INTERFACE_V5 : KMCL_CLIENT_INTERFACE_V5, KMCL_SERVER_ONLY_METHODS {

#else

typedef struct _KMCL_SERVER_INTERFACE_V5 {
    KMCL_CLIENT_INTERFACE_V5;
    KMCL_SERVER_ONLY_METHODS_V5;
#endif
} KMCL_SERVER_INTERFACE_V5, *PKMCL_SERVER_INTERFACE_V5;

C_ASSERT(sizeof(KMCL_SERVER_INTERFACE_V5) <= MAXUSHORT);

#pragma warning(pop)
#endif // NTDDI_VERSION >=NTDDI_WINBLUE


