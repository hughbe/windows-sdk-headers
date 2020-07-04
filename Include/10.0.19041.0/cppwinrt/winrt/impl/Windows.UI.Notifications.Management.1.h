// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Notifications_Management_1_H
#define WINRT_Windows_UI_Notifications_Management_1_H
#include "winrt/impl/Windows.UI.Notifications.Management.0.h"
namespace winrt::Windows::UI::Notifications::Management
{
    struct __declspec(empty_bases) IUserNotificationListener :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserNotificationListener>
    {
        IUserNotificationListener(std::nullptr_t = nullptr) noexcept {}
        IUserNotificationListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IUserNotificationListenerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUserNotificationListenerStatics>
    {
        IUserNotificationListenerStatics(std::nullptr_t = nullptr) noexcept {}
        IUserNotificationListenerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
