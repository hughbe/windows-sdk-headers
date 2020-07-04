// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer {

struct DataPackage;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Web {

enum class WebErrorStatus;
struct IUriToStreamResolver;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

struct HttpRequestMessage;
struct HttpResponseMessage;

}

WINRT_EXPORT namespace winrt::Windows::Web::UI {

enum class WebViewControlPermissionState : int32_t
{
    Unknown = 0,
    Defer = 1,
    Allow = 2,
    Deny = 3,
};

enum class WebViewControlPermissionType : int32_t
{
    Geolocation = 0,
    UnlimitedIndexedDBQuota = 1,
    Media = 2,
    PointerLock = 3,
    WebNotifications = 4,
    Screen = 5,
};

struct IWebViewControl;
struct IWebViewControlContentLoadingEventArgs;
struct IWebViewControlDOMContentLoadedEventArgs;
struct IWebViewControlDeferredPermissionRequest;
struct IWebViewControlLongRunningScriptDetectedEventArgs;
struct IWebViewControlNavigationCompletedEventArgs;
struct IWebViewControlNavigationStartingEventArgs;
struct IWebViewControlNewWindowRequestedEventArgs;
struct IWebViewControlPermissionRequest;
struct IWebViewControlPermissionRequestedEventArgs;
struct IWebViewControlScriptNotifyEventArgs;
struct IWebViewControlSettings;
struct IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
struct IWebViewControlUnviewableContentIdentifiedEventArgs;
struct IWebViewControlWebResourceRequestedEventArgs;
struct WebViewControlContentLoadingEventArgs;
struct WebViewControlDOMContentLoadedEventArgs;
struct WebViewControlDeferredPermissionRequest;
struct WebViewControlLongRunningScriptDetectedEventArgs;
struct WebViewControlNavigationCompletedEventArgs;
struct WebViewControlNavigationStartingEventArgs;
struct WebViewControlNewWindowRequestedEventArgs;
struct WebViewControlPermissionRequest;
struct WebViewControlPermissionRequestedEventArgs;
struct WebViewControlScriptNotifyEventArgs;
struct WebViewControlSettings;
struct WebViewControlUnsupportedUriSchemeIdentifiedEventArgs;
struct WebViewControlUnviewableContentIdentifiedEventArgs;
struct WebViewControlWebResourceRequestedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Web::UI::IWebViewControl>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlPermissionRequest>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlSettings>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::UI::WebViewControlContentLoadingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlDeferredPermissionRequest>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlNavigationCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlNavigationStartingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlPermissionRequest>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlPermissionRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlScriptNotifyEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlSettings>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::UI::WebViewControlPermissionState>{ using type = enum_category; };
template <> struct category<Windows::Web::UI::WebViewControlPermissionType>{ using type = enum_category; };
template <> struct name<Windows::Web::UI::IWebViewControl>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControl" }; };
template <> struct name<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlContentLoadingEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlDOMContentLoadedEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlDeferredPermissionRequest" }; };
template <> struct name<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlLongRunningScriptDetectedEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlNavigationCompletedEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlNavigationStartingEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlNewWindowRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlPermissionRequest>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlPermissionRequest" }; };
template <> struct name<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlPermissionRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlScriptNotifyEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlSettings>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlSettings" }; };
template <> struct name<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlUnviewableContentIdentifiedEventArgs" }; };
template <> struct name<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.IWebViewControlWebResourceRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlContentLoadingEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlContentLoadingEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlDOMContentLoadedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlDeferredPermissionRequest>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlDeferredPermissionRequest" }; };
template <> struct name<Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlLongRunningScriptDetectedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlNavigationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlNavigationCompletedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlNavigationStartingEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlNavigationStartingEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlNewWindowRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlPermissionRequest>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionRequest" }; };
template <> struct name<Windows::Web::UI::WebViewControlPermissionRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlScriptNotifyEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlScriptNotifyEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlSettings>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlSettings" }; };
template <> struct name<Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlUnsupportedUriSchemeIdentifiedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlUnviewableContentIdentifiedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlWebResourceRequestedEventArgs" }; };
template <> struct name<Windows::Web::UI::WebViewControlPermissionState>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionState" }; };
template <> struct name<Windows::Web::UI::WebViewControlPermissionType>{ static constexpr auto & value{ L"Windows.Web.UI.WebViewControlPermissionType" }; };
template <> struct guid<Windows::Web::UI::IWebViewControl>{ static constexpr GUID value{ 0x3F921316,0xBC70,0x4BDA,{ 0x91,0x36,0xC9,0x43,0x70,0x89,0x9F,0xAB } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>{ static constexpr GUID value{ 0x9A3FCCB2,0xB9BB,0x404B,{ 0xA2,0x2B,0x66,0xDC,0xCD,0x12,0x50,0xC6 } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>{ static constexpr GUID value{ 0xBE8BC008,0x9541,0x4545,{ 0x9F,0xF2,0x2D,0xF5,0x85,0xB2,0x9F,0x7D } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>{ static constexpr GUID value{ 0x2CE349E0,0xD759,0x445C,{ 0x99,0x26,0x89,0x95,0x29,0x8F,0x15,0x2B } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>{ static constexpr GUID value{ 0x2A6E5BBA,0x98B4,0x45BC,{ 0xBB,0xEB,0x0F,0x69,0xCE,0x49,0xC5,0x99 } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>{ static constexpr GUID value{ 0x20409918,0x4A15,0x4C46,{ 0xA5,0x5D,0xF7,0x9E,0xDB,0x0B,0xDE,0x8B } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>{ static constexpr GUID value{ 0x0C9057C5,0x0A08,0x41C7,{ 0x86,0x3B,0x71,0xE3,0xA9,0x54,0x91,0x37 } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>{ static constexpr GUID value{ 0x3DF44BBB,0xA124,0x46D5,{ 0xA0,0x83,0xD0,0x2C,0xAC,0xDF,0xF5,0xAD } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlPermissionRequest>{ static constexpr GUID value{ 0xE5BC836C,0xF22F,0x40E2,{ 0x95,0xB2,0x77,0x29,0xF8,0x40,0xEB,0x7F } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>{ static constexpr GUID value{ 0x27204D51,0x2488,0x4CC5,{ 0x96,0x8E,0x0A,0x77,0x1E,0x59,0xC1,0x47 } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>{ static constexpr GUID value{ 0x491DE57B,0x6F49,0x41BB,{ 0xB5,0x91,0x51,0xB8,0x5B,0x81,0x70,0x37 } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlSettings>{ static constexpr GUID value{ 0xC9967FBF,0x5E98,0x4CFD,{ 0x8C,0xCE,0x27,0xB0,0x91,0x1E,0x3D,0xE8 } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>{ static constexpr GUID value{ 0xE3B81944,0xE4FC,0x43DC,{ 0x94,0xCA,0xF9,0x80,0xF3,0x0B,0xC5,0x1D } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>{ static constexpr GUID value{ 0x4A9680DB,0x88F2,0x4E20,{ 0xB6,0x93,0xB4,0xE2,0xDF,0x4A,0xA5,0x81 } }; };
template <> struct guid<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>{ static constexpr GUID value{ 0x44D6524D,0x55A4,0x4D8B,{ 0x89,0x1C,0x93,0x1D,0x8E,0x25,0xD4,0x2E } }; };
template <> struct default_interface<Windows::Web::UI::WebViewControlContentLoadingEventArgs>{ using type = Windows::Web::UI::IWebViewControlContentLoadingEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs>{ using type = Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlDeferredPermissionRequest>{ using type = Windows::Web::UI::IWebViewControlDeferredPermissionRequest; };
template <> struct default_interface<Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs>{ using type = Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlNavigationCompletedEventArgs>{ using type = Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlNavigationStartingEventArgs>{ using type = Windows::Web::UI::IWebViewControlNavigationStartingEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs>{ using type = Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlPermissionRequest>{ using type = Windows::Web::UI::IWebViewControlPermissionRequest; };
template <> struct default_interface<Windows::Web::UI::WebViewControlPermissionRequestedEventArgs>{ using type = Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlScriptNotifyEventArgs>{ using type = Windows::Web::UI::IWebViewControlScriptNotifyEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlSettings>{ using type = Windows::Web::UI::IWebViewControlSettings; };
template <> struct default_interface<Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs>{ using type = Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs>{ using type = Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs; };
template <> struct default_interface<Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs>{ using type = Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControl
{
    Windows::Foundation::Uri Source() const;
    void Source(Windows::Foundation::Uri const& source) const;
    hstring DocumentTitle() const;
    bool CanGoBack() const;
    bool CanGoForward() const;
    void DefaultBackgroundColor(Windows::UI::Color const& value) const;
    Windows::UI::Color DefaultBackgroundColor() const;
    bool ContainsFullScreenElement() const;
    Windows::Web::UI::WebViewControlSettings Settings() const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::UI::WebViewControlDeferredPermissionRequest> DeferredPermissionRequests() const;
    void GoForward() const;
    void GoBack() const;
    void Refresh() const;
    void Stop() const;
    void Navigate(Windows::Foundation::Uri const& source) const;
    void NavigateToString(param::hstring const& text) const;
    void NavigateToLocalStreamUri(Windows::Foundation::Uri const& source, Windows::Web::IUriToStreamResolver const& streamResolver) const;
    void NavigateWithHttpRequestMessage(Windows::Web::Http::HttpRequestMessage const& requestMessage) const;
    Windows::Foundation::IAsyncOperation<hstring> InvokeScriptAsync(param::hstring const& scriptName, param::async_iterable<hstring> const& arguments) const;
    Windows::Foundation::IAsyncAction CapturePreviewToStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::DataTransfer::DataPackage> CaptureSelectedContentToDataPackageAsync() const;
    Windows::Foundation::Uri BuildLocalStreamUri(param::hstring const& contentIdentifier, param::hstring const& relativePath) const;
    void GetDeferredPermissionRequestById(uint32_t id, Windows::Web::UI::WebViewControlDeferredPermissionRequest& result) const;
    event_token NavigationStarting(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
    using NavigationStarting_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    NavigationStarting_revoker NavigationStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
    void NavigationStarting(event_token const& token) const;
    event_token ContentLoading(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
    using ContentLoading_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    ContentLoading_revoker ContentLoading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
    void ContentLoading(event_token const& token) const;
    event_token DOMContentLoaded(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
    using DOMContentLoaded_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    DOMContentLoaded_revoker DOMContentLoaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
    void DOMContentLoaded(event_token const& token) const;
    event_token NavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
    using NavigationCompleted_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    NavigationCompleted_revoker NavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
    void NavigationCompleted(event_token const& token) const;
    event_token FrameNavigationStarting(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
    using FrameNavigationStarting_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    FrameNavigationStarting_revoker FrameNavigationStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationStartingEventArgs> const& handler) const;
    void FrameNavigationStarting(event_token const& token) const;
    event_token FrameContentLoading(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
    using FrameContentLoading_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    FrameContentLoading_revoker FrameContentLoading(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlContentLoadingEventArgs> const& handler) const;
    void FrameContentLoading(event_token const& token) const;
    event_token FrameDOMContentLoaded(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
    using FrameDOMContentLoaded_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    FrameDOMContentLoaded_revoker FrameDOMContentLoaded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlDOMContentLoadedEventArgs> const& handler) const;
    void FrameDOMContentLoaded(event_token const& token) const;
    event_token FrameNavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
    using FrameNavigationCompleted_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    FrameNavigationCompleted_revoker FrameNavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNavigationCompletedEventArgs> const& handler) const;
    void FrameNavigationCompleted(event_token const& token) const;
    event_token ScriptNotify(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlScriptNotifyEventArgs> const& handler) const;
    using ScriptNotify_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    ScriptNotify_revoker ScriptNotify(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlScriptNotifyEventArgs> const& handler) const;
    void ScriptNotify(event_token const& token) const;
    event_token LongRunningScriptDetected(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> const& handler) const;
    using LongRunningScriptDetected_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    LongRunningScriptDetected_revoker LongRunningScriptDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlLongRunningScriptDetectedEventArgs> const& handler) const;
    void LongRunningScriptDetected(event_token const& token) const;
    event_token UnsafeContentWarningDisplaying(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
    using UnsafeContentWarningDisplaying_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    UnsafeContentWarningDisplaying_revoker UnsafeContentWarningDisplaying(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
    void UnsafeContentWarningDisplaying(event_token const& token) const;
    event_token UnviewableContentIdentified(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> const& handler) const;
    using UnviewableContentIdentified_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    UnviewableContentIdentified_revoker UnviewableContentIdentified(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnviewableContentIdentifiedEventArgs> const& handler) const;
    void UnviewableContentIdentified(event_token const& token) const;
    event_token PermissionRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> const& handler) const;
    using PermissionRequested_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    PermissionRequested_revoker PermissionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlPermissionRequestedEventArgs> const& handler) const;
    void PermissionRequested(event_token const& token) const;
    event_token UnsupportedUriSchemeIdentified(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> const& handler) const;
    using UnsupportedUriSchemeIdentified_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    UnsupportedUriSchemeIdentified_revoker UnsupportedUriSchemeIdentified(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlUnsupportedUriSchemeIdentifiedEventArgs> const& handler) const;
    void UnsupportedUriSchemeIdentified(event_token const& token) const;
    event_token NewWindowRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> const& handler) const;
    using NewWindowRequested_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    NewWindowRequested_revoker NewWindowRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlNewWindowRequestedEventArgs> const& handler) const;
    void NewWindowRequested(event_token const& token) const;
    event_token ContainsFullScreenElementChanged(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
    using ContainsFullScreenElementChanged_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    ContainsFullScreenElementChanged_revoker ContainsFullScreenElementChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Foundation::IInspectable> const& handler) const;
    void ContainsFullScreenElementChanged(event_token const& token) const;
    event_token WebResourceRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> const& handler) const;
    using WebResourceRequested_revoker = event_revoker<Windows::Web::UI::IWebViewControl>;
    WebResourceRequested_revoker WebResourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::IWebViewControl, Windows::Web::UI::WebViewControlWebResourceRequestedEventArgs> const& handler) const;
    void WebResourceRequested(event_token const& token) const;
};
template <> struct consume<Windows::Web::UI::IWebViewControl> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControl<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlContentLoadingEventArgs
{
    Windows::Foundation::Uri Uri() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlContentLoadingEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlContentLoadingEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlDOMContentLoadedEventArgs
{
    Windows::Foundation::Uri Uri() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlDOMContentLoadedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest
{
    uint32_t Id() const;
    Windows::Foundation::Uri Uri() const;
    Windows::Web::UI::WebViewControlPermissionType PermissionType() const;
    void Allow() const;
    void Deny() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlDeferredPermissionRequest> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlDeferredPermissionRequest<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs
{
    Windows::Foundation::TimeSpan ExecutionTime() const;
    bool StopPageScriptExecution() const;
    void StopPageScriptExecution(bool value) const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlLongRunningScriptDetectedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs
{
    Windows::Foundation::Uri Uri() const;
    bool IsSuccess() const;
    Windows::Web::WebErrorStatus WebErrorStatus() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlNavigationCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs
{
    Windows::Foundation::Uri Uri() const;
    bool Cancel() const;
    void Cancel(bool value) const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlNavigationStartingEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs
{
    Windows::Foundation::Uri Uri() const;
    Windows::Foundation::Uri Referrer() const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlNewWindowRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlPermissionRequest
{
    uint32_t Id() const;
    Windows::Foundation::Uri Uri() const;
    Windows::Web::UI::WebViewControlPermissionType PermissionType() const;
    Windows::Web::UI::WebViewControlPermissionState State() const;
    void Defer() const;
    void Allow() const;
    void Deny() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlPermissionRequest> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlPermissionRequest<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlPermissionRequestedEventArgs
{
    Windows::Web::UI::WebViewControlPermissionRequest PermissionRequest() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlPermissionRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlScriptNotifyEventArgs
{
    Windows::Foundation::Uri Uri() const;
    hstring Value() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlScriptNotifyEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlSettings
{
    void IsJavaScriptEnabled(bool value) const;
    bool IsJavaScriptEnabled() const;
    void IsIndexedDBEnabled(bool value) const;
    bool IsIndexedDBEnabled() const;
    void IsScriptNotifyAllowed(bool value) const;
    bool IsScriptNotifyAllowed() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlSettings> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlSettings<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs
{
    Windows::Foundation::Uri Uri() const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs
{
    Windows::Foundation::Uri Uri() const;
    Windows::Foundation::Uri Referrer() const;
    hstring MediaType() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlUnviewableContentIdentifiedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs
{
    Windows::Foundation::Deferral GetDeferral() const;
    Windows::Web::Http::HttpRequestMessage Request() const;
    void Response(Windows::Web::Http::HttpResponseMessage const& value) const;
    Windows::Web::Http::HttpResponseMessage Response() const;
};
template <> struct consume<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs> { template <typename D> using type = consume_Windows_Web_UI_IWebViewControlWebResourceRequestedEventArgs<D>; };

template <> struct abi<Windows::Web::UI::IWebViewControl>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Source(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Source(void* source) noexcept = 0;
    virtual HRESULT __stdcall get_DocumentTitle(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_CanGoBack(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_CanGoForward(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_DefaultBackgroundColor(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual HRESULT __stdcall get_DefaultBackgroundColor(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual HRESULT __stdcall get_ContainsFullScreenElement(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_Settings(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_DeferredPermissionRequests(void** value) noexcept = 0;
    virtual HRESULT __stdcall GoForward() noexcept = 0;
    virtual HRESULT __stdcall GoBack() noexcept = 0;
    virtual HRESULT __stdcall Refresh() noexcept = 0;
    virtual HRESULT __stdcall Stop() noexcept = 0;
    virtual HRESULT __stdcall Navigate(void* source) noexcept = 0;
    virtual HRESULT __stdcall NavigateToString(HSTRING text) noexcept = 0;
    virtual HRESULT __stdcall NavigateToLocalStreamUri(void* source, void* streamResolver) noexcept = 0;
    virtual HRESULT __stdcall NavigateWithHttpRequestMessage(void* requestMessage) noexcept = 0;
    virtual HRESULT __stdcall InvokeScriptAsync(HSTRING scriptName, void* arguments, void** operation) noexcept = 0;
    virtual HRESULT __stdcall CapturePreviewToStreamAsync(void* stream, void** operation) noexcept = 0;
    virtual HRESULT __stdcall CaptureSelectedContentToDataPackageAsync(void** operation) noexcept = 0;
    virtual HRESULT __stdcall BuildLocalStreamUri(HSTRING contentIdentifier, HSTRING relativePath, void** result) noexcept = 0;
    virtual HRESULT __stdcall GetDeferredPermissionRequestById(uint32_t id, void** result) noexcept = 0;
    virtual HRESULT __stdcall add_NavigationStarting(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_NavigationStarting(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_ContentLoading(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ContentLoading(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_DOMContentLoaded(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_DOMContentLoaded(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_NavigationCompleted(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_NavigationCompleted(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_FrameNavigationStarting(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_FrameNavigationStarting(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_FrameContentLoading(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_FrameContentLoading(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_FrameDOMContentLoaded(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_FrameDOMContentLoaded(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_FrameNavigationCompleted(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_FrameNavigationCompleted(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_ScriptNotify(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ScriptNotify(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_LongRunningScriptDetected(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_LongRunningScriptDetected(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_UnsafeContentWarningDisplaying(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_UnsafeContentWarningDisplaying(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_UnviewableContentIdentified(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_UnviewableContentIdentified(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_PermissionRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_PermissionRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_UnsupportedUriSchemeIdentified(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_UnsupportedUriSchemeIdentified(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_NewWindowRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_NewWindowRequested(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_ContainsFullScreenElementChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ContainsFullScreenElementChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_WebResourceRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_WebResourceRequested(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlContentLoadingEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlDeferredPermissionRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PermissionType(Windows::Web::UI::WebViewControlPermissionType* value) noexcept = 0;
    virtual HRESULT __stdcall Allow() noexcept = 0;
    virtual HRESULT __stdcall Deny() noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ExecutionTime(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual HRESULT __stdcall get_StopPageScriptExecution(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_StopPageScriptExecution(bool value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_IsSuccess(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_WebErrorStatus(Windows::Web::WebErrorStatus* value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlNavigationStartingEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Cancel(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Cancel(bool value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Referrer(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Handled(bool value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlPermissionRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_PermissionType(Windows::Web::UI::WebViewControlPermissionType* value) noexcept = 0;
    virtual HRESULT __stdcall get_State(Windows::Web::UI::WebViewControlPermissionState* value) noexcept = 0;
    virtual HRESULT __stdcall Defer() noexcept = 0;
    virtual HRESULT __stdcall Allow() noexcept = 0;
    virtual HRESULT __stdcall Deny() noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_PermissionRequest(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlScriptNotifyEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlSettings>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_IsJavaScriptEnabled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_IsJavaScriptEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsIndexedDBEnabled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_IsIndexedDBEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_IsScriptNotifyAllowed(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_IsScriptNotifyAllowed(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Handled(bool value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Referrer(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_MediaType(HSTRING* value) noexcept = 0;
};};

template <> struct abi<Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetDeferral(void** deferral) noexcept = 0;
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Response(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Response(void** value) noexcept = 0;
};};

}
