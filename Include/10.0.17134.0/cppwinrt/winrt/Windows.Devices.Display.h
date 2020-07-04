// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Devices.Display.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitor<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Display::DisplayMonitorConnectionKind consume_Windows_Devices_Display_IDisplayMonitor<D>::ConnectionKind() const
{
    Windows::Devices::Display::DisplayMonitorConnectionKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_ConnectionKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind consume_Windows_Devices_Display_IDisplayMonitor<D>::PhysicalConnector() const
{
    Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_PhysicalConnector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayAdapterDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayAdapterDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DisplayAdapterId consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayAdapterId() const
{
    Windows::Graphics::DisplayAdapterId value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayAdapterId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Display_IDisplayMonitor<D>::DisplayAdapterTargetId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_DisplayAdapterTargetId(&value));
    return value;
}

template <typename D> Windows::Devices::Display::DisplayMonitorUsageKind consume_Windows_Devices_Display_IDisplayMonitor<D>::UsageKind() const
{
    Windows::Devices::Display::DisplayMonitorUsageKind value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_UsageKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::SizeInt32 consume_Windows_Devices_Display_IDisplayMonitor<D>::NativeResolutionInRawPixels() const
{
    Windows::Graphics::SizeInt32 value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_NativeResolutionInRawPixels(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Size> consume_Windows_Devices_Display_IDisplayMonitor<D>::PhysicalSizeInInches() const
{
    Windows::Foundation::IReference<Windows::Foundation::Size> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_PhysicalSizeInInches(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::RawDpiX() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_RawDpiX(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::RawDpiY() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_RawDpiY(&value));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::RedPrimary() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_RedPrimary(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::GreenPrimary() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_GreenPrimary(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::BluePrimary() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_BluePrimary(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Devices_Display_IDisplayMonitor<D>::WhitePoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_WhitePoint(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::MaxLuminanceInNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_MaxLuminanceInNits(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::MinLuminanceInNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_MinLuminanceInNits(&value));
    return value;
}

template <typename D> float consume_Windows_Devices_Display_IDisplayMonitor<D>::MaxAverageFullFrameLuminanceInNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->get_MaxAverageFullFrameLuminanceInNits(&value));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Devices_Display_IDisplayMonitor<D>::GetDescriptor(Windows::Devices::Display::DisplayMonitorDescriptorKind const& descriptorKind) const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitor)->GetDescriptor(get_abi(descriptorKind), impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Display_IDisplayMonitorStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitorStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> consume_Windows_Devices_Display_IDisplayMonitorStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitorStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> consume_Windows_Devices_Display_IDisplayMonitorStatics<D>::FromInterfaceIdAsync(param::hstring const& deviceInterfaceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Display::IDisplayMonitorStatics)->FromInterfaceIdAsync(get_abi(deviceInterfaceId), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Devices::Display::IDisplayMonitor> : produce_base<D, Windows::Devices::Display::IDisplayMonitor>
{
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

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionKind(Windows::Devices::Display::DisplayMonitorConnectionKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Display::DisplayMonitorConnectionKind>(this->shim().ConnectionKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalConnector(Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Display::DisplayMonitorPhysicalConnectorKind>(this->shim().PhysicalConnector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayAdapterDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayAdapterDeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayAdapterId(struct struct_Windows_Graphics_DisplayAdapterId* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DisplayAdapterId>(this->shim().DisplayAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayAdapterTargetId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DisplayAdapterTargetId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsageKind(Windows::Devices::Display::DisplayMonitorUsageKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Display::DisplayMonitorUsageKind>(this->shim().UsageKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NativeResolutionInRawPixels(struct struct_Windows_Graphics_SizeInt32* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::SizeInt32>(this->shim().NativeResolutionInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalSizeInInches(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Size>>(this->shim().PhysicalSizeInInches());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiX(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RawDpiX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiY(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RawDpiY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RedPrimary(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().RedPrimary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GreenPrimary(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().GreenPrimary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BluePrimary(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().BluePrimary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WhitePoint(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().WhitePoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxLuminanceInNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxLuminanceInNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinLuminanceInNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinLuminanceInNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAverageFullFrameLuminanceInNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxAverageFullFrameLuminanceInNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDescriptor(Windows::Devices::Display::DisplayMonitorDescriptorKind descriptorKind, uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetDescriptor(*reinterpret_cast<Windows::Devices::Display::DisplayMonitorDescriptorKind const*>(&descriptorKind)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Display::IDisplayMonitorStatics> : produce_base<D, Windows::Devices::Display::IDisplayMonitorStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromInterfaceIdAsync(HSTRING deviceInterfaceId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor>>(this->shim().FromInterfaceIdAsync(*reinterpret_cast<hstring const*>(&deviceInterfaceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Display {

inline hstring DisplayMonitor::GetDeviceSelector()
{
    return get_activation_factory<DisplayMonitor, Windows::Devices::Display::IDisplayMonitorStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> DisplayMonitor::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<DisplayMonitor, Windows::Devices::Display::IDisplayMonitorStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Display::DisplayMonitor> DisplayMonitor::FromInterfaceIdAsync(param::hstring const& deviceInterfaceId)
{
    return get_activation_factory<DisplayMonitor, Windows::Devices::Display::IDisplayMonitorStatics>().FromInterfaceIdAsync(deviceInterfaceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Display::IDisplayMonitor> : winrt::impl::hash_base<winrt::Windows::Devices::Display::IDisplayMonitor> {};
template<> struct hash<winrt::Windows::Devices::Display::IDisplayMonitorStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Display::IDisplayMonitorStatics> {};
template<> struct hash<winrt::Windows::Devices::Display::DisplayMonitor> : winrt::impl::hash_base<winrt::Windows::Devices::Display::DisplayMonitor> {};

}

WINRT_WARNING_POP
