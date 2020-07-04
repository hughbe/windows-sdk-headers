// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Contacts_Provider_1_H
#define WINRT_Windows_ApplicationModel_Contacts_Provider_1_H
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.0.h"
namespace winrt::Windows::ApplicationModel::Contacts::Provider
{
    struct __declspec(empty_bases) IContactPickerUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactPickerUI>
    {
        IContactPickerUI(std::nullptr_t = nullptr) noexcept {}
        IContactPickerUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactPickerUI2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactPickerUI2>
    {
        IContactPickerUI2(std::nullptr_t = nullptr) noexcept {}
        IContactPickerUI2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IContactRemovedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContactRemovedEventArgs>
    {
        IContactRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IContactRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
