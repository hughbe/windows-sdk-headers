﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Background {

struct IDeviceServicingDetails;
struct IDeviceUseDetails;
struct DeviceServicingDetails;
struct DeviceUseDetails;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Background::IDeviceServicingDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Background::IDeviceUseDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Background::DeviceServicingDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Background::DeviceUseDetails>{ using type = class_category; };
template <> struct name<Windows::Devices::Background::IDeviceServicingDetails>{ static constexpr auto & value{ L"Windows.Devices.Background.IDeviceServicingDetails" }; };
template <> struct name<Windows::Devices::Background::IDeviceUseDetails>{ static constexpr auto & value{ L"Windows.Devices.Background.IDeviceUseDetails" }; };
template <> struct name<Windows::Devices::Background::DeviceServicingDetails>{ static constexpr auto & value{ L"Windows.Devices.Background.DeviceServicingDetails" }; };
template <> struct name<Windows::Devices::Background::DeviceUseDetails>{ static constexpr auto & value{ L"Windows.Devices.Background.DeviceUseDetails" }; };
template <> struct guid_storage<Windows::Devices::Background::IDeviceServicingDetails>{ static constexpr guid value{ 0x4AABEE29,0x2344,0x4AC4,{ 0x85,0x27,0x4A,0x8E,0xF6,0x90,0x56,0x45 } }; };
template <> struct guid_storage<Windows::Devices::Background::IDeviceUseDetails>{ static constexpr guid value{ 0x7D565141,0x557E,0x4154,{ 0xB9,0x94,0xE4,0xF7,0xA1,0x1F,0xB3,0x23 } }; };
template <> struct default_interface<Windows::Devices::Background::DeviceServicingDetails>{ using type = Windows::Devices::Background::IDeviceServicingDetails; };
template <> struct default_interface<Windows::Devices::Background::DeviceUseDetails>{ using type = Windows::Devices::Background::IDeviceUseDetails; };

template <> struct abi<Windows::Devices::Background::IDeviceServicingDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DeviceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Arguments(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExpectedDuration(Windows::Foundation::TimeSpan* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Background::IDeviceUseDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DeviceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Arguments(void** value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Devices_Background_IDeviceServicingDetails
{
    hstring DeviceId() const;
    hstring Arguments() const;
    Windows::Foundation::TimeSpan ExpectedDuration() const;
};
template <> struct consume<Windows::Devices::Background::IDeviceServicingDetails> { template <typename D> using type = consume_Windows_Devices_Background_IDeviceServicingDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Background_IDeviceUseDetails
{
    hstring DeviceId() const;
    hstring Arguments() const;
};
template <> struct consume<Windows::Devices::Background::IDeviceUseDetails> { template <typename D> using type = consume_Windows_Devices_Background_IDeviceUseDetails<D>; };

}
