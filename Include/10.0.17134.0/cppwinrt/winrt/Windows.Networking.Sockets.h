// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Background.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::ControlChannelTriggerId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->get_ControlChannelTriggerId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::ServerKeepAliveIntervalInMinutes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->get_ServerKeepAliveIntervalInMinutes(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::ServerKeepAliveIntervalInMinutes(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->put_ServerKeepAliveIntervalInMinutes(value));
}

template <typename D> uint32_t consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::CurrentKeepAliveIntervalInMinutes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->get_CurrentKeepAliveIntervalInMinutes(&value));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::TransportObject() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->get_TransportObject(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTrigger consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::KeepAliveTrigger() const
{
    Windows::ApplicationModel::Background::IBackgroundTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->get_KeepAliveTrigger(put_abi(trigger)));
    return trigger;
}

template <typename D> Windows::ApplicationModel::Background::IBackgroundTrigger consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::PushNotificationTrigger() const
{
    Windows::ApplicationModel::Background::IBackgroundTrigger trigger{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->get_PushNotificationTrigger(put_abi(trigger)));
    return trigger;
}

template <typename D> void consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::UsingTransport(Windows::Foundation::IInspectable const& transport) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->UsingTransport(get_abi(transport)));
}

template <typename D> Windows::Networking::Sockets::ControlChannelTriggerStatus consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::WaitForPushEnabled() const
{
    Windows::Networking::Sockets::ControlChannelTriggerStatus channelTriggerStatus{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->WaitForPushEnabled(put_abi(channelTriggerStatus)));
    return channelTriggerStatus;
}

template <typename D> void consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::DecreaseNetworkKeepAliveInterval() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->DecreaseNetworkKeepAliveInterval());
}

template <typename D> void consume_Windows_Networking_Sockets_IControlChannelTrigger<D>::FlushTransport() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger)->FlushTransport());
}

template <typename D> bool consume_Windows_Networking_Sockets_IControlChannelTrigger2<D>::IsWakeFromLowPowerSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTrigger2)->get_IsWakeFromLowPowerSupported(&value));
    return value;
}

template <typename D> Windows::Networking::Sockets::ControlChannelTrigger consume_Windows_Networking_Sockets_IControlChannelTriggerEventDetails<D>::ControlChannelTrigger() const
{
    Windows::Networking::Sockets::ControlChannelTrigger value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTriggerEventDetails)->get_ControlChannelTrigger(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::ControlChannelTrigger consume_Windows_Networking_Sockets_IControlChannelTriggerFactory<D>::CreateControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes) const
{
    Windows::Networking::Sockets::ControlChannelTrigger notificationChannel{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTriggerFactory)->CreateControlChannelTrigger(get_abi(channelId), serverKeepAliveIntervalInMinutes, put_abi(notificationChannel)));
    return notificationChannel;
}

template <typename D> Windows::Networking::Sockets::ControlChannelTrigger consume_Windows_Networking_Sockets_IControlChannelTriggerFactory<D>::CreateControlChannelTriggerEx(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType const& resourceRequestType) const
{
    Windows::Networking::Sockets::ControlChannelTrigger notificationChannel{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTriggerFactory)->CreateControlChannelTriggerEx(get_abi(channelId), serverKeepAliveIntervalInMinutes, get_abi(resourceRequestType), put_abi(notificationChannel)));
    return notificationChannel;
}

template <typename D> Windows::Networking::Sockets::ControlChannelTriggerResetReason consume_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails<D>::ResetReason() const
{
    Windows::Networking::Sockets::ControlChannelTriggerResetReason value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails)->get_ResetReason(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails<D>::HardwareSlotReset() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails)->get_HardwareSlotReset(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails<D>::SoftwareSlotReset() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails)->get_SoftwareSlotReset(&value));
    return value;
}

template <typename D> Windows::Networking::Sockets::DatagramSocketControl consume_Windows_Networking_Sockets_IDatagramSocket<D>::Control() const
{
    Windows::Networking::Sockets::DatagramSocketControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->get_Control(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::DatagramSocketInformation consume_Windows_Networking_Sockets_IDatagramSocket<D>::Information() const
{
    Windows::Networking::Sockets::DatagramSocketInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->get_Information(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Networking_Sockets_IDatagramSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IDatagramSocket<D>::ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->ConnectAsync(get_abi(remoteHostName), get_abi(remoteServiceName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IDatagramSocket<D>::ConnectAsync(Windows::Networking::EndpointPair const& endpointPair) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->ConnectWithEndpointPairAsync(get_abi(endpointPair), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IDatagramSocket<D>::BindServiceNameAsync(param::hstring const& localServiceName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->BindServiceNameAsync(get_abi(localServiceName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IDatagramSocket<D>::BindEndpointAsync(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->BindEndpointAsync(get_abi(localHostName), get_abi(localServiceName), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocket<D>::JoinMulticastGroup(Windows::Networking::HostName const& host) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->JoinMulticastGroup(get_abi(host)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> consume_Windows_Networking_Sockets_IDatagramSocket<D>::GetOutputStreamAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->GetOutputStreamAsync(get_abi(remoteHostName), get_abi(remoteServiceName), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> consume_Windows_Networking_Sockets_IDatagramSocket<D>::GetOutputStreamAsync(Windows::Networking::EndpointPair const& endpointPair) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->GetOutputStreamWithEndpointPairAsync(get_abi(endpointPair), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Sockets_IDatagramSocket<D>::MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->add_MessageReceived(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IDatagramSocket> consume_Windows_Networking_Sockets_IDatagramSocket<D>::MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IDatagramSocket>(this, &abi_t<Windows::Networking::Sockets::IDatagramSocket>::remove_MessageReceived, MessageReceived(eventHandler));
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocket<D>::MessageReceived(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket)->remove_MessageReceived(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IDatagramSocket2<D>::BindServiceNameAsync(param::hstring const& localServiceName, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket2)->BindServiceNameAndAdapterAsync(get_abi(localServiceName), get_abi(adapter), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IDatagramSocket3<D>::CancelIOAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket3)->CancelIOAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocket3<D>::EnableTransferOwnership(GUID const& taskId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket3)->EnableTransferOwnership(get_abi(taskId)));
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocket3<D>::EnableTransferOwnership(GUID const& taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket3)->EnableTransferOwnershipWithConnectedStandbyAction(get_abi(taskId), get_abi(connectedStandbyAction)));
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocket3<D>::TransferOwnership(param::hstring const& socketId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket3)->TransferOwnership(get_abi(socketId)));
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocket3<D>::TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket3)->TransferOwnershipWithContext(get_abi(socketId), get_abi(data)));
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocket3<D>::TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data, Windows::Foundation::TimeSpan const& keepAliveTime) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocket3)->TransferOwnershipWithContextAndKeepAliveTime(get_abi(socketId), get_abi(data), get_abi(keepAliveTime)));
}

template <typename D> Windows::Networking::Sockets::SocketQualityOfService consume_Windows_Networking_Sockets_IDatagramSocketControl<D>::QualityOfService() const
{
    Windows::Networking::Sockets::SocketQualityOfService value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl)->get_QualityOfService(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocketControl<D>::QualityOfService(Windows::Networking::Sockets::SocketQualityOfService const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl)->put_QualityOfService(get_abi(value)));
}

template <typename D> uint8_t consume_Windows_Networking_Sockets_IDatagramSocketControl<D>::OutboundUnicastHopLimit() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl)->get_OutboundUnicastHopLimit(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocketControl<D>::OutboundUnicastHopLimit(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl)->put_OutboundUnicastHopLimit(value));
}

template <typename D> uint32_t consume_Windows_Networking_Sockets_IDatagramSocketControl2<D>::InboundBufferSizeInBytes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl2)->get_InboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocketControl2<D>::InboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl2)->put_InboundBufferSizeInBytes(value));
}

template <typename D> bool consume_Windows_Networking_Sockets_IDatagramSocketControl2<D>::DontFragment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl2)->get_DontFragment(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocketControl2<D>::DontFragment(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl2)->put_DontFragment(value));
}

