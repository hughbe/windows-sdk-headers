// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Networking.XboxLive.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::SnapshotChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->add_SnapshotChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::SnapshotChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddress>(this, &abi_t<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>::remove_SnapshotChanged, SnapshotChanged(handler));
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::SnapshotChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->remove_SnapshotChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::GetSnapshotAsBase64() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->GetSnapshotAsBase64(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::GetSnapshotAsBuffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->GetSnapshotAsBuffer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::GetSnapshotAsBytes(array_view<uint8_t> buffer, uint32_t& bytesWritten) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->GetSnapshotAsBytes(buffer.size(), get_abi(buffer), &bytesWritten));
}

template <typename D> int32_t consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::Compare(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& otherDeviceAddress) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->Compare(get_abi(otherDeviceAddress), &result));
    return result;
}

template <typename D> bool consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::IsValid() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->get_IsValid(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::IsLocal() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->get_IsLocal(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveNetworkAccessKind consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>::NetworkAccessKind() const
{
    Windows::Networking::XboxLive::XboxLiveNetworkAccessKind value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddress)->get_NetworkAccessKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics<D>::CreateFromSnapshotBase64(param::hstring const& base64) const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics)->CreateFromSnapshotBase64(get_abi(base64), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics<D>::CreateFromSnapshotBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics)->CreateFromSnapshotBuffer(get_abi(buffer), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics<D>::CreateFromSnapshotBytes(array_view<uint8_t const> buffer) const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics)->CreateFromSnapshotBytes(buffer.size(), get_abi(buffer), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics<D>::GetLocal() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics)->GetLocal(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics<D>::MaxSnapshotBytesSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics)->get_MaxSnapshotBytesSize(&value));
    return value;
}

template <typename D> event_token consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->add_StateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::XboxLive::IXboxLiveEndpointPair> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::XboxLive::IXboxLiveEndpointPair>(this, &abi_t<Windows::Networking::XboxLive::IXboxLiveEndpointPair>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->remove_StateChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->DeleteAsync(put_abi(action)));
    return action;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::GetRemoteSocketAddressBytes(array_view<uint8_t> socketAddress) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->GetRemoteSocketAddressBytes(socketAddress.size(), get_abi(socketAddress)));
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::GetLocalSocketAddressBytes(array_view<uint8_t> socketAddress) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->GetLocalSocketAddressBytes(socketAddress.size(), get_abi(socketAddress)));
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairState consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::State() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairState value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::Template() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->get_Template(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::RemoteDeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->get_RemoteDeviceAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::RemoteHostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->get_RemoteHostName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::RemotePort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->get_RemotePort(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::LocalHostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->get_LocalHostName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>::LocalPort() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPair)->get_LocalPort(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult<D>::DeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult)->get_DeviceAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult<D>::Status() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult<D>::IsExistingPathEvaluation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult)->get_IsExistingPathEvaluation(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult<D>::EndpointPair() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult)->get_EndpointPair(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairState consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStateChangedEventArgs<D>::OldState() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairState value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs)->get_OldState(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairState consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStateChangedEventArgs<D>::NewState() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairState value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs)->get_NewState(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStatics<D>::FindEndpointPairBySocketAddressBytes(array_view<uint8_t const> localSocketAddress, array_view<uint8_t const> remoteSocketAddress) const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair endpointPair{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics)->FindEndpointPairBySocketAddressBytes(localSocketAddress.size(), get_abi(localSocketAddress), remoteSocketAddress.size(), get_abi(remoteSocketAddress), put_abi(endpointPair)));
    return endpointPair;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStatics<D>::FindEndpointPairByHostNamesAndPorts(Windows::Networking::HostName const& localHostName, param::hstring const& localPort, Windows::Networking::HostName const& remoteHostName, param::hstring const& remotePort) const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair endpointPair{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics)->FindEndpointPairByHostNamesAndPorts(get_abi(localHostName), get_abi(localPort), get_abi(remoteHostName), get_abi(remotePort), put_abi(endpointPair)));
    return endpointPair;
}

