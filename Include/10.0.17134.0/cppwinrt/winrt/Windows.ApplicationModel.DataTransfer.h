// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.EnterpriseData.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::GetContent() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView content{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->GetContent(put_abi(content)));
    return content;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::SetContent(Windows::ApplicationModel::DataTransfer::DataPackage const& content) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->SetContent(get_abi(content)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::Flush() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->Flush());
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->Clear());
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::ContentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->add_ContentChanged(get_abi(changeHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics> consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::ContentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics>::remove_ContentChanged, ContentChanged(changeHandler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IClipboardStatics<D>::ContentChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IClipboardStatics)->remove_ContentChanged(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::GetView() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->GetView(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySet consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::RequestedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->get_RequestedOperation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->put_RequestedOperation(get_abi(value)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::OperationCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->add_OperationCompleted(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage> consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::OperationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataPackage>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage>::remove_OperationCompleted, OperationCompleted(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::OperationCompleted(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->remove_OperationCompleted(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Destroyed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->add_Destroyed(get_abi(handler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage> consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Destroyed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataPackage>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage>::remove_Destroyed, Destroyed(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::Destroyed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->remove_Destroyed(get_abi(eventCookie)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetData(param::hstring const& formatId, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetData(get_abi(formatId), get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetDataProvider(param::hstring const& formatId, Windows::ApplicationModel::DataTransfer::DataProviderHandler const& delayRenderer) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetDataProvider(get_abi(formatId), get_abi(delayRenderer)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetText(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetUri(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetHtmlFormat(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetHtmlFormat(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::ResourceMap() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->get_ResourceMap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetRtf(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetRtf(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetBitmap(Windows::Storage::Streams::RandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetBitmap(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetStorageItemsReadOnly(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage<D>::SetStorageItems(param::iterable<Windows::Storage::IStorageItem> const& value, bool readOnly) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage)->SetStorageItems(get_abi(value), readOnly));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage2<D>::SetApplicationLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage2)->SetApplicationLink(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage2<D>::SetWebLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage2)->SetWebLink(get_abi(value)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>::ShareCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage3)->add_ShareCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataPackage3> consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>::ShareCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataPackage3>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataPackage3>::remove_ShareCompleted, ShareCompleted(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackage3<D>::ShareCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackage3)->remove_ShareCompleted(get_abi(token)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_Description(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::FileTypes() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_FileTypes(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_ApplicationName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_ApplicationName(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationListingUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->get_ApplicationListingUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet<D>::ApplicationListingUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet)->put_ApplicationListingUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceWebLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_ContentSourceWebLink(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceWebLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_ContentSourceWebLink(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceApplicationLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_ContentSourceApplicationLink(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::ContentSourceApplicationLink(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_ContentSourceApplicationLink(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::PackageFamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_PackageFamilyName(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::Square30x30Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_Square30x30Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::Square30x30Logo(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_Square30x30Logo(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::LogoBackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->get_LogoBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2<D>::LogoBackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2)->put_LogoBackgroundColor(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3<D>::EnterpriseId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3)->put_EnterpriseId(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet4<D>::ContentSourceUserActivityJson() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4)->get_ContentSourceUserActivityJson(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet4<D>::ContentSourceUserActivityJson(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4)->put_ContentSourceUserActivityJson(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_Title(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::FileTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_FileTypes(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::ApplicationName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_ApplicationName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView<D>::ApplicationListingUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView)->get_ApplicationListingUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::ContentSourceWebLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_ContentSourceWebLink(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::ContentSourceApplicationLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_ContentSourceApplicationLink(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::Square30x30Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_Square30x30Logo(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2<D>::LogoBackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2)->get_LogoBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView4<D>::ContentSourceUserActivityJson() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4)->get_ContentSourceUserActivityJson(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::Properties() const
{
    Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::RequestedOperation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->get_RequestedOperation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::ReportOperationCompleted(Windows::ApplicationModel::DataTransfer::DataPackageOperation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->ReportOperationCompleted(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::AvailableFormats() const
{
    Windows::Foundation::Collections::IVectorView<hstring> formatIds{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->get_AvailableFormats(put_abi(formatIds)));
    return formatIds;
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::Contains(param::hstring const& formatId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->Contains(get_abi(formatId), &value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetDataAsync(param::hstring const& formatId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetDataAsync(get_abi(formatId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetTextAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetTextAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetTextAsync(param::hstring const& formatId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetCustomTextAsync(get_abi(formatId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetUriAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetUriAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetHtmlFormatAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetHtmlFormatAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetResourceMapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetResourceMapAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetRtfAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetRtfAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetBitmapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetBitmapAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView<D>::GetStorageItemsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView)->GetStorageItemsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2<D>::GetApplicationLinkAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView2)->GetApplicationLinkAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView2<D>::GetWebLinkAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView2)->GetWebLinkAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView3)->RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>::RequestAccessAsync(param::hstring const& enterpriseId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView3)->RequestAccessWithEnterpriseIdAsync(get_abi(enterpriseId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult consume_Windows_ApplicationModel_DataTransfer_IDataPackageView3<D>::UnlockAndAssumeEnterpriseIdentity() const
{
    Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView3)->UnlockAndAssumeEnterpriseIdentity(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataPackageView4<D>::SetAcceptedFormatId(param::hstring const& formatId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataPackageView4)->SetAcceptedFormatId(get_abi(formatId)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderDeferral)->Complete());
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::FormatId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->get_FormatId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataProviderDeferral consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::DataTransfer::DataProviderDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataProviderRequest<D>::SetData(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataProviderRequest)->SetData(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackage consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::Data(Windows::ApplicationModel::DataTransfer::DataPackage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->put_Data(get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::FailWithDisplayText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->FailWithDisplayText(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataRequestDeferral consume_Windows_ApplicationModel_DataTransfer_IDataRequest<D>::GetDeferral() const
{
    Windows::ApplicationModel::DataTransfer::DataRequestDeferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequestDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataRequest consume_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs<D>::Request() const
{
    Windows::ApplicationModel::DataTransfer::DataRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::DataRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->add_DataRequested(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager> consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::DataRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager>::remove_DataRequested, DataRequested(eventHandler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::DataRequested(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->remove_DataRequested(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::TargetApplicationChosen(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->add_TargetApplicationChosen(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager> consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::TargetApplicationChosen(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager>::remove_TargetApplicationChosen, TargetApplicationChosen(eventHandler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager<D>::TargetApplicationChosen(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager)->remove_TargetApplicationChosen(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>::ShareProvidersRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager2)->add_ShareProvidersRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::DataTransfer::IDataTransferManager2> consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>::ShareProvidersRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager2>(this, &abi_t<Windows::ApplicationModel::DataTransfer::IDataTransferManager2>::remove_ShareProvidersRequested, ShareProvidersRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManager2<D>::ShareProvidersRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManager2)->remove_ShareProvidersRequested(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics<D>::ShowShareUI() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics)->ShowShareUI());
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataTransferManager consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics<D>::GetForCurrentView() const
{
    Windows::ApplicationModel::DataTransfer::DataTransferManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2)->IsSupported(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics3<D>::ShowShareUI(Windows::ApplicationModel::DataTransfer::ShareUIOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3)->ShowShareUIWithOptions(get_abi(options)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics<D>::GetStaticFragment(param::hstring const& htmlFormat) const
{
    hstring htmlFragment{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics)->GetStaticFragment(get_abi(htmlFormat), put_abi(htmlFragment)));
    return htmlFragment;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics<D>::CreateHtmlFormat(param::hstring const& htmlFragment) const
{
    hstring htmlFormat{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics)->CreateHtmlFormat(get_abi(htmlFragment), put_abi(htmlFormat)));
    return htmlFormat;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageOperation consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs<D>::Operation() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageOperation value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2<D>::AcceptedFormatId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2)->get_AcceptedFormatId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareTargetInfo consume_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs<D>::ShareTarget() const
{
    Windows::ApplicationModel::DataTransfer::ShareTargetInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs)->get_ShareTarget(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_Title(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::DisplayIcon() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_DisplayIcon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::Tag() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IShareProvider<D>::Tag(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvider)->put_Tag(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareProvider consume_Windows_ApplicationModel_DataTransfer_IShareProviderFactory<D>::Create(param::hstring const& title, Windows::Storage::Streams::RandomAccessStreamReference const& displayIcon, Windows::UI::Color const& backgroundColor, Windows::ApplicationModel::DataTransfer::ShareProviderHandler const& handler) const
{
    Windows::ApplicationModel::DataTransfer::ShareProvider result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderFactory)->Create(get_abi(title), get_abi(displayIcon), get_abi(backgroundColor), get_abi(handler), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderOperation)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareProvider consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>::Provider() const
{
    Windows::ApplicationModel::DataTransfer::ShareProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderOperation)->get_Provider(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IShareProviderOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProviderOperation)->ReportCompleted());
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::DataTransfer::ShareProvider> consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>::Providers() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::DataTransfer::ShareProvider> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs)->get_Providers(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::DataPackageView consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>::Data() const
{
    Windows::ApplicationModel::DataTransfer::DataPackageView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo<D>::AppUserModelId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareTargetInfo)->get_AppUserModelId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareProvider consume_Windows_ApplicationModel_DataTransfer_IShareTargetInfo<D>::ShareProvider() const
{
    Windows::ApplicationModel::DataTransfer::ShareProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareTargetInfo)->get_ShareProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::DataTransfer::ShareUITheme consume_Windows_ApplicationModel_DataTransfer_IShareUIOptions<D>::Theme() const
{
    Windows::ApplicationModel::DataTransfer::ShareUITheme value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareUIOptions)->get_Theme(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IShareUIOptions<D>::Theme(Windows::ApplicationModel::DataTransfer::ShareUITheme const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareUIOptions)->put_Theme(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> consume_Windows_ApplicationModel_DataTransfer_IShareUIOptions<D>::SelectionRect() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareUIOptions)->get_SelectionRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_IShareUIOptions<D>::SelectionRect(optional<Windows::Foundation::Rect> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IShareUIOptions)->put_SelectionRect(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>::AddFile(Windows::Storage::IStorageFile const& file) const
{
    hstring outToken{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics)->AddFile(get_abi(file), put_abi(outToken)));
    return outToken;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>::RedeemTokenForFileAsync(param::hstring const& token) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics)->RedeemTokenForFileAsync(get_abi(token), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics<D>::RemoveFile(param::hstring const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics)->RemoveFile(get_abi(token)));
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Text(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Uri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Html() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Html(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Rtf() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Rtf(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::Bitmap() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_Bitmap(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics<D>::StorageItems() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics)->get_StorageItems(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2<D>::WebLink() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2)->get_WebLink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2<D>::ApplicationLink() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2)->get_ApplicationLink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics3<D>::UserActivityJsonArray() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3)->get_UserActivityJsonArray(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs<D>::ApplicationName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs)->get_ApplicationName(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::ApplicationModel::DataTransfer::DataProviderHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::DataTransfer::DataProviderHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::DataTransfer::DataProviderHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* request) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataProviderRequest const*>(&request));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::ApplicationModel::DataTransfer::ShareProviderHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::DataTransfer::ShareProviderHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::DataTransfer::ShareProviderHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* operation) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::ShareProviderOperation const*>(&operation));
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IClipboardStatics>
{
    HRESULT __stdcall GetContent(void** content) noexcept final
    {
        try
        {
            *content = nullptr;
            typename D::abi_guard guard(this->shim());
            *content = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().GetContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetContent(void* content) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContent(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackage const*>(&content));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Flush() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Flush();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ContentChanged(void* changeHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ContentChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackage> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackage>
{
    HRESULT __stdcall GetView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().GetView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall get_RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().RequestedOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestedOperation(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_OperationCompleted(void* handler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().OperationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OperationCompleted(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OperationCompleted(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Destroyed(void* handler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Destroyed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Destroyed(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Destroyed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetData(HSTRING formatId, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetData(*reinterpret_cast<hstring const*>(&formatId), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDataProvider(HSTRING formatId, void* delayRenderer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDataProvider(*reinterpret_cast<hstring const*>(&formatId), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataProviderHandler const*>(&delayRenderer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetHtmlFormat(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHtmlFormat(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceMap(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, Windows::Storage::Streams::RandomAccessStreamReference>>(this->shim().ResourceMap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetRtf(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRtf(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetBitmap(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBitmap(*reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetStorageItemsReadOnly(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStorageItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetStorageItems(void* value, bool readOnly) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStorageItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::IStorageItem> const*>(&value), readOnly);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackage2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackage2>
{
    HRESULT __stdcall SetApplicationLink(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetApplicationLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetWebLink(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetWebLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackage3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackage3>
{
    HRESULT __stdcall add_ShareCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ShareCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataPackage, Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ShareCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShareCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().FileTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationListingUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ApplicationListingUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ApplicationListingUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplicationListingUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2>
{
    HRESULT __stdcall get_ContentSourceWebLink(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ContentSourceWebLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentSourceWebLink(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentSourceWebLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceApplicationLink(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ContentSourceApplicationLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentSourceApplicationLink(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentSourceApplicationLink(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PackageFamilyName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Square30x30Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square30x30Logo(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LogoBackgroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LogoBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LogoBackgroundColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogoBackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3>
{
    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EnterpriseId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterpriseId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4>
{
    HRESULT __stdcall get_ContentSourceUserActivityJson(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentSourceUserActivityJson());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentSourceUserActivityJson(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentSourceUserActivityJson(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::RandomAccessStreamReference>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().FileTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationListingUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ApplicationListingUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2>
{
    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceWebLink(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ContentSourceWebLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSourceApplicationLink(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ContentSourceApplicationLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LogoBackgroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LogoBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3>
{
    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4>
{
    HRESULT __stdcall get_ContentSourceUserActivityJson(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentSourceUserActivityJson());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView>
{
    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedOperation(Windows::ApplicationModel::DataTransfer::DataPackageOperation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().RequestedOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportOperationCompleted(Windows::ApplicationModel::DataTransfer::DataPackageOperation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportOperationCompleted(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackageOperation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableFormats(void** formatIds) noexcept final
    {
        try
        {
            *formatIds = nullptr;
            typename D::abi_guard guard(this->shim());
            *formatIds = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AvailableFormats());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Contains(HSTRING formatId, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Contains(*reinterpret_cast<hstring const*>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDataAsync(HSTRING formatId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::IInspectable>>(this->shim().GetDataAsync(*reinterpret_cast<hstring const*>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTextAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetTextAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCustomTextAsync(HSTRING formatId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetTextAsync(*reinterpret_cast<hstring const*>(&formatId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetUriAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri>>(this->shim().GetUriAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetHtmlFormatAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetHtmlFormatAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetResourceMapAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::RandomAccessStreamReference>>>(this->shim().GetResourceMapAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRtfAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().GetRtfAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBitmapAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::RandomAccessStreamReference>>(this->shim().GetBitmapAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetStorageItemsAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::IStorageItem>>>(this->shim().GetStorageItemsAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView2>
{
    HRESULT __stdcall GetApplicationLinkAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri>>(this->shim().GetApplicationLinkAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetWebLinkAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Uri>>(this->shim().GetWebLinkAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView3>
{
    HRESULT __stdcall RequestAccessAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessWithEnterpriseIdAsync(HSTRING enterpriseId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>>(this->shim().RequestAccessAsync(*reinterpret_cast<hstring const*>(&enterpriseId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnlockAndAssumeEnterpriseIdentity(Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>(this->shim().UnlockAndAssumeEnterpriseIdentity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataPackageView4> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataPackageView4>
{
    HRESULT __stdcall SetAcceptedFormatId(HSTRING formatId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAcceptedFormatId(*reinterpret_cast<hstring const*>(&formatId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataProviderDeferral>
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataProviderRequest> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataProviderRequest>
{
    HRESULT __stdcall get_FormatId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FormatId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataProviderDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetData(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetData(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataRequest> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataRequest>
{
    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackage>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Data(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::DataPackage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall FailWithDisplayText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FailWithDisplayText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataRequestDeferral>
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
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager>
{
    HRESULT __stdcall add_DataRequested(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().DataRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DataRequested(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataRequested(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_TargetApplicationChosen(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().TargetApplicationChosen(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetApplicationChosen(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetApplicationChosen(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManager2>
{
    HRESULT __stdcall add_ShareProvidersRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ShareProvidersRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::DataTransfer::DataTransferManager, Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ShareProvidersRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShareProvidersRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>
{
    HRESULT __stdcall ShowShareUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowShareUI();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetForCurrentView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataTransferManager>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>
{
    HRESULT __stdcall IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3>
{
    HRESULT __stdcall ShowShareUIWithOptions(void* options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowShareUI(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::ShareUIOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>
{
    HRESULT __stdcall GetStaticFragment(HSTRING htmlFormat, HSTRING* htmlFragment) noexcept final
    {
        try
        {
            *htmlFragment = nullptr;
            typename D::abi_guard guard(this->shim());
            *htmlFragment = detach_from<hstring>(this->shim().GetStaticFragment(*reinterpret_cast<hstring const*>(&htmlFormat)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateHtmlFormat(HSTRING htmlFragment, HSTRING* htmlFormat) noexcept final
    {
        try
        {
            *htmlFormat = nullptr;
            typename D::abi_guard guard(this->shim());
            *htmlFormat = detach_from<hstring>(this->shim().CreateHtmlFormat(*reinterpret_cast<hstring const*>(&htmlFragment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs>
{
    HRESULT __stdcall get_Operation(Windows::ApplicationModel::DataTransfer::DataPackageOperation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageOperation>(this->shim().Operation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2>
{
    HRESULT __stdcall get_AcceptedFormatId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AcceptedFormatId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs>
{
    HRESULT __stdcall get_ShareTarget(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::ShareTargetInfo>(this->shim().ShareTarget());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProvider> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProvider>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayIcon(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::RandomAccessStreamReference>(this->shim().DisplayIcon());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProviderFactory> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProviderFactory>
{
    HRESULT __stdcall Create(HSTRING title, void* displayIcon, struct struct_Windows_UI_Color backgroundColor, void* handler, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::DataTransfer::ShareProvider>(this->shim().Create(*reinterpret_cast<hstring const*>(&title), *reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&displayIcon), *reinterpret_cast<Windows::UI::Color const*>(&backgroundColor), *reinterpret_cast<Windows::ApplicationModel::DataTransfer::ShareProviderHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProviderOperation> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProviderOperation>
{
    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Provider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::ShareProvider>(this->shim().Provider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportCompleted() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs>
{
    HRESULT __stdcall get_Providers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::DataTransfer::ShareProvider>>(this->shim().Providers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::DataPackageView>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareTargetInfo> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareTargetInfo>
{
    HRESULT __stdcall get_AppUserModelId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppUserModelId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShareProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::ShareProvider>(this->shim().ShareProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IShareUIOptions> : produce_base<D, Windows::ApplicationModel::DataTransfer::IShareUIOptions>
{
    HRESULT __stdcall get_Theme(Windows::ApplicationModel::DataTransfer::ShareUITheme* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::DataTransfer::ShareUITheme>(this->shim().Theme());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Theme(Windows::ApplicationModel::DataTransfer::ShareUITheme value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Theme(*reinterpret_cast<Windows::ApplicationModel::DataTransfer::ShareUITheme const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionRect(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Rect>>(this->shim().SelectionRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionRect(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionRect(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Rect> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>
{
    HRESULT __stdcall AddFile(void* file, HSTRING* outToken) noexcept final
    {
        try
        {
            *outToken = nullptr;
            typename D::abi_guard guard(this->shim());
            *outToken = detach_from<hstring>(this->shim().AddFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RedeemTokenForFileAsync(HSTRING token, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().RedeemTokenForFileAsync(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveFile(HSTRING token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFile(*reinterpret_cast<hstring const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics> : produce_base<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Html(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Html());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rtf(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rtf());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bitmap(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Bitmap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StorageItems(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StorageItems());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2> : produce_base<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>
{
    HRESULT __stdcall get_WebLink(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WebLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationLink(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ApplicationLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3> : produce_base<D, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3>
{
    HRESULT __stdcall get_UserActivityJsonArray(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserActivityJsonArray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs> : produce_base<D, Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs>
{
    HRESULT __stdcall get_ApplicationName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ApplicationName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

inline Windows::ApplicationModel::DataTransfer::DataPackageView Clipboard::GetContent()
{
    return get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().GetContent();
}

inline void Clipboard::SetContent(Windows::ApplicationModel::DataTransfer::DataPackage const& content)
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().SetContent(content);
}

inline void Clipboard::Flush()
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().Flush();
}

inline void Clipboard::Clear()
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().Clear();
}

inline event_token Clipboard::ContentChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    return get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().ContentChanged(changeHandler);
}

inline factory_event_revoker<Windows::ApplicationModel::DataTransfer::IClipboardStatics> Clipboard::ContentChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& changeHandler)
{
    auto factory = get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>();
    return { factory, &impl::abi_t<Windows::ApplicationModel::DataTransfer::IClipboardStatics>::remove_ContentChanged, factory.ContentChanged(changeHandler) };
}

inline void Clipboard::ContentChanged(event_token const& token)
{
    get_activation_factory<Clipboard, Windows::ApplicationModel::DataTransfer::IClipboardStatics>().ContentChanged(token);
}

inline DataPackage::DataPackage() :
    DataPackage(get_activation_factory<DataPackage>().ActivateInstance<DataPackage>())
{}

inline void DataTransferManager::ShowShareUI()
{
    get_activation_factory<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>().ShowShareUI();
}

inline Windows::ApplicationModel::DataTransfer::DataTransferManager DataTransferManager::GetForCurrentView()
{
    return get_activation_factory<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics>().GetForCurrentView();
}

inline bool DataTransferManager::IsSupported()
{
    return get_activation_factory<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2>().IsSupported();
}

inline void DataTransferManager::ShowShareUI(Windows::ApplicationModel::DataTransfer::ShareUIOptions const& options)
{
    get_activation_factory<DataTransferManager, Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3>().ShowShareUI(options);
}

inline hstring HtmlFormatHelper::GetStaticFragment(param::hstring const& htmlFormat)
{
    return get_activation_factory<HtmlFormatHelper, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>().GetStaticFragment(htmlFormat);
}

inline hstring HtmlFormatHelper::CreateHtmlFormat(param::hstring const& htmlFragment)
{
    return get_activation_factory<HtmlFormatHelper, Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics>().CreateHtmlFormat(htmlFragment);
}

inline ShareProvider::ShareProvider(param::hstring const& title, Windows::Storage::Streams::RandomAccessStreamReference const& displayIcon, Windows::UI::Color const& backgroundColor, Windows::ApplicationModel::DataTransfer::ShareProviderHandler const& handler) :
    ShareProvider(get_activation_factory<ShareProvider, Windows::ApplicationModel::DataTransfer::IShareProviderFactory>().Create(title, displayIcon, backgroundColor, handler))
{}

inline ShareUIOptions::ShareUIOptions() :
    ShareUIOptions(get_activation_factory<ShareUIOptions>().ActivateInstance<ShareUIOptions>())
{}

inline hstring SharedStorageAccessManager::AddFile(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<SharedStorageAccessManager, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>().AddFile(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SharedStorageAccessManager::RedeemTokenForFileAsync(param::hstring const& token)
{
    return get_activation_factory<SharedStorageAccessManager, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>().RedeemTokenForFileAsync(token);
}

inline void SharedStorageAccessManager::RemoveFile(param::hstring const& token)
{
    get_activation_factory<SharedStorageAccessManager, Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics>().RemoveFile(token);
}

inline hstring StandardDataFormats::Text()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Text();
}

inline hstring StandardDataFormats::Uri()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Uri();
}

inline hstring StandardDataFormats::Html()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Html();
}

inline hstring StandardDataFormats::Rtf()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Rtf();
}

inline hstring StandardDataFormats::Bitmap()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().Bitmap();
}

inline hstring StandardDataFormats::StorageItems()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics>().StorageItems();
}

inline hstring StandardDataFormats::WebLink()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>().WebLink();
}

inline hstring StandardDataFormats::ApplicationLink()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2>().ApplicationLink();
}

inline hstring StandardDataFormats::UserActivityJsonArray()
{
    return get_activation_factory<StandardDataFormats, Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3>().UserActivityJsonArray();
}

template <typename L> DataProviderHandler::DataProviderHandler(L handler) :
    DataProviderHandler(impl::make_delegate<DataProviderHandler>(std::forward<L>(handler)))
{}

template <typename F> DataProviderHandler::DataProviderHandler(F* handler) :
    DataProviderHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DataProviderHandler::DataProviderHandler(O* object, M method) :
    DataProviderHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DataProviderHandler::operator()(Windows::ApplicationModel::DataTransfer::DataProviderRequest const& request) const
{
    check_hresult((*(impl::abi_t<DataProviderHandler>**)this)->Invoke(get_abi(request)));
}

template <typename L> ShareProviderHandler::ShareProviderHandler(L handler) :
    ShareProviderHandler(impl::make_delegate<ShareProviderHandler>(std::forward<L>(handler)))
{}

template <typename F> ShareProviderHandler::ShareProviderHandler(F* handler) :
    ShareProviderHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ShareProviderHandler::ShareProviderHandler(O* object, M method) :
    ShareProviderHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ShareProviderHandler::operator()(Windows::ApplicationModel::DataTransfer::ShareProviderOperation const& operation) const
{
    check_hresult((*(impl::abi_t<ShareProviderHandler>**)this)->Invoke(get_abi(operation)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IClipboardStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IClipboardStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackage3> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet4> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView4> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView3> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView4> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataPackageView4> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderRequest> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataProviderRequest> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataRequest> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataRequest> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManager2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProvider> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IShareProvider> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IShareProviderOperation> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareTargetInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IShareTargetInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IShareUIOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IShareUIOptions> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics3> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::Clipboard> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::Clipboard> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackage> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataPackage> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySet> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySet> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataPackagePropertySetView> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataPackageView> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataPackageView> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataProviderDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataProviderDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataProviderRequest> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataProviderRequest> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataRequest> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataRequest> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataRequestDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataRequestDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::DataTransferManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::DataTransferManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::HtmlFormatHelper> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::HtmlFormatHelper> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareProvider> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ShareProvider> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareProviderOperation> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ShareProviderOperation> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareTargetInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ShareTargetInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::ShareUIOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::ShareUIOptions> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::SharedStorageAccessManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::StandardDataFormats> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::StandardDataFormats> {};
template<> struct hash<winrt::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs> {};

}

WINRT_WARNING_POP
