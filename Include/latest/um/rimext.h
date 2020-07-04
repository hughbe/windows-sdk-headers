/****************************************************************************
*                                                                           *
* rimext.h --        ApiSet Contract for ext-ms-win-ntuser-rim-l1           *
*                                                                           *
* Copyright (c) Microsoft Corporation. All rights reserved.                 *
*                                                                           *
****************************************************************************/

#pragma once
#ifndef _RIM_EXT_H_
#define _RIM_EXT_H_

#ifndef _RIM_MMOS_H_
#include <apiset.h>
#include <apisetcconv.h>
#endif

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
//#include <ntddkbd.h> later
//#include <ntddmou.h> later
#include <windows.h>
#pragma warning (disable : 4201)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define RIM_INPUT_TYPE_MOUSE    0x00000001
#define RIM_INPUT_TYPE_KEYBOARD 0x00000002
#define RIM_INPUT_TYPE_HID_PEN  0x00000004
#define RIM_INPUT_TYPE_HID_PTP  0x00000008
#define RIM_INPUT_TYPE_HID_TCH  0x00000010
#define RIM_INPUT_TYPE_HID_GEN  0x00000020

#define RIM_INPUT_TYPE_HID (RIM_INPUT_TYPE_HID_PEN |\
                            RIM_INPUT_TYPE_HID_PTP |\
                            RIM_INPUT_TYPE_HID_TCH)

#define RIM_INPUT_TYPE_ALL (RIM_INPUT_TYPE_MOUSE |\
                            RIM_INPUT_TYPE_KEYBOARD |\
                            RIM_INPUT_TYPE_HID |\
                            RIM_INPUT_TYPE_HID_GEN)

typedef struct _RIM_USAGE_ANDPAGE
{
    USHORT Usage;
    USHORT UsagePage;
} RIM_USAGE_AND_PAGE, *PRIM_USAGE_AND_PAGE;

#define RIM_DEVICE_CREATED          1
#define RIM_DEVICE_OPENED           2
#define RIM_DEVICE_CLOSED           3
#define RIM_DEVICE_DESTROYED        4
#define RIM_DEVICE_RESET            5

typedef BOOL (CALLBACK* RIMDEVCHANGECALLBACKPROC)(
    HANDLE hRim,
    HANDLE hRimDev,
    DWORD dwDeviceIdentity,
    DWORD dwCode,
    DWORD dwDeviceType,
    DWORD dwRimInputType,
    USHORT usage,
    USHORT usagePage,
    PVOID pvContext);

typedef struct tagRIMDEVCHANGECALLBACK
{
    HANDLE hRim;
    HANDLE hRimDev;
    DWORD dwCode;
    DWORD dwDeviceType;
    DWORD dwRimInputType;
    USHORT usage;
    USHORT usagePage;
    PVOID pContext;
} RIMDEVCHANGECALLBACK;

/*
 * RIM Raw Input Observer Usermode datastructures
 */

#define RIMOBSERVERFLAGS_NONE           0x0000
#define RIMOBSERVERFLAGS_OBSERVE_INPUT  0x0001
#define RIMOBSERVERFLAGS_SUPPRESS_INPUT 0x0002

typedef enum tagRIMOBSERVERMESSAGETYPE {
    RIMMSG_DATA,
    RIMMSG_ERR,
    RIMMSG_MAX = RIMMSG_ERR
} RIMOBSERVERMESSAGETYPE, *PRIMOBSERVERMESSAGETYPE;

typedef enum tagRIMOBSERVERERRORCODE {
    RIMERR_BUFFER_TOO_SMALL,
    RIMERR_INPUT_INTERCEPTED,
    RIMERR_DROPPED_INPUT,
    RIMERR_MAX = RIMERR_DROPPED_INPUT
} RIMOBSERVERERRORCODE, *PRIMOBSERVERERRORCODE;

typedef struct tagRIMOBSERVERMESSAGE {
    RIMOBSERVERMESSAGETYPE type;
    union {
        struct {
            HANDLE hRimDev;
            IO_STATUS_BLOCK iosb;
            DWORD dwInputType;
            PVOID pInputData;
        } data;
        struct {
            RIMOBSERVERERRORCODE code;
            DWORD dwInformation;
        } err;
    };
} RIMOBSERVERMESSAGE, *PRIMOBSERVERMESSAGE;

