﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation {

struct Geoposition;
struct IGeoshape;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation::Geofencing {

enum class GeofenceMonitorStatus : int32_t
{
    Ready = 0,
    Initializing = 1,
    NoData = 2,
    Disabled = 3,
    NotInitialized = 4,
    NotAvailable = 5,
};

enum class GeofenceRemovalReason : int32_t
{
    Used = 0,
    Expired = 1,
};

enum class GeofenceState : uint32_t
{
    None = 0x0,
    Entered = 0x1,
    Exited = 0x2,
    Removed = 0x4,
};

enum class MonitoredGeofenceStates : uint32_t
{
    None = 0x0,
    Entered = 0x1,
    Exited = 0x2,
    Removed = 0x4,
};

struct IGeofence;
struct IGeofenceFactory;
struct IGeofenceMonitor;
struct IGeofenceMonitorStatics;
struct IGeofenceStateChangeReport;
struct Geofence;
struct GeofenceMonitor;
struct GeofenceStateChangeReport;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::Devices::Geolocation::Geofencing::GeofenceState> : std::true_type {};
template<> struct is_enum_flag<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates> : std::true_type {};
template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofence>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>{ using type = interface_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::Geofence>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>{ using type = class_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::GeofenceState>{ using type = enum_category; };
template <> struct category<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>{ using type = enum_category; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofence>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofence" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceFactory" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitor" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceMonitorStatics" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.IGeofenceStateChangeReport" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::Geofence>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.Geofence" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitor" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceStateChangeReport" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceMonitorStatus" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceRemovalReason" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::GeofenceState>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.GeofenceState" }; };
template <> struct name<Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates>{ static constexpr auto & value{ L"Windows.Devices.Geolocation.Geofencing.MonitoredGeofenceStates" }; };
template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofence>{ static constexpr guid value{ 0x9C090823,0xEDB8,0x47E0,{ 0x82,0x45,0x5B,0xF6,0x1D,0x32,0x1F,0x2D } }; };
template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>{ static constexpr guid value{ 0x841F624B,0x325F,0x4B90,{ 0xBC,0xA7,0x2B,0x80,0x22,0xA9,0x37,0x96 } }; };
template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>{ static constexpr guid value{ 0x4C0F5F78,0x1C1F,0x4621,{ 0xBB,0xBD,0x83,0x3B,0x92,0x24,0x72,0x26 } }; };
template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>{ static constexpr guid value{ 0x2DD32FCF,0x7E75,0x4899,{ 0xAC,0xE3,0x2B,0xD0,0xA6,0x5C,0xCE,0x06 } }; };
template <> struct guid_storage<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>{ static constexpr guid value{ 0x9A243C18,0x2464,0x4C89,{ 0xBE,0x05,0xB3,0xFF,0xFF,0x5B,0xAB,0xC5 } }; };
template <> struct default_interface<Windows::Devices::Geolocation::Geofencing::Geofence>{ using type = Windows::Devices::Geolocation::Geofencing::IGeofence; };
template <> struct default_interface<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor>{ using type = Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor; };
template <> struct default_interface<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport>{ using type = Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport; };

template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofence>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_StartTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DwellTime(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MonitoredStates(Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Geoshape(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SingleUse(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* id, void* geoshape, void** geofence) noexcept = 0;
    virtual int32_t WINRT_CALL CreateWithMonitorStates(void* id, void* geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, void** geofence) noexcept = 0;
    virtual int32_t WINRT_CALL CreateWithMonitorStatesAndDwellTime(void* id, void* geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, Windows::Foundation::TimeSpan dwellTime, void** geofence) noexcept = 0;
    virtual int32_t WINRT_CALL CreateWithMonitorStatesDwellTimeStartTimeAndDuration(void* id, void* geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates monitoredStates, bool singleUse, Windows::Foundation::TimeSpan dwellTime, Windows::Foundation::DateTime startTime, Windows::Foundation::TimeSpan duration, void** geofence) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Status(Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Geofences(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LastKnownGeoposition(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL add_GeofenceStateChanged(void* eventHandler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_GeofenceStateChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL ReadReports(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL add_StatusChanged(void* eventHandler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_StatusChanged(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Current(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_NewState(Windows::Devices::Geolocation::Geofencing::GeofenceState* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Geofence(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Geoposition(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RemovalReason(Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason* value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Devices_Geolocation_Geofencing_IGeofence
{
    Windows::Foundation::DateTime StartTime() const;
    Windows::Foundation::TimeSpan Duration() const;
    Windows::Foundation::TimeSpan DwellTime() const;
    hstring Id() const;
    Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates MonitoredStates() const;
    Windows::Devices::Geolocation::IGeoshape Geoshape() const;
    bool SingleUse() const;
};
template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofence> { template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofence<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory
{
    Windows::Devices::Geolocation::Geofencing::Geofence Create(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape) const;
    Windows::Devices::Geolocation::Geofencing::Geofence CreateWithMonitorStates(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse) const;
    Windows::Devices::Geolocation::Geofencing::Geofence CreateWithMonitorStatesAndDwellTime(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime) const;
    Windows::Devices::Geolocation::Geofencing::Geofence CreateWithMonitorStatesDwellTimeStartTimeAndDuration(param::hstring const& id, Windows::Devices::Geolocation::IGeoshape const& geoshape, Windows::Devices::Geolocation::Geofencing::MonitoredGeofenceStates const& monitoredStates, bool singleUse, Windows::Foundation::TimeSpan const& dwellTime, Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const;
};
template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceFactory> { template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor
{
    Windows::Devices::Geolocation::Geofencing::GeofenceMonitorStatus Status() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geofencing::Geofence> Geofences() const;
    Windows::Devices::Geolocation::Geoposition LastKnownGeoposition() const;
    winrt::event_token GeofenceStateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
    using GeofenceStateChanged_revoker = impl::event_revoker<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor, &impl::abi_t<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>::remove_GeofenceStateChanged>;
    GeofenceStateChanged_revoker GeofenceStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
    void GeofenceStateChanged(winrt::event_token const& token) const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Geolocation::Geofencing::GeofenceStateChangeReport> ReadReports() const;
    winrt::event_token StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
    using StatusChanged_revoker = impl::event_revoker<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor, &impl::abi_t<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor>::remove_StatusChanged>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Geolocation::Geofencing::GeofenceMonitor, Windows::Foundation::IInspectable> const& eventHandler) const;
    void StatusChanged(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitor> { template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitor<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics
{
    Windows::Devices::Geolocation::Geofencing::GeofenceMonitor Current() const;
};
template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceMonitorStatics> { template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceMonitorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport
{
    Windows::Devices::Geolocation::Geofencing::GeofenceState NewState() const;
    Windows::Devices::Geolocation::Geofencing::Geofence Geofence() const;
    Windows::Devices::Geolocation::Geoposition Geoposition() const;
    Windows::Devices::Geolocation::Geofencing::GeofenceRemovalReason RemovalReason() const;
};
template <> struct consume<Windows::Devices::Geolocation::Geofencing::IGeofenceStateChangeReport> { template <typename D> using type = consume_Windows_Devices_Geolocation_Geofencing_IGeofenceStateChangeReport<D>; };

}
