﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Web.0.h"

WINRT_EXPORT namespace winrt::Windows::Web {

struct WINRT_EBO IUriToStreamResolver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUriToStreamResolver>
{
    IUriToStreamResolver(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IWebErrorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IWebErrorStatics>
{
    IWebErrorStatics(std::nullptr_t = nullptr) noexcept {}
};

}
