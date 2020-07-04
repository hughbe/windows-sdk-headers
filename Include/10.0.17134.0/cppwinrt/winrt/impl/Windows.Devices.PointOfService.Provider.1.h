// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Devices.PointOfService.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.PointOfService.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService::Provider {

struct WINRT_EBO IBarcodeScannerDisableScannerRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerDisableScannerRequest>
{
    IBarcodeScannerDisableScannerRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerDisableScannerRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerDisableScannerRequestEventArgs>
{
    IBarcodeScannerDisableScannerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerEnableScannerRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerEnableScannerRequest>
{
    IBarcodeScannerEnableScannerRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerEnableScannerRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerEnableScannerRequestEventArgs>
{
    IBarcodeScannerEnableScannerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerGetSymbologyAttributesRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerGetSymbologyAttributesRequest>
{
    IBarcodeScannerGetSymbologyAttributesRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerGetSymbologyAttributesRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
{
    IBarcodeScannerGetSymbologyAttributesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerHideVideoPreviewRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerHideVideoPreviewRequest>
{
    IBarcodeScannerHideVideoPreviewRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerHideVideoPreviewRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerHideVideoPreviewRequestEventArgs>
{
    IBarcodeScannerHideVideoPreviewRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerProviderConnection>,
    impl::require<IBarcodeScannerProviderConnection, Windows::Foundation::IClosable>
{
    IBarcodeScannerProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerProviderTriggerDetails>
{
    IBarcodeScannerProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerSetActiveSymbologiesRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerSetActiveSymbologiesRequest>
{
    IBarcodeScannerSetActiveSymbologiesRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerSetActiveSymbologiesRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
{
    IBarcodeScannerSetActiveSymbologiesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerSetSymbologyAttributesRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerSetSymbologyAttributesRequest>
{
    IBarcodeScannerSetSymbologyAttributesRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerSetSymbologyAttributesRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
{
    IBarcodeScannerSetSymbologyAttributesRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerStartSoftwareTriggerRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStartSoftwareTriggerRequest>
{
    IBarcodeScannerStartSoftwareTriggerRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerStartSoftwareTriggerRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
{
    IBarcodeScannerStartSoftwareTriggerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerStopSoftwareTriggerRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStopSoftwareTriggerRequest>
{
    IBarcodeScannerStopSoftwareTriggerRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeScannerStopSoftwareTriggerRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
{
    IBarcodeScannerStopSoftwareTriggerRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBarcodeSymbologyAttributesBuilder :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBarcodeSymbologyAttributesBuilder>
{
    IBarcodeSymbologyAttributesBuilder(std::nullptr_t = nullptr) noexcept {}
};

}
