// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.System.Power.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Power {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::Power {

struct [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] BackgroundEnergyManager
{
    BackgroundEnergyManager() = delete;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t LowUsageLevel();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t NearMaxAcceptableUsageLevel();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t MaxAcceptableUsageLevel();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t ExcessiveUsageLevel();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t NearTerminationUsageLevel();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t TerminationUsageLevel();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t RecentEnergyUsage();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t RecentEnergyUsageLevel();
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageIncreased_revoker = factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static void RecentEnergyUsageIncreased(event_token const& token);
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageReturnedToLow_revoker = factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] static void RecentEnergyUsageReturnedToLow(event_token const& token);
};

struct [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] ForegroundEnergyManager
{
    ForegroundEnergyManager() = delete;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t LowUsageLevel();
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t NearMaxAcceptableUsageLevel();
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t MaxAcceptableUsageLevel();
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t ExcessiveUsageLevel();
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t RecentEnergyUsage();
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static uint32_t RecentEnergyUsageLevel();
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageIncreased_revoker = factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static void RecentEnergyUsageIncreased(event_token const& token);
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RecentEnergyUsageReturnedToLow_revoker = factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] static void RecentEnergyUsageReturnedToLow(event_token const& token);
};

struct PowerManager
{
    PowerManager() = delete;
    static Windows::System::Power::EnergySaverStatus EnergySaverStatus();
    static event_token EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using EnergySaverStatusChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static EnergySaverStatusChanged_revoker EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void EnergySaverStatusChanged(event_token const& token);
    static Windows::System::Power::BatteryStatus BatteryStatus();
    static event_token BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using BatteryStatusChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static BatteryStatusChanged_revoker BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void BatteryStatusChanged(event_token const& token);
    static Windows::System::Power::PowerSupplyStatus PowerSupplyStatus();
    static event_token PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using PowerSupplyStatusChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static PowerSupplyStatusChanged_revoker PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void PowerSupplyStatusChanged(event_token const& token);
    static int32_t RemainingChargePercent();
    static event_token RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RemainingChargePercentChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RemainingChargePercentChanged(event_token const& token);
    static Windows::Foundation::TimeSpan RemainingDischargeTime();
    static event_token RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    using RemainingDischargeTimeChanged_revoker = factory_event_revoker<Windows::System::Power::IPowerManagerStatics>;
    static RemainingDischargeTimeChanged_revoker RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
    static void RemainingDischargeTimeChanged(event_token const& token);
};

}
