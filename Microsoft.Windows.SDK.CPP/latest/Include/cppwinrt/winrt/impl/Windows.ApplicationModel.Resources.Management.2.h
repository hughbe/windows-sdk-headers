// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Resources_Management_2_H
#define WINRT_Windows_ApplicationModel_Resources_Management_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.Management.1.h"
namespace winrt::Windows::ApplicationModel::Resources::Management
{
    struct __declspec(empty_bases) IndexedResourceCandidate : Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate
    {
        IndexedResourceCandidate(std::nullptr_t) noexcept {}
        IndexedResourceCandidate(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IndexedResourceQualifier : Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier
    {
        IndexedResourceQualifier(std::nullptr_t) noexcept {}
        IndexedResourceQualifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ResourceIndexer : Windows::ApplicationModel::Resources::Management::IResourceIndexer
    {
        ResourceIndexer(std::nullptr_t) noexcept {}
        ResourceIndexer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Resources::Management::IResourceIndexer(ptr, take_ownership_from_abi) {}
        ResourceIndexer(Windows::Foundation::Uri const& projectRoot);
        ResourceIndexer(Windows::Foundation::Uri const& projectRoot, Windows::Foundation::Uri const& extensionDllPath);
    };
}
#endif