template <typename D> event_token consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::InboundEndpointPairCreated(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->add_InboundEndpointPairCreated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::InboundEndpointPairCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>(this, &abi_t<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>::remove_InboundEndpointPairCreated, InboundEndpointPairCreated(handler));
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::InboundEndpointPairCreated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->remove_InboundEndpointPairCreated(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->CreateEndpointPairDefaultAsync(get_abi(deviceAddress), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const& behaviors) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->CreateEndpointPairWithBehaviorsAsync(get_abi(deviceAddress), get_abi(behaviors), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairForPortsAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, param::hstring const& initiatorPort, param::hstring const& acceptorPort) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->CreateEndpointPairForPortsDefaultAsync(get_abi(deviceAddress), get_abi(initiatorPort), get_abi(acceptorPort), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::CreateEndpointPairForPortsAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, param::hstring const& initiatorPort, param::hstring const& acceptorPort, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const& behaviors) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->CreateEndpointPairForPortsWithBehaviorsAsync(get_abi(deviceAddress), get_abi(initiatorPort), get_abi(acceptorPort), get_abi(behaviors), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveSocketKind consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::SocketKind() const
{
    Windows::Networking::XboxLive::XboxLiveSocketKind value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->get_SocketKind(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::InitiatorBoundPortRangeLower() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->get_InitiatorBoundPortRangeLower(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::InitiatorBoundPortRangeUpper() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->get_InitiatorBoundPortRangeUpper(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::AcceptorBoundPortRangeLower() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->get_AcceptorBoundPortRangeLower(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::AcceptorBoundPortRangeUpper() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->get_AcceptorBoundPortRangeUpper(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>::EndpointPairs() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate)->get_EndpointPairs(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplateStatics<D>::GetTemplateByName(param::hstring const& name) const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate namedTemplate{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics)->GetTemplateByName(get_abi(name), put_abi(namedTemplate)));
    return namedTemplate;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplateStatics<D>::Templates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics)->get_Templates(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveEndpointPair consume_Windows_Networking_XboxLive_IXboxLiveInboundEndpointPairCreatedEventArgs<D>::EndpointPair() const
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs)->get_EndpointPair(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::MeasureAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->MeasureAsync(put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::GetMetricResultsForDevice(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->GetMetricResultsForDevice(get_abi(deviceAddress), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::GetMetricResultsForMetric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const& metric) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->GetMetricResultsForMetric(get_abi(metric), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::GetMetricResult(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const& metric) const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->GetMetricResult(get_abi(deviceAddress), get_abi(metric), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::GetPrivatePayloadResult(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->GetPrivatePayloadResult(get_abi(deviceAddress), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric> consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::Metrics() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_Metrics(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress> consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::DeviceAddresses() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_DeviceAddresses(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::ShouldRequestPrivatePayloads() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_ShouldRequestPrivatePayloads(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::ShouldRequestPrivatePayloads(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->put_ShouldRequestPrivatePayloads(value));
}

template <typename D> uint32_t consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::TimeoutInMilliseconds() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_TimeoutInMilliseconds(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::TimeoutInMilliseconds(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->put_TimeoutInMilliseconds(value));
}

template <typename D> uint32_t consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::NumberOfProbesToAttempt() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_NumberOfProbesToAttempt(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::NumberOfProbesToAttempt(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->put_NumberOfProbesToAttempt(value));
}

template <typename D> uint32_t consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::NumberOfResultsPending() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_NumberOfResultsPending(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::MetricResults() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_MetricResults(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>::PrivatePayloadResults() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement)->get_PrivatePayloadResults(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::PublishPrivatePayloadBytes(array_view<uint8_t const> payload) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->PublishPrivatePayloadBytes(payload.size(), get_abi(payload)));
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::ClearPrivatePayload() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->ClearPrivatePayload());
}

template <typename D> uint32_t consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::MaxSimultaneousProbeConnections() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->get_MaxSimultaneousProbeConnections(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::MaxSimultaneousProbeConnections(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->put_MaxSimultaneousProbeConnections(value));
}

template <typename D> bool consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemOutboundBandwidthConstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->get_IsSystemOutboundBandwidthConstrained(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemOutboundBandwidthConstrained(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->put_IsSystemOutboundBandwidthConstrained(value));
}

template <typename D> bool consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemInboundBandwidthConstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->get_IsSystemInboundBandwidthConstrained(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::IsSystemInboundBandwidthConstrained(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->put_IsSystemInboundBandwidthConstrained(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::PublishedPrivatePayload() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->get_PublishedPrivatePayload(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::PublishedPrivatePayload(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->put_PublishedPrivatePayload(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>::MaxPrivatePayloadSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics)->get_MaxPrivatePayloadSize(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult<D>::Status() const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult<D>::DeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult)->get_DeviceAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult<D>::Metric() const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult)->get_Metric(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult<D>::Value() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult)->get_Value(&value));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult<D>::Status() const
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::XboxLive::XboxLiveDeviceAddress consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult<D>::DeviceAddress() const
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult)->get_DeviceAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult<D>::Value() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddress> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddress>
{
    HRESULT __stdcall add_SnapshotChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SnapshotChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SnapshotChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SnapshotChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSnapshotAsBase64(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetSnapshotAsBase64());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSnapshotAsBuffer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetSnapshotAsBuffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSnapshotAsBytes(uint32_t __bufferSize, uint8_t* buffer, uint32_t* bytesWritten) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetSnapshotAsBytes(array_view<uint8_t>(reinterpret_cast<uint8_t*>(buffer), reinterpret_cast<uint8_t*>(buffer) + __bufferSize), *bytesWritten);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Compare(void* otherDeviceAddress, int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().Compare(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&otherDeviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsValid(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsValid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLocal(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLocal());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAccessKind(Windows::Networking::XboxLive::XboxLiveNetworkAccessKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveNetworkAccessKind>(this->shim().NetworkAccessKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>
{
    HRESULT __stdcall CreateFromSnapshotBase64(HSTRING base64, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().CreateFromSnapshotBase64(*reinterpret_cast<hstring const*>(&base64)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromSnapshotBuffer(void* buffer, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().CreateFromSnapshotBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromSnapshotBytes(uint32_t __bufferSize, uint8_t* buffer, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().CreateFromSnapshotBytes(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(buffer), reinterpret_cast<uint8_t const *>(buffer) + __bufferSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLocal(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().GetLocal());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSnapshotBytesSize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxSnapshotBytesSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPair> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPair>
{
    HRESULT __stdcall add_StateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRemoteSocketAddressBytes(uint32_t __socketAddressSize, uint8_t* socketAddress) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetRemoteSocketAddressBytes(array_view<uint8_t>(reinterpret_cast<uint8_t*>(socketAddress), reinterpret_cast<uint8_t*>(socketAddress) + __socketAddressSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLocalSocketAddressBytes(uint32_t __socketAddressSize, uint8_t* socketAddress) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetLocalSocketAddressBytes(array_view<uint8_t>(reinterpret_cast<uint8_t*>(socketAddress), reinterpret_cast<uint8_t*>(socketAddress) + __socketAddressSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Networking::XboxLive::XboxLiveEndpointPairState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPairState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Template(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>(this->shim().Template());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteDeviceAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().RemoteDeviceAddress());
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

    HRESULT __stdcall get_LocalHostName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalHostName());
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
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>
{
    HRESULT __stdcall get_DeviceAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().DeviceAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsExistingPathEvaluation(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsExistingPathEvaluation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointPair(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPair>(this->shim().EndpointPair());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>
{
    HRESULT __stdcall get_OldState(Windows::Networking::XboxLive::XboxLiveEndpointPairState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPairState>(this->shim().OldState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewState(Windows::Networking::XboxLive::XboxLiveEndpointPairState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPairState>(this->shim().NewState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>
{
    HRESULT __stdcall FindEndpointPairBySocketAddressBytes(uint32_t __localSocketAddressSize, uint8_t* localSocketAddress, uint32_t __remoteSocketAddressSize, uint8_t* remoteSocketAddress, void** endpointPair) noexcept final
    {
        try
        {
            *endpointPair = nullptr;
            typename D::abi_guard guard(this->shim());
            *endpointPair = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPair>(this->shim().FindEndpointPairBySocketAddressBytes(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(localSocketAddress), reinterpret_cast<uint8_t const *>(localSocketAddress) + __localSocketAddressSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(remoteSocketAddress), reinterpret_cast<uint8_t const *>(remoteSocketAddress) + __remoteSocketAddressSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindEndpointPairByHostNamesAndPorts(void* localHostName, HSTRING localPort, void* remoteHostName, HSTRING remotePort, void** endpointPair) noexcept final
    {
        try
        {
            *endpointPair = nullptr;
            typename D::abi_guard guard(this->shim());
            *endpointPair = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPair>(this->shim().FindEndpointPairByHostNamesAndPorts(*reinterpret_cast<Windows::Networking::HostName const*>(&localHostName), *reinterpret_cast<hstring const*>(&localPort), *reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remotePort)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>
{
    HRESULT __stdcall add_InboundEndpointPairCreated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().InboundEndpointPairCreated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_InboundEndpointPairCreated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InboundEndpointPairCreated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEndpointPairDefaultAsync(void* deviceAddress, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>>(this->shim().CreateEndpointPairAsync(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&deviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEndpointPairWithBehaviorsAsync(void* deviceAddress, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>>(this->shim().CreateEndpointPairAsync(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&deviceAddress), *reinterpret_cast<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const*>(&behaviors)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEndpointPairForPortsDefaultAsync(void* deviceAddress, HSTRING initiatorPort, HSTRING acceptorPort, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>>(this->shim().CreateEndpointPairForPortsAsync(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&deviceAddress), *reinterpret_cast<hstring const*>(&initiatorPort), *reinterpret_cast<hstring const*>(&acceptorPort)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEndpointPairForPortsWithBehaviorsAsync(void* deviceAddress, HSTRING initiatorPort, HSTRING acceptorPort, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>>(this->shim().CreateEndpointPairForPortsAsync(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&deviceAddress), *reinterpret_cast<hstring const*>(&initiatorPort), *reinterpret_cast<hstring const*>(&acceptorPort), *reinterpret_cast<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const*>(&behaviors)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SocketKind(Windows::Networking::XboxLive::XboxLiveSocketKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveSocketKind>(this->shim().SocketKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitiatorBoundPortRangeLower(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().InitiatorBoundPortRangeLower());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitiatorBoundPortRangeUpper(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().InitiatorBoundPortRangeUpper());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptorBoundPortRangeLower(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().AcceptorBoundPortRangeLower());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AcceptorBoundPortRangeUpper(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().AcceptorBoundPortRangeUpper());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointPairs(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair>>(this->shim().EndpointPairs());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>
{
    HRESULT __stdcall GetTemplateByName(HSTRING name, void** namedTemplate) noexcept final
    {
        try
        {
            *namedTemplate = nullptr;
            typename D::abi_guard guard(this->shim());
            *namedTemplate = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>(this->shim().GetTemplateByName(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Templates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>>(this->shim().Templates());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>
{
    HRESULT __stdcall get_EndpointPair(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveEndpointPair>(this->shim().EndpointPair());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>
{
    HRESULT __stdcall MeasureAsync(void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().MeasureAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetMetricResultsForDevice(void* deviceAddress, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>>(this->shim().GetMetricResultsForDevice(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&deviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetMetricResultsForMetric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>>(this->shim().GetMetricResultsForMetric(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const*>(&metric)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetMetricResult(void* deviceAddress, Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>(this->shim().GetMetricResult(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&deviceAddress), *reinterpret_cast<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const*>(&metric)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPrivatePayloadResult(void* deviceAddress, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>(this->shim().GetPrivatePayloadResult(*reinterpret_cast<Windows::Networking::XboxLive::XboxLiveDeviceAddress const*>(&deviceAddress)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Metrics(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>>(this->shim().Metrics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAddresses(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress>>(this->shim().DeviceAddresses());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldRequestPrivatePayloads(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldRequestPrivatePayloads());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldRequestPrivatePayloads(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldRequestPrivatePayloads(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimeoutInMilliseconds(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TimeoutInMilliseconds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TimeoutInMilliseconds(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimeoutInMilliseconds(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfProbesToAttempt(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NumberOfProbesToAttempt());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NumberOfProbesToAttempt(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NumberOfProbesToAttempt(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfResultsPending(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NumberOfResultsPending());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MetricResults(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>>(this->shim().MetricResults());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrivatePayloadResults(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>>(this->shim().PrivatePayloadResults());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>
{
    HRESULT __stdcall PublishPrivatePayloadBytes(uint32_t __payloadSize, uint8_t* payload) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PublishPrivatePayloadBytes(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(payload), reinterpret_cast<uint8_t const *>(payload) + __payloadSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ClearPrivatePayload() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearPrivatePayload();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSimultaneousProbeConnections(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxSimultaneousProbeConnections());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSimultaneousProbeConnections(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxSimultaneousProbeConnections(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSystemOutboundBandwidthConstrained(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSystemOutboundBandwidthConstrained());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsSystemOutboundBandwidthConstrained(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSystemOutboundBandwidthConstrained(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSystemInboundBandwidthConstrained(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSystemInboundBandwidthConstrained());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsSystemInboundBandwidthConstrained(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSystemInboundBandwidthConstrained(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PublishedPrivatePayload(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().PublishedPrivatePayload());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PublishedPrivatePayload(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PublishedPrivatePayload(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPrivatePayloadSize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxPrivatePayloadSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().DeviceAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Metric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>(this->shim().Metric());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult> : produce_base<D, Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>
{
    HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::XboxLive::XboxLiveDeviceAddress>(this->shim().DeviceAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking::XboxLive {

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::CreateFromSnapshotBase64(param::hstring const& base64)
{
    return get_activation_factory<XboxLiveDeviceAddress, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>().CreateFromSnapshotBase64(base64);
}

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::CreateFromSnapshotBuffer(Windows::Storage::Streams::IBuffer const& buffer)
{
    return get_activation_factory<XboxLiveDeviceAddress, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>().CreateFromSnapshotBuffer(buffer);
}

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::CreateFromSnapshotBytes(array_view<uint8_t const> buffer)
{
    return get_activation_factory<XboxLiveDeviceAddress, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>().CreateFromSnapshotBytes(buffer);
}

inline Windows::Networking::XboxLive::XboxLiveDeviceAddress XboxLiveDeviceAddress::GetLocal()
{
    return get_activation_factory<XboxLiveDeviceAddress, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>().GetLocal();
}

inline uint32_t XboxLiveDeviceAddress::MaxSnapshotBytesSize()
{
    return get_activation_factory<XboxLiveDeviceAddress, Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>().MaxSnapshotBytesSize();
}

inline Windows::Networking::XboxLive::XboxLiveEndpointPair XboxLiveEndpointPair::FindEndpointPairBySocketAddressBytes(array_view<uint8_t const> localSocketAddress, array_view<uint8_t const> remoteSocketAddress)
{
    return get_activation_factory<XboxLiveEndpointPair, Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>().FindEndpointPairBySocketAddressBytes(localSocketAddress, remoteSocketAddress);
}

inline Windows::Networking::XboxLive::XboxLiveEndpointPair XboxLiveEndpointPair::FindEndpointPairByHostNamesAndPorts(Windows::Networking::HostName const& localHostName, param::hstring const& localPort, Windows::Networking::HostName const& remoteHostName, param::hstring const& remotePort)
{
    return get_activation_factory<XboxLiveEndpointPair, Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>().FindEndpointPairByHostNamesAndPorts(localHostName, localPort, remoteHostName, remotePort);
}

inline Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate XboxLiveEndpointPairTemplate::GetTemplateByName(param::hstring const& name)
{
    return get_activation_factory<XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>().GetTemplateByName(name);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> XboxLiveEndpointPairTemplate::Templates()
{
    return get_activation_factory<XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>().Templates();
}

inline XboxLiveQualityOfServiceMeasurement::XboxLiveQualityOfServiceMeasurement() :
    XboxLiveQualityOfServiceMeasurement(get_activation_factory<XboxLiveQualityOfServiceMeasurement>().ActivateInstance<XboxLiveQualityOfServiceMeasurement>())
{}

inline void XboxLiveQualityOfServiceMeasurement::PublishPrivatePayloadBytes(array_view<uint8_t const> payload)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().PublishPrivatePayloadBytes(payload);
}

inline void XboxLiveQualityOfServiceMeasurement::ClearPrivatePayload()
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().ClearPrivatePayload();
}

inline uint32_t XboxLiveQualityOfServiceMeasurement::MaxSimultaneousProbeConnections()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().MaxSimultaneousProbeConnections();
}

inline void XboxLiveQualityOfServiceMeasurement::MaxSimultaneousProbeConnections(uint32_t value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().MaxSimultaneousProbeConnections(value);
}

inline bool XboxLiveQualityOfServiceMeasurement::IsSystemOutboundBandwidthConstrained()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemOutboundBandwidthConstrained();
}

inline void XboxLiveQualityOfServiceMeasurement::IsSystemOutboundBandwidthConstrained(bool value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemOutboundBandwidthConstrained(value);
}

inline bool XboxLiveQualityOfServiceMeasurement::IsSystemInboundBandwidthConstrained()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemInboundBandwidthConstrained();
}

inline void XboxLiveQualityOfServiceMeasurement::IsSystemInboundBandwidthConstrained(bool value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().IsSystemInboundBandwidthConstrained(value);
}

inline Windows::Storage::Streams::IBuffer XboxLiveQualityOfServiceMeasurement::PublishedPrivatePayload()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().PublishedPrivatePayload();
}

inline void XboxLiveQualityOfServiceMeasurement::PublishedPrivatePayload(Windows::Storage::Streams::IBuffer const& value)
{
    get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().PublishedPrivatePayload(value);
}

inline uint32_t XboxLiveQualityOfServiceMeasurement::MaxPrivatePayloadSize()
{
    return get_activation_factory<XboxLiveQualityOfServiceMeasurement, Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>().MaxPrivatePayloadSize();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveDeviceAddress> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveDeviceAddress> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPair> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPair> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveDeviceAddress> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveDeviceAddress> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPair> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPair> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> {};
template<> struct hash<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> : winrt::impl::hash_base<winrt::Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> {};

}

WINRT_WARNING_POP
