// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService {

struct BarcodeScannerReport;
struct BarcodeSymbologyAttributes;
struct UnifiedPosErrorData;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService::Provider {

enum class BarcodeScannerTriggerState : int32_t
{
    Released = 0,
    Pressed = 1,
};

struct IBarcodeScannerDisableScannerRequest;
struct IBarcodeScannerDisableScannerRequestEventArgs;
struct IBarcodeScannerEnableScannerRequest;
struct IBarcodeScannerEnableScannerRequestEventArgs;
struct IBarcodeScannerGetSymbologyAttributesRequest;
struct IBarcodeScannerGetSymbologyAttributesRequestEventArgs;
struct IBarcodeScannerHideVideoPreviewRequest;
struct IBarcodeScannerHideVideoPreviewRequestEventArgs;
struct IBarcodeScannerProviderConnection;
struct IBarcodeScannerProviderTriggerDetails;
struct IBarcodeScannerSetActiveSymbologiesRequest;
struct IBarcodeScannerSetActiveSymbologiesRequestEventArgs;
struct IBarcodeScannerSetSymbologyAttributesRequest;
struct IBarcodeScannerSetSymbologyAttributesRequestEventArgs;
struct IBarcodeScannerStartSoftwareTriggerRequest;
struct IBarcodeScannerStartSoftwareTriggerRequestEventArgs;
struct IBarcodeScannerStopSoftwareTriggerRequest;
struct IBarcodeScannerStopSoftwareTriggerRequestEventArgs;
struct IBarcodeSymbologyAttributesBuilder;
struct BarcodeScannerDisableScannerRequest;
struct BarcodeScannerDisableScannerRequestEventArgs;
struct BarcodeScannerEnableScannerRequest;
struct BarcodeScannerEnableScannerRequestEventArgs;
struct BarcodeScannerGetSymbologyAttributesRequest;
struct BarcodeScannerGetSymbologyAttributesRequestEventArgs;
struct BarcodeScannerHideVideoPreviewRequest;
struct BarcodeScannerHideVideoPreviewRequestEventArgs;
struct BarcodeScannerProviderConnection;
struct BarcodeScannerProviderTriggerDetails;
struct BarcodeScannerSetActiveSymbologiesRequest;
struct BarcodeScannerSetActiveSymbologiesRequestEventArgs;
struct BarcodeScannerSetSymbologyAttributesRequest;
struct BarcodeScannerSetSymbologyAttributesRequestEventArgs;
struct BarcodeScannerStartSoftwareTriggerRequest;
struct BarcodeScannerStartSoftwareTriggerRequestEventArgs;
struct BarcodeScannerStopSoftwareTriggerRequest;
struct BarcodeScannerStopSoftwareTriggerRequestEventArgs;
struct BarcodeSymbologyAttributesBuilder;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>{ using type = interface_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>{ using type = class_category; };
template <> struct category<Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState>{ using type = enum_category; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerDisableScannerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerEnableScannerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerGetSymbologyAttributesRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerHideVideoPreviewRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderConnection" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerProviderTriggerDetails" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetActiveSymbologiesRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerSetSymbologyAttributesRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStartSoftwareTriggerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeScannerStopSoftwareTriggerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.IBarcodeSymbologyAttributesBuilder" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerDisableScannerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerDisableScannerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerEnableScannerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerEnableScannerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerGetSymbologyAttributesRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerGetSymbologyAttributesRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerHideVideoPreviewRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerHideVideoPreviewRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerProviderConnection" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerProviderTriggerDetails" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetActiveSymbologiesRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetActiveSymbologiesRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetSymbologyAttributesRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerSetSymbologyAttributesRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStartSoftwareTriggerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStartSoftwareTriggerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStopSoftwareTriggerRequest" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerStopSoftwareTriggerRequestEventArgs" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeSymbologyAttributesBuilder" }; };
template <> struct name<Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState>{ static constexpr auto & value{ L"Windows.Devices.PointOfService.Provider.BarcodeScannerTriggerState" }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>{ static constexpr GUID value{ 0x88ECF7C0,0x37B9,0x4275,{ 0x8E,0x77,0xC8,0xE5,0x2A,0xE5,0xA9,0xC8 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>{ static constexpr GUID value{ 0x7006E142,0xE802,0x46F5,{ 0xB6,0x04,0x35,0x2A,0x15,0xCE,0x92,0x32 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>{ static constexpr GUID value{ 0xC0B3E9BA,0x816A,0x452B,{ 0xBD,0x77,0xB7,0xE4,0x53,0xEC,0x44,0x6D } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>{ static constexpr GUID value{ 0x956C9419,0x7B4E,0x4451,{ 0x8C,0x41,0x8E,0x10,0xCF,0xBC,0x5B,0x41 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>{ static constexpr GUID value{ 0x9774C46A,0x58E4,0x4C5F,{ 0xB8,0xE9,0xE4,0x14,0x67,0x63,0x27,0x00 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>{ static constexpr GUID value{ 0x7F89DE3E,0xFB5D,0x493C,{ 0xB4,0x02,0x35,0x6B,0x24,0xD5,0x74,0xA6 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>{ static constexpr GUID value{ 0xFA4EBE7F,0x6670,0x40E1,{ 0xB9,0x0B,0xBB,0x10,0xD8,0xD4,0x25,0xFA } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>{ static constexpr GUID value{ 0x16A281FC,0xD6BE,0x4BC7,{ 0x9D,0xF1,0x33,0x74,0x1F,0x3E,0xAD,0xEA } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>{ static constexpr GUID value{ 0xB44ACBED,0x0B3A,0x4FA3,{ 0x86,0xC5,0x49,0x1E,0xA3,0x07,0x80,0xEB } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>{ static constexpr GUID value{ 0x50856D82,0x24E3,0x48CE,{ 0x99,0xC7,0x70,0xAA,0xC1,0xCB,0xC9,0xF7 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>{ static constexpr GUID value{ 0xDB3F32B9,0xF7DA,0x41A1,{ 0x9F,0x79,0x07,0xBC,0xD9,0x5F,0x0B,0xDF } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>{ static constexpr GUID value{ 0x06305AFA,0x7BF6,0x4D52,{ 0x80,0x1A,0x33,0x02,0x72,0xF6,0x0A,0xE1 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>{ static constexpr GUID value{ 0x32FB814F,0xA37F,0x48B0,{ 0xAC,0xEA,0xDC,0xE1,0x48,0x0F,0x12,0xAE } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>{ static constexpr GUID value{ 0xB2B89809,0x9824,0x47D4,{ 0x85,0xBD,0xD0,0x07,0x7B,0xAA,0x7B,0xD2 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>{ static constexpr GUID value{ 0xE3FA7B27,0xFF62,0x4454,{ 0xAF,0x4A,0xCB,0x61,0x44,0xA3,0xE3,0xF7 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>{ static constexpr GUID value{ 0x2305D843,0xC88F,0x4F3B,{ 0x8C,0x3B,0xD3,0xDF,0x07,0x10,0x51,0xEC } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>{ static constexpr GUID value{ 0x6F9FAF35,0xE287,0x4CA8,{ 0xB7,0x0D,0x5A,0x91,0xD6,0x94,0xF6,0x68 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>{ static constexpr GUID value{ 0xEAC34450,0x4EB7,0x481A,{ 0x92,0x73,0x14,0x7A,0x27,0x3B,0x99,0xB8 } }; };
template <> struct guid<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>{ static constexpr GUID value{ 0xC57B0CBF,0xE4F5,0x40B9,{ 0x84,0xCF,0xE6,0x3F,0xBA,0xEA,0x42,0xB4 } }; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs; };
template <> struct default_interface<Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder>{ using type = Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest
{
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest
{
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest
{
    uint32_t Symbology() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(Windows::Devices::PointOfService::BarcodeSymbologyAttributes const& attributes) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest
{
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection
{
    hstring Id() const;
    hstring VideoDeviceId() const;
    Windows::Foundation::Collections::IVector<uint32_t> SupportedSymbologies() const;
    hstring CompanyName() const;
    void CompanyName(param::hstring const& value) const;
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring Version() const;
    void Version(param::hstring const& value) const;
    void Start() const;
    Windows::Foundation::IAsyncAction ReportScannedDataAsync(Windows::Devices::PointOfService::BarcodeScannerReport const& report) const;
    Windows::Foundation::IAsyncAction ReportTriggerStateAsync(Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState const& state) const;
    Windows::Foundation::IAsyncAction ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData) const;
    Windows::Foundation::IAsyncAction ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData, bool isRetriable, Windows::Devices::PointOfService::BarcodeScannerReport const& scanReport) const;
    event_token EnableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const;
    using EnableScannerRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    EnableScannerRequested_revoker EnableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const;
    void EnableScannerRequested(event_token const& token) const;
    event_token DisableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const;
    using DisableScannerRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    DisableScannerRequested_revoker DisableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const;
    void DisableScannerRequested(event_token const& token) const;
    event_token SetActiveSymbologiesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const;
    using SetActiveSymbologiesRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    SetActiveSymbologiesRequested_revoker SetActiveSymbologiesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const;
    void SetActiveSymbologiesRequested(event_token const& token) const;
    event_token StartSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const;
    using StartSoftwareTriggerRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    StartSoftwareTriggerRequested_revoker StartSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const;
    void StartSoftwareTriggerRequested(event_token const& token) const;
    event_token StopSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const;
    using StopSoftwareTriggerRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    StopSoftwareTriggerRequested_revoker StopSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const;
    void StopSoftwareTriggerRequested(event_token const& token) const;
    event_token GetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const;
    using GetBarcodeSymbologyAttributesRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    GetBarcodeSymbologyAttributesRequested_revoker GetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const;
    void GetBarcodeSymbologyAttributesRequested(event_token const& token) const;
    event_token SetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const;
    using SetBarcodeSymbologyAttributesRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    SetBarcodeSymbologyAttributesRequested_revoker SetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const;
    void SetBarcodeSymbologyAttributesRequested(event_token const& token) const;
    event_token HideVideoPreviewRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const;
    using HideVideoPreviewRequested_revoker = event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>;
    HideVideoPreviewRequested_revoker HideVideoPreviewRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const;
    void HideVideoPreviewRequested(event_token const& token) const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderTriggerDetails
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection Connection() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest
{
    Windows::Foundation::Collections::IVectorView<uint32_t> Symbologies() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest
{
    uint32_t Symbology() const;
    Windows::Devices::PointOfService::BarcodeSymbologyAttributes Attributes() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest
{
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest
{
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder
{
    bool IsCheckDigitValidationSupported() const;
    void IsCheckDigitValidationSupported(bool value) const;
    bool IsCheckDigitTransmissionSupported() const;
    void IsCheckDigitTransmissionSupported(bool value) const;
    bool IsDecodeLengthSupported() const;
    void IsDecodeLengthSupported(bool value) const;
    Windows::Devices::PointOfService::BarcodeSymbologyAttributes CreateAttributes() const;
};
template <> struct consume<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder> { template <typename D> using type = consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>; };

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall ReportCompletedAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall ReportCompletedAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Symbology(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(void* attributes, void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall ReportCompletedAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_VideoDeviceId(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_SupportedSymbologies(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_CompanyName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_CompanyName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_Name(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_Version(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_Version(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall Start() noexcept = 0;
    virtual HRESULT __stdcall ReportScannedDataAsync(void* report, void** operation) noexcept = 0;
    virtual HRESULT __stdcall ReportTriggerStateAsync(Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState state, void** operation) noexcept = 0;
    virtual HRESULT __stdcall ReportErrorAsync(void* errorData, void** operation) noexcept = 0;
    virtual HRESULT __stdcall ReportErrorAsyncWithScanReport(void* errorData, bool isRetriable, void* scanReport, void** operation) noexcept = 0;
    virtual HRESULT __stdcall add_EnableScannerRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_EnableScannerRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_DisableScannerRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_DisableScannerRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_SetActiveSymbologiesRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_SetActiveSymbologiesRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_StartSoftwareTriggerRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_StartSoftwareTriggerRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_StopSoftwareTriggerRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_StopSoftwareTriggerRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_GetBarcodeSymbologyAttributesRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_GetBarcodeSymbologyAttributesRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_SetBarcodeSymbologyAttributesRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_SetBarcodeSymbologyAttributesRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_HideVideoPreviewRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_HideVideoPreviewRequested(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Connection(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Symbologies(void** value) noexcept = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Symbology(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_Attributes(void** value) noexcept = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall ReportCompletedAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall ReportCompletedAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall ReportFailedAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsCheckDigitValidationSupported(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsCheckDigitValidationSupported(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_IsCheckDigitTransmissionSupported(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsCheckDigitTransmissionSupported(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_IsDecodeLengthSupported(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsDecodeLengthSupported(bool value) noexcept = 0;
    virtual HRESULT __stdcall CreateAttributes(void** value) noexcept = 0;
};};

}
