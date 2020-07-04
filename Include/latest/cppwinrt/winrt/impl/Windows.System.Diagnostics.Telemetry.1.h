// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Diagnostics_Telemetry_1_H
#define WINRT_Windows_System_Diagnostics_Telemetry_1_H
#include "winrt/impl/Windows.System.Diagnostics.Telemetry.0.h"
namespace winrt::Windows::System::Diagnostics::Telemetry
{
    struct __declspec(empty_bases) IPlatformTelemetryClientStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryClientStatics>
    {
        IPlatformTelemetryClientStatics(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryClientStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlatformTelemetryRegistrationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryRegistrationResult>
    {
        IPlatformTelemetryRegistrationResult(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryRegistrationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPlatformTelemetryRegistrationSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryRegistrationSettings>
    {
        IPlatformTelemetryRegistrationSettings(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryRegistrationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
