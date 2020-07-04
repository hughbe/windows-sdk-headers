// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Services.TargetedContent.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Services_TargetedContent_ITargetedContentAction<D>::InvokeAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentAction)->InvokeAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Services_TargetedContent_ITargetedContentAvailabilityChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentChangedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_TargetedContent_ITargetedContentChangedEventArgs<D>::HasPreviousContentExpired() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentChangedEventArgs)->get_HasPreviousContentExpired(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentCollection)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentCollection)->ReportInteraction(get_abi(interaction)));
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::ReportCustomInteraction(param::hstring const& customInteractionName) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentCollection)->ReportCustomInteraction(get_abi(customInteractionName)));
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentCollection)->get_Path(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentCollection)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Collections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentCollection)->get_Collections(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem> consume_Windows_Services_TargetedContent_ITargetedContentCollection<D>::Items() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentCollection)->get_Items(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentContainer)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentContainer)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentAvailability consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Availability() const
{
    Windows::Services::TargetedContent::TargetedContentAvailability value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentContainer)->get_Availability(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentCollection consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::Content() const
{
    Windows::Services::TargetedContent::TargetedContentCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentContainer)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentObject consume_Windows_Services_TargetedContent_ITargetedContentContainer<D>::SelectSingleObject(param::hstring const& path) const
{
    Windows::Services::TargetedContent::TargetedContentObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentContainer)->SelectSingleObject(get_abi(path), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> consume_Windows_Services_TargetedContent_ITargetedContentContainerStatics<D>::GetAsync(param::hstring const& contentId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentContainerStatics)->GetAsync(get_abi(contentId), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> uint32_t consume_Windows_Services_TargetedContent_ITargetedContentImage<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentImage)->get_Height(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Services_TargetedContent_ITargetedContentImage<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentImage)->get_Width(&value));
    return value;
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItem)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction const& interaction) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItem)->ReportInteraction(get_abi(interaction)));
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::ReportCustomInteraction(param::hstring const& customInteractionName) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItem)->ReportCustomInteraction(get_abi(customInteractionName)));
}

