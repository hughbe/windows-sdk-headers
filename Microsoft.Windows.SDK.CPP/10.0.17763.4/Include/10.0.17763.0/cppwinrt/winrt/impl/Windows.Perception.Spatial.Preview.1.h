// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Perception.Spatial.0.h"
#include "winrt/impl/Windows.Perception.Spatial.Preview.0.h"

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview {

struct WINRT_EBO ISpatialGraphInteropPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpatialGraphInteropPreviewStatics>
{
    ISpatialGraphInteropPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}
