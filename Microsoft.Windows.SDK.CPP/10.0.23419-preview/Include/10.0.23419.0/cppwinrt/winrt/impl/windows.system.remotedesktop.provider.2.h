// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Provider_2_H
#define WINRT_Windows_System_RemoteDesktop_Provider_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.System.RemoteDesktop.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Provider
{
    struct __declspec(empty_bases) CloudPCDisplayInfo : winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo
    {
        CloudPCDisplayInfo(std::nullptr_t) noexcept {}
        CloudPCDisplayInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo(ptr, take_ownership_from_abi) {}
        explicit CloudPCDisplayInfo(param::hstring const& name);
    };
    struct __declspec(empty_bases) CloudPCHostService : winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService
    {
        CloudPCHostService(std::nullptr_t) noexcept {}
        CloudPCHostService(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService(ptr, take_ownership_from_abi) {}
        static auto GetForWindow(winrt::Windows::UI::WindowId const& windowId);
    };
    struct __declspec(empty_bases) RemoteDesktopConnectionInfo : winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo,
        impl::require<RemoteDesktopConnectionInfo, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>
    {
        RemoteDesktopConnectionInfo(std::nullptr_t) noexcept {}
        RemoteDesktopConnectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo(ptr, take_ownership_from_abi) {}
        static auto GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::UI::WindowId const& windowId);
    };
}
#endif