/*
 * Attribute queries
 *
 * From _KEYBOARD_ATTRIBUTES, _MOUSE_ATTRIBUTES_ in ntddkbt.h, ntddmou.h (for some reason
 * if I include ntddmou.h and just use the _MOUSE_ATTRIBUTES
 * he apiset compilation fails. Try to fix this later. -PravinS
 */

//
// NtDeviceIoControlFile Input/Output Buffer record structures for
// IOCTL_KEYBOARD_QUERY_TYPEMATIC/IOCTL_KEYBOARD_SET_TYPEMATIC.
//

typedef struct _RIM_KEYBOARD_TYPEMATIC_PARAMETERS {

    //
    // Unit identifier.  Specifies the device unit for which this
    // request is intended.
    //

    USHORT UnitId;

    //
    // Typematic rate, in repeats per second.
    //

    USHORT  Rate;

    //
    // Typematic delay, in milliseconds.
    //

    USHORT  Delay;

} RIM_KEYBOARD_TYPEMATIC_PARAMETERS, *PRIM_KEYBOARD_TYPEMATIC_PARAMETERS;

//
// NtDeviceIoControlFile OutputBuffer record structures for
// IOCTL_KEYBOARD_QUERY_ATTRIBUTES.
//

typedef struct _RIM_KEYBOARD_ID {
    UCHAR Type;       // Keyboard type
    UCHAR Subtype;    // Keyboard subtype (OEM-dependent value)
} RIM_KEYBOARD_ID, *PRIM_KEYBOARD_ID;

typedef struct _RIM_KEYBOARD_ATTRIBUTES {

    //
    // Keyboard ID value.  Used to distinguish between keyboard types.
    //

    RIM_KEYBOARD_ID KeyboardIdentifier;

    //
    // Scan code mode.
    //

    USHORT KeyboardMode;

    //
    // Number of function keys located on the keyboard.
    //

    USHORT NumberOfFunctionKeys;

    //
    // Number of LEDs located on the keyboard.
    //

    USHORT NumberOfIndicators;

    //
    // Total number of keys located on the keyboard.
    //

    USHORT NumberOfKeysTotal;

    //
    // Length of the typeahead buffer, in bytes.
    //

    ULONG  InputDataQueueLength;

    //
    // Minimum allowable values of keyboard typematic rate and delay.
    //

    RIM_KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMinimum;

    //
    // Maximum allowable values of keyboard typematic rate and delay.
    //

    RIM_KEYBOARD_TYPEMATIC_PARAMETERS KeyRepeatMaximum;

} RIM_KEYBOARD_ATTRIBUTES, *PRIM_KEYBOARD_ATTRIBUTES;

typedef struct _RIM_MOUSE_ATTRIBUTES
{
    // From _MOUSE_ATTRIBUTES_ in ntddmou.h (for some reason
    // if I include ntddmou.h and just use the _MOUSE_ATTRIBUTES
    // the apiset compilation fails. Try to fix this later.

    //
    // Mouse ID value.  Used to distinguish between mouse types.
    //

    USHORT MouseIdentifier;

    //
    // Number of buttons located on the mouse.
    //

    USHORT NumberOfButtons;

    //
    // Specifies the rate at which the hardware reports mouse input
    // (reports per second).  This may not be applicable for every mouse device.
    //

    USHORT SampleRate;

    //
    // Length of the readahead buffer, in bytes.
    //

    ULONG  InputDataQueueLength;
} RIM_MOUSE_ATTRIBUTES, *PRIM_MOUSE_ATTRIBUTES;

typedef struct _RIM_HID_ATTRIBUTES
{
    //
    // Vendor ID of the device.
    //

    USHORT VendorID;

    //
    // Product ID of the device.
    //

    USHORT ProductID;

    //
    // Version number of the device.
    //

    USHORT VersionNumber;

    //
    // Adapter LUID of the display that is mapped to this HID device.
    //

    LUID AdapterLuid;

    //
    // Video Target ID of the display that is mapped to this HID device.
    //

    DWORD VidPnTargetId;
} RIM_HID_ATTRIBUTES, *PRIM_HID_ATTRIBUTES;

typedef struct _RIM_POINTER_ATTRIBUTES
{
    HANDLE PointerDevice;
} RIM_POINTER_ATTRIBUTES, *PRIM_POINTER_ATTRIBUTES;

