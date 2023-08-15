// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Core_Direct_1_H
#define WINRT_Windows_UI_Xaml_Core_Direct_1_H
#include "winrt/impl/Windows.UI.Xaml.Core.Direct.0.h"
namespace winrt::Windows::UI::Xaml::Core::Direct
{
    struct __declspec(empty_bases) IXamlDirect :
        Windows::Foundation::IInspectable,
        impl::consume_t<IXamlDirect>
    {
        IXamlDirect(std::nullptr_t = nullptr) noexcept {}
        IXamlDirect(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IXamlDirectObject :
        Windows::Foundation::IInspectable,
        impl::consume_t<IXamlDirectObject>
    {
        IXamlDirectObject(std::nullptr_t = nullptr) noexcept {}
        IXamlDirectObject(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IXamlDirectStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IXamlDirectStatics>
    {
        IXamlDirectStatics(std::nullptr_t = nullptr) noexcept {}
        IXamlDirectStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