template <typename D> bool consume_Windows_Networking_Sockets_IDatagramSocketControl3<D>::MulticastOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl3)->get_MulticastOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IDatagramSocketControl3<D>::MulticastOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketControl3)->put_MulticastOnly(value));
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IDatagramSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketInformation)->get_LocalAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IDatagramSocketInformation<D>::LocalPort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketInformation)->get_LocalPort(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IDatagramSocketInformation<D>::RemoteAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketInformation)->get_RemoteAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IDatagramSocketInformation<D>::RemotePort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketInformation)->get_RemotePort(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs<D>::RemoteAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs)->get_RemoteAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs<D>::RemotePort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs)->get_RemotePort(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs<D>::LocalAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs)->get_LocalAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::DataReader consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs<D>::GetDataReader() const
{
    Windows::Storage::Streams::DataReader dataReader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs)->GetDataReader(put_abi(dataReader)));
    return dataReader;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs<D>::GetDataStream() const
{
    Windows::Storage::Streams::IInputStream inputStream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs)->GetDataStream(put_abi(inputStream)));
    return inputStream;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> consume_Windows_Networking_Sockets_IDatagramSocketStatics<D>::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketStatics)->GetEndpointPairsAsync(get_abi(remoteHostName), get_abi(remoteServiceName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> consume_Windows_Networking_Sockets_IDatagramSocketStatics<D>::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IDatagramSocketStatics)->GetEndpointPairsWithSortOptionsAsync(get_abi(remoteHostName), get_abi(remoteServiceName), get_abi(sortOptions), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::Sockets::MessageWebSocketControl consume_Windows_Networking_Sockets_IMessageWebSocket<D>::Control() const
{
    Windows::Networking::Sockets::MessageWebSocketControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket)->get_Control(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::MessageWebSocketInformation consume_Windows_Networking_Sockets_IMessageWebSocket<D>::Information() const
{
    Windows::Networking::Sockets::MessageWebSocketInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket)->get_Information(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Sockets_IMessageWebSocket<D>::MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket)->add_MessageReceived(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IMessageWebSocket> consume_Windows_Networking_Sockets_IMessageWebSocket<D>::MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IMessageWebSocket>(this, &abi_t<Windows::Networking::Sockets::IMessageWebSocket>::remove_MessageReceived, MessageReceived(eventHandler));
}

template <typename D> void consume_Windows_Networking_Sockets_IMessageWebSocket<D>::MessageReceived(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket)->remove_MessageReceived(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Networking_Sockets_IMessageWebSocket2<D>::ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket2)->add_ServerCustomValidationRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IMessageWebSocket2> consume_Windows_Networking_Sockets_IMessageWebSocket2<D>::ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IMessageWebSocket2>(this, &abi_t<Windows::Networking::Sockets::IMessageWebSocket2>::remove_ServerCustomValidationRequested, ServerCustomValidationRequested(eventHandler));
}

template <typename D> void consume_Windows_Networking_Sockets_IMessageWebSocket2<D>::ServerCustomValidationRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket2)->remove_ServerCustomValidationRequested(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> consume_Windows_Networking_Sockets_IMessageWebSocket3<D>::SendNonfinalFrameAsync(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket3)->SendNonfinalFrameAsync(get_abi(data), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> consume_Windows_Networking_Sockets_IMessageWebSocket3<D>::SendFinalFrameAsync(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocket3)->SendFinalFrameAsync(get_abi(data), put_abi(operation)));
    return operation;
}

template <typename D> uint32_t consume_Windows_Networking_Sockets_IMessageWebSocketControl<D>::MaxMessageSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl)->get_MaxMessageSize(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IMessageWebSocketControl<D>::MaxMessageSize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl)->put_MaxMessageSize(value));
}

template <typename D> Windows::Networking::Sockets::SocketMessageType consume_Windows_Networking_Sockets_IMessageWebSocketControl<D>::MessageType() const
{
    Windows::Networking::Sockets::SocketMessageType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl)->get_MessageType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IMessageWebSocketControl<D>::MessageType(Windows::Networking::Sockets::SocketMessageType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl)->put_MessageType(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>::DesiredUnsolicitedPongInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl2)->get_DesiredUnsolicitedPongInterval(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>::DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl2)->put_DesiredUnsolicitedPongInterval(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>::ActualUnsolicitedPongInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl2)->get_ActualUnsolicitedPongInterval(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::MessageWebSocketReceiveMode consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>::ReceiveMode() const
{
    Windows::Networking::Sockets::MessageWebSocketReceiveMode value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl2)->get_ReceiveMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>::ReceiveMode(Windows::Networking::Sockets::MessageWebSocketReceiveMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl2)->put_ReceiveMode(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>::ClientCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl2)->get_ClientCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IMessageWebSocketControl2<D>::ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketControl2)->put_ClientCertificate(get_abi(value)));
}

template <typename D> Windows::Networking::Sockets::SocketMessageType consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs<D>::MessageType() const
{
    Windows::Networking::Sockets::SocketMessageType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs)->get_MessageType(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::DataReader consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs<D>::GetDataReader() const
{
    Windows::Storage::Streams::DataReader dataReader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs)->GetDataReader(put_abi(dataReader)));
    return dataReader;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs<D>::GetDataStream() const
{
    Windows::Storage::Streams::IInputStream inputStream{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs)->GetDataStream(put_abi(inputStream)));
    return inputStream;
}

template <typename D> bool consume_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs2<D>::IsMessageComplete() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2)->get_IsMessageComplete(&value));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerMessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->add_MessageReceived(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IServerMessageWebSocket> consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerMessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IServerMessageWebSocket>(this, &abi_t<Windows::Networking::Sockets::IServerMessageWebSocket>::remove_MessageReceived, MessageReceived(value));
}

template <typename D> void consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::MessageReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->remove_MessageReceived(get_abi(token)));
}

template <typename D> Windows::Networking::Sockets::ServerMessageWebSocketControl consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::Control() const
{
    Windows::Networking::Sockets::ServerMessageWebSocketControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->get_Control(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::ServerMessageWebSocketInformation consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::Information() const
{
    Windows::Networking::Sockets::ServerMessageWebSocketInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->get_Information(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerMessageWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->add_Closed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IServerMessageWebSocket> consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerMessageWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IServerMessageWebSocket>(this, &abi_t<Windows::Networking::Sockets::IServerMessageWebSocket>::remove_Closed, Closed(value));
}

template <typename D> void consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->remove_Closed(get_abi(token)));
}

template <typename D> void consume_Windows_Networking_Sockets_IServerMessageWebSocket<D>::Close(uint16_t code, param::hstring const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocket)->CloseWithStatus(code, get_abi(reason)));
}

template <typename D> Windows::Networking::Sockets::SocketMessageType consume_Windows_Networking_Sockets_IServerMessageWebSocketControl<D>::MessageType() const
{
    Windows::Networking::Sockets::SocketMessageType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocketControl)->get_MessageType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IServerMessageWebSocketControl<D>::MessageType(Windows::Networking::Sockets::SocketMessageType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocketControl)->put_MessageType(get_abi(value)));
}

template <typename D> Windows::Networking::Sockets::BandwidthStatistics consume_Windows_Networking_Sockets_IServerMessageWebSocketInformation<D>::BandwidthStatistics() const
{
    Windows::Networking::Sockets::BandwidthStatistics value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocketInformation)->get_BandwidthStatistics(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IServerMessageWebSocketInformation<D>::Protocol() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocketInformation)->get_Protocol(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IServerMessageWebSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerMessageWebSocketInformation)->get_LocalAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::ServerStreamWebSocketInformation consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>::Information() const
{
    Windows::Networking::Sockets::ServerStreamWebSocketInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocket)->get_Information(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocket)->get_InputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocket)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerStreamWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocket)->add_Closed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IServerStreamWebSocket> consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerStreamWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IServerStreamWebSocket>(this, &abi_t<Windows::Networking::Sockets::IServerStreamWebSocket>::remove_Closed, Closed(value));
}

template <typename D> void consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocket)->remove_Closed(get_abi(token)));
}

