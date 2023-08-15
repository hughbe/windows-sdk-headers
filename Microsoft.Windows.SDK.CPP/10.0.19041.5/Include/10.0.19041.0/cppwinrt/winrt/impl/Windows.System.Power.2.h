// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Power_2_H
#define WINRT_Windows_System_Power_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Power.1.h"
namespace winrt::Windows::System::Power
{
    struct BackgroundEnergyManager
    {
        BackgroundEnergyManager() = delete;
        [[nodiscard]] static auto LowUsageLevel();
        [[nodiscard]] static auto NearMaxAcceptableUsageLevel();
        [[nodiscard]] static auto MaxAcceptableUsageLevel();
        [[nodiscard]] static auto ExcessiveUsageLevel();
        [[nodiscard]] static auto NearTerminationUsageLevel();
        [[nodiscard]] static auto TerminationUsageLevel();
        [[nodiscard]] static auto RecentEnergyUsage();
        [[nodiscard]] static auto RecentEnergyUsageLevel();
        static auto RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RecentEnergyUsageIncreased_revoker = impl::factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased>;
        static RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RecentEnergyUsageIncreased(winrt::event_token const& token);
        static auto RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RecentEnergyUsageReturnedToLow_revoker = impl::factory_event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IBackgroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow>;
        static RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RecentEnergyUsageReturnedToLow(winrt::event_token const& token);
    };
    struct ForegroundEnergyManager
    {
        ForegroundEnergyManager() = delete;
        [[nodiscard]] static auto LowUsageLevel();
        [[nodiscard]] static auto NearMaxAcceptableUsageLevel();
        [[nodiscard]] static auto MaxAcceptableUsageLevel();
        [[nodiscard]] static auto ExcessiveUsageLevel();
        [[nodiscard]] static auto RecentEnergyUsage();
        [[nodiscard]] static auto RecentEnergyUsageLevel();
        static auto RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RecentEnergyUsageIncreased_revoker = impl::factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageIncreased>;
        static RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RecentEnergyUsageIncreased(winrt::event_token const& token);
        static auto RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RecentEnergyUsageReturnedToLow_revoker = impl::factory_event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics, &impl::abi_t<Windows::System::Power::IForegroundEnergyManagerStatics>::remove_RecentEnergyUsageReturnedToLow>;
        static RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RecentEnergyUsageReturnedToLow(winrt::event_token const& token);
    };
    struct PowerManager
    {
        PowerManager() = delete;
        [[nodiscard]] static auto EnergySaverStatus();
        static auto EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using EnergySaverStatusChanged_revoker = impl::factory_event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_EnergySaverStatusChanged>;
        static EnergySaverStatusChanged_revoker EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto EnergySaverStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto BatteryStatus();
        static auto BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using BatteryStatusChanged_revoker = impl::factory_event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_BatteryStatusChanged>;
        static BatteryStatusChanged_revoker BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto BatteryStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto PowerSupplyStatus();
        static auto PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using PowerSupplyStatusChanged_revoker = impl::factory_event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_PowerSupplyStatusChanged>;
        static PowerSupplyStatusChanged_revoker PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto PowerSupplyStatusChanged(winrt::event_token const& token);
        [[nodiscard]] static auto RemainingChargePercent();
        static auto RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RemainingChargePercentChanged_revoker = impl::factory_event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingChargePercentChanged>;
        static RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RemainingChargePercentChanged(winrt::event_token const& token);
        [[nodiscard]] static auto RemainingDischargeTime();
        static auto RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using RemainingDischargeTimeChanged_revoker = impl::factory_event_revoker<Windows::System::Power::IPowerManagerStatics, &impl::abi_t<Windows::System::Power::IPowerManagerStatics>::remove_RemainingDischargeTimeChanged>;
        static RemainingDischargeTimeChanged_revoker RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto RemainingDischargeTimeChanged(winrt::event_token const& token);
    };
}
#endif
