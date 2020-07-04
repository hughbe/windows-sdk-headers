// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Printing.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintManager)->add_PrintTaskRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::IPrintManager> consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::IPrintManager>(this, &abi_t<Windows::Graphics::Printing::IPrintManager>::remove_PrintTaskRequested, PrintTaskRequested(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintManager<D>::PrintTaskRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintManager)->remove_PrintTaskRequested(get_abi(eventCookie)));
}

template <typename D> Windows::Graphics::Printing::PrintManager consume_Windows_Graphics_Printing_IPrintManagerStatic<D>::GetForCurrentView() const
{
    Windows::Graphics::Printing::PrintManager printingManager{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintManagerStatic)->GetForCurrentView(put_abi(printingManager)));
    return printingManager;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Printing_IPrintManagerStatic<D>::ShowPrintUIAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintManagerStatic)->ShowPrintUIAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Graphics_Printing_IPrintManagerStatic2<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintManagerStatic2)->IsSupported(&result));
    return result;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageInfo<D>::MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_MediaSize(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintMediaSize consume_Windows_Graphics_Printing_IPrintPageInfo<D>::MediaSize() const
{
    Windows::Graphics::Printing::PrintMediaSize value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_MediaSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageInfo<D>::PageSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_PageSize(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Graphics_Printing_IPrintPageInfo<D>::PageSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_PageSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiX(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_DpiX(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiX() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_DpiX(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiY(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_DpiY(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_IPrintPageInfo<D>::DpiY() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_DpiY(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageInfo<D>::Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->put_Orientation(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintOrientation consume_Windows_Graphics_Printing_IPrintPageInfo<D>::Orientation() const
{
    Windows::Graphics::Printing::PrintOrientation value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageInfo)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Graphics_Printing_IPrintPageRange<D>::FirstPageNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRange)->get_FirstPageNumber(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Graphics_Printing_IPrintPageRange<D>::LastPageNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRange)->get_LastPageNumber(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintPageRange consume_Windows_Graphics_Printing_IPrintPageRangeFactory<D>::Create(int32_t firstPage, int32_t lastPage) const
{
    Windows::Graphics::Printing::PrintPageRange result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeFactory)->Create(firstPage, lastPage, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintPageRange consume_Windows_Graphics_Printing_IPrintPageRangeFactory<D>::CreateWithSinglePage(int32_t page) const
{
    Windows::Graphics::Printing::PrintPageRange result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeFactory)->CreateWithSinglePage(page, put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowAllPages(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->put_AllowAllPages(value));
}

template <typename D> bool consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowAllPages() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->get_AllowAllPages(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCurrentPage(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->put_AllowCurrentPage(value));
}

template <typename D> bool consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCurrentPage() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->get_AllowCurrentPage(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCustomSetOfPages(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->put_AllowCustomSetOfPages(value));
}

template <typename D> bool consume_Windows_Graphics_Printing_IPrintPageRangeOptions<D>::AllowCustomSetOfPages() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintPageRangeOptions)->get_AllowCustomSetOfPages(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySet consume_Windows_Graphics_Printing_IPrintTask<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::IPrintDocumentSource consume_Windows_Graphics_Printing_IPrintTask<D>::Source() const
{
    Windows::Graphics::Printing::IPrintDocumentSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskOptions consume_Windows_Graphics_Printing_IPrintTask<D>::Options() const
{
    Windows::Graphics::Printing::PrintTaskOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->get_Options(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Previewing(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::IPrintTask> consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::IPrintTask>(this, &abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Previewing, Previewing(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTask<D>::Previewing(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Previewing(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Submitting(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::IPrintTask> consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::IPrintTask>(this, &abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Submitting, Submitting(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTask<D>::Submitting(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Submitting(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Progressing(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::IPrintTask> consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::IPrintTask>(this, &abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Progressing, Progressing(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTask<D>::Progressing(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Progressing(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->add_Completed(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::IPrintTask> consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::IPrintTask>(this, &abi_t<Windows::Graphics::Printing::IPrintTask>::remove_Completed, Completed(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTask<D>::Completed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask)->remove_Completed(get_abi(eventCookie)));
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTask2<D>::IsPreviewEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask2)->put_IsPreviewEnabled(value));
}

template <typename D> bool consume_Windows_Graphics_Printing_IPrintTask2<D>::IsPreviewEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTask2)->get_IsPreviewEnabled(&value));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTaskCompletion consume_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs<D>::Completion() const
{
    Windows::Graphics::Printing::PrintTaskCompletion value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskCompletedEventArgs)->get_Completion(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::Bordering(Windows::Graphics::Printing::PrintBordering const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptions)->put_Bordering(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintBordering consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::Bordering() const
{
    Windows::Graphics::Printing::PrintBordering value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptions)->get_Bordering(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Graphics_Printing_IPrintTaskOptions<D>::GetPagePrintTicket(Windows::Graphics::Printing::PrintPageInfo const& printPageInfo) const
{
    Windows::Storage::Streams::IRandomAccessStream printTicket{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptions)->GetPagePrintTicket(get_abi(printPageInfo), put_abi(printTicket)));
    return printTicket;
}

template <typename D> Windows::Graphics::Printing::PrintPageRangeOptions consume_Windows_Graphics_Printing_IPrintTaskOptions2<D>::PageRangeOptions() const
{
    Windows::Graphics::Printing::PrintPageRangeOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptions2)->get_PageRangeOptions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Printing::PrintPageRange> consume_Windows_Graphics_Printing_IPrintTaskOptions2<D>::CustomPageRanges() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Printing::PrintPageRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptions2)->get_CustomPageRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintPageDescription consume_Windows_Graphics_Printing_IPrintTaskOptionsCore<D>::GetPageDescription(uint32_t jobPageNumber) const
{
    Windows::Graphics::Printing::PrintPageDescription description{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCore)->GetPageDescription(jobPageNumber, put_abi(description)));
    return description;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaSize(Windows::Graphics::Printing::PrintMediaSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_MediaSize(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintMediaSize consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaSize() const
{
    Windows::Graphics::Printing::PrintMediaSize value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MediaSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaType(Windows::Graphics::Printing::PrintMediaType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_MediaType(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintMediaType consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MediaType() const
{
    Windows::Graphics::Printing::PrintMediaType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MediaType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Orientation(Windows::Graphics::Printing::PrintOrientation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Orientation(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintOrientation consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Orientation() const
{
    Windows::Graphics::Printing::PrintOrientation value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::PrintQuality(Windows::Graphics::Printing::PrintQuality const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_PrintQuality(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintQuality consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::PrintQuality() const
{
    Windows::Graphics::Printing::PrintQuality value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_PrintQuality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::ColorMode(Windows::Graphics::Printing::PrintColorMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_ColorMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintColorMode consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::ColorMode() const
{
    Windows::Graphics::Printing::PrintColorMode value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_ColorMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Duplex(Windows::Graphics::Printing::PrintDuplex const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Duplex(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintDuplex consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Duplex() const
{
    Windows::Graphics::Printing::PrintDuplex value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Duplex(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Collation(Windows::Graphics::Printing::PrintCollation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Collation(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintCollation consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Collation() const
{
    Windows::Graphics::Printing::PrintCollation value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Collation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Staple(Windows::Graphics::Printing::PrintStaple const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Staple(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintStaple consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Staple() const
{
    Windows::Graphics::Printing::PrintStaple value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Staple(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::HolePunch(Windows::Graphics::Printing::PrintHolePunch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_HolePunch(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintHolePunch consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::HolePunch() const
{
    Windows::Graphics::Printing::PrintHolePunch value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_HolePunch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Binding(Windows::Graphics::Printing::PrintBinding const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_Binding(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintBinding consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::Binding() const
{
    Windows::Graphics::Printing::PrintBinding value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_Binding(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MinCopies() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MinCopies(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::MaxCopies() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_MaxCopies(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->put_NumberOfCopies(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties<D>::NumberOfCopies() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties)->get_NumberOfCopies(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration<D>::DisplayedOptions() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration)->get_DisplayedOptions(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs<D>::DocumentPageCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskProgressingEventArgs)->get_DocumentPageCount(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTask consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::CreatePrintTask(param::hstring const& title, Windows::Graphics::Printing::PrintTaskSourceRequestedHandler const& handler) const
{
    Windows::Graphics::Printing::PrintTask task{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskRequest)->CreatePrintTask(get_abi(title), get_abi(handler), put_abi(task)));
    return task;
}

template <typename D> Windows::Graphics::Printing::PrintTaskRequestedDeferral consume_Windows_Graphics_Printing_IPrintTaskRequest<D>::GetDeferral() const
{
    Windows::Graphics::Printing::PrintTaskRequestedDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskRequestedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskRequestedDeferral)->Complete());
}

template <typename D> Windows::Graphics::Printing::PrintTaskRequest consume_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs<D>::Request() const
{
    Windows::Graphics::Printing::PrintTaskRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::SetSource(Windows::Graphics::Printing::IPrintDocumentSource const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs)->SetSource(get_abi(source)));
}

template <typename D> Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs<D>::GetDeferral() const
{
    Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral)->Complete());
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->put_IsPrinterTargetEnabled(value));
}

template <typename D> bool consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::IsPrinterTargetEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->get_IsPrinterTargetEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->put_Is3DManufacturingTargetEnabled(value));
}

template <typename D> bool consume_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport<D>::Is3DManufacturingTargetEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport)->get_Is3DManufacturingTargetEnabled(&value));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::MediaSize() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_MediaSize(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::MediaType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_MediaType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Orientation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::PrintQuality() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_PrintQuality(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::ColorMode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_ColorMode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Duplex() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Duplex(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Collation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Collation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Staple() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Staple(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::HolePunch() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_HolePunch(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Binding() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Binding(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::Copies() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_Copies(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::NUp() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_NUp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic<D>::InputBin() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic)->get_InputBin(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2<D>::Bordering() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2)->get_Bordering(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic3<D>::CustomPageRanges() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3)->get_CustomPageRanges(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Graphics::Printing::PrintTaskSourceRequestedArgs const*>(&args));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintDocumentSource> : produce_base<D, Windows::Graphics::Printing::IPrintDocumentSource>
{};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintManager> : produce_base<D, Windows::Graphics::Printing::IPrintManager>
{
    HRESULT __stdcall add_PrintTaskRequested(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().PrintTaskRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintManager, Windows::Graphics::Printing::PrintTaskRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PrintTaskRequested(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintTaskRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintManagerStatic> : produce_base<D, Windows::Graphics::Printing::IPrintManagerStatic>
{
    HRESULT __stdcall GetForCurrentView(void** printingManager) noexcept final
    {
        try
        {
            *printingManager = nullptr;
            typename D::abi_guard guard(this->shim());
            *printingManager = detach_from<Windows::Graphics::Printing::PrintManager>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowPrintUIAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowPrintUIAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintManagerStatic2> : produce_base<D, Windows::Graphics::Printing::IPrintManagerStatic2>
{
    HRESULT __stdcall IsSupported(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintPageInfo> : produce_base<D, Windows::Graphics::Printing::IPrintPageInfo>
{
    HRESULT __stdcall put_MediaSize(Windows::Graphics::Printing::PrintMediaSize value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaSize(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaSize(Windows::Graphics::Printing::PrintMediaSize* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintMediaSize>(this->shim().MediaSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PageSize(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().PageSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DpiX(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DpiX(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DpiX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DpiY(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DpiY(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DpiY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(Windows::Graphics::Printing::PrintOrientation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<Windows::Graphics::Printing::PrintOrientation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(Windows::Graphics::Printing::PrintOrientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintOrientation>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintPageRange> : produce_base<D, Windows::Graphics::Printing::IPrintPageRange>
{
    HRESULT __stdcall get_FirstPageNumber(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().FirstPageNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastPageNumber(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().LastPageNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintPageRangeFactory> : produce_base<D, Windows::Graphics::Printing::IPrintPageRangeFactory>
{
    HRESULT __stdcall Create(int32_t firstPage, int32_t lastPage, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintPageRange>(this->shim().Create(firstPage, lastPage));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSinglePage(int32_t page, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintPageRange>(this->shim().CreateWithSinglePage(page));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintPageRangeOptions> : produce_base<D, Windows::Graphics::Printing::IPrintPageRangeOptions>
{
    HRESULT __stdcall put_AllowAllPages(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowAllPages(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowAllPages(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowAllPages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowCurrentPage(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCurrentPage(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowCurrentPage(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCurrentPage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowCustomSetOfPages(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCustomSetOfPages(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowCustomSetOfPages(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCustomSetOfPages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTask> : produce_base<D, Windows::Graphics::Printing::IPrintTask>
{
    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackagePropertySet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::IPrintDocumentSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Options(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTaskOptions>(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Previewing(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Previewing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Previewing(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Previewing(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Submitting(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Submitting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Submitting(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitting(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Progressing(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Progressing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskProgressingEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Progressing(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progressing(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintTask, Windows::Graphics::Printing::PrintTaskCompletedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTask2> : produce_base<D, Windows::Graphics::Printing::IPrintTask2>
{
    HRESULT __stdcall put_IsPreviewEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPreviewEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPreviewEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPreviewEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskCompletedEventArgs>
{
    HRESULT __stdcall get_Completion(Windows::Graphics::Printing::PrintTaskCompletion* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTaskCompletion>(this->shim().Completion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptions> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptions>
{
    HRESULT __stdcall put_Bordering(Windows::Graphics::Printing::PrintBordering value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bordering(*reinterpret_cast<Windows::Graphics::Printing::PrintBordering const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bordering(Windows::Graphics::Printing::PrintBordering* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintBordering>(this->shim().Bordering());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPagePrintTicket(void* printPageInfo, void** printTicket) noexcept final
    {
        try
        {
            *printTicket = nullptr;
            typename D::abi_guard guard(this->shim());
            *printTicket = detach_from<Windows::Storage::Streams::IRandomAccessStream>(this->shim().GetPagePrintTicket(*reinterpret_cast<Windows::Graphics::Printing::PrintPageInfo const*>(&printPageInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptions2> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptions2>
{
    HRESULT __stdcall get_PageRangeOptions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintPageRangeOptions>(this->shim().PageRangeOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomPageRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Printing::PrintPageRange>>(this->shim().CustomPageRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCore> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCore>
{
    HRESULT __stdcall GetPageDescription(uint32_t jobPageNumber, struct struct_Windows_Graphics_Printing_PrintPageDescription* description) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *description = detach_from<Windows::Graphics::Printing::PrintPageDescription>(this->shim().GetPageDescription(jobPageNumber));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties>
{
    HRESULT __stdcall put_MediaSize(Windows::Graphics::Printing::PrintMediaSize value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaSize(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaSize(Windows::Graphics::Printing::PrintMediaSize* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintMediaSize>(this->shim().MediaSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MediaType(Windows::Graphics::Printing::PrintMediaType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaType(*reinterpret_cast<Windows::Graphics::Printing::PrintMediaType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(Windows::Graphics::Printing::PrintMediaType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintMediaType>(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(Windows::Graphics::Printing::PrintOrientation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<Windows::Graphics::Printing::PrintOrientation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(Windows::Graphics::Printing::PrintOrientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintOrientation>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PrintQuality(Windows::Graphics::Printing::PrintQuality value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrintQuality(*reinterpret_cast<Windows::Graphics::Printing::PrintQuality const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrintQuality(Windows::Graphics::Printing::PrintQuality* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintQuality>(this->shim().PrintQuality());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ColorMode(Windows::Graphics::Printing::PrintColorMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorMode(*reinterpret_cast<Windows::Graphics::Printing::PrintColorMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ColorMode(Windows::Graphics::Printing::PrintColorMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintColorMode>(this->shim().ColorMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Duplex(Windows::Graphics::Printing::PrintDuplex value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duplex(*reinterpret_cast<Windows::Graphics::Printing::PrintDuplex const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duplex(Windows::Graphics::Printing::PrintDuplex* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintDuplex>(this->shim().Duplex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Collation(Windows::Graphics::Printing::PrintCollation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Collation(*reinterpret_cast<Windows::Graphics::Printing::PrintCollation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Collation(Windows::Graphics::Printing::PrintCollation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintCollation>(this->shim().Collation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Staple(Windows::Graphics::Printing::PrintStaple value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Staple(*reinterpret_cast<Windows::Graphics::Printing::PrintStaple const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Staple(Windows::Graphics::Printing::PrintStaple* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintStaple>(this->shim().Staple());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HolePunch(Windows::Graphics::Printing::PrintHolePunch value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HolePunch(*reinterpret_cast<Windows::Graphics::Printing::PrintHolePunch const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HolePunch(Windows::Graphics::Printing::PrintHolePunch* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintHolePunch>(this->shim().HolePunch());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Binding(Windows::Graphics::Printing::PrintBinding value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Binding(*reinterpret_cast<Windows::Graphics::Printing::PrintBinding const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Binding(Windows::Graphics::Printing::PrintBinding* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintBinding>(this->shim().Binding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinCopies(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinCopies());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCopies(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxCopies());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NumberOfCopies(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NumberOfCopies(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfCopies(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().NumberOfCopies());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> : produce_base<D, Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration>
{
    HRESULT __stdcall get_DisplayedOptions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DisplayedOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskProgressingEventArgs>
{
    HRESULT __stdcall get_DocumentPageCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DocumentPageCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskRequest> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequest>
{
    HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreatePrintTask(HSTRING title, void* handler, void** task) noexcept final
    {
        try
        {
            *task = nullptr;
            typename D::abi_guard guard(this->shim());
            *task = detach_from<Windows::Graphics::Printing::PrintTask>(this->shim().CreatePrintTask(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Graphics::Printing::PrintTaskSourceRequestedHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** deferral) noexcept final
    {
        try
        {
            *deferral = nullptr;
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::Graphics::Printing::PrintTaskRequestedDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskRequestedDeferral> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequestedDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTaskRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> : produce_base<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs>
{
    HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetSource(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSource(*reinterpret_cast<Windows::Graphics::Printing::IPrintDocumentSource const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** deferral) noexcept final
    {
        try
        {
            *deferral = nullptr;
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> : produce_base<D, Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> : produce_base<D, Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport>
{
    HRESULT __stdcall put_IsPrinterTargetEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPrinterTargetEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrinterTargetEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrinterTargetEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Is3DManufacturingTargetEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Is3DManufacturingTargetEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Is3DManufacturingTargetEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Is3DManufacturingTargetEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>
{
    HRESULT __stdcall get_MediaSize(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaType(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrintQuality(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrintQuality());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ColorMode(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ColorMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duplex(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Duplex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Collation(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Collation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Staple(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Staple());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HolePunch(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HolePunch());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Binding(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Binding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Copies(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Copies());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NUp(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NUp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputBin(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InputBin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>
{
    HRESULT __stdcall get_Bordering(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Bordering());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3> : produce_base<D, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>
{
    HRESULT __stdcall get_CustomPageRanges(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomPageRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing {

inline Windows::Graphics::Printing::PrintManager PrintManager::GetForCurrentView()
{
    return get_activation_factory<PrintManager, Windows::Graphics::Printing::IPrintManagerStatic>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncOperation<bool> PrintManager::ShowPrintUIAsync()
{
    return get_activation_factory<PrintManager, Windows::Graphics::Printing::IPrintManagerStatic>().ShowPrintUIAsync();
}

inline bool PrintManager::IsSupported()
{
    return get_activation_factory<PrintManager, Windows::Graphics::Printing::IPrintManagerStatic2>().IsSupported();
}

inline PrintPageInfo::PrintPageInfo() :
    PrintPageInfo(get_activation_factory<PrintPageInfo>().ActivateInstance<PrintPageInfo>())
{}

inline PrintPageRange::PrintPageRange(int32_t firstPage, int32_t lastPage) :
    PrintPageRange(get_activation_factory<PrintPageRange, Windows::Graphics::Printing::IPrintPageRangeFactory>().Create(firstPage, lastPage))
{}

inline PrintPageRange::PrintPageRange(int32_t page) :
    PrintPageRange(get_activation_factory<PrintPageRange, Windows::Graphics::Printing::IPrintPageRangeFactory>().CreateWithSinglePage(page))
{}

inline hstring StandardPrintTaskOptions::MediaSize()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().MediaSize();
}

inline hstring StandardPrintTaskOptions::MediaType()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().MediaType();
}

inline hstring StandardPrintTaskOptions::Orientation()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().Orientation();
}

inline hstring StandardPrintTaskOptions::PrintQuality()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().PrintQuality();
}

inline hstring StandardPrintTaskOptions::ColorMode()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().ColorMode();
}

inline hstring StandardPrintTaskOptions::Duplex()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().Duplex();
}

inline hstring StandardPrintTaskOptions::Collation()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().Collation();
}

inline hstring StandardPrintTaskOptions::Staple()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().Staple();
}

inline hstring StandardPrintTaskOptions::HolePunch()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().HolePunch();
}

inline hstring StandardPrintTaskOptions::Binding()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().Binding();
}

inline hstring StandardPrintTaskOptions::Copies()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().Copies();
}

inline hstring StandardPrintTaskOptions::NUp()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().NUp();
}

inline hstring StandardPrintTaskOptions::InputBin()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic>().InputBin();
}

inline hstring StandardPrintTaskOptions::Bordering()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2>().Bordering();
}

inline hstring StandardPrintTaskOptions::CustomPageRanges()
{
    return get_activation_factory<StandardPrintTaskOptions, Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3>().CustomPageRanges();
}

template <typename L> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(L handler) :
    PrintTaskSourceRequestedHandler(impl::make_delegate<PrintTaskSourceRequestedHandler>(std::forward<L>(handler)))
{}

template <typename F> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(F* handler) :
    PrintTaskSourceRequestedHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> PrintTaskSourceRequestedHandler::PrintTaskSourceRequestedHandler(O* object, M method) :
    PrintTaskSourceRequestedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void PrintTaskSourceRequestedHandler::operator()(Windows::Graphics::Printing::PrintTaskSourceRequestedArgs const& args) const
{
    check_hresult((*(impl::abi_t<PrintTaskSourceRequestedHandler>**)this)->Invoke(get_abi(args)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Printing::IPrintDocumentSource> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintDocumentSource> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintManager> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintManager> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintManagerStatic> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintManagerStatic> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintManagerStatic2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintManagerStatic2> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageInfo> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageInfo> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageRange> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageRange> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageRangeFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageRangeFactory> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintPageRangeOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintPageRangeOptions> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTask> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTask> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTask2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTask2> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptions> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptions2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptions2> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCore> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCore> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskRequest> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskRequest> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskRequestedDeferral> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2> {};
template<> struct hash<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic3> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintManager> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintManager> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintPageInfo> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintPageInfo> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintPageRange> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintPageRange> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintPageRangeOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintPageRangeOptions> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTask> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTask> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskOptions> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskProgressingEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskProgressingEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskRequest> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskRequest> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskRequestedDeferral> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTaskSourceRequestedDeferral> {};
template<> struct hash<winrt::Windows::Graphics::Printing::StandardPrintTaskOptions> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::StandardPrintTaskOptions> {};

}

WINRT_WARNING_POP