typedef struct _RIM_DEVICE_ATTRIBUTES
{
    BOOLEAN IsInjectionDevice;
} RIM_DEVICE_ATTRIBUTES, *PRIM_DEVICE_ATTRIBUTES;

#define RIM_DEVICE_PROP_KEYBOARD 1
#define RIM_DEVICE_PROP_MOUSE 2
#define RIM_DEVICE_PROP_HID 3
#define RIM_DEVICE_PROP_PNP_INSTANCE_PATH 4
#define RIM_DEVICE_PROP_POINTER 5
#define RIM_DEVICE_PROP_DEVICE 6

typedef struct _RIM_PNP_INSTANCE_PATH
{
    ULONG cbBufferSize;
    LPVOID pData;
} RIM_PNP_INSTANCE_PATH;

typedef struct RIM_DEVICE_PROPERTIES
{
    DWORD dwDevicePropType;
    union
    {
        RIM_KEYBOARD_ATTRIBUTES keyboard;
        RIM_MOUSE_ATTRIBUTES mouse;
        RIM_HID_ATTRIBUTES hid;
        RIM_PNP_INSTANCE_PATH pnpInstancePath;
        RIM_POINTER_ATTRIBUTES pointer;
        RIM_DEVICE_ATTRIBUTES device;
    };
} RIMDEVICEPROPERTIES, *PRIMDEVICEPROPERTIES;

#ifndef _POINTERINFOUNION_DEFINED_
#define _POINTERINFOUNION_DEFINED_
typedef union
{
    POINTER_INFO        PointerInfo;
    POINTER_TOUCH_INFO  TouchInfo;
    POINTER_PEN_INFO    PenInfo;
} POINTERINFOUNION;
#endif // _POINTERINFOUNION_DEFINED_

#ifndef _POINTEREVENTINT_DEFINED_
#define _POINTEREVENTINT_DEFINED_
typedef struct tagPOINTEREVENTINT
{
    WORD                wCursorId;
    USHORT              usLinkCollectionIndex;
    POINTERINFOUNION    Info;
    BOOL                bMobileTestSyncFlag;   // Set if HID_USAGE_TESTSYNCFLAG/POINTER_DEVICE_USAGE_MOBILE_TESTSYNCFLAG is on (0xFE)
    BOOL                bMobileTestInjectFlag; // Set if HID_USAGE_TESTINJECTFLAG/POINTER_DEVICE_USAGE_MOBILE_TESTINJECTFLAG is on (0xFF)
    GUID                ProprietaryId;         // A unique id for the external source of the pointer input (e.g. physical pen serial number)
    BOOL                bSkipActivation;       // Determines if we should skip the logic responsible for activating destination window due to
                                               // pointer message (xxxPointerActivateInternal)
    BOOL                bTouchpadShellGesture; // Determines if this input should be processed as a Touchpad Shell Gesture
} POINTEREVENTINT, *PPOINTEREVENTINT;
#endif // _POINTEREVENTINT_DEFINED_

typedef struct tagRIMPOINTERINFONODE {
    DWORD           dwRawDataIndex;  // One-based index of this input's raw data block
                                     // in the frame's list of raw data blocks
    POINTEREVENTINT PointerEventInt; // Embedded structure containing union of info structs
} RIMPOINTERINFONODE;

typedef struct tagRIMPOINTERRAWDATA {
    DWORD                     dwIndex;     // One-based index of this block in a singly linked
                                           // list associated with a frame
    DWORD                     cbRawData;   // Count of bytes of the actual raw data
    PBYTE                     pRawData;    // Address of actual raw data
    struct tagRIMPOINTERRAWDATA* pNextRawData; // Address of next POINTERRAWDATA structure, if any, in this linked list
} RIMPOINTERRAWDATA;

#ifndef POINTER_STRUCTURES_INTERNAL
#define POINTER_STRUCTURES_INTERNAL

typedef struct tagTELEMETRY_POINTER_FRAME_TIMES {
    UINT64 qpcKernelInputRead; // When the digitizer driver read the input report from the digitizer driver
    UINT64 qpcHostInputSend; // (Container scenarios only) When the host sent the input to the container
    UINT64 qpcContainerInputReceive; // (Container scenarios only) When the container received the input from the host
    UINT64 hostPerformanceFrequency; // (Container scenarios only) Performance frequency of the host. Used to convert
                                     // host timestamps to the container timeline so latencies can be computed in the
                                     // container.
    UINT64 qpcFrameQueued;           // timestamp when the pointer frame gets queued
}TELEMETRY_POINTER_FRAME_TIMES, *PTELEMETRY_POINTER_FRAME_TIMES;

