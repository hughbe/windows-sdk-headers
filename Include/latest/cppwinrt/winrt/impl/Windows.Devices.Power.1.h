// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Power_1_H
#define WINRT_Windows_Devices_Power_1_H
#include "winrt/impl/Windows.Devices.Power.0.h"
namespace winrt::Windows::Devices::Power
{
    struct __declspec(empty_bases) IBattery :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBattery>
    {
        IBattery(std::nullptr_t = nullptr) noexcept {}
        IBattery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBatteryReport :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBatteryReport>
    {
        IBatteryReport(std::nullptr_t = nullptr) noexcept {}
        IBatteryReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBatteryStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBatteryStatics>
    {
        IBatteryStatics(std::nullptr_t = nullptr) noexcept {}
        IBatteryStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
