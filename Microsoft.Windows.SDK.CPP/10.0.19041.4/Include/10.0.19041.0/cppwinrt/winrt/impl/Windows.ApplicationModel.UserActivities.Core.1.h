// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserActivities_Core_1_H
#define WINRT_Windows_ApplicationModel_UserActivities_Core_1_H
#include "winrt/impl/Windows.ApplicationModel.UserActivities.Core.0.h"
namespace winrt::Windows::ApplicationModel::UserActivities::Core
{
    struct __declspec(empty_bases) ICoreUserActivityManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICoreUserActivityManagerStatics>
    {
        ICoreUserActivityManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ICoreUserActivityManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