#endif

struct RIMCOMPLETEFRAME {
    DWORD           cbSize;         // Size of the RIMCOMPLETEFRAME
    LIST_ENTRY      nextFrame;      // link to next RIMCOMPLETEFRAME
    DWORD           cPointers;      // Count of pointers in this frame
    DWORD           cRawDataBlocks; // Count of raw data blocks associated with this frame
    HANDLE          hRimDev;        // Handle to RimDev
    TELEMETRY_POINTER_FRAME_TIMES frameTimes; // QPCs used by interaction latency telemetry to compute performance metrics
    BOOL            bDevInjection;  // If RimDev is a an injection device
    BOOL            bButtonOnly;    // Used by TouchPad. (fButtonOnly)
    BOOL            bAutoRepeatFrame;// This is an auto repeat frame.
    DWORD           dwRimTickCount; // TickCount when this frame was signalled
                                    // by the RIM.
    ULONGLONG       ullRimQpc;      // QPC count that matches to dwRimTickCount.
    RIMPOINTERINFONODE *pPrimaryPointerInfoNode;
    RIMPOINTERRAWDATA* pRawDataList;   // Address of first node in a singly linked list of raw
                                    // data blocks associated with this frame
    __field_ecount(cPointers) RIMPOINTERINFONODE*  pPointerInfoList; // Array[cPointers] of
                                                                     // RIMPOINTERINFONODE
};

typedef struct _RIMIDE_GENERIC_HID_DEVICE_PROPERTIES {

    USHORT          VendorID;
    USHORT          ProductID;
    USHORT          VersionNumber;

    GUID            ContainerID;

    HANDLE          DeviceParent;

    _Field_size_bytes_full_(ReportDescriptorLength)
    PUCHAR          ReportDescriptor;
    USHORT          ReportDescriptorLength;

    // TODO: Update API to take in a callback to a user
    // defined get feature routine instead of having a
    // static field. This is temporary to enable max count
    // and other required features to be reported.
    _Field_size_bytes_full_(FeatureReportLength)
    PUCHAR          FeatureReport;
    USHORT          FeatureReportLength;

} RIMIDE_GENERIC_HID_DEVICE_PROPERTIES, *PRIMIDE_GENERIC_HID_DEVICE_PROPERTIES;

#if !defined(_BUILD_RIM_) && !defined(_CONVERGED_BASE_SYS_DRIVER_) && !defined(_CONVERGED_WINDOWS_SYS_DRIVER_) && !defined(_CONVERGED_MIN_SYS_DRIVER_)

