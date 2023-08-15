// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_SystemAccess_2_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_SystemAccess_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.SystemAccess.1.h"
namespace winrt::Windows::ApplicationModel::UserDataAccounts::SystemAccess
{
    struct __declspec(empty_bases) DeviceAccountConfiguration : Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration,
        impl::require<DeviceAccountConfiguration, Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration2>
    {
        DeviceAccountConfiguration(std::nullptr_t) noexcept {}
        DeviceAccountConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::UserDataAccounts::SystemAccess::IDeviceAccountConfiguration(ptr, take_ownership_from_abi) {}
        DeviceAccountConfiguration();
    };
    struct UserDataAccountSystemAccessManager
    {
        UserDataAccountSystemAccessManager() = delete;
        static auto AddAndShowDeviceAccountsAsync(param::async_iterable<Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration> const& accounts);
        static auto SuppressLocalAccountWithAccountAsync(param::hstring const& userDataAccountId);
        static auto CreateDeviceAccountAsync(Windows::ApplicationModel::UserDataAccounts::SystemAccess::DeviceAccountConfiguration const& account);
        static auto DeleteDeviceAccountAsync(param::hstring const& accountId);
        static auto GetDeviceAccountConfigurationAsync(param::hstring const& accountId);
    };
}
#endif
