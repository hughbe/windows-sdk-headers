// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteSystems_Availability_1_H
#define WINRT_Windows_System_RemoteSystems_Availability_1_H
#include "winrt/impl/Windows.System.RemoteSystems.Availability.0.h"
WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems::Availability
{
    struct __declspec(empty_bases) IRemoteSystemAvailabilityStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRemoteSystemAvailabilityStatics>
    {
        IRemoteSystemAvailabilityStatics(std::nullptr_t = nullptr) noexcept {}
        IRemoteSystemAvailabilityStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