template <typename D> void consume_Windows_Networking_Sockets_IServerStreamWebSocket<D>::Close(uint16_t code, param::hstring const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocket)->CloseWithStatus(code, get_abi(reason)));
}

template <typename D> Windows::Networking::Sockets::BandwidthStatistics consume_Windows_Networking_Sockets_IServerStreamWebSocketInformation<D>::BandwidthStatistics() const
{
    Windows::Networking::Sockets::BandwidthStatistics value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocketInformation)->get_BandwidthStatistics(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IServerStreamWebSocketInformation<D>::Protocol() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocketInformation)->get_Protocol(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IServerStreamWebSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IServerStreamWebSocketInformation)->get_LocalAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_Sockets_ISocketActivityContext<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityContext)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityContext consume_Windows_Networking_Sockets_ISocketActivityContextFactory<D>::Create(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Networking::Sockets::SocketActivityContext context{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityContextFactory)->Create(get_abi(data), put_abi(context)));
    return context;
}

template <typename D> GUID consume_Windows_Networking_Sockets_ISocketActivityInformation<D>::TaskId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformation)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_ISocketActivityInformation<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformation)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityKind consume_Windows_Networking_Sockets_ISocketActivityInformation<D>::SocketKind() const
{
    Windows::Networking::Sockets::SocketActivityKind value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformation)->get_SocketKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityContext consume_Windows_Networking_Sockets_ISocketActivityInformation<D>::Context() const
{
    Windows::Networking::Sockets::SocketActivityContext value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformation)->get_Context(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::DatagramSocket consume_Windows_Networking_Sockets_ISocketActivityInformation<D>::DatagramSocket() const
{
    Windows::Networking::Sockets::DatagramSocket value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformation)->get_DatagramSocket(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocket consume_Windows_Networking_Sockets_ISocketActivityInformation<D>::StreamSocket() const
{
    Windows::Networking::Sockets::StreamSocket value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformation)->get_StreamSocket(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketListener consume_Windows_Networking_Sockets_ISocketActivityInformation<D>::StreamSocketListener() const
{
    Windows::Networking::Sockets::StreamSocketListener value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformation)->get_StreamSocketListener(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> consume_Windows_Networking_Sockets_ISocketActivityInformationStatics<D>::AllSockets() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> sockets{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityInformationStatics)->get_AllSockets(put_abi(sockets)));
    return sockets;
}

template <typename D> Windows::Networking::Sockets::SocketActivityTriggerReason consume_Windows_Networking_Sockets_ISocketActivityTriggerDetails<D>::Reason() const
{
    Windows::Networking::Sockets::SocketActivityTriggerReason value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityTriggerDetails)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketActivityInformation consume_Windows_Networking_Sockets_ISocketActivityTriggerDetails<D>::SocketInformation() const
{
    Windows::Networking::Sockets::SocketActivityInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketActivityTriggerDetails)->get_SocketInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketErrorStatus consume_Windows_Networking_Sockets_ISocketErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Networking::Sockets::SocketErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::ISocketErrorStatics)->GetStatus(hresult, put_abi(status)));
    return status;
}

template <typename D> Windows::Networking::Sockets::StreamSocketControl consume_Windows_Networking_Sockets_IStreamSocket<D>::Control() const
{
    Windows::Networking::Sockets::StreamSocketControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->get_Control(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketInformation consume_Windows_Networking_Sockets_IStreamSocket<D>::Information() const
{
    Windows::Networking::Sockets::StreamSocketInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->get_Information(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Networking_Sockets_IStreamSocket<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->get_InputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Networking_Sockets_IStreamSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocket<D>::ConnectAsync(Windows::Networking::EndpointPair const& endpointPair) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->ConnectWithEndpointPairAsync(get_abi(endpointPair), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocket<D>::ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->ConnectAsync(get_abi(remoteHostName), get_abi(remoteServiceName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocket<D>::ConnectAsync(Windows::Networking::EndpointPair const& endpointPair, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->ConnectWithEndpointPairAndProtectionLevelAsync(get_abi(endpointPair), get_abi(protectionLevel), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocket<D>::ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->ConnectWithProtectionLevelAsync(get_abi(remoteHostName), get_abi(remoteServiceName), get_abi(protectionLevel), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocket<D>::UpgradeToSslAsync(Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, Windows::Networking::HostName const& validationHostName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket)->UpgradeToSslAsync(get_abi(protectionLevel), get_abi(validationHostName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocket2<D>::ConnectAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket2)->ConnectWithProtectionLevelAndAdapterAsync(get_abi(remoteHostName), get_abi(remoteServiceName), get_abi(protectionLevel), get_abi(adapter), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocket3<D>::CancelIOAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket3)->CancelIOAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocket3<D>::EnableTransferOwnership(GUID const& taskId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket3)->EnableTransferOwnership(get_abi(taskId)));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocket3<D>::EnableTransferOwnership(GUID const& taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket3)->EnableTransferOwnershipWithConnectedStandbyAction(get_abi(taskId), get_abi(connectedStandbyAction)));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocket3<D>::TransferOwnership(param::hstring const& socketId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket3)->TransferOwnership(get_abi(socketId)));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocket3<D>::TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket3)->TransferOwnershipWithContext(get_abi(socketId), get_abi(data)));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocket3<D>::TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data, Windows::Foundation::TimeSpan const& keepAliveTime) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocket3)->TransferOwnershipWithContextAndKeepAliveTime(get_abi(socketId), get_abi(data), get_abi(keepAliveTime)));
}

template <typename D> bool consume_Windows_Networking_Sockets_IStreamSocketControl<D>::NoDelay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->get_NoDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl<D>::NoDelay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->put_NoDelay(value));
}

template <typename D> bool consume_Windows_Networking_Sockets_IStreamSocketControl<D>::KeepAlive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->get_KeepAlive(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl<D>::KeepAlive(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->put_KeepAlive(value));
}

template <typename D> uint32_t consume_Windows_Networking_Sockets_IStreamSocketControl<D>::OutboundBufferSizeInBytes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->get_OutboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl<D>::OutboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->put_OutboundBufferSizeInBytes(value));
}

