// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_I2c_Provider_2_H
#define WINRT_Windows_Devices_I2c_Provider_2_H
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"
namespace winrt::Windows::Devices::I2c::Provider
{
    struct ProviderI2cTransferResult
    {
        Windows::Devices::I2c::Provider::ProviderI2cTransferStatus Status;
        uint32_t BytesTransferred;
    };
    inline bool operator==(ProviderI2cTransferResult const& left, ProviderI2cTransferResult const& right) noexcept
    {
        return left.Status == right.Status && left.BytesTransferred == right.BytesTransferred;
    }
    inline bool operator!=(ProviderI2cTransferResult const& left, ProviderI2cTransferResult const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ProviderI2cConnectionSettings : Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings
    {
        ProviderI2cConnectionSettings(std::nullptr_t) noexcept {}
        ProviderI2cConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings(ptr, take_ownership_from_abi) {}
    };
}
#endif
