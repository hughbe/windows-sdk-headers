// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.PointOfService.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.PointOfService.Provider.2.h"
#include "winrt/Windows.Devices.PointOfService.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerDisableScannerRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerEnableScannerRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest<D>::Symbology() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest)->get_Symbology(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest<D>::ReportCompletedAsync(Windows::Devices::PointOfService::BarcodeSymbologyAttributes const& attributes) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest)->ReportCompletedAsync(get_abi(attributes), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerGetSymbologyAttributesRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerHideVideoPreviewRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<uint32_t> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::SupportedSymbologies() const
{
    Windows::Foundation::Collections::IVector<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->get_SupportedSymbologies(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::CompanyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->get_CompanyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::CompanyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->put_CompanyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::Version() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->get_Version(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::Version(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->put_Version(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->Start());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::ReportScannedDataAsync(Windows::Devices::PointOfService::BarcodeScannerReport const& report) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->ReportScannedDataAsync(get_abi(report), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::ReportTriggerStateAsync(Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState const& state) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->ReportTriggerStateAsync(get_abi(state), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->ReportErrorAsync(get_abi(errorData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::ReportErrorAsync(Windows::Devices::PointOfService::UnifiedPosErrorData const& errorData, bool isRetriable, Windows::Devices::PointOfService::BarcodeScannerReport const& scanReport) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->ReportErrorAsyncWithScanReport(get_abi(errorData), isRetriable, get_abi(scanReport), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::EnableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_EnableScannerRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::EnableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_EnableScannerRequested, EnableScannerRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::EnableScannerRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_EnableScannerRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::DisableScannerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_DisableScannerRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::DisableScannerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_DisableScannerRequested, DisableScannerRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::DisableScannerRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_DisableScannerRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::SetActiveSymbologiesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_SetActiveSymbologiesRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::SetActiveSymbologiesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_SetActiveSymbologiesRequested, SetActiveSymbologiesRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::SetActiveSymbologiesRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_SetActiveSymbologiesRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::StartSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_StartSoftwareTriggerRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::StartSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_StartSoftwareTriggerRequested, StartSoftwareTriggerRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::StartSoftwareTriggerRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_StartSoftwareTriggerRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::StopSoftwareTriggerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_StopSoftwareTriggerRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::StopSoftwareTriggerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_StopSoftwareTriggerRequested, StopSoftwareTriggerRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::StopSoftwareTriggerRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_StopSoftwareTriggerRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::GetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_GetBarcodeSymbologyAttributesRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::GetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_GetBarcodeSymbologyAttributesRequested, GetBarcodeSymbologyAttributesRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::GetBarcodeSymbologyAttributesRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_GetBarcodeSymbologyAttributesRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::SetBarcodeSymbologyAttributesRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_SetBarcodeSymbologyAttributesRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::SetBarcodeSymbologyAttributesRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_SetBarcodeSymbologyAttributesRequested, SetBarcodeSymbologyAttributesRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::SetBarcodeSymbologyAttributesRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_SetBarcodeSymbologyAttributesRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::HideVideoPreviewRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->add_HideVideoPreviewRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::HideVideoPreviewRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>(this, &abi_t<Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>::remove_HideVideoPreviewRequested, HideVideoPreviewRequested(handler));
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderConnection<D>::HideVideoPreviewRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection)->remove_HideVideoPreviewRequested(get_abi(token)));
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerProviderTriggerDetails<D>::Connection() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest<D>::Symbologies() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest)->get_Symbologies(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetActiveSymbologiesRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> uint32_t consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest<D>::Symbology() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest)->get_Symbology(&value));
    return value;
}

template <typename D> Windows::Devices::PointOfService::BarcodeSymbologyAttributes consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest<D>::Attributes() const
{
    Windows::Devices::PointOfService::BarcodeSymbologyAttributes value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest)->get_Attributes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerSetSymbologyAttributesRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStartSoftwareTriggerRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs<D>::Request() const
{
    Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Devices_PointOfService_Provider_IBarcodeScannerStopSoftwareTriggerRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>::IsCheckDigitValidationSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder)->get_IsCheckDigitValidationSupported(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>::IsCheckDigitValidationSupported(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder)->put_IsCheckDigitValidationSupported(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>::IsCheckDigitTransmissionSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder)->get_IsCheckDigitTransmissionSupported(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>::IsCheckDigitTransmissionSupported(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder)->put_IsCheckDigitTransmissionSupported(value));
}

template <typename D> bool consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>::IsDecodeLengthSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder)->get_IsDecodeLengthSupported(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>::IsDecodeLengthSupported(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder)->put_IsDecodeLengthSupported(value));
}

template <typename D> Windows::Devices::PointOfService::BarcodeSymbologyAttributes consume_Windows_Devices_PointOfService_Provider_IBarcodeSymbologyAttributesBuilder<D>::CreateAttributes() const
{
    Windows::Devices::PointOfService::BarcodeSymbologyAttributes value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder)->CreateAttributes(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest>
{
    HRESULT __stdcall ReportCompletedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest>
{
    HRESULT __stdcall ReportCompletedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest>
{
    HRESULT __stdcall get_Symbology(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Symbology());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(void* attributes, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync(*reinterpret_cast<Windows::Devices::PointOfService::BarcodeSymbologyAttributes const*>(&attributes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest>
{
    HRESULT __stdcall ReportCompletedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoDeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedSymbologies(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<uint32_t>>(this->shim().SupportedSymbologies());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompanyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CompanyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CompanyName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompanyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Version(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Version(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportScannedDataAsync(void* report, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportScannedDataAsync(*reinterpret_cast<Windows::Devices::PointOfService::BarcodeScannerReport const*>(&report)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportTriggerStateAsync(Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState state, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportTriggerStateAsync(*reinterpret_cast<Windows::Devices::PointOfService::Provider::BarcodeScannerTriggerState const*>(&state)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportErrorAsync(void* errorData, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportErrorAsync(*reinterpret_cast<Windows::Devices::PointOfService::UnifiedPosErrorData const*>(&errorData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportErrorAsyncWithScanReport(void* errorData, bool isRetriable, void* scanReport, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportErrorAsync(*reinterpret_cast<Windows::Devices::PointOfService::UnifiedPosErrorData const*>(&errorData), isRetriable, *reinterpret_cast<Windows::Devices::PointOfService::BarcodeScannerReport const*>(&scanReport)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_EnableScannerRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().EnableScannerRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_EnableScannerRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableScannerRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DisableScannerRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DisableScannerRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DisableScannerRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableScannerRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SetActiveSymbologiesRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SetActiveSymbologiesRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SetActiveSymbologiesRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActiveSymbologiesRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StartSoftwareTriggerRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StartSoftwareTriggerRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StartSoftwareTriggerRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartSoftwareTriggerRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StopSoftwareTriggerRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StopSoftwareTriggerRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StopSoftwareTriggerRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopSoftwareTriggerRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_GetBarcodeSymbologyAttributesRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().GetBarcodeSymbologyAttributesRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_GetBarcodeSymbologyAttributesRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetBarcodeSymbologyAttributesRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SetBarcodeSymbologyAttributesRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SetBarcodeSymbologyAttributesRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SetBarcodeSymbologyAttributesRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBarcodeSymbologyAttributesRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_HideVideoPreviewRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().HideVideoPreviewRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection, Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_HideVideoPreviewRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HideVideoPreviewRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection>(this->shim().Connection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest>
{
    HRESULT __stdcall get_Symbologies(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<uint32_t>>(this->shim().Symbologies());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest>
{
    HRESULT __stdcall get_Symbology(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Symbology());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Attributes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>(this->shim().Attributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest>
{
    HRESULT __stdcall ReportCompletedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest>
{
    HRESULT __stdcall ReportCompletedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReportFailedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder> : produce_base<D, Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder>
{
    HRESULT __stdcall get_IsCheckDigitValidationSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCheckDigitValidationSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCheckDigitValidationSupported(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCheckDigitValidationSupported(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCheckDigitTransmissionSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCheckDigitTransmissionSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCheckDigitTransmissionSupported(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCheckDigitTransmissionSupported(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDecodeLengthSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDecodeLengthSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsDecodeLengthSupported(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDecodeLengthSupported(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAttributes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::PointOfService::BarcodeSymbologyAttributes>(this->shim().CreateAttributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService::Provider {

inline BarcodeSymbologyAttributesBuilder::BarcodeSymbologyAttributesBuilder() :
    BarcodeSymbologyAttributesBuilder(get_activation_factory<BarcodeSymbologyAttributesBuilder>().ActivateInstance<BarcodeSymbologyAttributesBuilder>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerDisableScannerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerEnableScannerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerGetSymbologyAttributesRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerHideVideoPreviewRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderConnection> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerProviderTriggerDetails> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetActiveSymbologiesRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerSetSymbologyAttributesRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStartSoftwareTriggerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequest> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeScannerStopSoftwareTriggerRequestEventArgs> {};
template<> struct hash<winrt::Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder> : winrt::impl::hash_base<winrt::Windows::Devices::PointOfService::Provider::BarcodeSymbologyAttributesBuilder> {};

}

WINRT_WARNING_POP
