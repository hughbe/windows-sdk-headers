// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Pwm_Provider_1_H
#define WINRT_Windows_Devices_Pwm_Provider_1_H
#include "winrt/impl/Windows.Devices.Pwm.Provider.0.h"
namespace winrt::Windows::Devices::Pwm::Provider
{
    struct __declspec(empty_bases) IPwmControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPwmControllerProvider>
    {
        IPwmControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IPwmControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPwmProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPwmProvider>
    {
        IPwmProvider(std::nullptr_t = nullptr) noexcept {}
        IPwmProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
