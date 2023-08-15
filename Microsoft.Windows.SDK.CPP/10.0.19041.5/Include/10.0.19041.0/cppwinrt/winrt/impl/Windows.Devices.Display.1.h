// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Display_1_H
#define WINRT_Windows_Devices_Display_1_H
#include "winrt/impl/Windows.Devices.Display.0.h"
namespace winrt::Windows::Devices::Display
{
    struct __declspec(empty_bases) IDisplayMonitor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayMonitor>
    {
        IDisplayMonitor(std::nullptr_t = nullptr) noexcept {}
        IDisplayMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayMonitor2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayMonitor2>
    {
        IDisplayMonitor2(std::nullptr_t = nullptr) noexcept {}
        IDisplayMonitor2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDisplayMonitorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayMonitorStatics>
    {
        IDisplayMonitorStatics(std::nullptr_t = nullptr) noexcept {}
        IDisplayMonitorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
