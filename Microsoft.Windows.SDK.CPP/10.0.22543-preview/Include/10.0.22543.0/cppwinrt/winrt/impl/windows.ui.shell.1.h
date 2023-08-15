// C++/WinRT v2.0.210707.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Shell_1_H
#define WINRT_Windows_UI_Shell_1_H
#include "winrt/impl/Windows.UI.Shell.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    struct __declspec(empty_bases) IAdaptiveCard :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCard>
    {
        IAdaptiveCard(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCard(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveCardBuilderStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCardBuilderStatics>
    {
        IAdaptiveCardBuilderStatics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCardBuilderStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFocusAssistChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFocusAssistChangedEventArgs>
    {
        IFocusAssistChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFocusAssistChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFocusAssistManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFocusAssistManager>
    {
        IFocusAssistManager(std::nullptr_t = nullptr) noexcept {}
        IFocusAssistManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFocusAssistManagerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFocusAssistManagerStatics>
    {
        IFocusAssistManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IFocusAssistManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFocusAssistSession :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFocusAssistSession>
    {
        IFocusAssistSession(std::nullptr_t = nullptr) noexcept {}
        IFocusAssistSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISecurityAppManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISecurityAppManager>
    {
        ISecurityAppManager(std::nullptr_t = nullptr) noexcept {}
        ISecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareWindowCommandEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IShareWindowCommandEventArgs>
    {
        IShareWindowCommandEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShareWindowCommandEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareWindowCommandSource :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IShareWindowCommandSource>
    {
        IShareWindowCommandSource(std::nullptr_t = nullptr) noexcept {}
        IShareWindowCommandSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IShareWindowCommandSourceStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IShareWindowCommandSourceStatics>
    {
        IShareWindowCommandSourceStatics(std::nullptr_t = nullptr) noexcept {}
        IShareWindowCommandSourceStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager>
    {
        ITaskbarManager(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManager2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager2>,
        impl::require<winrt::Windows::UI::Shell::ITaskbarManager2, winrt::Windows::UI::Shell::ITaskbarManager>
    {
        ITaskbarManager2(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManagerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManagerStatics>
    {
        ITaskbarManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
