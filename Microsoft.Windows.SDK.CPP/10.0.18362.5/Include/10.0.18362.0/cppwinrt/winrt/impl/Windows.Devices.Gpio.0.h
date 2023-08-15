﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio::Provider {

struct IGpioProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Gpio {

enum class GpioChangePolarity : int32_t
{
    Falling = 0,
    Rising = 1,
    Both = 2,
};

enum class GpioOpenStatus : int32_t
{
    PinOpened = 0,
    PinUnavailable = 1,
    SharingViolation = 2,
    MuxingConflict = 3,
    UnknownError = 4,
};

enum class GpioPinDriveMode : int32_t
{
    Input = 0,
    Output = 1,
    InputPullUp = 2,
    InputPullDown = 3,
    OutputOpenDrain = 4,
    OutputOpenDrainPullUp = 5,
    OutputOpenSource = 6,
    OutputOpenSourcePullDown = 7,
};

enum class GpioPinEdge : int32_t
{
    FallingEdge = 0,
    RisingEdge = 1,
};

enum class GpioPinValue : int32_t
{
    Low = 0,
    High = 1,
};

enum class GpioSharingMode : int32_t
{
    Exclusive = 0,
    SharedReadOnly = 1,
};

struct IGpioChangeCounter;
struct IGpioChangeCounterFactory;
struct IGpioChangeReader;
struct IGpioChangeReaderFactory;
struct IGpioController;
struct IGpioControllerStatics;
struct IGpioControllerStatics2;
struct IGpioPin;
struct IGpioPinValueChangedEventArgs;
struct GpioChangeCounter;
struct GpioChangeReader;
struct GpioController;
struct GpioPin;
struct GpioPinValueChangedEventArgs;
struct GpioChangeCount;
struct GpioChangeRecord;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Gpio::IGpioChangeCounter>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioChangeCounterFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioChangeReader>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioChangeReaderFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioController>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioControllerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioPin>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Gpio::GpioChangeCounter>{ using type = class_category; };
template <> struct category<Windows::Devices::Gpio::GpioChangeReader>{ using type = class_category; };
template <> struct category<Windows::Devices::Gpio::GpioController>{ using type = class_category; };
template <> struct category<Windows::Devices::Gpio::GpioPin>{ using type = class_category; };
template <> struct category<Windows::Devices::Gpio::GpioPinValueChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Gpio::GpioChangePolarity>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::GpioOpenStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::GpioPinDriveMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::GpioPinEdge>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::GpioPinValue>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::GpioSharingMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Gpio::GpioChangeCount>{ using type = struct_category<uint64_t,Windows::Foundation::TimeSpan>; };
template <> struct category<Windows::Devices::Gpio::GpioChangeRecord>{ using type = struct_category<Windows::Foundation::TimeSpan,Windows::Devices::Gpio::GpioPinEdge>; };
template <> struct name<Windows::Devices::Gpio::IGpioChangeCounter>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeCounter" }; };
template <> struct name<Windows::Devices::Gpio::IGpioChangeCounterFactory>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeCounterFactory" }; };
template <> struct name<Windows::Devices::Gpio::IGpioChangeReader>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeReader" }; };
template <> struct name<Windows::Devices::Gpio::IGpioChangeReaderFactory>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioChangeReaderFactory" }; };
template <> struct name<Windows::Devices::Gpio::IGpioController>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioController" }; };
template <> struct name<Windows::Devices::Gpio::IGpioControllerStatics>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioControllerStatics" }; };
template <> struct name<Windows::Devices::Gpio::IGpioControllerStatics2>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioControllerStatics2" }; };
template <> struct name<Windows::Devices::Gpio::IGpioPin>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioPin" }; };
template <> struct name<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Gpio.IGpioPinValueChangedEventArgs" }; };
template <> struct name<Windows::Devices::Gpio::GpioChangeCounter>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeCounter" }; };
template <> struct name<Windows::Devices::Gpio::GpioChangeReader>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeReader" }; };
template <> struct name<Windows::Devices::Gpio::GpioController>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioController" }; };
template <> struct name<Windows::Devices::Gpio::GpioPin>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPin" }; };
template <> struct name<Windows::Devices::Gpio::GpioPinValueChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinValueChangedEventArgs" }; };
template <> struct name<Windows::Devices::Gpio::GpioChangePolarity>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangePolarity" }; };
template <> struct name<Windows::Devices::Gpio::GpioOpenStatus>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioOpenStatus" }; };
template <> struct name<Windows::Devices::Gpio::GpioPinDriveMode>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinDriveMode" }; };
template <> struct name<Windows::Devices::Gpio::GpioPinEdge>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinEdge" }; };
template <> struct name<Windows::Devices::Gpio::GpioPinValue>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioPinValue" }; };
template <> struct name<Windows::Devices::Gpio::GpioSharingMode>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioSharingMode" }; };
template <> struct name<Windows::Devices::Gpio::GpioChangeCount>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeCount" }; };
template <> struct name<Windows::Devices::Gpio::GpioChangeRecord>{ static constexpr auto & value{ L"Windows.Devices.Gpio.GpioChangeRecord" }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeCounter>{ static constexpr guid value{ 0xCB5EC0DE,0x6801,0x43FF,{ 0x80,0x3D,0x45,0x76,0x62,0x8A,0x8B,0x26 } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeCounterFactory>{ static constexpr guid value{ 0x147D94B6,0x0A9E,0x410C,{ 0xB4,0xFA,0xF8,0x9F,0x40,0x52,0x08,0x4D } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeReader>{ static constexpr guid value{ 0x0ABC885F,0xE031,0x48E8,{ 0x85,0x90,0x70,0xDE,0x78,0x36,0x3C,0x6D } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioChangeReaderFactory>{ static constexpr guid value{ 0xA9598EF3,0x390E,0x441A,{ 0x9D,0x1C,0xE8,0xDE,0x0B,0x2D,0xF0,0xDF } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioController>{ static constexpr guid value{ 0x284012E3,0x7461,0x469C,{ 0xA8,0xBC,0x61,0xD6,0x9D,0x08,0xA5,0x3C } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioControllerStatics>{ static constexpr guid value{ 0x2ED6F42E,0x7AF7,0x4116,{ 0x95,0x33,0xC4,0x3D,0x99,0xA1,0xFB,0x64 } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioControllerStatics2>{ static constexpr guid value{ 0x912B7D20,0x6CA4,0x4106,{ 0xA3,0x73,0xFF,0xFD,0x34,0x6B,0x0E,0x5B } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioPin>{ static constexpr guid value{ 0x11D9B087,0xAFAE,0x4790,{ 0x9E,0xE9,0xE0,0xEA,0xC9,0x42,0xD2,0x01 } }; };
template <> struct guid_storage<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>{ static constexpr guid value{ 0x3137AAE1,0x703D,0x4059,{ 0xBD,0x24,0xB5,0xB2,0x5D,0xFF,0xB8,0x4E } }; };
template <> struct default_interface<Windows::Devices::Gpio::GpioChangeCounter>{ using type = Windows::Devices::Gpio::IGpioChangeCounter; };
template <> struct default_interface<Windows::Devices::Gpio::GpioChangeReader>{ using type = Windows::Devices::Gpio::IGpioChangeReader; };
template <> struct default_interface<Windows::Devices::Gpio::GpioController>{ using type = Windows::Devices::Gpio::IGpioController; };
template <> struct default_interface<Windows::Devices::Gpio::GpioPin>{ using type = Windows::Devices::Gpio::IGpioPin; };
template <> struct default_interface<Windows::Devices::Gpio::GpioPinValueChangedEventArgs>{ using type = Windows::Devices::Gpio::IGpioPinValueChangedEventArgs; };

template <> struct abi<Windows::Devices::Gpio::IGpioChangeCounter>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Polarity(Windows::Devices::Gpio::GpioChangePolarity value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Polarity(Windows::Devices::Gpio::GpioChangePolarity* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsStarted(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL Start() noexcept = 0;
    virtual int32_t WINRT_CALL Stop() noexcept = 0;
    virtual int32_t WINRT_CALL Read(struct struct_Windows_Devices_Gpio_GpioChangeCount* value) noexcept = 0;
    virtual int32_t WINRT_CALL Reset(struct struct_Windows_Devices_Gpio_GpioChangeCount* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioChangeCounterFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* pin, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioChangeReader>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Capacity(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Length(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsEmpty(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsOverflowed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Polarity(Windows::Devices::Gpio::GpioChangePolarity value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Polarity(Windows::Devices::Gpio::GpioChangePolarity* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsStarted(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL Start() noexcept = 0;
    virtual int32_t WINRT_CALL Stop() noexcept = 0;
    virtual int32_t WINRT_CALL Clear() noexcept = 0;
    virtual int32_t WINRT_CALL GetNextItem(struct struct_Windows_Devices_Gpio_GpioChangeRecord* value) noexcept = 0;
    virtual int32_t WINRT_CALL PeekNextItem(struct struct_Windows_Devices_Gpio_GpioChangeRecord* value) noexcept = 0;
    virtual int32_t WINRT_CALL GetAllItems(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL WaitForItemsAsync(int32_t count, void** operation) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioChangeReaderFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* pin, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateWithCapacity(void* pin, int32_t minCapacity, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioController>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PinCount(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL OpenPin(int32_t pinNumber, void** pin) noexcept = 0;
    virtual int32_t WINRT_CALL OpenPinWithSharingMode(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode, void** pin) noexcept = 0;
    virtual int32_t WINRT_CALL TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode sharingMode, void** pin, Windows::Devices::Gpio::GpioOpenStatus* openStatus, bool* succeeded) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioControllerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetDefault(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioControllerStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetControllersAsync(void* provider, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL GetDefaultAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioPin>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_ValueChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ValueChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_DebounceTimeout(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DebounceTimeout(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PinNumber(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SharingMode(Windows::Devices::Gpio::GpioSharingMode* value) noexcept = 0;
    virtual int32_t WINRT_CALL IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode driveMode, bool* supported) noexcept = 0;
    virtual int32_t WINRT_CALL GetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode* value) noexcept = 0;
    virtual int32_t WINRT_CALL SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode value) noexcept = 0;
    virtual int32_t WINRT_CALL Write(Windows::Devices::Gpio::GpioPinValue value) noexcept = 0;
    virtual int32_t WINRT_CALL Read(Windows::Devices::Gpio::GpioPinValue* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Edge(Windows::Devices::Gpio::GpioPinEdge* value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioChangeCounter
{
    void Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const;
    Windows::Devices::Gpio::GpioChangePolarity Polarity() const;
    bool IsStarted() const;
    void Start() const;
    void Stop() const;
    Windows::Devices::Gpio::GpioChangeCount Read() const;
    Windows::Devices::Gpio::GpioChangeCount Reset() const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioChangeCounter> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeCounter<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioChangeCounterFactory
{
    Windows::Devices::Gpio::GpioChangeCounter Create(Windows::Devices::Gpio::GpioPin const& pin) const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioChangeCounterFactory> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeCounterFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioChangeReader
{
    int32_t Capacity() const;
    int32_t Length() const;
    bool IsEmpty() const;
    bool IsOverflowed() const;
    void Polarity(Windows::Devices::Gpio::GpioChangePolarity const& value) const;
    Windows::Devices::Gpio::GpioChangePolarity Polarity() const;
    bool IsStarted() const;
    void Start() const;
    void Stop() const;
    void Clear() const;
    Windows::Devices::Gpio::GpioChangeRecord GetNextItem() const;
    Windows::Devices::Gpio::GpioChangeRecord PeekNextItem() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Gpio::GpioChangeRecord> GetAllItems() const;
    Windows::Foundation::IAsyncAction WaitForItemsAsync(int32_t count) const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioChangeReader> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeReader<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioChangeReaderFactory
{
    Windows::Devices::Gpio::GpioChangeReader Create(Windows::Devices::Gpio::GpioPin const& pin) const;
    Windows::Devices::Gpio::GpioChangeReader CreateWithCapacity(Windows::Devices::Gpio::GpioPin const& pin, int32_t minCapacity) const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioChangeReaderFactory> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioChangeReaderFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioController
{
    int32_t PinCount() const;
    Windows::Devices::Gpio::GpioPin OpenPin(int32_t pinNumber) const;
    Windows::Devices::Gpio::GpioPin OpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode) const;
    bool TryOpenPin(int32_t pinNumber, Windows::Devices::Gpio::GpioSharingMode const& sharingMode, Windows::Devices::Gpio::GpioPin& pin, Windows::Devices::Gpio::GpioOpenStatus& openStatus) const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioController> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioController<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioControllerStatics
{
    Windows::Devices::Gpio::GpioController GetDefault() const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioControllerStatics> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioControllerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioControllerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Gpio::GpioController>> GetControllersAsync(Windows::Devices::Gpio::Provider::IGpioProvider const& provider) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Gpio::GpioController> GetDefaultAsync() const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioControllerStatics2> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioControllerStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioPin
{
    winrt::event_token ValueChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const;
    using ValueChanged_revoker = impl::event_revoker<Windows::Devices::Gpio::IGpioPin, &impl::abi_t<Windows::Devices::Gpio::IGpioPin>::remove_ValueChanged>;
    ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Gpio::GpioPin, Windows::Devices::Gpio::GpioPinValueChangedEventArgs> const& handler) const;
    void ValueChanged(winrt::event_token const& token) const noexcept;
    Windows::Foundation::TimeSpan DebounceTimeout() const;
    void DebounceTimeout(Windows::Foundation::TimeSpan const& value) const;
    int32_t PinNumber() const;
    Windows::Devices::Gpio::GpioSharingMode SharingMode() const;
    bool IsDriveModeSupported(Windows::Devices::Gpio::GpioPinDriveMode const& driveMode) const;
    Windows::Devices::Gpio::GpioPinDriveMode GetDriveMode() const;
    void SetDriveMode(Windows::Devices::Gpio::GpioPinDriveMode const& value) const;
    void Write(Windows::Devices::Gpio::GpioPinValue const& value) const;
    Windows::Devices::Gpio::GpioPinValue Read() const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioPin> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioPin<D>; };

template <typename D>
struct consume_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs
{
    Windows::Devices::Gpio::GpioPinEdge Edge() const;
};
template <> struct consume<Windows::Devices::Gpio::IGpioPinValueChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Gpio_IGpioPinValueChangedEventArgs<D>; };

struct struct_Windows_Devices_Gpio_GpioChangeCount
{
    uint64_t Count;
    Windows::Foundation::TimeSpan RelativeTime;
};
template <> struct abi<Windows::Devices::Gpio::GpioChangeCount>{ using type = struct_Windows_Devices_Gpio_GpioChangeCount; };


struct struct_Windows_Devices_Gpio_GpioChangeRecord
{
    Windows::Foundation::TimeSpan RelativeTime;
    Windows::Devices::Gpio::GpioPinEdge Edge;
};
template <> struct abi<Windows::Devices::Gpio::GpioChangeRecord>{ using type = struct_Windows_Devices_Gpio_GpioChangeRecord; };


}
