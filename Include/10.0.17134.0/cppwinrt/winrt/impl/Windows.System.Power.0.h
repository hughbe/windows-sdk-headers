// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Power {

enum class BatteryStatus : int32_t
{
    NotPresent = 0,
    Discharging = 1,
    Idle = 2,
    Charging = 3,
};

enum class EnergySaverStatus : int32_t
{
    Disabled = 0,
    Off = 1,
    On = 2,
};

enum class PowerSupplyStatus : int32_t
{
    NotPresent = 0,
    Inadequate = 1,
    Adequate = 2,
};

struct IBackgroundEnergyManagerStatics;
struct IForegroundEnergyManagerStatics;
struct IPowerManagerStatics;
struct BackgroundEnergyManager;
struct ForegroundEnergyManager;
struct PowerManager;

}

namespace winrt::impl {

template <> struct category<Windows::System::Power::IBackgroundEnergyManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::IForegroundEnergyManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::IPowerManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::BackgroundEnergyManager>{ using type = class_category; };
template <> struct category<Windows::System::Power::ForegroundEnergyManager>{ using type = class_category; };
template <> struct category<Windows::System::Power::PowerManager>{ using type = class_category; };
template <> struct category<Windows::System::Power::BatteryStatus>{ using type = enum_category; };
template <> struct category<Windows::System::Power::EnergySaverStatus>{ using type = enum_category; };
template <> struct category<Windows::System::Power::PowerSupplyStatus>{ using type = enum_category; };
template <> struct name<Windows::System::Power::IBackgroundEnergyManagerStatics>{ static constexpr auto & value{ L"Windows.System.Power.IBackgroundEnergyManagerStatics" }; };
template <> struct name<Windows::System::Power::IForegroundEnergyManagerStatics>{ static constexpr auto & value{ L"Windows.System.Power.IForegroundEnergyManagerStatics" }; };
template <> struct name<Windows::System::Power::IPowerManagerStatics>{ static constexpr auto & value{ L"Windows.System.Power.IPowerManagerStatics" }; };
template <> struct name<Windows::System::Power::BackgroundEnergyManager>{ static constexpr auto & value{ L"Windows.System.Power.BackgroundEnergyManager" }; };
template <> struct name<Windows::System::Power::ForegroundEnergyManager>{ static constexpr auto & value{ L"Windows.System.Power.ForegroundEnergyManager" }; };
template <> struct name<Windows::System::Power::PowerManager>{ static constexpr auto & value{ L"Windows.System.Power.PowerManager" }; };
template <> struct name<Windows::System::Power::BatteryStatus>{ static constexpr auto & value{ L"Windows.System.Power.BatteryStatus" }; };
template <> struct name<Windows::System::Power::EnergySaverStatus>{ static constexpr auto & value{ L"Windows.System.Power.EnergySaverStatus" }; };
template <> struct name<Windows::System::Power::PowerSupplyStatus>{ static constexpr auto & value{ L"Windows.System.Power.PowerSupplyStatus" }; };
template <> struct guid<Windows::System::Power::IBackgroundEnergyManagerStatics>{ static constexpr GUID value{ 0xB3161D95,0x1180,0x4376,{ 0x96,0xE1,0x40,0x95,0x56,0x81,0x47,0xCE } }; };
template <> struct guid<Windows::System::Power::IForegroundEnergyManagerStatics>{ static constexpr GUID value{ 0x9FF86872,0xE677,0x4814,{ 0x9A,0x20,0x53,0x37,0xCA,0x73,0x2B,0x98 } }; };
template <> struct guid<Windows::System::Power::IPowerManagerStatics>{ static constexpr GUID value{ 0x1394825D,0x62CE,0x4364,{ 0x98,0xD5,0xAA,0x28,0xC7,0xFB,0xD1,0x5B } }; };

template <typename D>
struct consume_Windows_System_Power_IBackgroundEnergyManagerStatics
{
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t LowUsageLevel() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t NearMaxAcceptableUsageLevel() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t MaxAcceptableUsageLevel() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t ExcessiveUsageLevel() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t NearTerminationUsageLevel() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t TerminationUsageLevel() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t RecentEnergyUsage() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t RecentEnergyUsageLevel() const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageIncreased_revoker = event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] void RecentEnergyUsageIncreased(event_token const& token) const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageReturnedToLow_revoker = event_revoker<Windows::System::Power::IBackgroundEnergyManagerStatics>;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("Background Energy Manager has been deprecated. For more info, see MSDN.")]] void RecentEnergyUsageReturnedToLow(event_token const& token) const;
};
template <> struct consume<Windows::System::Power::IBackgroundEnergyManagerStatics> { template <typename D> using type = consume_Windows_System_Power_IBackgroundEnergyManagerStatics<D>; };

