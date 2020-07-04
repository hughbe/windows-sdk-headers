// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.System.Power.Diagnostics.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

struct [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] BackgroundEnergyDiagnostics
{
    BackgroundEnergyDiagnostics() = delete;
    [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] static double DeviceSpecificConversionFactor();
    [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] static uint64_t ComputeTotalEnergyUsage();
    [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] static void ResetTotalEnergyUsage();
};

struct [[deprecated("Foreground Energy Diagnostics has been deprecated. For more info, see MSDN.")]] ForegroundEnergyDiagnostics
{
    ForegroundEnergyDiagnostics() = delete;
    [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] static double DeviceSpecificConversionFactor();
    [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] static uint64_t ComputeTotalEnergyUsage();
    [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] static void ResetTotalEnergyUsage();
};

}
