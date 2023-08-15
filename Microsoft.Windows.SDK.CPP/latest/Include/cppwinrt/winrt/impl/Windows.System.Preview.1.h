// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Preview_1_H
#define WINRT_Windows_System_Preview_1_H
#include "winrt/impl/Windows.System.Preview.0.h"
namespace winrt::Windows::System::Preview
{
    struct __declspec(empty_bases) ITwoPanelHingedDevicePosturePreview :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITwoPanelHingedDevicePosturePreview>
    {
        ITwoPanelHingedDevicePosturePreview(std::nullptr_t = nullptr) noexcept {}
        ITwoPanelHingedDevicePosturePreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITwoPanelHingedDevicePosturePreviewReading :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITwoPanelHingedDevicePosturePreviewReading>
    {
        ITwoPanelHingedDevicePosturePreviewReading(std::nullptr_t = nullptr) noexcept {}
        ITwoPanelHingedDevicePosturePreviewReading(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs>
    {
        ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITwoPanelHingedDevicePosturePreviewStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITwoPanelHingedDevicePosturePreviewStatics>
    {
        ITwoPanelHingedDevicePosturePreviewStatics(std::nullptr_t = nullptr) noexcept {}
        ITwoPanelHingedDevicePosturePreviewStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