template <typename D> Windows::Networking::Sockets::SocketQualityOfService consume_Windows_Networking_Sockets_IStreamSocketControl<D>::QualityOfService() const
{
    Windows::Networking::Sockets::SocketQualityOfService value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->get_QualityOfService(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl<D>::QualityOfService(Windows::Networking::Sockets::SocketQualityOfService const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->put_QualityOfService(get_abi(value)));
}

template <typename D> uint8_t consume_Windows_Networking_Sockets_IStreamSocketControl<D>::OutboundUnicastHopLimit() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->get_OutboundUnicastHopLimit(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl<D>::OutboundUnicastHopLimit(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl)->put_OutboundUnicastHopLimit(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Networking_Sockets_IStreamSocketControl2<D>::IgnorableServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl2)->get_IgnorableServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Sockets_IStreamSocketControl3<D>::SerializeConnectionAttempts() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl3)->get_SerializeConnectionAttempts(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl3<D>::SerializeConnectionAttempts(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl3)->put_SerializeConnectionAttempts(value));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Networking_Sockets_IStreamSocketControl3<D>::ClientCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl3)->get_ClientCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl3<D>::ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl3)->put_ClientCertificate(get_abi(value)));
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel consume_Windows_Networking_Sockets_IStreamSocketControl4<D>::MinProtectionLevel() const
{
    Windows::Networking::Sockets::SocketProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl4)->get_MinProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketControl4<D>::MinProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketControl4)->put_MinProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_LocalAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::LocalPort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_LocalPort(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::RemoteHostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_RemoteHostName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::RemoteAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_RemoteAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::RemoteServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_RemoteServiceName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::RemotePort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_RemotePort(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::RoundTripTimeStatistics consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::RoundTripTimeStatistics() const
{
    Windows::Networking::Sockets::RoundTripTimeStatistics value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_RoundTripTimeStatistics(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::BandwidthStatistics consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::BandwidthStatistics() const
{
    Windows::Networking::Sockets::BandwidthStatistics value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_BandwidthStatistics(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketProtectionLevel consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::ProtectionLevel() const
{
    Windows::Networking::Sockets::SocketProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_ProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_Sockets_IStreamSocketInformation<D>::SessionKey() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation)->get_SessionKey(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity consume_Windows_Networking_Sockets_IStreamSocketInformation2<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation2)->get_ServerCertificateErrorSeverity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Networking_Sockets_IStreamSocketInformation2<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation2)->get_ServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Networking_Sockets_IStreamSocketInformation2<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation2)->get_ServerCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Networking_Sockets_IStreamSocketInformation2<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketInformation2)->get_ServerIntermediateCertificates(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketListenerControl consume_Windows_Networking_Sockets_IStreamSocketListener<D>::Control() const
{
    Windows::Networking::Sockets::StreamSocketListenerControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener)->get_Control(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamSocketListenerInformation consume_Windows_Networking_Sockets_IStreamSocketListener<D>::Information() const
{
    Windows::Networking::Sockets::StreamSocketListenerInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener)->get_Information(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocketListener<D>::BindServiceNameAsync(param::hstring const& localServiceName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener)->BindServiceNameAsync(get_abi(localServiceName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocketListener<D>::BindEndpointAsync(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener)->BindEndpointAsync(get_abi(localHostName), get_abi(localServiceName), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Networking_Sockets_IStreamSocketListener<D>::ConnectionReceived(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener)->add_ConnectionReceived(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IStreamSocketListener> consume_Windows_Networking_Sockets_IStreamSocketListener<D>::ConnectionReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IStreamSocketListener>(this, &abi_t<Windows::Networking::Sockets::IStreamSocketListener>::remove_ConnectionReceived, ConnectionReceived(eventHandler));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListener<D>::ConnectionReceived(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener)->remove_ConnectionReceived(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocketListener2<D>::BindServiceNameAsync(param::hstring const& localServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener2)->BindServiceNameWithProtectionLevelAsync(get_abi(localServiceName), get_abi(protectionLevel), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocketListener2<D>::BindServiceNameAsync(param::hstring const& localServiceName, Windows::Networking::Sockets::SocketProtectionLevel const& protectionLevel, Windows::Networking::Connectivity::NetworkAdapter const& adapter) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener2)->BindServiceNameWithProtectionLevelAndAdapterAsync(get_abi(localServiceName), get_abi(protectionLevel), get_abi(adapter), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IStreamSocketListener3<D>::CancelIOAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener3)->CancelIOAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListener3<D>::EnableTransferOwnership(GUID const& taskId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener3)->EnableTransferOwnership(get_abi(taskId)));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListener3<D>::EnableTransferOwnership(GUID const& taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const& connectedStandbyAction) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener3)->EnableTransferOwnershipWithConnectedStandbyAction(get_abi(taskId), get_abi(connectedStandbyAction)));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListener3<D>::TransferOwnership(param::hstring const& socketId) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener3)->TransferOwnership(get_abi(socketId)));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListener3<D>::TransferOwnership(param::hstring const& socketId, Windows::Networking::Sockets::SocketActivityContext const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListener3)->TransferOwnershipWithContext(get_abi(socketId), get_abi(data)));
}

template <typename D> Windows::Networking::Sockets::StreamSocket consume_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs<D>::Socket() const
{
    Windows::Networking::Sockets::StreamSocket value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs)->get_Socket(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketQualityOfService consume_Windows_Networking_Sockets_IStreamSocketListenerControl<D>::QualityOfService() const
{
    Windows::Networking::Sockets::SocketQualityOfService value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl)->get_QualityOfService(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListenerControl<D>::QualityOfService(Windows::Networking::Sockets::SocketQualityOfService const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl)->put_QualityOfService(get_abi(value)));
}

template <typename D> bool consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::NoDelay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->get_NoDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::NoDelay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->put_NoDelay(value));
}

template <typename D> bool consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::KeepAlive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->get_KeepAlive(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::KeepAlive(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->put_KeepAlive(value));
}

template <typename D> uint32_t consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::OutboundBufferSizeInBytes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->get_OutboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::OutboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->put_OutboundBufferSizeInBytes(value));
}

template <typename D> uint8_t consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::OutboundUnicastHopLimit() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->get_OutboundUnicastHopLimit(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamSocketListenerControl2<D>::OutboundUnicastHopLimit(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerControl2)->put_OutboundUnicastHopLimit(value));
}

template <typename D> hstring consume_Windows_Networking_Sockets_IStreamSocketListenerInformation<D>::LocalPort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketListenerInformation)->get_LocalPort(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> consume_Windows_Networking_Sockets_IStreamSocketStatics<D>::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketStatics)->GetEndpointPairsAsync(get_abi(remoteHostName), get_abi(remoteServiceName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> consume_Windows_Networking_Sockets_IStreamSocketStatics<D>::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamSocketStatics)->GetEndpointPairsWithSortOptionsAsync(get_abi(remoteHostName), get_abi(remoteServiceName), get_abi(sortOptions), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::Sockets::StreamWebSocketControl consume_Windows_Networking_Sockets_IStreamWebSocket<D>::Control() const
{
    Windows::Networking::Sockets::StreamWebSocketControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocket)->get_Control(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::StreamWebSocketInformation consume_Windows_Networking_Sockets_IStreamWebSocket<D>::Information() const
{
    Windows::Networking::Sockets::StreamWebSocketInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocket)->get_Information(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Networking_Sockets_IStreamWebSocket<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocket)->get_InputStream(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Sockets_IStreamWebSocket2<D>::ServerCustomValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocket2)->add_ServerCustomValidationRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IStreamWebSocket2> consume_Windows_Networking_Sockets_IStreamWebSocket2<D>::ServerCustomValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IStreamWebSocket2>(this, &abi_t<Windows::Networking::Sockets::IStreamWebSocket2>::remove_ServerCustomValidationRequested, ServerCustomValidationRequested(eventHandler));
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamWebSocket2<D>::ServerCustomValidationRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocket2)->remove_ServerCustomValidationRequested(get_abi(eventCookie)));
}

template <typename D> bool consume_Windows_Networking_Sockets_IStreamWebSocketControl<D>::NoDelay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocketControl)->get_NoDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamWebSocketControl<D>::NoDelay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocketControl)->put_NoDelay(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Sockets_IStreamWebSocketControl2<D>::DesiredUnsolicitedPongInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocketControl2)->get_DesiredUnsolicitedPongInterval(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamWebSocketControl2<D>::DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocketControl2)->put_DesiredUnsolicitedPongInterval(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Sockets_IStreamWebSocketControl2<D>::ActualUnsolicitedPongInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocketControl2)->get_ActualUnsolicitedPongInterval(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Networking_Sockets_IStreamWebSocketControl2<D>::ClientCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocketControl2)->get_ClientCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IStreamWebSocketControl2<D>::ClientCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IStreamWebSocketControl2)->put_ClientCertificate(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Networking_Sockets_IWebSocket<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocket)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Sockets_IWebSocket<D>::ConnectAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocket)->ConnectAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Sockets_IWebSocket<D>::SetRequestHeader(param::hstring const& headerName, param::hstring const& headerValue) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocket)->SetRequestHeader(get_abi(headerName), get_abi(headerValue)));
}

template <typename D> event_token consume_Windows_Networking_Sockets_IWebSocket<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocket)->add_Closed(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Sockets::IWebSocket> consume_Windows_Networking_Sockets_IWebSocket<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Sockets::IWebSocket>(this, &abi_t<Windows::Networking::Sockets::IWebSocket>::remove_Closed, Closed(eventHandler));
}

template <typename D> void consume_Windows_Networking_Sockets_IWebSocket<D>::Closed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocket)->remove_Closed(get_abi(eventCookie)));
}

template <typename D> void consume_Windows_Networking_Sockets_IWebSocket<D>::Close(uint16_t code, param::hstring const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocket)->CloseWithStatus(code, get_abi(reason)));
}

