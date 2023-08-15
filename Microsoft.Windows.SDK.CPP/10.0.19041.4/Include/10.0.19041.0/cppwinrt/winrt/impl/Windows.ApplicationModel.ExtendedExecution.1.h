// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_1_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.0.h"
namespace winrt::Windows::ApplicationModel::ExtendedExecution
{
    struct __declspec(empty_bases) IExtendedExecutionRevokedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionRevokedEventArgs>
    {
        IExtendedExecutionRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IExtendedExecutionSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionSession>,
        impl::require<Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession, Windows::Foundation::IClosable>
    {
        IExtendedExecutionSession(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
