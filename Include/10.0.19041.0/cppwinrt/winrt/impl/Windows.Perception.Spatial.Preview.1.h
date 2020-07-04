// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Perception_Spatial_Preview_1_H
#define WINRT_Windows_Perception_Spatial_Preview_1_H
#include "winrt/impl/Windows.Perception.Spatial.Preview.0.h"
namespace winrt::Windows::Perception::Spatial::Preview
{
    struct __declspec(empty_bases) ISpatialGraphInteropFrameOfReferencePreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialGraphInteropFrameOfReferencePreview>
    {
        ISpatialGraphInteropFrameOfReferencePreview(std::nullptr_t = nullptr) noexcept {}
        ISpatialGraphInteropFrameOfReferencePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialGraphInteropPreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialGraphInteropPreviewStatics>
    {
        ISpatialGraphInteropPreviewStatics(std::nullptr_t = nullptr) noexcept {}
        ISpatialGraphInteropPreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISpatialGraphInteropPreviewStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISpatialGraphInteropPreviewStatics2>
    {
        ISpatialGraphInteropPreviewStatics2(std::nullptr_t = nullptr) noexcept {}
        ISpatialGraphInteropPreviewStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
