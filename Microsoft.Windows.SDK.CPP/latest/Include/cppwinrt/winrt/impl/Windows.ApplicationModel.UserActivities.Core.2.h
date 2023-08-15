// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserActivities_Core_2_H
#define WINRT_Windows_ApplicationModel_UserActivities_Core_2_H
#include "winrt/impl/Windows.ApplicationModel.UserActivities.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.Core.1.h"
namespace winrt::Windows::ApplicationModel::UserActivities::Core
{
    struct CoreUserActivityManager
    {
        CoreUserActivityManager() = delete;
        static auto CreateUserActivitySessionInBackground(Windows::ApplicationModel::UserActivities::UserActivity const& activity);
        static auto DeleteUserActivitySessionsInTimeRangeAsync(Windows::ApplicationModel::UserActivities::UserActivityChannel const& channel, Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime);
    };
}
#endif
