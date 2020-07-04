// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Web.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Web.UI.2.h"
#include "winrt/Windows.Web.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControl<D>::Source() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::Source(Windows::Foundation::Uri const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->put_Source(get_abi(source)));
}

template <typename D> hstring consume_Windows_Web_UI_IWebViewControl<D>::DocumentTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_DocumentTitle(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControl<D>::CanGoBack() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_CanGoBack(&value));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControl<D>::CanGoForward() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_CanGoForward(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::DefaultBackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->put_DefaultBackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Web_UI_IWebViewControl<D>::DefaultBackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_DefaultBackgroundColor(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControl<D>::ContainsFullScreenElement() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_ContainsFullScreenElement(&value));
    return value;
}

template <typename D> Windows::Web::UI::WebViewControlSettings consume_Windows_Web_UI_IWebViewControl<D>::Settings() const
{
    Windows::Web::UI::WebViewControlSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_Settings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::UI::WebViewControlDeferredPermissionRequest> consume_Windows_Web_UI_IWebViewControl<D>::DeferredPermissionRequests() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::UI::WebViewControlDeferredPermissionRequest> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->get_DeferredPermissionRequests(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::GoForward() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->GoForward());
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::GoBack() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->GoBack());
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::Refresh() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->Refresh());
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->Stop());
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::Navigate(Windows::Foundation::Uri const& source) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->Navigate(get_abi(source)));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::NavigateToString(param::hstring const& text) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->NavigateToString(get_abi(text)));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::NavigateToLocalStreamUri(Windows::Foundation::Uri const& source, Windows::Web::IUriToStreamResolver const& streamResolver) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->NavigateToLocalStreamUri(get_abi(source), get_abi(streamResolver)));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::NavigateWithHttpRequestMessage(Windows::Web::Http::HttpRequestMessage const& requestMessage) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->NavigateWithHttpRequestMessage(get_abi(requestMessage)));
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Web_UI_IWebViewControl<D>::InvokeScriptAsync(param::hstring const& scriptName, param::async_iterable<hstring> const& arguments) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->InvokeScriptAsync(get_abi(scriptName), get_abi(arguments), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Web_UI_IWebViewControl<D>::CapturePreviewToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->CapturePreviewToStreamAsync(get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackage> consume_Windows_Web_UI_IWebViewControl<D>::CaptureSelectedContentToDataPackageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackage> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->CaptureSelectedContentToDataPackageAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControl<D>::BuildLocalStreamUri(param::hstring const& contentIdentifier, param::hstring const& relativePath) const
{
    Windows::Foundation::Uri result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->BuildLocalStreamUri(get_abi(contentIdentifier), get_abi(relativePath), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::GetDeferredPermissionRequestById(uint32_t id, Windows::Web::UI::WebViewControlDeferredPermissionRequest& result) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->GetDeferredPermissionRequestById(id, put_abi(result)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::NavigationStarting(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_NavigationStarting(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::NavigationStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_NavigationStarting, NavigationStarting(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::NavigationStarting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_NavigationStarting(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::ContentLoading(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_ContentLoading(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::ContentLoading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_ContentLoading, ContentLoading(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::ContentLoading(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_ContentLoading(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::DOMContentLoaded(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_DOMContentLoaded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::DOMContentLoaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_DOMContentLoaded, DOMContentLoaded(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::DOMContentLoaded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_DOMContentLoaded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::NavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_NavigationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::NavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_NavigationCompleted, NavigationCompleted(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::NavigationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_NavigationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::FrameNavigationStarting(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_FrameNavigationStarting(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::FrameNavigationStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameNavigationStarting, FrameNavigationStarting(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::FrameNavigationStarting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_FrameNavigationStarting(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::FrameContentLoading(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_FrameContentLoading(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::FrameContentLoading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameContentLoading, FrameContentLoading(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::FrameContentLoading(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_FrameContentLoading(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::FrameDOMContentLoaded(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_FrameDOMContentLoaded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::FrameDOMContentLoaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameDOMContentLoaded, FrameDOMContentLoaded(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::FrameDOMContentLoaded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_FrameDOMContentLoaded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::FrameNavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_FrameNavigationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::FrameNavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_FrameNavigationCompleted, FrameNavigationCompleted(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::FrameNavigationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_FrameNavigationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::ScriptNotify(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlScriptNotifyEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_ScriptNotify(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::ScriptNotify(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlScriptNotifyEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_ScriptNotify, ScriptNotify(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::ScriptNotify(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_ScriptNotify(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::LongRunningScriptDetected(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_LongRunningScriptDetected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::LongRunningScriptDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_LongRunningScriptDetected, LongRunningScriptDetected(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::LongRunningScriptDetected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_LongRunningScriptDetected(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::UnsafeContentWarningDisplaying(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_UnsafeContentWarningDisplaying(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::UnsafeContentWarningDisplaying(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_UnsafeContentWarningDisplaying, UnsafeContentWarningDisplaying(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::UnsafeContentWarningDisplaying(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_UnsafeContentWarningDisplaying(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::UnviewableContentIdentified(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_UnviewableContentIdentified(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::UnviewableContentIdentified(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_UnviewableContentIdentified, UnviewableContentIdentified(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::UnviewableContentIdentified(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_UnviewableContentIdentified(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::PermissionRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_PermissionRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::PermissionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_PermissionRequested, PermissionRequested(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::PermissionRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_PermissionRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::UnsupportedUriSchemeIdentified(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_UnsupportedUriSchemeIdentified(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::UnsupportedUriSchemeIdentified(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_UnsupportedUriSchemeIdentified, UnsupportedUriSchemeIdentified(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::UnsupportedUriSchemeIdentified(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_UnsupportedUriSchemeIdentified(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::NewWindowRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_NewWindowRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::NewWindowRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_NewWindowRequested, NewWindowRequested(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::NewWindowRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_NewWindowRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::ContainsFullScreenElementChanged(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_ContainsFullScreenElementChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::ContainsFullScreenElementChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_ContainsFullScreenElementChanged, ContainsFullScreenElementChanged(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::ContainsFullScreenElementChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_ContainsFullScreenElementChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_IWebViewControl<D>::WebResourceRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->add_WebResourceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::IWebViewControl> consume_Windows_Web_UI_IWebViewControl<D>::WebResourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::IWebViewControl>(this, &abi_t<Windows::Web::UI::IWebViewControl>::remove_WebResourceRequested, WebResourceRequested(handler));
}

template <typename D> void consume_Windows_Web_UI_IWebViewControl<D>::WebResourceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControl)->remove_WebResourceRequested(get_abi(token)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlContentLoadingEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlContentLoadingEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlDOMContentLoadedEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlDeferredPermissionRequest)->get_Id(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlDeferredPermissionRequest)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::UI::WebViewControlPermissionType consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest<D>::PermissionType() const
{
    Windows::Web::UI::WebViewControlPermissionType value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlDeferredPermissionRequest)->get_PermissionType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest<D>::Allow() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlDeferredPermissionRequest)->Allow());
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest<D>::Deny() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlDeferredPermissionRequest)->Deny());
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs<D>::ExecutionTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs)->get_ExecutionTime(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs<D>::StopPageScriptExecution() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs)->get_StopPageScriptExecution(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs<D>::StopPageScriptExecution(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs)->put_StopPageScriptExecution(value));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs<D>::IsSuccess() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs)->get_IsSuccess(&value));
    return value;
}

template <typename D> Windows::Web::WebErrorStatus consume_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs<D>::WebErrorStatus() const
{
    Windows::Web::WebErrorStatus value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs)->get_WebErrorStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNavigationStartingEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNavigationStartingEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNavigationStartingEventArgs)->put_Cancel(value));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs<D>::Referrer() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs)->get_Referrer(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs)->put_Handled(value));
}

template <typename D> uint32_t consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequest)->get_Id(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequest)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::UI::WebViewControlPermissionType consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>::PermissionType() const
{
    Windows::Web::UI::WebViewControlPermissionType value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequest)->get_PermissionType(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::UI::WebViewControlPermissionState consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>::State() const
{
    Windows::Web::UI::WebViewControlPermissionState value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequest)->get_State(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>::Defer() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequest)->Defer());
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>::Allow() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequest)->Allow());
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>::Deny() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequest)->Deny());
}

template <typename D> Windows::Web::UI::WebViewControlPermissionRequest consume_Windows_Web_UI_IWebViewControlPermissionRequestedEventArgs<D>::PermissionRequest() const
{
    Windows::Web::UI::WebViewControlPermissionRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs)->get_PermissionRequest(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlScriptNotifyEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlScriptNotifyEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_UI_IWebViewControlScriptNotifyEventArgs<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlScriptNotifyEventArgs)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlSettings<D>::IsJavaScriptEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlSettings)->put_IsJavaScriptEnabled(value));
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlSettings<D>::IsJavaScriptEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlSettings)->get_IsJavaScriptEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlSettings<D>::IsIndexedDBEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlSettings)->put_IsIndexedDBEnabled(value));
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlSettings<D>::IsIndexedDBEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlSettings)->get_IsIndexedDBEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlSettings<D>::IsScriptNotifyAllowed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlSettings)->put_IsScriptNotifyAllowed(value));
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlSettings<D>::IsScriptNotifyAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlSettings)->get_IsScriptNotifyAllowed(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs<D>::Referrer() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs)->get_Referrer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs<D>::MediaType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs)->get_MediaType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs<D>::Request() const
{
    Windows::Web::Http::HttpRequestMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs<D>::Response(Windows::Web::Http::HttpResponseMessage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs)->put_Response(get_abi(value)));
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs<D>::Response() const
{
    Windows::Web::Http::HttpResponseMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs)->get_Response(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControl> : produce_base<D, Windows::Web::UI::IWebViewControl>
{
    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Source(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::Foundation::Uri const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentTitle(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DocumentTitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanGoBack(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanGoBack());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanGoForward(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanGoForward());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultBackgroundColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultBackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultBackgroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DefaultBackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContainsFullScreenElement(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ContainsFullScreenElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Settings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::WebViewControlSettings>(this->shim().Settings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeferredPermissionRequests(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Web::UI::WebViewControlDeferredPermissionRequest>>(this->shim().DeferredPermissionRequests());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GoForward() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GoForward();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GoBack() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GoBack();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Refresh() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Refresh();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Navigate(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Navigate(*reinterpret_cast<Windows::Foundation::Uri const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NavigateToString(HSTRING text) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigateToString(*reinterpret_cast<hstring const*>(&text));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NavigateToLocalStreamUri(void* source, void* streamResolver) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigateToLocalStreamUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&source), *reinterpret_cast<Windows::Web::IUriToStreamResolver const*>(&streamResolver));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NavigateWithHttpRequestMessage(void* requestMessage) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigateWithHttpRequestMessage(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&requestMessage));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InvokeScriptAsync(HSTRING scriptName, void* arguments, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().InvokeScriptAsync(*reinterpret_cast<hstring const*>(&scriptName), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&arguments)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CapturePreviewToStreamAsync(void* stream, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CapturePreviewToStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CaptureSelectedContentToDataPackageAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackage>>(this->shim().CaptureSelectedContentToDataPackageAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BuildLocalStreamUri(HSTRING contentIdentifier, HSTRING relativePath, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Uri>(this->shim().BuildLocalStreamUri(*reinterpret_cast<hstring const*>(&contentIdentifier), *reinterpret_cast<hstring const*>(&relativePath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferredPermissionRequestById(uint32_t id, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            this->shim().GetDeferredPermissionRequestById(id, *reinterpret_cast<Windows::Web::UI::WebViewControlDeferredPermissionRequest*>(result));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationStarting(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NavigationStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationStarting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationStarting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ContentLoading(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ContentLoading(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ContentLoading(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentLoading(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DOMContentLoaded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DOMContentLoaded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DOMContentLoaded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DOMContentLoaded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NavigationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FrameNavigationStarting(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameNavigationStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameNavigationStarting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameNavigationStarting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FrameContentLoading(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameContentLoading(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameContentLoading(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameContentLoading(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FrameDOMContentLoaded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameDOMContentLoaded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameDOMContentLoaded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameDOMContentLoaded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FrameNavigationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameNavigationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameNavigationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameNavigationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ScriptNotify(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ScriptNotify(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlScriptNotifyEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ScriptNotify(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScriptNotify(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LongRunningScriptDetected(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LongRunningScriptDetected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LongRunningScriptDetected(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LongRunningScriptDetected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UnsafeContentWarningDisplaying(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UnsafeContentWarningDisplaying(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UnsafeContentWarningDisplaying(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnsafeContentWarningDisplaying(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UnviewableContentIdentified(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UnviewableContentIdentified(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UnviewableContentIdentified(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnviewableContentIdentified(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PermissionRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PermissionRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PermissionRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PermissionRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UnsupportedUriSchemeIdentified(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UnsupportedUriSchemeIdentified(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UnsupportedUriSchemeIdentified(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnsupportedUriSchemeIdentified(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NewWindowRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NewWindowRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NewWindowRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NewWindowRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ContainsFullScreenElementChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ContainsFullScreenElementChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ContainsFullScreenElementChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContainsFullScreenElementChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_WebResourceRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().WebResourceRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_WebResourceRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WebResourceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlContentLoadingEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlContentLoadingEventArgs>
{
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
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>
{
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
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlDeferredPermissionRequest> : produce_base<D, Windows::Web::UI::IWebViewControlDeferredPermissionRequest>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
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

    HRESULT __stdcall get_PermissionType(Windows::Web::UI::WebViewControlPermissionType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::WebViewControlPermissionType>(this->shim().PermissionType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Allow() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Allow();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Deny() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Deny();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>
{
    HRESULT __stdcall get_ExecutionTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().ExecutionTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StopPageScriptExecution(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StopPageScriptExecution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StopPageScriptExecution(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPageScriptExecution(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>
{
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

    HRESULT __stdcall get_IsSuccess(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSuccess());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WebErrorStatus(Windows::Web::WebErrorStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::WebErrorStatus>(this->shim().WebErrorStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlNavigationStartingEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>
{
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

    HRESULT __stdcall get_Cancel(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Cancel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Cancel(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>
{
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

    HRESULT __stdcall get_Referrer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Referrer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlPermissionRequest> : produce_base<D, Windows::Web::UI::IWebViewControlPermissionRequest>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
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

    HRESULT __stdcall get_PermissionType(Windows::Web::UI::WebViewControlPermissionType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::WebViewControlPermissionType>(this->shim().PermissionType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Web::UI::WebViewControlPermissionState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::WebViewControlPermissionState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Defer() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Defer();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Allow() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Allow();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Deny() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Deny();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>
{
    HRESULT __stdcall get_PermissionRequest(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::WebViewControlPermissionRequest>(this->shim().PermissionRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlScriptNotifyEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>
{
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

    HRESULT __stdcall get_Value(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlSettings> : produce_base<D, Windows::Web::UI::IWebViewControlSettings>
{
    HRESULT __stdcall put_IsJavaScriptEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsJavaScriptEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsJavaScriptEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsJavaScriptEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsIndexedDBEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsIndexedDBEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsIndexedDBEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsIndexedDBEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsScriptNotifyAllowed(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsScriptNotifyAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsScriptNotifyAllowed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsScriptNotifyAllowed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>
{
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

    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>
{
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

    HRESULT __stdcall get_Referrer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Referrer());
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
};

template <typename D>
struct produce<D, Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs> : produce_base<D, Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>
{
    HRESULT __stdcall GetDeferral(void** deferral) noexcept final
    {
        try
        {
            *deferral = nullptr;
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::HttpRequestMessage>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Response(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Response(*reinterpret_cast<Windows::Web::Http::HttpResponseMessage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Response(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::HttpResponseMessage>(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web::UI {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::UI::IWebViewControl> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControl> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlContentLoadingEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlContentLoadingEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlDeferredPermissionRequest> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlDeferredPermissionRequest> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlNavigationStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlNavigationStartingEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlPermissionRequest> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlPermissionRequest> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlScriptNotifyEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlScriptNotifyEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlSettings> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlSettings> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlContentLoadingEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlContentLoadingEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlDeferredPermissionRequest> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlDeferredPermissionRequest> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlNavigationStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlNavigationStartingEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlPermissionRequest> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlPermissionRequest> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlScriptNotifyEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlScriptNotifyEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlSettings> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlSettings> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> {};

}

WINRT_WARNING_POP
