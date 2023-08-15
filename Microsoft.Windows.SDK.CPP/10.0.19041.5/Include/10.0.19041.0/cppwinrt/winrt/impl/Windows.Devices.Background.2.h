// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Background_2_H
#define WINRT_Windows_Devices_Background_2_H
#include "winrt/impl/Windows.Devices.Background.1.h"
namespace winrt::Windows::Devices::Background
{
    struct __declspec(empty_bases) DeviceServicingDetails : Windows::Devices::Background::IDeviceServicingDetails
    {
        DeviceServicingDetails(std::nullptr_t) noexcept {}
        DeviceServicingDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Background::IDeviceServicingDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) DeviceUseDetails : Windows::Devices::Background::IDeviceUseDetails
    {
        DeviceUseDetails(std::nullptr_t) noexcept {}
        DeviceUseDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Background::IDeviceUseDetails(ptr, take_ownership_from_abi) {}
    };
}
#endif
