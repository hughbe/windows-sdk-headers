// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Web_2_H
#define WINRT_Windows_Web_2_H
#include "winrt/impl/Windows.Web.1.h"
WINRT_EXPORT namespace winrt::Windows::Web
{
    struct WebError
    {
        WebError() = delete;
        static auto GetStatus(int32_t hresult);
    };
}
#endif
