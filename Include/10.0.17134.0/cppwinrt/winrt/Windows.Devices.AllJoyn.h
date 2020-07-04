// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Devices.AllJoyn.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_IsEnabled(value));
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultAppName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DefaultAppName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultAppName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DefaultAppName(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::AppNames() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_AppNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DateOfManufacture() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DateOfManufacture(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DateOfManufacture(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DateOfManufacture(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DefaultDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultDescription(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DefaultDescription(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::Descriptions() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_Descriptions(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultManufacturer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_DefaultManufacturer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::DefaultManufacturer(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_DefaultManufacturer(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::Manufacturers() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_Manufacturers(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::ModelNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_ModelNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::ModelNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_ModelNumber(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SoftwareVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_SoftwareVersion(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SoftwareVersion(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_SoftwareVersion(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SupportUrl() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_SupportUrl(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::SupportUrl(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_SupportUrl(get_abi(value)));
}

template <typename D> GUID consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::AppId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>::AppId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutData)->put_AppId(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Status() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::AJSoftwareVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_AJSoftwareVersion(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::AppId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DateOfManufacture() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DateOfManufacture(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Language consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DefaultLanguage() const
{
    Windows::Globalization::Language value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DefaultLanguage(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::HardwareVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_HardwareVersion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::ModelNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_ModelNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::SoftwareVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_SoftwareVersion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::SupportedLanguages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_SupportedLanguages(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::SupportUrl() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_SupportUrl(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::AppName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_AppName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::DeviceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_DeviceName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>::Manufacturer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataView)->get_Manufacturer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> consume_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics<D>::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics)->GetDataBySessionPortAsync(get_abi(uniqueName), get_abi(busAttachment), sessionPort, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> consume_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics<D>::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics)->GetDataBySessionPortWithLanguageAsync(get_abi(uniqueName), get_abi(busAttachment), sessionPort, get_abi(language), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoiner<D>::Accept() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner)->Accept());
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::UniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_UniqueName(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::SessionPort() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_SessionPort(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynTrafficType consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::TrafficType() const
{
    Windows::Devices::AllJoyn::AllJoynTrafficType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_TrafficType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::SamePhysicalNode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_SamePhysicalNode(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::SameNetwork() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->get_SameNetwork(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>::Accept() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs)->Accept());
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgsFactory<D>::Create(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner) const
{
    Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory)->Create(get_abi(uniqueName), sessionPort, get_abi(trafficType), proximity, get_abi(acceptSessionJoiner), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs<D>::AuthenticationMechanism() const
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs)->get_AuthenticationMechanism(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs<D>::PeerUniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs)->get_PeerUniqueName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs<D>::Succeeded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs)->get_Succeeded(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAboutData consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AboutData() const
{
    Windows::Devices::AllJoyn::AllJoynAboutData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_AboutData(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::ConnectionSpecification() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_ConnectionSpecification(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachmentState consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::State() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachmentState value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_State(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::UniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_UniqueName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::PingAsync(param::hstring const& uniqueName) const
{
    Windows::Foundation::IAsyncOperation<int32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->PingAsync(get_abi(uniqueName), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::Connect() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->Connect());
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::Disconnect() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->Disconnect());
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_StateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynBusAttachment>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_StateChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationMechanisms() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->get_AuthenticationMechanisms(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_CredentialsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynBusAttachment>::remove_CredentialsRequested, CredentialsRequested(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_CredentialsRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_CredentialsVerificationRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynBusAttachment>::remove_CredentialsVerificationRequested, CredentialsVerificationRequested(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::CredentialsVerificationRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_CredentialsVerificationRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationComplete(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->add_AuthenticationComplete(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationComplete(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynBusAttachment>::remove_AuthenticationComplete, AuthenticationComplete(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>::AuthenticationComplete(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment)->remove_AuthenticationComplete(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::GetAboutDataAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->GetAboutDataAsync(get_abi(serviceInfo), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::GetAboutDataAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Globalization::Language const& language) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->GetAboutDataWithLanguageAsync(get_abi(serviceInfo), get_abi(language), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->add_AcceptSessionJoinerRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment2> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>::remove_AcceptSessionJoinerRequested, AcceptSessionJoinerRequested(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::AcceptSessionJoinerRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->remove_AcceptSessionJoinerRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::SessionJoined(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->add_SessionJoined(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment2> consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::SessionJoined(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>::remove_SessionJoined, SessionJoined(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>::SessionJoined(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachment2)->remove_SessionJoined(get_abi(token)));
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachment consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentFactory<D>::Create(param::hstring const& connectionSpecification) const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory)->Create(get_abi(connectionSpecification), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachmentState consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs<D>::State() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachmentState value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs<D>::Status() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs)->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachment consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics<D>::GetDefault() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment defaultBusAttachment{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics)->GetDefault(put_abi(defaultBusAttachment)));
    return defaultBusAttachment;
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcher consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics<D>::GetWatcher(param::iterable<hstring> const& requiredInterfaces) const
{
    Windows::Devices::Enumeration::DeviceWatcher deviceWatcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics)->GetWatcher(get_abi(requiredInterfaces), put_abi(deviceWatcher)));
    return deviceWatcher;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->Start());
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->Stop());
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::AddProducer(Windows::Devices::AllJoyn::IAllJoynProducer const& producer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->AddProducer(get_abi(producer)));
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusAttachment consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::BusAttachment() const
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->get_BusAttachment(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSession consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Session() const
{
    Windows::Devices::AllJoyn::AllJoynSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->get_Session(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynBusObject> consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynBusObject>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynBusObject>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObject)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusObject consume_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory<D>::Create(param::hstring const& objectPath) const
{
    Windows::Devices::AllJoyn::AllJoynBusObject result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectFactory)->Create(get_abi(objectPath), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusObject consume_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory<D>::CreateWithBusAttachment(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) const
{
    Windows::Devices::AllJoyn::AllJoynBusObject result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectFactory)->CreateWithBusAttachment(get_abi(objectPath), get_abi(busAttachment), put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgs<D>::Status() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs)->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgsFactory<D>::Create(int32_t status) const
{
    Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory)->Create(status, put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::AuthenticationMechanism() const
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_AuthenticationMechanism(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Certificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_Certificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->put_Certificate(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::PasswordCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_PasswordCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::PasswordCredential(Windows::Security::Credentials::PasswordCredential const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->put_PasswordCredential(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Timeout() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->get_Timeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>::Timeout(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentials)->put_Timeout(get_abi(value)));
}

template <typename D> uint16_t consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::AttemptCount() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_AttemptCount(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynCredentials consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::Credentials() const
{
    Windows::Devices::AllJoyn::AllJoynCredentials value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_Credentials(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::PeerUniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_PeerUniqueName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::RequestedUserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->get_RequestedUserName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::AuthenticationMechanism() const
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_AuthenticationMechanism(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerUniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerUniqueName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::SocketSslErrorSeverity consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificateErrorSeverity() const
{
    Windows::Networking::Sockets::SocketSslErrorSeverity value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerCertificateErrorSeverity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerCertificateErrors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerCertificateErrors(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::PeerIntermediateCertificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->get_PeerIntermediateCertificates(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::Accept() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->Accept());
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynMessageInfo<D>::SenderUniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynMessageInfo)->get_SenderUniqueName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynMessageInfo consume_Windows_Devices_AllJoyn_IAllJoynMessageInfoFactory<D>::Create(param::hstring const& senderUniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynMessageInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory)->Create(get_abi(senderUniqueName), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynProducer<D>::SetBusObject(Windows::Devices::AllJoyn::AllJoynBusObject const& busObject) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynProducer)->SetBusObject(get_abi(busObject)));
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgs<D>::Status() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs)->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgsFactory<D>::Create(int32_t status) const
{
    Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory)->Create(status, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo<D>::UniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfo)->get_UniqueName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo<D>::ObjectPath() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfo)->get_ObjectPath(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo<D>::SessionPort() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfo)->get_SessionPort(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynServiceInfo consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoFactory<D>::Create(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort) const
{
    Windows::Devices::AllJoyn::AllJoynServiceInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory)->Create(get_abi(uniqueName), get_abi(objectPath), sessionPort, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgs<D>::UniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs)->get_UniqueName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgsFactory<D>::Create(param::hstring const& uniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory)->Create(get_abi(uniqueName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Id() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->get_Id(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Status() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->get_Status(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<int32_t> consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::RemoveMemberAsync(param::hstring const& uniqueName) const
{
    Windows::Foundation::IAsyncOperation<int32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->RemoveMemberAsync(get_abi(uniqueName), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->add_MemberAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynSession> consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynSession>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynSession>::remove_MemberAdded, MemberAdded(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->remove_MemberAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->add_MemberRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynSession> consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynSession>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynSession>::remove_MemberRemoved, MemberRemoved(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::MemberRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->remove_MemberRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Lost(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->add_Lost(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::AllJoyn::IAllJoynSession> consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Lost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::AllJoyn::IAllJoynSession>(this, &abi_t<Windows::Devices::AllJoyn::IAllJoynSession>::remove_Lost, Lost(handler));
}

template <typename D> void consume_Windows_Devices_AllJoyn_IAllJoynSession<D>::Lost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSession)->remove_Lost(get_abi(token)));
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSession consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgs<D>::Session() const
{
    Windows::Devices::AllJoyn::AllJoynSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgsFactory<D>::Create(Windows::Devices::AllJoyn::AllJoynSession const& session) const
{
    Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory)->Create(get_abi(session), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionLostReason consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgs<D>::Reason() const
{
    Windows::Devices::AllJoyn::AllJoynSessionLostReason value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgsFactory<D>::Create(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason) const
{
    Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory)->Create(get_abi(reason), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgs<D>::UniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs)->get_UniqueName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgsFactory<D>::Create(param::hstring const& uniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory)->Create(get_abi(uniqueName), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgs<D>::UniqueName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs)->get_UniqueName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgsFactory<D>::Create(param::hstring const& uniqueName) const
{
    Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory)->Create(get_abi(uniqueName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> consume_Windows_Devices_AllJoyn_IAllJoynSessionStatics<D>::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionStatics)->GetFromServiceInfoAsync(get_abi(serviceInfo), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> consume_Windows_Devices_AllJoyn_IAllJoynSessionStatics<D>::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynSessionStatics)->GetFromServiceInfoAndBusAttachmentAsync(get_abi(serviceInfo), get_abi(busAttachment), put_abi(operation)));
    return operation;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::Ok() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_Ok(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::Fail() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_Fail(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::OperationTimedOut() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_OperationTimedOut(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::OtherEndClosed() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_OtherEndClosed(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::ConnectionRefused() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_ConnectionRefused(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::AuthenticationFailed() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_AuthenticationFailed(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::AuthenticationRejectedByUser() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_AuthenticationRejectedByUser(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::SslConnectFailed() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_SslConnectFailed(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::SslIdentityVerificationFailed() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_SslIdentityVerificationFailed(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InsufficientSecurity() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InsufficientSecurity(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument1() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument1(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument2() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument2(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument3() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument3(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument4() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument4(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument5() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument5(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument6() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument6(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument7() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument7(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>::InvalidArgument8() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynStatusStatics)->get_InvalidArgument8(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgs<D>::Status() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs)->get_Status(&value));
    return value;
}

template <typename D> Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgsFactory<D>::Create(int32_t status) const
{
    Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory)->Create(status, put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutData> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutData>
{
    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultAppName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultAppName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultAppName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultAppName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().AppNames());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DateOfManufacture(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().DateOfManufacture());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DateOfManufacture(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DateOfManufacture(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultDescription(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultDescription(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultDescription(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Descriptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultManufacturer(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultManufacturer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultManufacturer(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultManufacturer(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Manufacturers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Manufacturers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ModelNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ModelNumber(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ModelNumber(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareVersion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SoftwareVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SoftwareVersion(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SoftwareVersion(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportUrl(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportUrl());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SupportUrl(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SupportUrl(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppId(GUID value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutDataView> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutDataView>
{
    HRESULT __stdcall get_Status(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AJSoftwareVersion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AJSoftwareVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DateOfManufacture(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().DateOfManufacture());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultLanguage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Language>(this->shim().DefaultLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareVersion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HardwareVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ModelNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareVersion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SoftwareVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedLanguages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language>>(this->shim().SupportedLanguages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportUrl(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportUrl());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Manufacturer(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Manufacturer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>
{
    HRESULT __stdcall GetDataBySessionPortAsync(HSTRING uniqueName, void* busAttachment, uint16_t sessionPort, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetDataBySessionPortAsync(*reinterpret_cast<hstring const*>(&uniqueName), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment), sessionPort));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDataBySessionPortWithLanguageAsync(HSTRING uniqueName, void* busAttachment, uint16_t sessionPort, void* language, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetDataBySessionPortAsync(*reinterpret_cast<hstring const*>(&uniqueName), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment), sessionPort, *reinterpret_cast<Windows::Globalization::Language const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>
{
    HRESULT __stdcall Accept() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>
{
    HRESULT __stdcall get_UniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SessionPort(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().SessionPort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficType(Windows::Devices::AllJoyn::AllJoynTrafficType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynTrafficType>(this->shim().TrafficType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SamePhysicalNode(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SamePhysicalNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SameNetwork(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SameNetwork());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Accept() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>
{
    HRESULT __stdcall Create(HSTRING uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType trafficType, uint8_t proximity, void* acceptSessionJoiner, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName), sessionPort, *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynTrafficType const*>(&trafficType), proximity, *reinterpret_cast<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const*>(&acceptSessionJoiner)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>
{
    HRESULT __stdcall get_AuthenticationMechanism(Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>(this->shim().AuthenticationMechanism());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeerUniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PeerUniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Succeeded(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Succeeded());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment>
{
    HRESULT __stdcall get_AboutData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAboutData>(this->shim().AboutData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionSpecification(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ConnectionSpecification());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Devices::AllJoyn::AllJoynBusAttachmentState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PingAsync(HSTRING uniqueName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<int32_t>>(this->shim().PingAsync(*reinterpret_cast<hstring const*>(&uniqueName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Connect() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Connect();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Disconnect() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnect();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const*>(&handler)));
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

    HRESULT __stdcall get_AuthenticationMechanisms(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>>(this->shim().AuthenticationMechanisms());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CredentialsRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CredentialsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CredentialsRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CredentialsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CredentialsVerificationRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CredentialsVerificationRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CredentialsVerificationRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CredentialsVerificationRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationComplete(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AuthenticationComplete(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationComplete(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationComplete(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachment2>
{
    HRESULT __stdcall GetAboutDataAsync(void* serviceInfo, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetAboutDataAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAboutDataWithLanguageAsync(void* serviceInfo, void* language, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView>>(this->shim().GetAboutDataAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo), *reinterpret_cast<Windows::Globalization::Language const*>(&language)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AcceptSessionJoinerRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AcceptSessionJoinerRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AcceptSessionJoinerRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptSessionJoinerRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SessionJoined(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SessionJoined(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SessionJoined(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionJoined(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>
{
    HRESULT __stdcall Create(HSTRING connectionSpecification, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachment>(this->shim().Create(*reinterpret_cast<hstring const*>(&connectionSpecification)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Devices::AllJoyn::AllJoynBusAttachmentState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>
{
    HRESULT __stdcall GetDefault(void** defaultBusAttachment) noexcept final
    {
        try
        {
            *defaultBusAttachment = nullptr;
            typename D::abi_guard guard(this->shim());
            *defaultBusAttachment = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachment>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetWatcher(void* requiredInterfaces, void** deviceWatcher) noexcept final
    {
        try
        {
            *deviceWatcher = nullptr;
            typename D::abi_guard guard(this->shim());
            *deviceWatcher = detach_from<Windows::Devices::Enumeration::DeviceWatcher>(this->shim().GetWatcher(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requiredInterfaces)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObject> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObject>
{
    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddProducer(void* producer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddProducer(*reinterpret_cast<Windows::Devices::AllJoyn::IAllJoynProducer const*>(&producer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BusAttachment(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynBusAttachment>(this->shim().BusAttachment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Session(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynSession>(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>
{
    HRESULT __stdcall Create(HSTRING objectPath, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusObject>(this->shim().Create(*reinterpret_cast<hstring const*>(&objectPath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithBusAttachment(HSTRING objectPath, void* busAttachment, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusObject>(this->shim().CreateWithBusAttachment(*reinterpret_cast<hstring const*>(&objectPath), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>
{
    HRESULT __stdcall get_Status(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>
{
    HRESULT __stdcall Create(int32_t status, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>(this->shim().Create(status));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentials> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentials>
{
    HRESULT __stdcall get_AuthenticationMechanism(Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>(this->shim().AuthenticationMechanism());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Certificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().Certificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Certificate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Certificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PasswordCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().PasswordCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PasswordCredential(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PasswordCredential(*reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Timeout());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Timeout(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>
{
    HRESULT __stdcall get_AttemptCount(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().AttemptCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Credentials(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynCredentials>(this->shim().Credentials());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeerUniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PeerUniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedUserName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RequestedUserName());
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

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>
{
    HRESULT __stdcall get_AuthenticationMechanism(Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>(this->shim().AuthenticationMechanism());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeerUniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PeerUniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeerCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().PeerCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Sockets::SocketSslErrorSeverity>(this->shim().PeerCertificateErrorSeverity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeerCertificateErrors(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult>>(this->shim().PeerCertificateErrors());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeerIntermediateCertificates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().PeerIntermediateCertificates());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Accept() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
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

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynMessageInfo> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynMessageInfo>
{
    HRESULT __stdcall get_SenderUniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SenderUniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>
{
    HRESULT __stdcall Create(HSTRING senderUniqueName, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynMessageInfo>(this->shim().Create(*reinterpret_cast<hstring const*>(&senderUniqueName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducer> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducer>
{
    HRESULT __stdcall SetBusObject(void* busObject) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBusObject(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusObject const*>(&busObject));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>
{
    HRESULT __stdcall get_Status(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>
{
    HRESULT __stdcall Create(int32_t status, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>(this->shim().Create(status));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfo> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfo>
{
    HRESULT __stdcall get_UniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ObjectPath(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ObjectPath());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SessionPort(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().SessionPort());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>
{
    HRESULT __stdcall Create(HSTRING uniqueName, HSTRING objectPath, uint16_t sessionPort, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynServiceInfo>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName), *reinterpret_cast<hstring const*>(&objectPath), sessionPort));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>
{
    HRESULT __stdcall get_UniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>
{
    HRESULT __stdcall Create(HSTRING uniqueName, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSession> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSession>
{
    HRESULT __stdcall get_Id(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveMemberAsync(HSTRING uniqueName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<int32_t>>(this->shim().RemoveMemberAsync(*reinterpret_cast<hstring const*>(&uniqueName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MemberAdded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MemberAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MemberAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MemberAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MemberRemoved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MemberRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MemberRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MemberRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Lost(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Lost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Lost(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Lost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>
{
    HRESULT __stdcall get_Session(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynSession>(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>
{
    HRESULT __stdcall Create(void* session, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>(this->shim().Create(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynSession const*>(&session)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::Devices::AllJoyn::AllJoynSessionLostReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::AllJoyn::AllJoynSessionLostReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>
{
    HRESULT __stdcall Create(Windows::Devices::AllJoyn::AllJoynSessionLostReason reason, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>(this->shim().Create(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynSessionLostReason const*>(&reason)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>
{
    HRESULT __stdcall get_UniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>
{
    HRESULT __stdcall Create(HSTRING uniqueName, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>
{
    HRESULT __stdcall get_UniqueName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UniqueName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>
{
    HRESULT __stdcall Create(HSTRING uniqueName, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>(this->shim().Create(*reinterpret_cast<hstring const*>(&uniqueName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynSessionStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynSessionStatics>
{
    HRESULT __stdcall GetFromServiceInfoAsync(void* serviceInfo, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>>(this->shim().GetFromServiceInfoAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetFromServiceInfoAndBusAttachmentAsync(void* serviceInfo, void* busAttachment, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession>>(this->shim().GetFromServiceInfoAsync(*reinterpret_cast<Windows::Devices::AllJoyn::AllJoynServiceInfo const*>(&serviceInfo), *reinterpret_cast<Windows::Devices::AllJoyn::AllJoynBusAttachment const*>(&busAttachment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynStatusStatics> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynStatusStatics>
{
    HRESULT __stdcall get_Ok(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Ok());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Fail(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Fail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OperationTimedOut(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().OperationTimedOut());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OtherEndClosed(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().OtherEndClosed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionRefused(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ConnectionRefused());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationFailed(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().AuthenticationFailed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationRejectedByUser(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().AuthenticationRejectedByUser());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SslConnectFailed(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SslConnectFailed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SslIdentityVerificationFailed(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SslIdentityVerificationFailed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InsufficientSecurity(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InsufficientSecurity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument1(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument2(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument3(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument4(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument4());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument5(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument6(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument6());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument7(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InvalidArgument8(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InvalidArgument8());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>
{
    HRESULT __stdcall get_Status(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> : produce_base<D, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>
{
    HRESULT __stdcall Create(int32_t status, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>(this->shim().Create(status));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::AllJoyn {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> AllJoynAboutDataView::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort)
{
    return get_activation_factory<AllJoynAboutDataView, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>().GetDataBySessionPortAsync(uniqueName, busAttachment, sessionPort);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> AllJoynAboutDataView::GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language)
{
    return get_activation_factory<AllJoynAboutDataView, Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>().GetDataBySessionPortAsync(uniqueName, busAttachment, sessionPort, language);
}

inline AllJoynAcceptSessionJoinerEventArgs::AllJoynAcceptSessionJoinerEventArgs(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner) :
    AllJoynAcceptSessionJoinerEventArgs(get_activation_factory<AllJoynAcceptSessionJoinerEventArgs, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>().Create(uniqueName, sessionPort, trafficType, proximity, acceptSessionJoiner))
{}

inline AllJoynBusAttachment::AllJoynBusAttachment() :
    AllJoynBusAttachment(get_activation_factory<AllJoynBusAttachment>().ActivateInstance<AllJoynBusAttachment>())
{}

inline AllJoynBusAttachment::AllJoynBusAttachment(param::hstring const& connectionSpecification) :
    AllJoynBusAttachment(get_activation_factory<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>().Create(connectionSpecification))
{}

inline Windows::Devices::AllJoyn::AllJoynBusAttachment AllJoynBusAttachment::GetDefault()
{
    return get_activation_factory<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>().GetDefault();
}

inline Windows::Devices::Enumeration::DeviceWatcher AllJoynBusAttachment::GetWatcher(param::iterable<hstring> const& requiredInterfaces)
{
    return get_activation_factory<AllJoynBusAttachment, Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>().GetWatcher(requiredInterfaces);
}

inline AllJoynBusObject::AllJoynBusObject() :
    AllJoynBusObject(get_activation_factory<AllJoynBusObject>().ActivateInstance<AllJoynBusObject>())
{}

inline AllJoynBusObject::AllJoynBusObject(param::hstring const& objectPath) :
    AllJoynBusObject(get_activation_factory<AllJoynBusObject, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>().Create(objectPath))
{}

inline AllJoynBusObject::AllJoynBusObject(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) :
    AllJoynBusObject(get_activation_factory<AllJoynBusObject, Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>().CreateWithBusAttachment(objectPath, busAttachment))
{}

inline AllJoynBusObjectStoppedEventArgs::AllJoynBusObjectStoppedEventArgs(int32_t status) :
    AllJoynBusObjectStoppedEventArgs(get_activation_factory<AllJoynBusObjectStoppedEventArgs, Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>().Create(status))
{}

inline AllJoynMessageInfo::AllJoynMessageInfo(param::hstring const& senderUniqueName) :
    AllJoynMessageInfo(get_activation_factory<AllJoynMessageInfo, Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>().Create(senderUniqueName))
{}

inline AllJoynProducerStoppedEventArgs::AllJoynProducerStoppedEventArgs(int32_t status) :
    AllJoynProducerStoppedEventArgs(get_activation_factory<AllJoynProducerStoppedEventArgs, Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>().Create(status))
{}

inline AllJoynServiceInfo::AllJoynServiceInfo(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort) :
    AllJoynServiceInfo(get_activation_factory<AllJoynServiceInfo, Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>().Create(uniqueName, objectPath, sessionPort))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> AllJoynServiceInfo::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<AllJoynServiceInfo, Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>().FromIdAsync(deviceId);
}

inline AllJoynServiceInfoRemovedEventArgs::AllJoynServiceInfoRemovedEventArgs(param::hstring const& uniqueName) :
    AllJoynServiceInfoRemovedEventArgs(get_activation_factory<AllJoynServiceInfoRemovedEventArgs, Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>().Create(uniqueName))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> AllJoynSession::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo)
{
    return get_activation_factory<AllJoynSession, Windows::Devices::AllJoyn::IAllJoynSessionStatics>().GetFromServiceInfoAsync(serviceInfo);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> AllJoynSession::GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment)
{
    return get_activation_factory<AllJoynSession, Windows::Devices::AllJoyn::IAllJoynSessionStatics>().GetFromServiceInfoAsync(serviceInfo, busAttachment);
}

inline AllJoynSessionJoinedEventArgs::AllJoynSessionJoinedEventArgs(Windows::Devices::AllJoyn::AllJoynSession const& session) :
    AllJoynSessionJoinedEventArgs(get_activation_factory<AllJoynSessionJoinedEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>().Create(session))
{}

inline AllJoynSessionLostEventArgs::AllJoynSessionLostEventArgs(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason) :
    AllJoynSessionLostEventArgs(get_activation_factory<AllJoynSessionLostEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>().Create(reason))
{}

inline AllJoynSessionMemberAddedEventArgs::AllJoynSessionMemberAddedEventArgs(param::hstring const& uniqueName) :
    AllJoynSessionMemberAddedEventArgs(get_activation_factory<AllJoynSessionMemberAddedEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>().Create(uniqueName))
{}

inline AllJoynSessionMemberRemovedEventArgs::AllJoynSessionMemberRemovedEventArgs(param::hstring const& uniqueName) :
    AllJoynSessionMemberRemovedEventArgs(get_activation_factory<AllJoynSessionMemberRemovedEventArgs, Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>().Create(uniqueName))
{}

inline int32_t AllJoynStatus::Ok()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().Ok();
}

inline int32_t AllJoynStatus::Fail()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().Fail();
}

inline int32_t AllJoynStatus::OperationTimedOut()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().OperationTimedOut();
}

inline int32_t AllJoynStatus::OtherEndClosed()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().OtherEndClosed();
}

inline int32_t AllJoynStatus::ConnectionRefused()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().ConnectionRefused();
}

inline int32_t AllJoynStatus::AuthenticationFailed()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().AuthenticationFailed();
}

inline int32_t AllJoynStatus::AuthenticationRejectedByUser()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().AuthenticationRejectedByUser();
}

inline int32_t AllJoynStatus::SslConnectFailed()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().SslConnectFailed();
}

inline int32_t AllJoynStatus::SslIdentityVerificationFailed()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().SslIdentityVerificationFailed();
}

inline int32_t AllJoynStatus::InsufficientSecurity()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InsufficientSecurity();
}

inline int32_t AllJoynStatus::InvalidArgument1()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument1();
}

inline int32_t AllJoynStatus::InvalidArgument2()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument2();
}

inline int32_t AllJoynStatus::InvalidArgument3()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument3();
}

inline int32_t AllJoynStatus::InvalidArgument4()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument4();
}

inline int32_t AllJoynStatus::InvalidArgument5()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument5();
}

inline int32_t AllJoynStatus::InvalidArgument6()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument6();
}

inline int32_t AllJoynStatus::InvalidArgument7()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument7();
}

inline int32_t AllJoynStatus::InvalidArgument8()
{
    return get_activation_factory<AllJoynStatus, Windows::Devices::AllJoyn::IAllJoynStatusStatics>().InvalidArgument8();
}

inline AllJoynWatcherStoppedEventArgs::AllJoynWatcherStoppedEventArgs(int32_t status) :
    AllJoynWatcherStoppedEventArgs(get_activation_factory<AllJoynWatcherStoppedEventArgs, Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>().Create(status))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAboutData> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAboutData> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataView> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataView> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment2> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachment2> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObject> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObject> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynCredentials> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynCredentials> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfo> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynProducer> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynProducer> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfo> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSession> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSession> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynSessionStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynSessionStatics> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynStatusStatics> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynStatusStatics> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAboutData> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAboutData> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAboutDataView> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAboutDataView> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachment> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusObject> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusObject> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynCredentials> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynCredentials> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynMessageInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynMessageInfo> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfo> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSession> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSession> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynStatus> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynStatus> {};
template<> struct hash<winrt::Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs> {};

}

WINRT_WARNING_POP
