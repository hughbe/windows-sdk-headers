// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Background_1_H
#define WINRT_Windows_Devices_Background_1_H
#include "winrt/impl/Windows.Devices.Background.0.h"
namespace winrt::Windows::Devices::Background
{
    struct __declspec(empty_bases) IDeviceServicingDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceServicingDetails>
    {
        IDeviceServicingDetails(std::nullptr_t = nullptr) noexcept {}
        IDeviceServicingDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDeviceUseDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDeviceUseDetails>
    {
        IDeviceUseDetails(std::nullptr_t = nullptr) noexcept {}
        IDeviceUseDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
