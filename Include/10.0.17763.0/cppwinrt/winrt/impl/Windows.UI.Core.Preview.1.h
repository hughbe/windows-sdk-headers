// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.UI.Core.Preview.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview {

struct WINRT_EBO ISystemNavigationCloseRequestedPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationCloseRequestedPreviewEventArgs>
{
    ISystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemNavigationManagerPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationManagerPreview>
{
    ISystemNavigationManagerPreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemNavigationManagerPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemNavigationManagerPreviewStatics>
{
    ISystemNavigationManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}
