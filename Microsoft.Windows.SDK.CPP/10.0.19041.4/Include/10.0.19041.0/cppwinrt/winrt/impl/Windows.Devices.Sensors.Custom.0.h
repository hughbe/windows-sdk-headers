// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_Sensors_Custom_0_H
#define WINRT_Windows_Devices_Sensors_Custom_0_H
namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Devices::Sensors::Custom
{
    struct ICustomSensor;
    struct ICustomSensor2;
    struct ICustomSensorReading;
    struct ICustomSensorReading2;
    struct ICustomSensorReadingChangedEventArgs;
    struct ICustomSensorStatics;
    struct CustomSensor;
    struct CustomSensorReading;
    struct CustomSensorReadingChangedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensorReading>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::ICustomSensorStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::CustomSensor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::CustomSensorReading>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensor>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensor" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensor2" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensorReading>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensorReading" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensorReading2" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensorReadingChangedEventArgs" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::ICustomSensorStatics>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.ICustomSensorStatics" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::CustomSensor>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.CustomSensor" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::CustomSensorReading>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.CustomSensorReading" };
    };
    template <> struct name<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Devices.Sensors.Custom.CustomSensorReadingChangedEventArgs" };
    };
    template <> struct guid_storage<Windows::Devices::Sensors::Custom::ICustomSensor>
    {
        static constexpr guid value{ 0xA136F9AD,0x4034,0x4B4D,{ 0x99,0xDD,0x53,0x1A,0xAC,0x64,0x9C,0x09 } };
    };
    template <> struct guid_storage<Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        static constexpr guid value{ 0x20DB3111,0xEC58,0x4D9F,{ 0xBF,0xBD,0xE7,0x78,0x25,0x08,0x85,0x10 } };
    };
    template <> struct guid_storage<Windows::Devices::Sensors::Custom::ICustomSensorReading>
    {
        static constexpr guid value{ 0x64004F4D,0x446A,0x4366,{ 0xA8,0x7A,0x5F,0x96,0x32,0x68,0xEC,0x53 } };
    };
    template <> struct guid_storage<Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        static constexpr guid value{ 0x223C98EA,0xBF73,0x4992,{ 0x9A,0x48,0xD3,0xC8,0x97,0x59,0x4C,0xCB } };
    };
    template <> struct guid_storage<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
    {
        static constexpr guid value{ 0x6B202023,0xCFFD,0x4CC1,{ 0x8F,0xF0,0xE2,0x18,0x23,0xD7,0x6F,0xCC } };
    };
    template <> struct guid_storage<Windows::Devices::Sensors::Custom::ICustomSensorStatics>
    {
        static constexpr guid value{ 0x992052CF,0xF422,0x4C7D,{ 0x83,0x6B,0xE7,0xDC,0x74,0xA7,0x12,0x4B } };
    };
    template <> struct default_interface<Windows::Devices::Sensors::Custom::CustomSensor>
    {
        using type = Windows::Devices::Sensors::Custom::ICustomSensor;
    };
    template <> struct default_interface<Windows::Devices::Sensors::Custom::CustomSensorReading>
    {
        using type = Windows::Devices::Sensors::Custom::ICustomSensorReading;
    };
    template <> struct default_interface<Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs>
    {
        using type = Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs;
    };
    template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentReading(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinimumReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReportInterval(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportInterval(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall add_ReadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReadingChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_ReportLatency(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReportLatency(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxBatchSize(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensorReading>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PerformanceCount(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Reading(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Sensors::Custom::ICustomSensorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_Custom_ICustomSensor
    {
        auto GetCurrentReading() const;
        [[nodiscard]] auto MinimumReportInterval() const;
        auto ReportInterval(uint32_t value) const;
        [[nodiscard]] auto ReportInterval() const;
        [[nodiscard]] auto DeviceId() const;
        auto ReadingChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const;
        using ReadingChanged_revoker = impl::event_revoker<Windows::Devices::Sensors::Custom::ICustomSensor, &impl::abi_t<Windows::Devices::Sensors::Custom::ICustomSensor>::remove_ReadingChanged>;
        ReadingChanged_revoker ReadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sensors::Custom::CustomSensor, Windows::Devices::Sensors::Custom::CustomSensorReadingChangedEventArgs> const& handler) const;
        auto ReadingChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensor>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensor<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_Custom_ICustomSensor2
    {
        auto ReportLatency(uint32_t value) const;
        [[nodiscard]] auto ReportLatency() const;
        [[nodiscard]] auto MaxBatchSize() const;
    };
    template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensor2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensor2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_Custom_ICustomSensorReading
    {
        [[nodiscard]] auto Timestamp() const;
        [[nodiscard]] auto Properties() const;
    };
    template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensorReading>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensorReading<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_Custom_ICustomSensorReading2
    {
        [[nodiscard]] auto PerformanceCount() const;
    };
    template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensorReading2>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensorReading2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs
    {
        [[nodiscard]] auto Reading() const;
    };
    template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensorReadingChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensorReadingChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics
    {
        auto GetDeviceSelector(winrt::guid const& interfaceId) const;
        auto FromIdAsync(param::hstring const& sensorId) const;
    };
    template <> struct consume<Windows::Devices::Sensors::Custom::ICustomSensorStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Sensors_Custom_ICustomSensorStatics<D>;
    };
}
#endif