template <typename D> uint16_t consume_Windows_Networking_Sockets_IWebSocketClosedEventArgs<D>::Code() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketClosedEventArgs)->get_Code(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IWebSocketClosedEventArgs<D>::Reason() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketClosedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Sockets_IWebSocketControl<D>::OutboundBufferSizeInBytes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl)->get_OutboundBufferSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IWebSocketControl<D>::OutboundBufferSizeInBytes(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl)->put_OutboundBufferSizeInBytes(value));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_Sockets_IWebSocketControl<D>::ServerCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl)->get_ServerCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IWebSocketControl<D>::ServerCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl)->put_ServerCredential(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_Sockets_IWebSocketControl<D>::ProxyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl)->get_ProxyCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IWebSocketControl<D>::ProxyCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl)->put_ProxyCredential(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Sockets_IWebSocketControl<D>::SupportedProtocols() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl)->get_SupportedProtocols(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Networking_Sockets_IWebSocketControl2<D>::IgnorableServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketControl2)->get_IgnorableServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::WebErrorStatus consume_Windows_Networking_Sockets_IWebSocketErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::WebErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketErrorStatics)->GetStatus(hresult, put_abi(status)));
    return status;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Sockets_IWebSocketInformation<D>::LocalAddress() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketInformation)->get_LocalAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::BandwidthStatistics consume_Windows_Networking_Sockets_IWebSocketInformation<D>::BandwidthStatistics() const
{
    Windows::Networking::Sockets::BandwidthStatistics value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketInformation)->get_BandwidthStatistics(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Sockets_IWebSocketInformation<D>::Protocol() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketInformation)->get_Protocol(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Networking_Sockets_IWebSocketInformation2<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketInformation2)->get_ServerCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity consume_Windows_Networking_Sockets_IWebSocketInformation2<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketInformation2)->get_ServerCertificateErrorSeverity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Networking_Sockets_IWebSocketInformation2<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketInformation2)->get_ServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Networking_Sockets_IWebSocketInformation2<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketInformation2)->get_ServerIntermediateCertificates(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs)->get_ServerCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrorSeverity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs)->get_ServerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>::ServerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs)->get_ServerIntermediateCertificates(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>::Reject() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs)->Reject());
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTrigger> : produce_base<D, Windows::Networking::Sockets::IControlChannelTrigger>
{
    HRESULT __stdcall get_ControlChannelTriggerId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ControlChannelTriggerId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerKeepAliveIntervalInMinutes(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ServerKeepAliveIntervalInMinutes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ServerKeepAliveIntervalInMinutes(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerKeepAliveIntervalInMinutes(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentKeepAliveIntervalInMinutes(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CurrentKeepAliveIntervalInMinutes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransportObject(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().TransportObject());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeepAliveTrigger(void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::IBackgroundTrigger>(this->shim().KeepAliveTrigger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PushNotificationTrigger(void** trigger) noexcept final
    {
        try
        {
            *trigger = nullptr;
            typename D::abi_guard guard(this->shim());
            *trigger = detach_from<Windows::ApplicationModel::Background::IBackgroundTrigger>(this->shim().PushNotificationTrigger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UsingTransport(void* transport) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UsingTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&transport));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall WaitForPushEnabled(Windows::Networking::Sockets::ControlChannelTriggerStatus* channelTriggerStatus) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *channelTriggerStatus = detach_from<Windows::Networking::Sockets::ControlChannelTriggerStatus>(this->shim().WaitForPushEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DecreaseNetworkKeepAliveInterval() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecreaseNetworkKeepAliveInterval();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FlushTransport() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlushTransport();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTrigger2> : produce_base<D, Windows::Networking::Sockets::IControlChannelTrigger2>
{
    HRESULT __stdcall get_IsWakeFromLowPowerSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWakeFromLowPowerSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTriggerEventDetails> : produce_base<D, Windows::Networking::Sockets::IControlChannelTriggerEventDetails>
{
    HRESULT __stdcall get_ControlChannelTrigger(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::ControlChannelTrigger>(this->shim().ControlChannelTrigger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTriggerFactory> : produce_base<D, Windows::Networking::Sockets::IControlChannelTriggerFactory>
{
    HRESULT __stdcall CreateControlChannelTrigger(HSTRING channelId, uint32_t serverKeepAliveIntervalInMinutes, void** notificationChannel) noexcept final
    {
        try
        {
            *notificationChannel = nullptr;
            typename D::abi_guard guard(this->shim());
            *notificationChannel = detach_from<Windows::Networking::Sockets::ControlChannelTrigger>(this->shim().CreateControlChannelTrigger(*reinterpret_cast<hstring const*>(&channelId), serverKeepAliveIntervalInMinutes));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateControlChannelTriggerEx(HSTRING channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType resourceRequestType, void** notificationChannel) noexcept final
    {
        try
        {
            *notificationChannel = nullptr;
            typename D::abi_guard guard(this->shim());
            *notificationChannel = detach_from<Windows::Networking::Sockets::ControlChannelTrigger>(this->shim().CreateControlChannelTriggerEx(*reinterpret_cast<hstring const*>(&channelId), serverKeepAliveIntervalInMinutes, *reinterpret_cast<Windows::Networking::Sockets::ControlChannelTriggerResourceType const*>(&resourceRequestType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails> : produce_base<D, Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails>
{
    HRESULT __stdcall get_ResetReason(Windows::Networking::Sockets::ControlChannelTriggerResetReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::ControlChannelTriggerResetReason>(this->shim().ResetReason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareSlotReset(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HardwareSlotReset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareSlotReset(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SoftwareSlotReset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocket> : produce_base<D, Windows::Networking::Sockets::IDatagramSocket>
{
    HRESULT __stdcall get_Control(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::DatagramSocketControl>(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Information(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::DatagramSocketInformation>(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsync(void* remoteHostName, HSTRING remoteServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectWithEndpointPairAsync(void* endpointPair, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::EndpointPair const*>(&endpointPair)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BindServiceNameAsync(HSTRING localServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BindServiceNameAsync(*reinterpret_cast<hstring const*>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BindEndpointAsync(void* localHostName, HSTRING localServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BindEndpointAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&localHostName), *reinterpret_cast<hstring const*>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall JoinMulticastGroup(void* host) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().JoinMulticastGroup(*reinterpret_cast<Windows::Networking::HostName const*>(&host));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetOutputStreamAsync(void* remoteHostName, HSTRING remoteServiceName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream>>(this->shim().GetOutputStreamAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetOutputStreamWithEndpointPairAsync(void* endpointPair, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream>>(this->shim().GetOutputStreamAsync(*reinterpret_cast<Windows::Networking::EndpointPair const*>(&endpointPair)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceived(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().MessageReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::DatagramSocket, Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocket2> : produce_base<D, Windows::Networking::Sockets::IDatagramSocket2>
{
    HRESULT __stdcall BindServiceNameAndAdapterAsync(HSTRING localServiceName, void* adapter, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BindServiceNameAsync(*reinterpret_cast<hstring const*>(&localServiceName), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocket3> : produce_base<D, Windows::Networking::Sockets::IDatagramSocket3>
{
    HRESULT __stdcall CancelIOAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CancelIOAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableTransferOwnership(GUID taskId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableTransferOwnership(*reinterpret_cast<GUID const*>(&taskId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableTransferOwnership(*reinterpret_cast<GUID const*>(&taskId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const*>(&connectedStandbyAction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnership(HSTRING socketId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnershipWithContext(HSTRING socketId, void* data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityContext const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnershipWithContextAndKeepAliveTime(HSTRING socketId, void* data, Windows::Foundation::TimeSpan keepAliveTime) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityContext const*>(&data), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&keepAliveTime));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketControl> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketControl>
{
    HRESULT __stdcall get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketQualityOfService>(this->shim().QualityOfService());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QualityOfService(*reinterpret_cast<Windows::Networking::Sockets::SocketQualityOfService const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().OutboundUnicastHopLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutboundUnicastHopLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketControl2> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketControl2>
{
    HRESULT __stdcall get_InboundBufferSizeInBytes(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().InboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InboundBufferSizeInBytes(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DontFragment(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DontFragment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DontFragment(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DontFragment(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketControl3> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketControl3>
{
    HRESULT __stdcall get_MulticastOnly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MulticastOnly());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MulticastOnly(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MulticastOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketInformation> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketInformation>
{
    HRESULT __stdcall get_LocalAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalPort(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalPort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().RemoteAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePort(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemotePort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs>
{
    HRESULT __stdcall get_RemoteAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().RemoteAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePort(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemotePort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDataReader(void** dataReader) noexcept final
    {
        try
        {
            *dataReader = nullptr;
            typename D::abi_guard guard(this->shim());
            *dataReader = detach_from<Windows::Storage::Streams::DataReader>(this->shim().GetDataReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDataStream(void** inputStream) noexcept final
    {
        try
        {
            *inputStream = nullptr;
            typename D::abi_guard guard(this->shim());
            *inputStream = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().GetDataStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IDatagramSocketStatics> : produce_base<D, Windows::Networking::Sockets::IDatagramSocketStatics>
{
    HRESULT __stdcall GetEndpointPairsAsync(void* remoteHostName, HSTRING remoteServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>>(this->shim().GetEndpointPairsAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetEndpointPairsWithSortOptionsAsync(void* remoteHostName, HSTRING remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>>(this->shim().GetEndpointPairsAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName), *reinterpret_cast<Windows::Networking::HostNameSortOptions const*>(&sortOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocket> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocket>
{
    HRESULT __stdcall get_Control(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::MessageWebSocketControl>(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Information(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::MessageWebSocketInformation>(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceived(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().MessageReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocket2> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocket2>
{
    HRESULT __stdcall add_ServerCustomValidationRequested(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().ServerCustomValidationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::MessageWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerCustomValidationRequested(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCustomValidationRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocket3> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocket3>
{
    HRESULT __stdcall SendNonfinalFrameAsync(void* data, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t>>(this->shim().SendNonfinalFrameAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendFinalFrameAsync(void* data, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t>>(this->shim().SendFinalFrameAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocketControl> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocketControl>
{
    HRESULT __stdcall get_MaxMessageSize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxMessageSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxMessageSize(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxMessageSize(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MessageType(Windows::Networking::Sockets::SocketMessageType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketMessageType>(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MessageType(Windows::Networking::Sockets::SocketMessageType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageType(*reinterpret_cast<Windows::Networking::Sockets::SocketMessageType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocketControl2> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocketControl2>
{
    HRESULT __stdcall get_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DesiredUnsolicitedPongInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredUnsolicitedPongInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualUnsolicitedPongInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().ActualUnsolicitedPongInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReceiveMode(Windows::Networking::Sockets::MessageWebSocketReceiveMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::MessageWebSocketReceiveMode>(this->shim().ReceiveMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReceiveMode(Windows::Networking::Sockets::MessageWebSocketReceiveMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReceiveMode(*reinterpret_cast<Windows::Networking::Sockets::MessageWebSocketReceiveMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ClientCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ClientCertificate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClientCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs>
{
    HRESULT __stdcall get_MessageType(Windows::Networking::Sockets::SocketMessageType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketMessageType>(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDataReader(void** dataReader) noexcept final
    {
        try
        {
            *dataReader = nullptr;
            typename D::abi_guard guard(this->shim());
            *dataReader = detach_from<Windows::Storage::Streams::DataReader>(this->shim().GetDataReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDataStream(void** inputStream) noexcept final
    {
        try
        {
            *inputStream = nullptr;
            typename D::abi_guard guard(this->shim());
            *inputStream = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().GetDataStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2> : produce_base<D, Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2>
{
    HRESULT __stdcall get_IsMessageComplete(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMessageComplete());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IServerMessageWebSocket> : produce_base<D, Windows::Networking::Sockets::IServerMessageWebSocket>
{
    HRESULT __stdcall add_MessageReceived(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MessageReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerMessageWebSocket, Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Control(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::ServerMessageWebSocketControl>(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Information(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::ServerMessageWebSocketInformation>(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerMessageWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CloseWithStatus(uint16_t code, HSTRING reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(code, *reinterpret_cast<hstring const*>(&reason));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IServerMessageWebSocketControl> : produce_base<D, Windows::Networking::Sockets::IServerMessageWebSocketControl>
{
    HRESULT __stdcall get_MessageType(Windows::Networking::Sockets::SocketMessageType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketMessageType>(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MessageType(Windows::Networking::Sockets::SocketMessageType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageType(*reinterpret_cast<Windows::Networking::Sockets::SocketMessageType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IServerMessageWebSocketInformation> : produce_base<D, Windows::Networking::Sockets::IServerMessageWebSocketInformation>
{
    HRESULT __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::BandwidthStatistics>(this->shim().BandwidthStatistics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Protocol());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IServerStreamWebSocket> : produce_base<D, Windows::Networking::Sockets::IServerStreamWebSocket>
{
    HRESULT __stdcall get_Information(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::ServerStreamWebSocketInformation>(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::ServerStreamWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CloseWithStatus(uint16_t code, HSTRING reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(code, *reinterpret_cast<hstring const*>(&reason));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IServerStreamWebSocketInformation> : produce_base<D, Windows::Networking::Sockets::IServerStreamWebSocketInformation>
{
    HRESULT __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::BandwidthStatistics>(this->shim().BandwidthStatistics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Protocol());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityContext> : produce_base<D, Windows::Networking::Sockets::ISocketActivityContext>
{
    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityContextFactory> : produce_base<D, Windows::Networking::Sockets::ISocketActivityContextFactory>
{
    HRESULT __stdcall Create(void* data, void** context) noexcept final
    {
        try
        {
            *context = nullptr;
            typename D::abi_guard guard(this->shim());
            *context = detach_from<Windows::Networking::Sockets::SocketActivityContext>(this->shim().Create(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityInformation> : produce_base<D, Windows::Networking::Sockets::ISocketActivityInformation>
{
    HRESULT __stdcall get_TaskId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SocketKind(Windows::Networking::Sockets::SocketActivityKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketActivityKind>(this->shim().SocketKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Context(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketActivityContext>(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DatagramSocket(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::DatagramSocket>(this->shim().DatagramSocket());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StreamSocket(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocket>(this->shim().StreamSocket());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StreamSocketListener(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocketListener>(this->shim().StreamSocketListener());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityInformationStatics> : produce_base<D, Windows::Networking::Sockets::ISocketActivityInformationStatics>
{
    HRESULT __stdcall get_AllSockets(void** sockets) noexcept final
    {
        try
        {
            *sockets = nullptr;
            typename D::abi_guard guard(this->shim());
            *sockets = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation>>(this->shim().AllSockets());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketActivityTriggerDetails> : produce_base<D, Windows::Networking::Sockets::ISocketActivityTriggerDetails>
{
    HRESULT __stdcall get_Reason(Windows::Networking::Sockets::SocketActivityTriggerReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketActivityTriggerReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SocketInformation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketActivityInformation>(this->shim().SocketInformation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::ISocketErrorStatics> : produce_base<D, Windows::Networking::Sockets::ISocketErrorStatics>
{
    HRESULT __stdcall GetStatus(int32_t hresult, Windows::Networking::Sockets::SocketErrorStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Networking::Sockets::SocketErrorStatus>(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocket> : produce_base<D, Windows::Networking::Sockets::IStreamSocket>
{
    HRESULT __stdcall get_Control(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocketControl>(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Information(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocketInformation>(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectWithEndpointPairAsync(void* endpointPair, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::EndpointPair const*>(&endpointPair)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsync(void* remoteHostName, HSTRING remoteServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectWithEndpointPairAndProtectionLevelAsync(void* endpointPair, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::EndpointPair const*>(&endpointPair), *reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&protectionLevel)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectWithProtectionLevelAsync(void* remoteHostName, HSTRING remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName), *reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&protectionLevel)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpgradeToSslAsync(Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, void* validationHostName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UpgradeToSslAsync(*reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&protectionLevel), *reinterpret_cast<Windows::Networking::HostName const*>(&validationHostName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocket2> : produce_base<D, Windows::Networking::Sockets::IStreamSocket2>
{
    HRESULT __stdcall ConnectWithProtectionLevelAndAdapterAsync(void* remoteHostName, HSTRING remoteServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, void* adapter, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName), *reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&protectionLevel), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocket3> : produce_base<D, Windows::Networking::Sockets::IStreamSocket3>
{
    HRESULT __stdcall CancelIOAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CancelIOAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableTransferOwnership(GUID taskId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableTransferOwnership(*reinterpret_cast<GUID const*>(&taskId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableTransferOwnership(*reinterpret_cast<GUID const*>(&taskId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const*>(&connectedStandbyAction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnership(HSTRING socketId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnershipWithContext(HSTRING socketId, void* data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityContext const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnershipWithContextAndKeepAliveTime(HSTRING socketId, void* data, Windows::Foundation::TimeSpan keepAliveTime) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityContext const*>(&data), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&keepAliveTime));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketControl> : produce_base<D, Windows::Networking::Sockets::IStreamSocketControl>
{
    HRESULT __stdcall get_NoDelay(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NoDelay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NoDelay(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeepAlive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().KeepAlive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeepAlive(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeepAlive(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OutboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketQualityOfService>(this->shim().QualityOfService());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QualityOfService(*reinterpret_cast<Windows::Networking::Sockets::SocketQualityOfService const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().OutboundUnicastHopLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutboundUnicastHopLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketControl2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketControl2>
{
    HRESULT __stdcall get_IgnorableServerCertificateErrors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().IgnorableServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketControl3> : produce_base<D, Windows::Networking::Sockets::IStreamSocketControl3>
{
    HRESULT __stdcall get_SerializeConnectionAttempts(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SerializeConnectionAttempts());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SerializeConnectionAttempts(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SerializeConnectionAttempts(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ClientCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ClientCertificate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClientCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketControl4> : produce_base<D, Windows::Networking::Sockets::IStreamSocketControl4>
{
    HRESULT __stdcall get_MinProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketProtectionLevel>(this->shim().MinProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinProtectionLevel(*reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketInformation> : produce_base<D, Windows::Networking::Sockets::IStreamSocketInformation>
{
    HRESULT __stdcall get_LocalAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalPort(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalPort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteHostName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().RemoteHostName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().RemoteAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteServiceName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteServiceName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePort(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemotePort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoundTripTimeStatistics(struct struct_Windows_Networking_Sockets_RoundTripTimeStatistics* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::RoundTripTimeStatistics>(this->shim().RoundTripTimeStatistics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::BandwidthStatistics>(this->shim().BandwidthStatistics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketProtectionLevel>(this->shim().ProtectionLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SessionKey(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().SessionKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketInformation2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketInformation2>
{
    HRESULT __stdcall get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ServerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListener> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListener>
{
    HRESULT __stdcall get_Control(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocketListenerControl>(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Information(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocketListenerInformation>(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BindServiceNameAsync(HSTRING localServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BindServiceNameAsync(*reinterpret_cast<hstring const*>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BindEndpointAsync(void* localHostName, HSTRING localServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BindEndpointAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&localHostName), *reinterpret_cast<hstring const*>(&localServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ConnectionReceived(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().ConnectionReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamSocketListener, Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ConnectionReceived(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConnectionReceived(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListener2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListener2>
{
    HRESULT __stdcall BindServiceNameWithProtectionLevelAsync(HSTRING localServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BindServiceNameAsync(*reinterpret_cast<hstring const*>(&localServiceName), *reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&protectionLevel)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BindServiceNameWithProtectionLevelAndAdapterAsync(HSTRING localServiceName, Windows::Networking::Sockets::SocketProtectionLevel protectionLevel, void* adapter, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BindServiceNameAsync(*reinterpret_cast<hstring const*>(&localServiceName), *reinterpret_cast<Windows::Networking::Sockets::SocketProtectionLevel const*>(&protectionLevel), *reinterpret_cast<Windows::Networking::Connectivity::NetworkAdapter const*>(&adapter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListener3> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListener3>
{
    HRESULT __stdcall CancelIOAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CancelIOAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableTransferOwnership(GUID taskId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableTransferOwnership(*reinterpret_cast<GUID const*>(&taskId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableTransferOwnershipWithConnectedStandbyAction(GUID taskId, Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableTransferOwnership(*reinterpret_cast<GUID const*>(&taskId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityConnectedStandbyAction const*>(&connectedStandbyAction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnership(HSTRING socketId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransferOwnershipWithContext(HSTRING socketId, void* data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferOwnership(*reinterpret_cast<hstring const*>(&socketId), *reinterpret_cast<Windows::Networking::Sockets::SocketActivityContext const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs>
{
    HRESULT __stdcall get_Socket(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamSocket>(this->shim().Socket());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerControl> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerControl>
{
    HRESULT __stdcall get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketQualityOfService>(this->shim().QualityOfService());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QualityOfService(*reinterpret_cast<Windows::Networking::Sockets::SocketQualityOfService const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerControl2> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerControl2>
{
    HRESULT __stdcall get_NoDelay(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NoDelay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NoDelay(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeepAlive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().KeepAlive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeepAlive(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeepAlive(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OutboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundUnicastHopLimit(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().OutboundUnicastHopLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundUnicastHopLimit(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutboundUnicastHopLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketListenerInformation> : produce_base<D, Windows::Networking::Sockets::IStreamSocketListenerInformation>
{
    HRESULT __stdcall get_LocalPort(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalPort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamSocketStatics> : produce_base<D, Windows::Networking::Sockets::IStreamSocketStatics>
{
    HRESULT __stdcall GetEndpointPairsAsync(void* remoteHostName, HSTRING remoteServiceName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>>(this->shim().GetEndpointPairsAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetEndpointPairsWithSortOptionsAsync(void* remoteHostName, HSTRING remoteServiceName, Windows::Networking::HostNameSortOptions sortOptions, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>>(this->shim().GetEndpointPairsAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName), *reinterpret_cast<Windows::Networking::HostNameSortOptions const*>(&sortOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamWebSocket> : produce_base<D, Windows::Networking::Sockets::IStreamWebSocket>
{
    HRESULT __stdcall get_Control(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamWebSocketControl>(this->shim().Control());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Information(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::StreamWebSocketInformation>(this->shim().Information());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IInputStream>(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamWebSocket2> : produce_base<D, Windows::Networking::Sockets::IStreamWebSocket2>
{
    HRESULT __stdcall add_ServerCustomValidationRequested(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().ServerCustomValidationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::StreamWebSocket, Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerCustomValidationRequested(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCustomValidationRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamWebSocketControl> : produce_base<D, Windows::Networking::Sockets::IStreamWebSocketControl>
{
    HRESULT __stdcall get_NoDelay(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NoDelay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NoDelay(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IStreamWebSocketControl2> : produce_base<D, Windows::Networking::Sockets::IStreamWebSocketControl2>
{
    HRESULT __stdcall get_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DesiredUnsolicitedPongInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredUnsolicitedPongInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualUnsolicitedPongInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().ActualUnsolicitedPongInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClientCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ClientCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ClientCertificate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClientCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocket> : produce_base<D, Windows::Networking::Sockets::IWebSocket>
{
    HRESULT __stdcall get_OutputStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IOutputStream>(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsync(void* uri, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetRequestHeader(HSTRING headerName, HSTRING headerValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequestHeader(*reinterpret_cast<hstring const*>(&headerName), *reinterpret_cast<hstring const*>(&headerValue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Sockets::IWebSocket, Windows::Networking::Sockets::WebSocketClosedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CloseWithStatus(uint16_t code, HSTRING reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(code, *reinterpret_cast<hstring const*>(&reason));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketClosedEventArgs> : produce_base<D, Windows::Networking::Sockets::IWebSocketClosedEventArgs>
{
    HRESULT __stdcall get_Code(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Reason(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketControl> : produce_base<D, Windows::Networking::Sockets::IWebSocketControl>
{
    HRESULT __stdcall get_OutboundBufferSizeInBytes(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OutboundBufferSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutboundBufferSizeInBytes(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutboundBufferSizeInBytes(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ServerCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ServerCredential(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().ProxyCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyCredential(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedProtocols(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().SupportedProtocols());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketControl2> : produce_base<D, Windows::Networking::Sockets::IWebSocketControl2>
{
    HRESULT __stdcall get_IgnorableServerCertificateErrors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().IgnorableServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketErrorStatics> : produce_base<D, Windows::Networking::Sockets::IWebSocketErrorStatics>
{
    HRESULT __stdcall GetStatus(int32_t hresult, Windows::Web::WebErrorStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Web::WebErrorStatus>(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketInformation> : produce_base<D, Windows::Networking::Sockets::IWebSocketInformation>
{
    HRESULT __stdcall get_LocalAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BandwidthStatistics(struct struct_Windows_Networking_Sockets_BandwidthStatistics* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::BandwidthStatistics>(this->shim().BandwidthStatistics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Protocol());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketInformation2> : produce_base<D, Windows::Networking::Sockets::IWebSocketInformation2>
{
    HRESULT __stdcall get_ServerCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ServerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs> : produce_base<D, Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs>
{
    HRESULT __stdcall get_ServerCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().ServerCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().ServerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerCertificateErrors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().ServerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerIntermediateCertificates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ServerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Reject() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reject();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

inline ControlChannelTrigger::ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes) :
    ControlChannelTrigger(get_activation_factory<ControlChannelTrigger, Windows::Networking::Sockets::IControlChannelTriggerFactory>().CreateControlChannelTrigger(channelId, serverKeepAliveIntervalInMinutes))
{}

inline ControlChannelTrigger::ControlChannelTrigger(param::hstring const& channelId, uint32_t serverKeepAliveIntervalInMinutes, Windows::Networking::Sockets::ControlChannelTriggerResourceType const& resourceRequestType) :
    ControlChannelTrigger(get_activation_factory<ControlChannelTrigger, Windows::Networking::Sockets::IControlChannelTriggerFactory>().CreateControlChannelTriggerEx(channelId, serverKeepAliveIntervalInMinutes, resourceRequestType))
{}

inline DatagramSocket::DatagramSocket() :
    DatagramSocket(get_activation_factory<DatagramSocket>().ActivateInstance<DatagramSocket>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> DatagramSocket::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName)
{
    return get_activation_factory<DatagramSocket, Windows::Networking::Sockets::IDatagramSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> DatagramSocket::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions)
{
    return get_activation_factory<DatagramSocket, Windows::Networking::Sockets::IDatagramSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName, sortOptions);
}

inline MessageWebSocket::MessageWebSocket() :
    MessageWebSocket(get_activation_factory<MessageWebSocket>().ActivateInstance<MessageWebSocket>())
{}

inline SocketActivityContext::SocketActivityContext(Windows::Storage::Streams::IBuffer const& data) :
    SocketActivityContext(get_activation_factory<SocketActivityContext, Windows::Networking::Sockets::ISocketActivityContextFactory>().Create(data))
{}

inline Windows::Foundation::Collections::IMapView<hstring, Windows::Networking::Sockets::SocketActivityInformation> SocketActivityInformation::AllSockets()
{
    return get_activation_factory<SocketActivityInformation, Windows::Networking::Sockets::ISocketActivityInformationStatics>().AllSockets();
}

inline Windows::Networking::Sockets::SocketErrorStatus SocketError::GetStatus(int32_t hresult)
{
    return get_activation_factory<SocketError, Windows::Networking::Sockets::ISocketErrorStatics>().GetStatus(hresult);
}

inline StreamSocket::StreamSocket() :
    StreamSocket(get_activation_factory<StreamSocket>().ActivateInstance<StreamSocket>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> StreamSocket::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName)
{
    return get_activation_factory<StreamSocket, Windows::Networking::Sockets::IStreamSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>> StreamSocket::GetEndpointPairsAsync(Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName, Windows::Networking::HostNameSortOptions const& sortOptions)
{
    return get_activation_factory<StreamSocket, Windows::Networking::Sockets::IStreamSocketStatics>().GetEndpointPairsAsync(remoteHostName, remoteServiceName, sortOptions);
}

inline StreamSocketListener::StreamSocketListener() :
    StreamSocketListener(get_activation_factory<StreamSocketListener>().ActivateInstance<StreamSocketListener>())
{}

inline StreamWebSocket::StreamWebSocket() :
    StreamWebSocket(get_activation_factory<StreamWebSocket>().ActivateInstance<StreamWebSocket>())
{}

inline Windows::Web::WebErrorStatus WebSocketError::GetStatus(int32_t hresult)
{
    return get_activation_factory<WebSocketError, Windows::Networking::Sockets::IWebSocketErrorStatics>().GetStatus(hresult);
}

inline WebSocketKeepAlive::WebSocketKeepAlive() :
    WebSocketKeepAlive(get_activation_factory<WebSocketKeepAlive>().ActivateInstance<WebSocketKeepAlive>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::Sockets::IControlChannelTrigger> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IControlChannelTrigger> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IControlChannelTrigger2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IControlChannelTrigger2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IControlChannelTriggerEventDetails> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IControlChannelTriggerFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IControlChannelTriggerFactory> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocket2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocket2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocket3> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocket3> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocketControl2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocketControl2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocketControl3> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocketControl3> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IDatagramSocketStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IDatagramSocketStatics> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IMessageWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IMessageWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IMessageWebSocket2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IMessageWebSocket2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IMessageWebSocket3> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IMessageWebSocket3> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IMessageWebSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IMessageWebSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IMessageWebSocketControl2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IMessageWebSocketControl2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IServerMessageWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IServerMessageWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IServerMessageWebSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IServerMessageWebSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IServerStreamWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IServerStreamWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IServerStreamWebSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ISocketActivityContext> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ISocketActivityContext> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ISocketActivityContextFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ISocketActivityContextFactory> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ISocketActivityInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ISocketActivityInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ISocketActivityInformationStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ISocketActivityInformationStatics> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ISocketActivityTriggerDetails> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ISocketErrorStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ISocketErrorStatics> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocket2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocket2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocket3> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocket3> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketControl2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketControl2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketControl3> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketControl3> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketControl4> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketControl4> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketInformation2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketInformation2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketListener> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketListener> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketListener2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketListener2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketListener3> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketListener3> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketListenerControl2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketListenerInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamSocketStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamSocketStatics> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamWebSocket2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamWebSocket2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamWebSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamWebSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IStreamWebSocketControl2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IStreamWebSocketControl2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocketClosedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocketControl2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocketControl2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocketErrorStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocketErrorStatics> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocketInformation2> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocketInformation2> {};
template<> struct hash<winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ControlChannelTrigger> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ControlChannelTrigger> {};
template<> struct hash<winrt::Windows::Networking::Sockets::DatagramSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::DatagramSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::DatagramSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::DatagramSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::DatagramSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::DatagramSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::MessageWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::MessageWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::MessageWebSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::MessageWebSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::MessageWebSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::MessageWebSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ServerMessageWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ServerMessageWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ServerMessageWebSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ServerMessageWebSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ServerMessageWebSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ServerMessageWebSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ServerStreamWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ServerStreamWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::ServerStreamWebSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::ServerStreamWebSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::SocketActivityContext> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::SocketActivityContext> {};
template<> struct hash<winrt::Windows::Networking::Sockets::SocketActivityInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::SocketActivityInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::SocketActivityTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::SocketActivityTriggerDetails> {};
template<> struct hash<winrt::Windows::Networking::Sockets::SocketError> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::SocketError> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamSocketListener> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamSocketListener> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamSocketListenerControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamSocketListenerControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamSocketListenerInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamSocketListenerInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamWebSocket> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamWebSocket> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamWebSocketControl> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamWebSocketControl> {};
template<> struct hash<winrt::Windows::Networking::Sockets::StreamWebSocketInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::StreamWebSocketInformation> {};
template<> struct hash<winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::WebSocketClosedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Sockets::WebSocketError> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::WebSocketError> {};
template<> struct hash<winrt::Windows::Networking::Sockets::WebSocketKeepAlive> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::WebSocketKeepAlive> {};
template<> struct hash<winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs> {};

}

WINRT_WARNING_POP
