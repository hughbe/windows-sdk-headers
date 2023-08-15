// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Security_Cryptography_DataProtection_1_H
#define WINRT_Windows_Security_Cryptography_DataProtection_1_H
#include "winrt/impl/Windows.Security.Cryptography.DataProtection.0.h"
namespace winrt::Windows::Security::Cryptography::DataProtection
{
    struct __declspec(empty_bases) IDataProtectionProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataProtectionProvider>
    {
        IDataProtectionProvider(std::nullptr_t = nullptr) noexcept {}
        IDataProtectionProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IDataProtectionProviderFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDataProtectionProviderFactory>
    {
        IDataProtectionProviderFactory(std::nullptr_t = nullptr) noexcept {}
        IDataProtectionProviderFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
