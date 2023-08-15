// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_1_H
#define WINRT_Windows_Web_1_H
#include "winrt/impl/Windows.Web.0.h"
WINRT_EXPORT namespace winrt::Windows::Web
{
    struct __declspec(empty_bases) IUriToStreamResolver :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUriToStreamResolver>
    {
        IUriToStreamResolver(std::nullptr_t = nullptr) noexcept {}
        IUriToStreamResolver(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWebErrorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWebErrorStatics>
    {
        IWebErrorStatics(std::nullptr_t = nullptr) noexcept {}
        IWebErrorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
