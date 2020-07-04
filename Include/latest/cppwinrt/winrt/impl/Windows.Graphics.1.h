// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_1_H
#define WINRT_Windows_Graphics_1_H
#include "winrt/impl/Windows.Graphics.0.h"
namespace winrt::Windows::Graphics
{
    struct __declspec(empty_bases) IGeometrySource2D :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeometrySource2D>
    {
        IGeometrySource2D(std::nullptr_t = nullptr) noexcept {}
        IGeometrySource2D(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
