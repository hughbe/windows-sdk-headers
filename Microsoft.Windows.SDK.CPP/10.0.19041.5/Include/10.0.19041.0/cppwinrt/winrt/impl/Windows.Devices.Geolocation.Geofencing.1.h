// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Geolocation_Geofencing_1_H
#define WINRT_Windows_Devices_Geolocation_Geofencing_1_H
#include "winrt/impl/Windows.Devices.Geolocation.Geofencing.0.h"
namespace winrt::Windows::Devices::Geolocation::Geofencing
{
    struct __declspec(empty_bases) IGeofence :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeofence>
    {
        IGeofence(std::nullptr_t = nullptr) noexcept {}
        IGeofence(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGeofenceFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeofenceFactory>
    {
        IGeofenceFactory(std::nullptr_t = nullptr) noexcept {}
        IGeofenceFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGeofenceMonitor :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeofenceMonitor>
    {
        IGeofenceMonitor(std::nullptr_t = nullptr) noexcept {}
        IGeofenceMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGeofenceMonitorStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeofenceMonitorStatics>
    {
        IGeofenceMonitorStatics(std::nullptr_t = nullptr) noexcept {}
        IGeofenceMonitorStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IGeofenceStateChangeReport :
        Windows::Foundation::IInspectable,
        impl::consume_t<IGeofenceStateChangeReport>
    {
        IGeofenceStateChangeReport(std::nullptr_t = nullptr) noexcept {}
        IGeofenceStateChangeReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
