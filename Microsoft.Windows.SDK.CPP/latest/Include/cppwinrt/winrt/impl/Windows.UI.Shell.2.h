// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Shell_2_H
#define WINRT_Windows_UI_Shell_2_H
#include "winrt/impl/Windows.UI.Shell.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct AdaptiveCardBuilder
    {
        AdaptiveCardBuilder() = delete;
        static auto CreateAdaptiveCardFromJson(param::hstring const& value);
    };
    struct __declspec(empty_bases) FocusSession : winrt::Windows::UI::Shell::IFocusSession
    {
        FocusSession(std::nullptr_t) noexcept {}
        FocusSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::IFocusSession(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) FocusSessionManager : winrt::Windows::UI::Shell::IFocusSessionManager
    {
        FocusSessionManager(std::nullptr_t) noexcept {}
        FocusSessionManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::IFocusSessionManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        [[nodiscard]] static auto IsSupported();
    };
    struct __declspec(empty_bases) SecurityAppManager : winrt::Windows::UI::Shell::ISecurityAppManager
    {
        SecurityAppManager(std::nullptr_t) noexcept {}
        SecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::ISecurityAppManager(ptr, take_ownership_from_abi) {}
        SecurityAppManager();
    };
    struct __declspec(empty_bases) ShareWindowCommandEventArgs : winrt::Windows::UI::Shell::IShareWindowCommandEventArgs
    {
        ShareWindowCommandEventArgs(std::nullptr_t) noexcept {}
        ShareWindowCommandEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::IShareWindowCommandEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ShareWindowCommandSource : winrt::Windows::UI::Shell::IShareWindowCommandSource
    {
        ShareWindowCommandSource(std::nullptr_t) noexcept {}
        ShareWindowCommandSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::IShareWindowCommandSource(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) TaskbarManager : winrt::Windows::UI::Shell::ITaskbarManager,
        impl::require<TaskbarManager, winrt::Windows::UI::Shell::ITaskbarManager2>
    {
        TaskbarManager(std::nullptr_t) noexcept {}
        TaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Shell::ITaskbarManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
}
#endif
