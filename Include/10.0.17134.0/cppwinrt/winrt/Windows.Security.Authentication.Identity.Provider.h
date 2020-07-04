// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Authentication.Identity.Provider.2.h"
#include "winrt/Windows.Security.Authentication.Identity.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::ServiceAuthenticationHmac() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_ServiceAuthenticationHmac(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::SessionNonce() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_SessionNonce(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::DeviceNonce() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_DeviceNonce(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::DeviceConfigurationData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->get_DeviceConfigurationData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::FinishAuthenticationAsync(Windows::Storage::Streams::IBuffer const& deviceHmac, Windows::Storage::Streams::IBuffer const& sessionHmac) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->FinishAuthenticationAsync(get_abi(deviceHmac), get_abi(sessionHmac), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthentication<D>::AbortAuthenticationAsync(param::hstring const& errorLogMessage) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication)->AbortAuthenticationAsync(get_abi(errorLogMessage), put_abi(result)));
    return result;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult<D>::Status() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationResult<D>::Authentication() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult)->get_Authentication(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs<D>::StageInfo() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs)->get_StageInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::Stage() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo)->get_Stage(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::Scenario() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo)->get_Scenario(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStageInfo<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::ShowNotificationMessageAsync(param::hstring const& deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const& message) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->ShowNotificationMessageAsync(get_abi(deviceName), get_abi(message), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::StartAuthenticationAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& serviceAuthenticationNonce) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->StartAuthenticationAsync(get_abi(deviceId), get_abi(serviceAuthenticationNonce), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->add_AuthenticationStageChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>(this, &abi_t<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>::remove_AuthenticationStageChanged, AuthenticationStageChanged(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::AuthenticationStageChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->remove_AuthenticationStageChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorAuthenticationStatics<D>::GetAuthenticationStageInfoAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics)->GetAuthenticationStageInfoAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->RegisterDevicePresenceMonitoringAsync(get_abi(deviceId), get_abi(deviceInstancePath), get_abi(monitoringMode), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->RegisterDevicePresenceMonitoringWithNewDeviceAsync(get_abi(deviceId), get_abi(deviceInstancePath), get_abi(monitoringMode), get_abi(deviceFriendlyName), get_abi(deviceModelNumber), get_abi(deviceConfigurationData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::UnregisterDevicePresenceMonitoringAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->UnregisterDevicePresenceMonitoringAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics<D>::IsDevicePresenceMonitoringSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics)->IsDevicePresenceMonitoringSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceId() const
{
    hstring deviceId{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceId(put_abi(deviceId)));
    return deviceId;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceFriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceFriendlyName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceModelNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceModelNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo<D>::DeviceConfigurationData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo)->get_DeviceConfigurationData(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2<D>::PresenceMonitoringMode() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2)->get_PresenceMonitoringMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2<D>::UpdateDevicePresenceAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence const& presenceState) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2)->UpdateDevicePresenceAsync(get_abi(presenceState), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorInfo2<D>::IsAuthenticationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2)->get_IsAuthenticationSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration<D>::FinishRegisteringDeviceAsync(Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration)->FinishRegisteringDeviceAsync(get_abi(deviceConfigurationData), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistration<D>::AbortRegisteringDeviceAsync(param::hstring const& errorLogMessage) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration)->AbortRegisteringDeviceAsync(get_abi(errorLogMessage), put_abi(result)));
    return result;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult<D>::Status() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationResult<D>::Registration() const
{
    Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult)->get_Registration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::RequestStartRegisteringDeviceAsync(param::hstring const& deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const& capabilities, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceKey, Windows::Storage::Streams::IBuffer const& mutualAuthenticationKey) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->RequestStartRegisteringDeviceAsync(get_abi(deviceId), get_abi(capabilities), get_abi(deviceFriendlyName), get_abi(deviceModelNumber), get_abi(deviceKey), get_abi(mutualAuthenticationKey), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const& queryType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> deviceInfoList{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->FindAllRegisteredDeviceInfoAsync(get_abi(queryType), put_abi(deviceInfoList)));
    return deviceInfoList;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::UnregisterDeviceAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->UnregisterDeviceAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Identity_Provider_ISecondaryAuthenticationFactorRegistrationStatics<D>::UpdateDeviceConfigurationDataAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& deviceConfigurationData) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics)->UpdateDeviceConfigurationDataAsync(get_abi(deviceId), get_abi(deviceConfigurationData), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication>
{
    HRESULT __stdcall get_ServiceAuthenticationHmac(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ServiceAuthenticationHmac());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SessionNonce(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().SessionNonce());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceNonce(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DeviceNonce());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceConfigurationData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DeviceConfigurationData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FinishAuthenticationAsync(void* deviceHmac, void* sessionHmac, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorFinishAuthenticationStatus>>(this->shim().FinishAuthenticationAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceHmac), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&sessionHmac)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AbortAuthenticationAsync(HSTRING errorLogMessage, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().AbortAuthenticationAsync(*reinterpret_cast<hstring const*>(&errorLogMessage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult>
{
    HRESULT __stdcall get_Status(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Authentication(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication>(this->shim().Authentication());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs>
{
    HRESULT __stdcall get_StageInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo>(this->shim().StageInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo>
{
    HRESULT __stdcall get_Stage(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStage>(this->shim().Stage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scenario(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationScenario>(this->shim().Scenario());
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
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>
{
    HRESULT __stdcall ShowNotificationMessageAsync(HSTRING deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage message, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowNotificationMessageAsync(*reinterpret_cast<hstring const*>(&deviceName), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartAuthenticationAsync(HSTRING deviceId, void* serviceAuthenticationNonce, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult>>(this->shim().StartAuthenticationAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&serviceAuthenticationNonce)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AuthenticationStageChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AuthenticationStageChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AuthenticationStageChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationStageChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAuthenticationStageInfoAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo>>(this->shim().GetAuthenticationStageInfoAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>
{
    HRESULT __stdcall RegisterDevicePresenceMonitoringAsync(HSTRING deviceId, HSTRING deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>>(this->shim().RegisterDevicePresenceMonitoringAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<hstring const*>(&deviceInstancePath), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const*>(&monitoringMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterDevicePresenceMonitoringWithNewDeviceAsync(HSTRING deviceId, HSTRING deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode monitoringMode, HSTRING deviceFriendlyName, HSTRING deviceModelNumber, void* deviceConfigurationData, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus>>(this->shim().RegisterDevicePresenceMonitoringAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<hstring const*>(&deviceInstancePath), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const*>(&monitoringMode), *reinterpret_cast<hstring const*>(&deviceFriendlyName), *reinterpret_cast<hstring const*>(&deviceModelNumber), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceConfigurationData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnregisterDevicePresenceMonitoringAsync(HSTRING deviceId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnregisterDevicePresenceMonitoringAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsDevicePresenceMonitoringSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDevicePresenceMonitoringSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo>
{
    HRESULT __stdcall get_DeviceId(HSTRING* deviceId) noexcept final
    {
        try
        {
            *deviceId = nullptr;
            typename D::abi_guard guard(this->shim());
            *deviceId = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceFriendlyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceModelNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceModelNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceConfigurationData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DeviceConfigurationData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2>
{
    HRESULT __stdcall get_PresenceMonitoringMode(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode>(this->shim().PresenceMonitoringMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateDevicePresenceAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence presenceState, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UpdateDevicePresenceAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresence const*>(&presenceState)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAuthenticationSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAuthenticationSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration>
{
    HRESULT __stdcall FinishRegisteringDeviceAsync(void* deviceConfigurationData, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FinishRegisteringDeviceAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceConfigurationData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AbortRegisteringDeviceAsync(HSTRING errorLogMessage, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().AbortRegisteringDeviceAsync(*reinterpret_cast<hstring const*>(&errorLogMessage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult>
{
    HRESULT __stdcall get_Status(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Registration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration>(this->shim().Registration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics> : produce_base<D, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>
{
    HRESULT __stdcall RequestStartRegisteringDeviceAsync(HSTRING deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities capabilities, HSTRING deviceFriendlyName, HSTRING deviceModelNumber, void* deviceKey, void* mutualAuthenticationKey, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult>>(this->shim().RequestStartRegisteringDeviceAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const*>(&capabilities), *reinterpret_cast<hstring const*>(&deviceFriendlyName), *reinterpret_cast<hstring const*>(&deviceModelNumber), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceKey), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&mutualAuthenticationKey)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope queryType, void** deviceInfoList) noexcept final
    {
        try
        {
            *deviceInfoList = nullptr;
            typename D::abi_guard guard(this->shim());
            *deviceInfoList = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>>>(this->shim().FindAllRegisteredDeviceInfoAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const*>(&queryType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnregisterDeviceAsync(HSTRING deviceId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnregisterDeviceAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateDeviceConfigurationDataAsync(HSTRING deviceId, void* deviceConfigurationData, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UpdateDeviceConfigurationDataAsync(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&deviceConfigurationData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Provider {

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorAuthentication::ShowNotificationMessageAsync(param::hstring const& deviceName, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationMessage const& message)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().ShowNotificationMessageAsync(deviceName, message);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> SecondaryAuthenticationFactorAuthentication::StartAuthenticationAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& serviceAuthenticationNonce)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().StartAuthenticationAsync(deviceId, serviceAuthenticationNonce);
}

inline event_token SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler)
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().AuthenticationStageChanged(handler);
}

inline factory_event_revoker<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> const& handler)
{
    auto factory = get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>();
    return { factory, &impl::abi_t<Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>::remove_AuthenticationStageChanged, factory.AuthenticationStageChanged(handler) };
}

inline void SecondaryAuthenticationFactorAuthentication::AuthenticationStageChanged(event_token const& token)
{
    get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().AuthenticationStageChanged(token);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> SecondaryAuthenticationFactorAuthentication::GetAuthenticationStageInfoAsync()
{
    return get_activation_factory<SecondaryAuthenticationFactorAuthentication, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics>().GetAuthenticationStageInfoAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> SecondaryAuthenticationFactorRegistration::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().RegisterDevicePresenceMonitoringAsync(deviceId, deviceInstancePath, monitoringMode);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatus> SecondaryAuthenticationFactorRegistration::RegisterDevicePresenceMonitoringAsync(param::hstring const& deviceId, param::hstring const& deviceInstancePath, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDevicePresenceMonitoringMode const& monitoringMode, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceConfigurationData)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().RegisterDevicePresenceMonitoringAsync(deviceId, deviceInstancePath, monitoringMode, deviceFriendlyName, deviceModelNumber, deviceConfigurationData);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UnregisterDevicePresenceMonitoringAsync(param::hstring const& deviceId)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().UnregisterDevicePresenceMonitoringAsync(deviceId);
}

inline bool SecondaryAuthenticationFactorRegistration::IsDevicePresenceMonitoringSupported()
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics>().IsDevicePresenceMonitoringSupported();
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> SecondaryAuthenticationFactorRegistration::RequestStartRegisteringDeviceAsync(param::hstring const& deviceId, Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceCapabilities const& capabilities, param::hstring const& deviceFriendlyName, param::hstring const& deviceModelNumber, Windows::Storage::Streams::IBuffer const& deviceKey, Windows::Storage::Streams::IBuffer const& mutualAuthenticationKey)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().RequestStartRegisteringDeviceAsync(deviceId, capabilities, deviceFriendlyName, deviceModelNumber, deviceKey, mutualAuthenticationKey);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo>> SecondaryAuthenticationFactorRegistration::FindAllRegisteredDeviceInfoAsync(Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorDeviceFindScope const& queryType)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().FindAllRegisteredDeviceInfoAsync(queryType);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UnregisterDeviceAsync(param::hstring const& deviceId)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().UnregisterDeviceAsync(deviceId);
}

inline Windows::Foundation::IAsyncAction SecondaryAuthenticationFactorRegistration::UpdateDeviceConfigurationDataAsync(param::hstring const& deviceId, Windows::Storage::Streams::IBuffer const& deviceConfigurationData)
{
    return get_activation_factory<SecondaryAuthenticationFactorRegistration, Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics>().UpdateDeviceConfigurationDataAsync(deviceId, deviceConfigurationData);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthentication> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStageInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorAuthenticationStatics> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorDevicePresenceMonitoringRegistrationStatics> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorInfo2> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistration> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::ISecondaryAuthenticationFactorRegistrationStatics> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthentication> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageChangedEventArgs> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorAuthenticationStageInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistration> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Provider::SecondaryAuthenticationFactorRegistrationResult> {};

}

WINRT_WARNING_POP
