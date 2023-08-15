// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Contacts_DataProvider_2_H
#define WINRT_Windows_ApplicationModel_Contacts_DataProvider_2_H
#include "winrt/impl/Windows.ApplicationModel.Contacts.DataProvider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::DataProvider
{
    struct __declspec(empty_bases) ContactDataProviderConnection : Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection,
        impl::require<ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>
    {
        ContactDataProviderConnection(std::nullptr_t) noexcept {}
        ContactDataProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactDataProviderTriggerDetails : Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails
    {
        ContactDataProviderTriggerDetails(std::nullptr_t) noexcept {}
        ContactDataProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListCreateOrUpdateContactRequest : Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest
    {
        ContactListCreateOrUpdateContactRequest(std::nullptr_t) noexcept {}
        ContactListCreateOrUpdateContactRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListCreateOrUpdateContactRequestEventArgs : Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs
    {
        ContactListCreateOrUpdateContactRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListCreateOrUpdateContactRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListDeleteContactRequest : Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest
    {
        ContactListDeleteContactRequest(std::nullptr_t) noexcept {}
        ContactListDeleteContactRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListDeleteContactRequestEventArgs : Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs
    {
        ContactListDeleteContactRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListDeleteContactRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListServerSearchReadBatchRequest : Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest
    {
        ContactListServerSearchReadBatchRequest(std::nullptr_t) noexcept {}
        ContactListServerSearchReadBatchRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListServerSearchReadBatchRequestEventArgs : Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs
    {
        ContactListServerSearchReadBatchRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListServerSearchReadBatchRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListSyncManagerSyncRequest : Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest
    {
        ContactListSyncManagerSyncRequest(std::nullptr_t) noexcept {}
        ContactListSyncManagerSyncRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ContactListSyncManagerSyncRequestEventArgs : Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs
    {
        ContactListSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListSyncManagerSyncRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
