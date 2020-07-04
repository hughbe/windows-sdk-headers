// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Devices.WiFi.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Networking::Connectivity::NetworkAdapter consume_Windows_Devices_WiFi_IWiFiAdapter<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->get_NetworkAdapter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ScanAsync() const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ScanAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiNetworkReport consume_Windows_Devices_WiFi_IWiFiAdapter<D>::NetworkReport() const
{
    Windows::Devices::WiFi::WiFiNetworkReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->get_NetworkReport(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_WiFi_IWiFiAdapter<D>::AvailableNetworksChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->add_AvailableNetworksChanged(get_abi(args), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::WiFi::IWiFiAdapter> consume_Windows_Devices_WiFi_IWiFiAdapter<D>::AvailableNetworksChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const& args) const
{
    return impl::make_event_revoker<D, Windows::Devices::WiFi::IWiFiAdapter>(this, &abi_t<Windows::Devices::WiFi::IWiFiAdapter>::remove_AvailableNetworksChanged, AvailableNetworksChanged(args));
}

template <typename D> void consume_Windows_Devices_WiFi_IWiFiAdapter<D>::AvailableNetworksChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->remove_AvailableNetworksChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ConnectAsync(get_abi(availableNetwork), get_abi(reconnectionKind), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ConnectWithPasswordCredentialAsync(get_abi(availableNetwork), get_abi(reconnectionKind), get_abi(passwordCredential), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> consume_Windows_Devices_WiFi_IWiFiAdapter<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->ConnectWithPasswordCredentialAndSsidAsync(get_abi(availableNetwork), get_abi(reconnectionKind), get_abi(passwordCredential), get_abi(ssid), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_WiFi_IWiFiAdapter<D>::Disconnect() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter)->Disconnect());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiWpsConfigurationResult> consume_Windows_Devices_WiFi_IWiFiAdapter2<D>::GetWpsConfigurationAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiWpsConfigurationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter2)->GetWpsConfigurationAsync(get_abi(availableNetwork), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> consume_Windows_Devices_WiFi_IWiFiAdapter2<D>::ConnectAsync(Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid, Windows::Devices::WiFi::WiFiConnectionMethod const& connectionMethod) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapter2)->ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(get_abi(availableNetwork), get_abi(reconnectionKind), get_abi(passwordCredential), get_abi(ssid), get_abi(connectionMethod), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::FindAllAdaptersAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->FindAllAdaptersAsync(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::GetDeviceSelector() const
{
    hstring deviceSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->GetDeviceSelector(put_abi(deviceSelector)));
    return deviceSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->FromIdAsync(get_abi(deviceId), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus> consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAdapterStatics)->RequestAccessAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::Uptime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_Uptime(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::Ssid() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_Ssid(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::Bssid() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_Bssid(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::ChannelCenterFrequencyInKilohertz() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_ChannelCenterFrequencyInKilohertz(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::NetworkRssiInDecibelMilliwatts() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_NetworkRssiInDecibelMilliwatts(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::SignalBars() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_SignalBars(&value));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiNetworkKind consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::NetworkKind() const
{
    Windows::Devices::WiFi::WiFiNetworkKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_NetworkKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiPhyKind consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::PhyKind() const
{
    Windows::Devices::WiFi::WiFiPhyKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_PhyKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkSecuritySettings consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::SecuritySettings() const
{
    Windows::Networking::Connectivity::NetworkSecuritySettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_SecuritySettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::BeaconInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_BeaconInterval(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>::IsWiFiDirect() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiAvailableNetwork)->get_IsWiFiDirect(&value));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiConnectionStatus consume_Windows_Devices_WiFi_IWiFiConnectionResult<D>::ConnectionStatus() const
{
    Windows::Devices::WiFi::WiFiConnectionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiConnectionResult)->get_ConnectionStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_WiFi_IWiFiNetworkReport<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiNetworkReport)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> consume_Windows_Devices_WiFi_IWiFiNetworkReport<D>::AvailableNetworks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiNetworkReport)->get_AvailableNetworks(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::WiFi::WiFiWpsConfigurationStatus consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult<D>::Status() const
{
    Windows::Devices::WiFi::WiFiWpsConfigurationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiWpsConfigurationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiWpsKind> consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult<D>::SupportedWpsKinds() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiWpsKind> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::WiFi::IWiFiWpsConfigurationResult)->get_SupportedWpsKinds(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiAdapter> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapter>
{
    HRESULT __stdcall get_NetworkAdapter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkAdapter>(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ScanAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ScanAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkReport(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiNetworkReport>(this->shim().NetworkReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AvailableNetworksChanged(void* args, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().AvailableNetworksChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::Foundation::IInspectable> const*>(&args)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableNetworksChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableNetworksChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectAsync(void* availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectWithPasswordCredentialAsync(void* availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, void* passwordCredential, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectWithPasswordCredentialAndSsidAsync(void* availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, void* passwordCredential, HSTRING ssid, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential), *reinterpret_cast<hstring const*>(&ssid)));
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
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiAdapter2> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapter2>
{
    HRESULT __stdcall GetWpsConfigurationAsync(void* availableNetwork, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiWpsConfigurationResult>>(this->shim().GetWpsConfigurationAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(void* availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, void* passwordCredential, HSTRING ssid, Windows::Devices::WiFi::WiFiConnectionMethod connectionMethod, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult>>(this->shim().ConnectAsync(*reinterpret_cast<Windows::Devices::WiFi::WiFiAvailableNetwork const*>(&availableNetwork), *reinterpret_cast<Windows::Devices::WiFi::WiFiReconnectionKind const*>(&reconnectionKind), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential), *reinterpret_cast<hstring const*>(&ssid), *reinterpret_cast<Windows::Devices::WiFi::WiFiConnectionMethod const*>(&connectionMethod)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiAdapterStatics> : produce_base<D, Windows::Devices::WiFi::IWiFiAdapterStatics>
{
    HRESULT __stdcall FindAllAdaptersAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>>>(this->shim().FindAllAdaptersAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) noexcept final
    {
        try
        {
            *deviceSelector = nullptr;
            typename D::abi_guard guard(this->shim());
            *deviceSelector = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** asyncOp) noexcept final
    {
        try
        {
            *asyncOp = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiAvailableNetwork> : produce_base<D, Windows::Devices::WiFi::IWiFiAvailableNetwork>
{
    HRESULT __stdcall get_Uptime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Uptime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Ssid(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ssid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bssid(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Bssid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelCenterFrequencyInKilohertz(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ChannelCenterFrequencyInKilohertz());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkRssiInDecibelMilliwatts(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NetworkRssiInDecibelMilliwatts());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SignalBars(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().SignalBars());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkKind(Windows::Devices::WiFi::WiFiNetworkKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiNetworkKind>(this->shim().NetworkKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhyKind(Windows::Devices::WiFi::WiFiPhyKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiPhyKind>(this->shim().PhyKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecuritySettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkSecuritySettings>(this->shim().SecuritySettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BeaconInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().BeaconInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsWiFiDirect(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWiFiDirect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiConnectionResult> : produce_base<D, Windows::Devices::WiFi::IWiFiConnectionResult>
{
    HRESULT __stdcall get_ConnectionStatus(Windows::Devices::WiFi::WiFiConnectionStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiConnectionStatus>(this->shim().ConnectionStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiNetworkReport> : produce_base<D, Windows::Devices::WiFi::IWiFiNetworkReport>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableNetworks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork>>(this->shim().AvailableNetworks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::WiFi::IWiFiWpsConfigurationResult> : produce_base<D, Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::WiFi::WiFiWpsConfigurationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::WiFi::WiFiWpsConfigurationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedWpsKinds(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiWpsKind>>(this->shim().SupportedWpsKinds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::WiFi {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> WiFiAdapter::FindAllAdaptersAsync()
{
    return get_activation_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>().FindAllAdaptersAsync();
}

inline hstring WiFiAdapter::GetDeviceSelector()
{
    return get_activation_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> WiFiAdapter::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAccessStatus> WiFiAdapter::RequestAccessAsync()
{
    return get_activation_factory<WiFiAdapter, Windows::Devices::WiFi::IWiFiAdapterStatics>().RequestAccessAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAdapter> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAdapter> {};
template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAdapter2> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAdapter2> {};
template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics> {};
template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork> {};
template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiConnectionResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiConnectionResult> {};
template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiNetworkReport> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiNetworkReport> {};
template<> struct hash<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult> {};
template<> struct hash<winrt::Windows::Devices::WiFi::WiFiAdapter> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiAdapter> {};
template<> struct hash<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork> {};
template<> struct hash<winrt::Windows::Devices::WiFi::WiFiConnectionResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiConnectionResult> {};
template<> struct hash<winrt::Windows::Devices::WiFi::WiFiNetworkReport> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiNetworkReport> {};
template<> struct hash<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult> : winrt::impl::hash_base<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult> {};

}

WINRT_WARNING_POP
