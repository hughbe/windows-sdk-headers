// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Preview_InkWorkspace_2_H
#define WINRT_Windows_ApplicationModel_Preview_InkWorkspace_2_H
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.1.h"
namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace
{
    struct __declspec(empty_bases) InkWorkspaceHostedAppManager : Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager
    {
        InkWorkspaceHostedAppManager(std::nullptr_t) noexcept {}
        InkWorkspaceHostedAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentApp();
    };
}
#endif
