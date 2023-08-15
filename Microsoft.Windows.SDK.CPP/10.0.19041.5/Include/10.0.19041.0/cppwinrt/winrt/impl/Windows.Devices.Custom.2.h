// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Custom_2_H
#define WINRT_Windows_Devices_Custom_2_H
#include "winrt/impl/Windows.Devices.Custom.1.h"
namespace winrt::Windows::Devices::Custom
{
    struct __declspec(empty_bases) CustomDevice : Windows::Devices::Custom::ICustomDevice
    {
        CustomDevice(std::nullptr_t) noexcept {}
        CustomDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Custom::ICustomDevice(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector(winrt::guid const& classGuid);
        static auto FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode);
    };
    struct __declspec(empty_bases) IOControlCode : Windows::Devices::Custom::IIOControlCode
    {
        IOControlCode(std::nullptr_t) noexcept {}
        IOControlCode(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Custom::IIOControlCode(ptr, take_ownership_from_abi) {}
        IOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod);
    };
    struct KnownDeviceTypes
    {
        KnownDeviceTypes() = delete;
        [[nodiscard]] static auto Unknown();
    };
}
#endif