template <typename D> Windows::Services::TargetedContent::TargetedContentItemState consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::State() const
{
    Windows::Services::TargetedContent::TargetedContentItemState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItem)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItem)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> consume_Windows_Services_TargetedContent_ITargetedContentItem<D>::Collections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItem)->get_Collections(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_TargetedContent_ITargetedContentItemState<D>::ShouldDisplay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItemState)->get_ShouldDisplay(&value));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentAppInstallationState consume_Windows_Services_TargetedContent_ITargetedContentItemState<D>::AppInstallationState() const
{
    Windows::Services::TargetedContent::TargetedContentAppInstallationState value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentItemState)->get_AppInstallationState(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentObjectKind consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::ObjectKind() const
{
    Windows::Services::TargetedContent::TargetedContentObjectKind value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentObject)->get_ObjectKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentCollection consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::Collection() const
{
    Windows::Services::TargetedContent::TargetedContentCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentObject)->get_Collection(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentItem consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::Item() const
{
    Windows::Services::TargetedContent::TargetedContentItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentObject)->get_Item(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentValue consume_Windows_Services_TargetedContent_ITargetedContentObject<D>::Value() const
{
    Windows::Services::TargetedContent::TargetedContentValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentObject)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Services_TargetedContent_ITargetedContentStateChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::GetContentContainerAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->GetContentContainerAsync(put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> event_token consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::ContentChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->add_ContentChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription> consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::ContentChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::TargetedContent::ITargetedContentSubscription>(this, &abi_t<Windows::Services::TargetedContent::ITargetedContentSubscription>::remove_ContentChanged, ContentChanged(handler));
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::ContentChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->remove_ContentChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->add_AvailabilityChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription> consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::TargetedContent::ITargetedContentSubscription>(this, &abi_t<Windows::Services::TargetedContent::ITargetedContentSubscription>::remove_AvailabilityChanged, AvailabilityChanged(handler));
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::AvailabilityChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->remove_AvailabilityChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->add_StateChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Services::TargetedContent::ITargetedContentSubscription> consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Services::TargetedContent::ITargetedContentSubscription>(this, &abi_t<Windows::Services::TargetedContent::ITargetedContentSubscription>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentSubscription<D>::StateChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscription)->remove_StateChanged(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::SubscriptionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_SubscriptionId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::AllowPartialContentAvailability() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_AllowPartialContentAvailability(&value));
    return value;
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::AllowPartialContentAvailability(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->put_AllowPartialContentAvailability(value));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::CloudQueryParameters() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_CloudQueryParameters(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::LocalFilters() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->get_LocalFilters(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionOptions<D>::Update() const
{
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions)->Update());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics<D>::GetAsync(param::hstring const& subscriptionId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics)->GetAsync(get_abi(subscriptionId), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentSubscriptionOptions consume_Windows_Services_TargetedContent_ITargetedContentSubscriptionStatics<D>::GetOptions(param::hstring const& subscriptionId) const
{
    Windows::Services::TargetedContent::TargetedContentSubscriptionOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics)->GetOptions(get_abi(subscriptionId), put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentValueKind consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::ValueKind() const
{
    Windows::Services::TargetedContent::TargetedContentValueKind value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_ValueKind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Path() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Path(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::String() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_String(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Number() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Number(&value));
    return value;
}

template <typename D> bool consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Boolean() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Boolean(&value));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentFile consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::File() const
{
    Windows::Services::TargetedContent::TargetedContentFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentImage consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::ImageFile() const
{
    Windows::Services::TargetedContent::TargetedContentImage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_ImageFile(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::TargetedContent::TargetedContentAction consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Action() const
{
    Windows::Services::TargetedContent::TargetedContentAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Action(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Strings() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Strings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Uris() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Uris(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<double> consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Numbers() const
{
    Windows::Foundation::Collections::IVectorView<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Numbers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<bool> consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Booleans() const
{
    Windows::Foundation::Collections::IVectorView<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Booleans(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile> consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Files() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Files(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage> consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::ImageFiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_ImageFiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction> consume_Windows_Services_TargetedContent_ITargetedContentValue<D>::Actions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::TargetedContent::ITargetedContentValue)->get_Actions(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentAction> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentAction>
{
    HRESULT __stdcall InvokeAsync(void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InvokeAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs>
{
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentChangedEventArgs> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentChangedEventArgs>
{
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

    HRESULT __stdcall get_HasPreviousContentExpired(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasPreviousContentExpired());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentCollection> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentCollection>
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

    HRESULT __stdcall ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInteraction(*reinterpret_cast<Windows::Services::TargetedContent::TargetedContentInteraction const*>(&interaction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportCustomInteraction(HSTRING customInteractionName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCustomInteraction(*reinterpret_cast<hstring const*>(&customInteractionName));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Path(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
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
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Collections(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection>>(this->shim().Collections());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Items(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentItem>>(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentContainer> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentContainer>
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

    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Availability(Windows::Services::TargetedContent::TargetedContentAvailability* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentAvailability>(this->shim().Availability());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Content(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentCollection>(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SelectSingleObject(HSTRING path, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentObject>(this->shim().SelectSingleObject(*reinterpret_cast<hstring const*>(&path)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentContainerStatics> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentContainerStatics>
{
    HRESULT __stdcall GetAsync(HSTRING contentId, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer>>(this->shim().GetAsync(*reinterpret_cast<hstring const*>(&contentId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentImage> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentImage>
{
    HRESULT __stdcall get_Height(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentItem> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentItem>
{
    HRESULT __stdcall get_Path(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportInteraction(Windows::Services::TargetedContent::TargetedContentInteraction interaction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportInteraction(*reinterpret_cast<Windows::Services::TargetedContent::TargetedContentInteraction const*>(&interaction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportCustomInteraction(HSTRING customInteractionName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCustomInteraction(*reinterpret_cast<hstring const*>(&customInteractionName));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentItemState>(this->shim().State());
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
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Services::TargetedContent::TargetedContentValue>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Collections(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentCollection>>(this->shim().Collections());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentItemState> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentItemState>
{
    HRESULT __stdcall get_ShouldDisplay(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldDisplay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppInstallationState(Windows::Services::TargetedContent::TargetedContentAppInstallationState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentAppInstallationState>(this->shim().AppInstallationState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentObject> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentObject>
{
    HRESULT __stdcall get_ObjectKind(Windows::Services::TargetedContent::TargetedContentObjectKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentObjectKind>(this->shim().ObjectKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Collection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentCollection>(this->shim().Collection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Item(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentItem>(this->shim().Item());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentValue>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs>
{
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
struct produce<D, Windows::Services::TargetedContent::ITargetedContentSubscription> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentSubscription>
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

    HRESULT __stdcall GetContentContainerAsync(void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer>>(this->shim().GetContentContainerAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ContentChanged(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().ContentChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentChanged(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AvailabilityChanged(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().AvailabilityChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailabilityChanged(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailabilityChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::TargetedContent::TargetedContentSubscription, Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions>
{
    HRESULT __stdcall get_SubscriptionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SubscriptionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowPartialContentAvailability(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowPartialContentAvailability());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowPartialContentAvailability(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowPartialContentAvailability(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CloudQueryParameters(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().CloudQueryParameters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalFilters(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().LocalFilters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Update() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>
{
    HRESULT __stdcall GetAsync(HSTRING subscriptionId, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription>>(this->shim().GetAsync(*reinterpret_cast<hstring const*>(&subscriptionId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetOptions(HSTRING subscriptionId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentSubscriptionOptions>(this->shim().GetOptions(*reinterpret_cast<hstring const*>(&subscriptionId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::TargetedContent::ITargetedContentValue> : produce_base<D, Windows::Services::TargetedContent::ITargetedContentValue>
{
    HRESULT __stdcall get_ValueKind(Windows::Services::TargetedContent::TargetedContentValueKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentValueKind>(this->shim().ValueKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Path(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_String(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().String());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Number(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Number());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Boolean(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Boolean());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_File(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentFile>(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ImageFile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentImage>(this->shim().ImageFile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Action(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::TargetedContent::TargetedContentAction>(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Strings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Strings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uris(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>>(this->shim().Uris());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Numbers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<double>>(this->shim().Numbers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Booleans(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<bool>>(this->shim().Booleans());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Files(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentFile>>(this->shim().Files());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ImageFiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentImage>>(this->shim().ImageFiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Actions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::TargetedContentAction>>(this->shim().Actions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Services::TargetedContent {

inline Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer> TargetedContentContainer::GetAsync(param::hstring const& contentId)
{
    return get_activation_factory<TargetedContentContainer, Windows::Services::TargetedContent::ITargetedContentContainerStatics>().GetAsync(contentId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription> TargetedContentSubscription::GetAsync(param::hstring const& subscriptionId)
{
    return get_activation_factory<TargetedContentSubscription, Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>().GetAsync(subscriptionId);
}

inline Windows::Services::TargetedContent::TargetedContentSubscriptionOptions TargetedContentSubscription::GetOptions(param::hstring const& subscriptionId)
{
    return get_activation_factory<TargetedContentSubscription, Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics>().GetOptions(subscriptionId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentAction> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentAction> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentAvailabilityChangedEventArgs> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentChangedEventArgs> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentCollection> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentCollection> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentContainer> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentContainer> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentContainerStatics> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentImage> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentImage> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentItem> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentItem> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentItemState> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentItemState> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentObject> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentObject> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscription> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentSubscription> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionOptions> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentSubscriptionStatics> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::ITargetedContentValue> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::ITargetedContentValue> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentAction> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentAction> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentAvailabilityChangedEventArgs> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentChangedEventArgs> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentCollection> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentCollection> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentContainer> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentContainer> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentFile> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentFile> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentImage> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentImage> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentItem> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentItem> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentItemState> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentItemState> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentObject> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentObject> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentSubscription> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentSubscription> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentSubscriptionOptions> {};
template<> struct hash<winrt::Windows::Services::TargetedContent::TargetedContentValue> : winrt::impl::hash_base<winrt::Windows::Services::TargetedContent::TargetedContentValue> {};

}

WINRT_WARNING_POP