template <typename D>
struct consume_Windows_System_Power_IForegroundEnergyManagerStatics
{
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t LowUsageLevel() const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t NearMaxAcceptableUsageLevel() const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t MaxAcceptableUsageLevel() const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t ExcessiveUsageLevel() const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t RecentEnergyUsage() const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] uint32_t RecentEnergyUsageLevel() const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] event_token RecentEnergyUsageIncreased(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageIncreased_revoker = event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] RecentEnergyUsageIncreased_revoker RecentEnergyUsageIncreased(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] void RecentEnergyUsageIncreased(event_token const& token) const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] event_token RecentEnergyUsageReturnedToLow(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RecentEnergyUsageReturnedToLow_revoker = event_revoker<Windows::System::Power::IForegroundEnergyManagerStatics>;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] RecentEnergyUsageReturnedToLow_revoker RecentEnergyUsageReturnedToLow(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("Foreground Energy Manager has been deprecated. For more info, see MSDN.")]] void RecentEnergyUsageReturnedToLow(event_token const& token) const;
};
template <> struct consume<Windows::System::Power::IForegroundEnergyManagerStatics> { template <typename D> using type = consume_Windows_System_Power_IForegroundEnergyManagerStatics<D>; };

template <typename D>
struct consume_Windows_System_Power_IPowerManagerStatics
{
    Windows::System::Power::EnergySaverStatus EnergySaverStatus() const;
    event_token EnergySaverStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using EnergySaverStatusChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    EnergySaverStatusChanged_revoker EnergySaverStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void EnergySaverStatusChanged(event_token const& token) const;
    Windows::System::Power::BatteryStatus BatteryStatus() const;
    event_token BatteryStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using BatteryStatusChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    BatteryStatusChanged_revoker BatteryStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void BatteryStatusChanged(event_token const& token) const;
    Windows::System::Power::PowerSupplyStatus PowerSupplyStatus() const;
    event_token PowerSupplyStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using PowerSupplyStatusChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    PowerSupplyStatusChanged_revoker PowerSupplyStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void PowerSupplyStatusChanged(event_token const& token) const;
    int32_t RemainingChargePercent() const;
    event_token RemainingChargePercentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RemainingChargePercentChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    RemainingChargePercentChanged_revoker RemainingChargePercentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RemainingChargePercentChanged(event_token const& token) const;
    Windows::Foundation::TimeSpan RemainingDischargeTime() const;
    event_token RemainingDischargeTimeChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using RemainingDischargeTimeChanged_revoker = event_revoker<Windows::System::Power::IPowerManagerStatics>;
    RemainingDischargeTimeChanged_revoker RemainingDischargeTimeChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void RemainingDischargeTimeChanged(event_token const& token) const;
};
template <> struct consume<Windows::System::Power::IPowerManagerStatics> { template <typename D> using type = consume_Windows_System_Power_IPowerManagerStatics<D>; };

template <> struct abi<Windows::System::Power::IBackgroundEnergyManagerStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_LowUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_NearTerminationUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_TerminationUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsage(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageIncreased(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageIncreased(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::System::Power::IForegroundEnergyManagerStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_LowUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_NearMaxAcceptableUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_MaxAcceptableUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_ExcessiveUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsage(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_RecentEnergyUsageLevel(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageIncreased(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageIncreased(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_RecentEnergyUsageReturnedToLow(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_RecentEnergyUsageReturnedToLow(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::System::Power::IPowerManagerStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_EnergySaverStatus(Windows::System::Power::EnergySaverStatus* value) noexcept = 0;
    virtual HRESULT __stdcall add_EnergySaverStatusChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_EnergySaverStatusChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall get_BatteryStatus(Windows::System::Power::BatteryStatus* value) noexcept = 0;
    virtual HRESULT __stdcall add_BatteryStatusChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_BatteryStatusChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall get_PowerSupplyStatus(Windows::System::Power::PowerSupplyStatus* value) noexcept = 0;
    virtual HRESULT __stdcall add_PowerSupplyStatusChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_PowerSupplyStatusChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall get_RemainingChargePercent(int32_t* value) noexcept = 0;
    virtual HRESULT __stdcall add_RemainingChargePercentChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_RemainingChargePercentChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall get_RemainingDischargeTime(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual HRESULT __stdcall add_RemainingDischargeTimeChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_RemainingDischargeTimeChanged(event_token token) noexcept = 0;
};};

}
