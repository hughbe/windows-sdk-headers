// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Display_2_H
#define WINRT_Windows_System_Display_2_H
#include "winrt/impl/Windows.System.Display.1.h"
namespace winrt::Windows::System::Display
{
    struct __declspec(empty_bases) DisplayRequest : Windows::System::Display::IDisplayRequest
    {
        DisplayRequest(std::nullptr_t) noexcept {}
        DisplayRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Display::IDisplayRequest(ptr, take_ownership_from_abi) {}
        DisplayRequest();
    };
}
#endif
