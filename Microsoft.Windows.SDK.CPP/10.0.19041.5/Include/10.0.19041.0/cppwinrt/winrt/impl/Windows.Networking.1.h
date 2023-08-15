// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Networking_1_H
#define WINRT_Windows_Networking_1_H
#include "winrt/impl/Windows.Networking.0.h"
namespace winrt::Windows::Networking
{
    struct __declspec(empty_bases) IEndpointPair :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEndpointPair>
    {
        IEndpointPair(std::nullptr_t = nullptr) noexcept {}
        IEndpointPair(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IEndpointPairFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEndpointPairFactory>
    {
        IEndpointPairFactory(std::nullptr_t = nullptr) noexcept {}
        IEndpointPairFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHostName :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHostName>
    {
        IHostName(std::nullptr_t = nullptr) noexcept {}
        IHostName(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHostNameFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHostNameFactory>
    {
        IHostNameFactory(std::nullptr_t = nullptr) noexcept {}
        IHostNameFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IHostNameStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IHostNameStatics>
    {
        IHostNameStatics(std::nullptr_t = nullptr) noexcept {}
        IHostNameStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
