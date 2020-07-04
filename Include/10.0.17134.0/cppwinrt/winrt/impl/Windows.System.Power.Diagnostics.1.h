// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.System.Power.Diagnostics.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

struct WINRT_EBO [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] IBackgroundEnergyDiagnosticsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBackgroundEnergyDiagnosticsStatics>
{
    IBackgroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("Background Energy Diagnostics has been deprecated. For more info, see MSDN.")]] IForegroundEnergyDiagnosticsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IForegroundEnergyDiagnosticsStatics>
{
    IForegroundEnergyDiagnosticsStatics(std::nullptr_t = nullptr) noexcept {}
};

}
