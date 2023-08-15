// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Management_Workplace_1_H
#define WINRT_Windows_Management_Workplace_1_H
#include "winrt/impl/Windows.Management.Workplace.0.h"
WINRT_EXPORT namespace winrt::Windows::Management::Workplace
{
    struct __declspec(empty_bases) IMdmAllowPolicyStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMdmAllowPolicyStatics>
    {
        IMdmAllowPolicyStatics(std::nullptr_t = nullptr) noexcept {}
        IMdmAllowPolicyStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IMdmPolicyStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMdmPolicyStatics2>
    {
        IMdmPolicyStatics2(std::nullptr_t = nullptr) noexcept {}
        IMdmPolicyStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWorkplaceSettingsStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWorkplaceSettingsStatics>
    {
        IWorkplaceSettingsStatics(std::nullptr_t = nullptr) noexcept {}
        IWorkplaceSettingsStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
