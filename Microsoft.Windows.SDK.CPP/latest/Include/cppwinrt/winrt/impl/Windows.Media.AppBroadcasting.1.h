// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_AppBroadcasting_1_H
#define WINRT_Windows_Media_AppBroadcasting_1_H
#include "winrt/impl/Windows.Media.AppBroadcasting.0.h"
namespace winrt::Windows::Media::AppBroadcasting
{
    struct __declspec(empty_bases) IAppBroadcastingMonitor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingMonitor>
    {
        IAppBroadcastingMonitor(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingStatus :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingStatus>
    {
        IAppBroadcastingStatus(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingStatusDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingStatusDetails>
    {
        IAppBroadcastingStatusDetails(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingStatusDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingUI>
    {
        IAppBroadcastingUI(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppBroadcastingUIStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppBroadcastingUIStatics>
    {
        IAppBroadcastingUIStatics(std::nullptr_t = nullptr) noexcept {}
        IAppBroadcastingUIStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
