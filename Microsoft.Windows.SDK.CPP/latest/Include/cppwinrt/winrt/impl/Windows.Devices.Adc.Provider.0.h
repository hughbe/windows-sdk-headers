﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Adc::Provider {

enum class ProviderAdcChannelMode : int32_t
{
    SingleEnded = 0,
    Differential = 1,
};

struct IAdcControllerProvider;
struct IAdcProvider;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Adc::Provider::IAdcControllerProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::Adc::Provider::IAdcProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::Adc::Provider::ProviderAdcChannelMode>{ using type = enum_category; };
template <> struct name<Windows::Devices::Adc::Provider::IAdcControllerProvider>{ static constexpr auto & value{ L"Windows.Devices.Adc.Provider.IAdcControllerProvider" }; };
template <> struct name<Windows::Devices::Adc::Provider::IAdcProvider>{ static constexpr auto & value{ L"Windows.Devices.Adc.Provider.IAdcProvider" }; };
template <> struct name<Windows::Devices::Adc::Provider::ProviderAdcChannelMode>{ static constexpr auto & value{ L"Windows.Devices.Adc.Provider.ProviderAdcChannelMode" }; };
template <> struct guid_storage<Windows::Devices::Adc::Provider::IAdcControllerProvider>{ static constexpr guid value{ 0xBE545828,0x816D,0x4DE5,{ 0xA0,0x48,0xAB,0xA0,0x69,0x58,0xAA,0xA8 } }; };
template <> struct guid_storage<Windows::Devices::Adc::Provider::IAdcProvider>{ static constexpr guid value{ 0x28953668,0x9359,0x4C57,{ 0xBC,0x88,0xE2,0x75,0xE8,0x16,0x38,0xC9 } }; };

template <> struct abi<Windows::Devices::Adc::Provider::IAdcControllerProvider>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ChannelCount(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ResolutionInBits(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MinValue(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MaxValue(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode value) noexcept = 0;
    virtual int32_t WINRT_CALL IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode channelMode, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL AcquireChannel(int32_t channel) noexcept = 0;
    virtual int32_t WINRT_CALL ReleaseChannel(int32_t channel) noexcept = 0;
    virtual int32_t WINRT_CALL ReadValue(int32_t channelNumber, int32_t* result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Adc::Provider::IAdcProvider>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetControllers(void** result) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Devices_Adc_Provider_IAdcControllerProvider
{
    int32_t ChannelCount() const;
    int32_t ResolutionInBits() const;
    int32_t MinValue() const;
    int32_t MaxValue() const;
    Windows::Devices::Adc::Provider::ProviderAdcChannelMode ChannelMode() const;
    void ChannelMode(Windows::Devices::Adc::Provider::ProviderAdcChannelMode const& value) const;
    bool IsChannelModeSupported(Windows::Devices::Adc::Provider::ProviderAdcChannelMode const& channelMode) const;
    void AcquireChannel(int32_t channel) const;
    void ReleaseChannel(int32_t channel) const;
    int32_t ReadValue(int32_t channelNumber) const;
};
template <> struct consume<Windows::Devices::Adc::Provider::IAdcControllerProvider> { template <typename D> using type = consume_Windows_Devices_Adc_Provider_IAdcControllerProvider<D>; };

template <typename D>
struct consume_Windows_Devices_Adc_Provider_IAdcProvider
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::Provider::IAdcControllerProvider> GetControllers() const;
};
template <> struct consume<Windows::Devices::Adc::Provider::IAdcProvider> { template <typename D> using type = consume_Windows_Devices_Adc_Provider_IAdcProvider<D>; };

}
