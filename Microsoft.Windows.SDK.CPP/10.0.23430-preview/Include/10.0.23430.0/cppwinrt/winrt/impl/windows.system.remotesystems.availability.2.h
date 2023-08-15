// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteSystems_Availability_2_H
#define WINRT_Windows_System_RemoteSystems_Availability_2_H
#include "winrt/impl/Windows.System.RemoteSystems.Availability.1.h"
WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems::Availability
{
    struct RemoteSystemAvailability
    {
        RemoteSystemAvailability() = delete;
        static auto EnableCloudPC(param::hstring const& displayName, param::hstring const& cloudPCId);
        static auto DisableCloudPC(param::hstring const& cloudPCId);
        static auto IsCloudPCEnabled(param::hstring const& cloudPCId);
        static auto IsIntegratedCloudPCSwitchEnabled();
        static auto GetAllEnabledCloudPCIds();
    };
}
#endif