WINUSERAPI
NTSTATUS
WINAPI
RIMRegisterForInput(
    _In_ DWORD dwInputType,
    _In_opt_ PUNICODE_STRING pusDeviceName,
    _In_opt_ DWORD cRimUsages,
    _In_opt_ RIM_USAGE_AND_PAGE* pRimUsages,
    _In_ HANDLE hPnpNotificationEvent,
    _In_ HANDLE hTimer,
    _In_ HANDLE hAutoRepeatTimer,
    _In_ PVOID pContext,
    _In_opt_ RIMDEVCHANGECALLBACKPROC pfnRimDevChangeCbProc,
    _Out_ PHANDLE phRimHandle
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMReadInput(
    _In_ HANDLE hRimHandle,
    _Inout_ PVOID* ppBuffer,
    _In_ ULONG ulLengthToRead,
    _In_ HANDLE hReadCompletionEvent,
    _Out_ PHANDLE phRimDevice,
    _Out_ PDWORD pdwInputTypeRead,
    _Inout_ PIO_STATUS_BLOCK pioSb
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMAddInputObserver(
    _In_reads_bytes_(dwBufferSize) PVOID pBuffer,
    _In_ DWORD dwBufferSize,
    _In_ HANDLE hInputReadyEvent,
    _In_ DWORD dwInputType,
    _In_ DWORD dwUsagePage,
    _In_ DWORD dwUsage,
    _In_ DWORD dwFlags,
    _Out_ PHANDLE phInputObserver
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMUpdateInputObserverRegistration(
    _In_ HANDLE hInputObserver,
    _In_ DWORD dwFlags,
    _In_reads_bytes_opt_(dwBufferSize) PVOID pBuffer,
    _In_opt_ DWORD dwBufferSize
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMRemoveInputObserver(
    _In_ HANDLE hInputObserver
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMObserveNextInput(
    _In_ HANDLE hInputObserver
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMGetDevicePreparsedDataLockfree(
    _In_ HANDLE hRimDev,
    _Out_writes_bytes_opt_(*pdwBufferSize) PVOID pBuffer,
    _Inout_ PDWORD pdwBufferSize
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMGetDevicePreparsedData(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _Out_writes_bytes_opt_(*pdwBufferSize) PVOID pBuffer,
    _Inout_ PDWORD pdwBufferSize
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMGetDevicePropertiesLockfree(
    _In_ HANDLE hRimDev,
    _Out_ PRIMDEVICEPROPERTIES pRimDevProps
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMGetDeviceProperties(
    _In_ HANDLE hRimHandle,
    _In_ HANDLE hRimDev,
    _Out_ PRIMDEVICEPROPERTIES pRimDevProps
    );




WINUSERAPI
VOID
WINAPI
RIMFreeInputBuffer(
    _In_ HANDLE hRimHandle,
    _In_ PVOID pvInputBuffer
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMOnPnpNotification(
    _In_ HANDLE hRimHandle
    );






WINUSERAPI
NTSTATUS
WINAPI
RIMUnregisterForInput(
    _In_ HANDLE hRimHandle
    );










#endif // _BUILD_RIM_ && *CONVERGED*

#ifndef POINTER_STRUCTURES
#define POINTER_STRUCTURES

enum tagPOINTER_INPUT_TYPE {
    PT_POINTER  = 0x00000001,   // Generic pointer
    PT_TOUCH    = 0x00000002,   // Touch
    PT_PEN      = 0x00000003,   // Pen
    PT_MOUSE    = 0x00000004,   // Mouse
    PT_TOUCHPAD = 0x00000005,   // Touchpad
};

typedef enum tagPOINTER_BUTTON_CHANGE_TYPE {
    POINTER_CHANGE_NONE,
    POINTER_CHANGE_FIRSTBUTTON_DOWN,
    POINTER_CHANGE_FIRSTBUTTON_UP,
    POINTER_CHANGE_SECONDBUTTON_DOWN,
    POINTER_CHANGE_SECONDBUTTON_UP,
    POINTER_CHANGE_THIRDBUTTON_DOWN,
    POINTER_CHANGE_THIRDBUTTON_UP,
    POINTER_CHANGE_FOURTHBUTTON_DOWN,
    POINTER_CHANGE_FOURTHBUTTON_UP,
    POINTER_CHANGE_FIFTHBUTTON_DOWN,
    POINTER_CHANGE_FIFTHBUTTON_UP,
} POINTER_BUTTON_CHANGE_TYPE;

typedef struct tagPOINTER_INFO {
    POINTER_INPUT_TYPE    pointerType;
    UINT32          pointerId;
    UINT32          frameId;
    POINTER_FLAGS   pointerFlags;
    HANDLE          sourceDevice;
    HWND            hwndTarget;
    POINT           ptPixelLocation;
    POINT           ptHimetricLocation;
    POINT           ptPixelLocationRaw;
    POINT           ptHimetricLocationRaw;
    DWORD           dwTime;
    UINT32          historyCount;
    INT32           InputData;
    DWORD           dwKeyStates;
    UINT64          PerformanceCount;
    POINTER_BUTTON_CHANGE_TYPE ButtonChangeType;
} POINTER_INFO;

typedef UINT32 TOUCH_FLAGS;
#define TOUCH_FLAG_NONE                 0x00000000 // Default

typedef UINT32 TOUCH_MASK;
#define TOUCH_MASK_NONE                 0x00000000 // Default - none of the optional fields are valid
#define TOUCH_MASK_CONTACTAREA          0x00000001 // The rcContact field is valid
#define TOUCH_MASK_ORIENTATION          0x00000002 // The orientation field is valid
#define TOUCH_MASK_PRESSURE             0x00000004 // The pressure field is valid

typedef struct tagPOINTER_TOUCH_INFO {
    POINTER_INFO    pointerInfo;
    TOUCH_FLAGS     touchFlags;
    TOUCH_MASK      touchMask;
    RECT            rcContact;
    RECT            rcContactRaw;
    UINT32          orientation;
    UINT32          pressure;
} POINTER_TOUCH_INFO;

typedef UINT32 PEN_FLAGS;
#define PEN_FLAG_NONE                   0x00000000 // Default
#define PEN_FLAG_BARREL                 0x00000001 // The barrel button is pressed
#define PEN_FLAG_INVERTED               0x00000002 // The pen is inverted
#define PEN_FLAG_ERASER                 0x00000004 // The eraser button is pressed

typedef UINT32 PEN_MASK;
#define PEN_MASK_NONE                   0x00000000 // Default - none of the optional fields are valid
#define PEN_MASK_PRESSURE               0x00000001 // The pressure field is valid
#define PEN_MASK_ROTATION               0x00000002 // The rotation field is valid
#define PEN_MASK_TILT_X                 0x00000004 // The tiltX field is valid
#define PEN_MASK_TILT_Y                 0x00000008 // The tiltY field is valid

typedef struct tagPOINTER_PEN_INFO {
    POINTER_INFO    pointerInfo;
    PEN_FLAGS       penFlags;
    PEN_MASK        penMask;
    UINT32          pressure;
    UINT32          rotation;
    INT32           tiltX;
    INT32           tiltY;
} POINTER_PEN_INFO;

#define POINTER_FLAG_NONE               0x00000000 // Default
#define POINTER_FLAG_NEW                0x00000001 // New pointer
#define POINTER_FLAG_INRANGE            0x00000002 // Pointer has not departed
#define POINTER_FLAG_INCONTACT          0x00000004 // Pointer is in contact
#define POINTER_FLAG_FIRSTBUTTON        0x00000010 // Primary action
#define POINTER_FLAG_SECONDBUTTON       0x00000020 // Secondary action
#define POINTER_FLAG_THIRDBUTTON        0x00000040 // Third button
#define POINTER_FLAG_FOURTHBUTTON       0x00000080 // Fourth button
#define POINTER_FLAG_FIFTHBUTTON        0x00000100 // Fifth button
#define POINTER_FLAG_PRIMARY            0x00002000 // Pointer is primary
#define POINTER_FLAG_CONFIDENCE         0x00004000 // Pointer is considered unlikely to be accidental
#define POINTER_FLAG_CANCELED           0x00008000 // Pointer is departing in an abnormal manner
#define POINTER_FLAG_DOWN               0x00010000 // Pointer transitioned to down state (made contact)
#define POINTER_FLAG_UPDATE             0x00020000 // Pointer update
#define POINTER_FLAG_UP                 0x00040000 // Pointer transitioned from down state (broke contact)
#define POINTER_FLAG_WHEEL              0x00080000 // Vertical wheel
#define POINTER_FLAG_HWHEEL             0x00100000 // Horizontal wheel

typedef struct tagUSAGE_PROPERTIES {
    USHORT level;
    USHORT page;
    USHORT usage;
    INT32 logicalMinimum;
    INT32 logicalMaximum;
    USHORT unit;
    USHORT exponent;
    BYTE   count;
    INT32 physicalMinimum;
    INT32 physicalMaximum;
}USAGE_PROPERTIES, *PUSAGE_PROPERTIES;

typedef struct tagPOINTER_TYPE_INFO {
    POINTER_INPUT_TYPE  type;
    union{
        POINTER_TOUCH_INFO touchInfo;
        POINTER_PEN_INFO   penInfo;
    }POINTER_CATEGORY;
}POINTER_TYPE_INFO, *PPOINTER_TYPE_INFO;

typedef struct tagINPUT_INJECTION_VALUE {
    USHORT page;
    USHORT usage;
    INT32  value;
    USHORT index;
}INPUT_INJECTION_VALUE, *PINPUT_INJECTION_VALUE;

#endif

WINUSERAPI
BOOL
WINAPI
InitializeInputDeviceInjection(
    _In_ USHORT page,
    _In_ USHORT caUsage,
    _In_reads_(cUsages) CONST PUSAGE_PROPERTIES usages,
    _In_ ULONG cUsages,
    _In_ HMONITOR monitor,
    _In_ DWORD visualMode,
    _Out_writes_(1) HANDLE* device
    );


WINUSERAPI
BOOL
WINAPI
InitializePointerDeviceInjection(
    _In_ POINTER_INPUT_TYPE type,
    _In_ ULONG contactCount,
    _In_ HMONITOR monitor,
    _In_ DWORD visualMode,
    _Out_writes_(1) HANDLE* device
    );


WINUSERAPI
BOOL
WINAPI
RemoveInjectionDevice(
    _In_ HANDLE hDevice
    );


WINUSERAPI
BOOL
WINAPI
SetFeatureReportResponse(
    _In_ HANDLE device,
    _In_reads_(count) CONST PINPUT_INJECTION_VALUE values,
    _In_ UINT32 count
    );


WINUSERAPI
BOOL
WINAPI
InjectDeviceInput(
    _In_ HANDLE device,
    _In_reads_(count) CONST PINPUT_INJECTION_VALUE values,
    _In_ UINT32 count
    );


WINUSERAPI
BOOL
WINAPI
InjectMouseInput(
    _In_reads_(count) CONST PMOUSEINPUT pMouseInput,
    _In_ UINT32 count
    );


WINUSERAPI
BOOL
WINAPI
InjectKeyboardInput(
    _In_reads_(count) CONST PKEYBDINPUT pKeyboardInput,
    _In_ UINT32 count
    );


WINUSERAPI
BOOL
WINAPI
InjectPointerInput(
    _In_ HANDLE device,
    _In_reads_(count) CONST POINTER_TYPE_INFO* pointerInfo,
    _In_ UINT32 count
    );


WINUSERAPI
BOOL
WINAPI
InitializePointerDeviceInjectionEx(
    _In_ POINTER_INPUT_TYPE type,
    _In_ ULONG contactCount,
    _In_ HMONITOR monitor,
    _In_ DWORD visualMode,
    _In_ DWORD workspaceId,
    _Out_writes_(1) HANDLE* device
    );


WINUSERAPI
BOOL
WINAPI
InitializeGenericHidInjection(
    _In_ PRIMIDE_GENERIC_HID_DEVICE_PROPERTIES pDeviceProperties,
    _Out_writes_(1) HANDLE* phDevice
    );


WINUSERAPI
BOOL
WINAPI
InjectGenericHidInput(
    _In_ HANDLE hDevice,
    _In_reads_(ulInputReportLength) CONST PUCHAR pInputReport,
    _In_ ULONG ulInputReportLength
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMSetExtendedDeviceProperty(
    _In_ HANDLE hRimDev,
    _In_reads_bytes_(dwPropSize) PVOID pProperty,
    _In_ DWORD dwPropSize
    );


WINUSERAPI
NTSTATUS
WINAPI
RIMQueryDevicePath(
    _In_ PUNICODE_STRING pusDevicePath,
    _Out_ PHANDLE phRimDev
    );


#ifdef __cplusplus
}
#endif

#endif // _RIM_EXT_H_


#ifndef ext_ms_win_ntuser_rim_l1_2_0_query_routines
#define ext_ms_win_ntuser_rim_l1_2_0_query_routines



//
//Private Extension API Query Routines
//

#ifdef __cplusplus
extern "C" {
#endif

BOOLEAN
__stdcall
IsRIMRegisterForInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMReadInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMAddInputObserverPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMUpdateInputObserverRegistrationPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMRemoveInputObserverPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMObserveNextInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMGetDevicePreparsedDataLockfreePresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMGetDevicePreparsedDataPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMGetDevicePropertiesLockfreePresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMGetDevicePropertiesPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMFreeInputBufferPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMOnPnpNotificationPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMUnregisterForInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInitializeInputDeviceInjectionPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInitializePointerDeviceInjectionPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRemoveInjectionDevicePresent(
    VOID
    );

BOOLEAN
__stdcall
IsSetFeatureReportResponsePresent(
    VOID
    );

BOOLEAN
__stdcall
IsInjectDeviceInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInjectMouseInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInjectKeyboardInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInjectPointerInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInitializePointerDeviceInjectionExPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInitializeGenericHidInjectionPresent(
    VOID
    );

BOOLEAN
__stdcall
IsInjectGenericHidInputPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMSetExtendedDevicePropertyPresent(
    VOID
    );

BOOLEAN
__stdcall
IsRIMQueryDevicePathPresent(
    VOID
    );

#ifdef __cplusplus
}
#endif

#endif // endof guard

