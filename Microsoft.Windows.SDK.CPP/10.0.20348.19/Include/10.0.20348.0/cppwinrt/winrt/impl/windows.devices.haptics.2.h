// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Haptics_2_H
#define WINRT_Windows_Devices_Haptics_2_H
#include "winrt/impl/Windows.Devices.Haptics.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Haptics
{
    struct KnownSimpleHapticsControllerWaveforms
    {
        KnownSimpleHapticsControllerWaveforms() = delete;
        [[nodiscard]] static auto Click();
        [[nodiscard]] static auto BuzzContinuous();
        [[nodiscard]] static auto RumbleContinuous();
        [[nodiscard]] static auto Press();
        [[nodiscard]] static auto Release();
    };
    struct __declspec(empty_bases) SimpleHapticsController : Windows::Devices::Haptics::ISimpleHapticsController
    {
        SimpleHapticsController(std::nullptr_t) noexcept {}
        SimpleHapticsController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::ISimpleHapticsController(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SimpleHapticsControllerFeedback : Windows::Devices::Haptics::ISimpleHapticsControllerFeedback
    {
        SimpleHapticsControllerFeedback(std::nullptr_t) noexcept {}
        SimpleHapticsControllerFeedback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::ISimpleHapticsControllerFeedback(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) VibrationDevice : Windows::Devices::Haptics::IVibrationDevice
    {
        VibrationDevice(std::nullptr_t) noexcept {}
        VibrationDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::IVibrationDevice(ptr, take_ownership_from_abi) {}
        static auto RequestAccessAsync();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDefaultAsync();
        static auto FindAllAsync();
    };
}
#endif
