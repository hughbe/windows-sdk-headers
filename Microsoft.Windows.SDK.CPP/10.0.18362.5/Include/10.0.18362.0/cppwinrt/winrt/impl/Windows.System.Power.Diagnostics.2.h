﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.System.Power.Diagnostics.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

struct BackgroundEnergyDiagnostics
{
    BackgroundEnergyDiagnostics() = delete;
    static double DeviceSpecificConversionFactor();
    static uint64_t ComputeTotalEnergyUsage();
    static void ResetTotalEnergyUsage();
};

struct ForegroundEnergyDiagnostics
{
    ForegroundEnergyDiagnostics() = delete;
    static double DeviceSpecificConversionFactor();
    static uint64_t ComputeTotalEnergyUsage();
    static void ResetTotalEnergyUsage();
};

}
