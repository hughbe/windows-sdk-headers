// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo::Provider {

struct WINRT_EBO [[deprecated("ISocialDashboardItemUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialDashboardItemUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialDashboardItemUpdater>
{
    ISocialDashboardItemUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISocialFeedUpdater is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialFeedUpdater :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialFeedUpdater>
{
    ISocialFeedUpdater(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISocialInfoProviderManagerStatics is deprecated and might not work on all platforms. For more info, see MSDN.")]] ISocialInfoProviderManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISocialInfoProviderManagerStatics>
{
    ISocialInfoProviderManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
