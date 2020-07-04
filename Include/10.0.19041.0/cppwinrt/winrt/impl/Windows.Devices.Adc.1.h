// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Adc_1_H
#define WINRT_Windows_Devices_Adc_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Adc.0.h"
namespace winrt::Windows::Devices::Adc
{
    struct __declspec(empty_bases) IAdcChannel :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdcChannel>,
        impl::require<Windows::Devices::Adc::IAdcChannel, Windows::Foundation::IClosable>
    {
        IAdcChannel(std::nullptr_t = nullptr) noexcept {}
        IAdcChannel(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdcController :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdcController>
    {
        IAdcController(std::nullptr_t = nullptr) noexcept {}
        IAdcController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdcControllerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdcControllerStatics>
    {
        IAdcControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IAdcControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdcControllerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdcControllerStatics2>
    {
        IAdcControllerStatics2(std::nullptr_t = nullptr) noexcept {}
        IAdcControllerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
