﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics {

struct ProcessDiagnosticInfo;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

struct HttpRequestMessage;
struct HttpResponseMessage;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http::Diagnostics {

enum class HttpDiagnosticRequestInitiator : int32_t
{
    ParsedElement = 0,
    Script = 1,
    Image = 2,
    Link = 3,
    Style = 4,
    XmlHttpRequest = 5,
    Media = 6,
    HtmlDownload = 7,
    Prefetch = 8,
    Other = 9,
    CrossOriginPreFlight = 10,
    Fetch = 11,
    Beacon = 12,
};

struct IHttpDiagnosticProvider;
struct IHttpDiagnosticProviderRequestResponseCompletedEventArgs;
struct IHttpDiagnosticProviderRequestResponseTimestamps;
struct IHttpDiagnosticProviderRequestSentEventArgs;
struct IHttpDiagnosticProviderResponseReceivedEventArgs;
struct IHttpDiagnosticProviderStatics;
struct IHttpDiagnosticSourceLocation;
struct HttpDiagnosticProvider;
struct HttpDiagnosticProviderRequestResponseCompletedEventArgs;
struct HttpDiagnosticProviderRequestResponseTimestamps;
struct HttpDiagnosticProviderRequestSentEventArgs;
struct HttpDiagnosticProviderResponseReceivedEventArgs;
struct HttpDiagnosticSourceLocation;

}

namespace winrt::impl {

template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider>{ using type = class_category; };
template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps>{ using type = class_category; };
template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>{ using type = class_category; };
template <> struct category<Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator>{ using type = enum_category; };
template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProvider" }; };
template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseCompletedEventArgs" }; };
template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestResponseTimestamps" }; };
template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderRequestSentEventArgs" }; };
template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderResponseReceivedEventArgs" }; };
template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticProviderStatics" }; };
template <> struct name<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.IHttpDiagnosticSourceLocation" }; };
template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProvider" }; };
template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseCompletedEventArgs" }; };
template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestResponseTimestamps" }; };
template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderRequestSentEventArgs" }; };
template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticProviderResponseReceivedEventArgs" }; };
template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticSourceLocation" }; };
template <> struct name<Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator>{ static constexpr auto & value{ L"Windows.Web.Http.Diagnostics.HttpDiagnosticRequestInitiator" }; };
template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>{ static constexpr guid value{ 0xBD811501,0xA056,0x4D39,{ 0xB1,0x74,0x83,0x3B,0x7B,0x03,0xB0,0x2C } }; };
template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>{ static constexpr guid value{ 0x735F98EE,0x94F6,0x4532,{ 0xB2,0x6E,0x61,0xE1,0xB1,0xE4,0xEF,0xD4 } }; };
template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>{ static constexpr guid value{ 0xE0AFDE10,0x55CF,0x4C01,{ 0x91,0xD4,0xA2,0x05,0x57,0xD8,0x49,0xF0 } }; };
template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>{ static constexpr guid value{ 0x3F5196D0,0x4C1F,0x4EBE,{ 0xA5,0x7A,0x06,0x93,0x07,0x71,0xC5,0x0D } }; };
template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>{ static constexpr guid value{ 0xA0A2566C,0xAB5F,0x4D66,{ 0xBB,0x2D,0x08,0x4C,0xF4,0x16,0x35,0xD0 } }; };
template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>{ static constexpr guid value{ 0x5B824EC1,0x6A6C,0x47CC,{ 0xAF,0xEC,0x1E,0x86,0xBC,0x26,0x05,0x3B } }; };
template <> struct guid_storage<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>{ static constexpr guid value{ 0x54A9D260,0x8860,0x423F,{ 0xB6,0xFA,0xD7,0x77,0x16,0xF6,0x47,0xA7 } }; };
template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider>{ using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider; };
template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs>{ using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs; };
template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps>{ using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps; };
template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs>{ using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs; };
template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs>{ using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs; };
template <> struct default_interface<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>{ using type = Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation; };

template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Start() noexcept = 0;
    virtual int32_t WINRT_CALL Stop() noexcept = 0;
    virtual int32_t WINRT_CALL add_RequestSent(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_RequestSent(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_ResponseReceived(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ResponseReceived(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_RequestResponseCompleted(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_RequestResponseCompleted(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ActivityId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Timestamps(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RequestedUri(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProcessId(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ThreadId(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Initiator(Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceLocations(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_CacheCheckedTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ConnectionInitiatedTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NameResolvedTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SslNegotiatedTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ConnectionCompletedTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RequestSentTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RequestCompletedTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ResponseReceivedTimestamp(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ResponseCompletedTimestamp(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ActivityId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Message(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProcessId(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ThreadId(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Initiator(Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceLocations(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ActivityId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Message(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromProcessDiagnosticInfo(void* processDiagnosticInfo, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SourceUri(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LineNumber(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ColumnNumber(uint64_t* value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider
{
    void Start() const;
    void Stop() const;
    winrt::event_token RequestSent(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> const& handler) const;
    using RequestSent_revoker = impl::event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider, &impl::abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_RequestSent>;
    RequestSent_revoker RequestSent(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> const& handler) const;
    void RequestSent(winrt::event_token const& token) const noexcept;
    winrt::event_token ResponseReceived(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> const& handler) const;
    using ResponseReceived_revoker = impl::event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider, &impl::abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_ResponseReceived>;
    ResponseReceived_revoker ResponseReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> const& handler) const;
    void ResponseReceived(winrt::event_token const& token) const noexcept;
    winrt::event_token RequestResponseCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> const& handler) const;
    using RequestResponseCompleted_revoker = impl::event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider, &impl::abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_RequestResponseCompleted>;
    RequestResponseCompleted_revoker RequestResponseCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> const& handler) const;
    void RequestResponseCompleted(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> { template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>; };

template <typename D>
struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    winrt::guid ActivityId() const;
    Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps Timestamps() const;
    Windows::Foundation::Uri RequestedUri() const;
    uint32_t ProcessId() const;
    uint32_t ThreadId() const;
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator Initiator() const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> SourceLocations() const;
};
template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs> { template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> CacheCheckedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ConnectionInitiatedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> NameResolvedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> SslNegotiatedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ConnectionCompletedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> RequestSentTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> RequestCompletedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ResponseReceivedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ResponseCompletedTimestamp() const;
};
template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps> { template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>; };

template <typename D>
struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs
{
    Windows::Foundation::DateTime Timestamp() const;
    winrt::guid ActivityId() const;
    Windows::Web::Http::HttpRequestMessage Message() const;
    uint32_t ProcessId() const;
    uint32_t ThreadId() const;
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator Initiator() const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> SourceLocations() const;
};
template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs> { template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs
{
    Windows::Foundation::DateTime Timestamp() const;
    winrt::guid ActivityId() const;
    Windows::Web::Http::HttpResponseMessage Message() const;
};
template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs> { template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticProvider CreateFromProcessDiagnosticInfo(Windows::System::Diagnostics::ProcessDiagnosticInfo const& processDiagnosticInfo) const;
};
template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics> { template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics<D>; };

template <typename D>
struct consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation
{
    Windows::Foundation::Uri SourceUri() const;
    uint64_t LineNumber() const;
    uint64_t ColumnNumber() const;
};
template <> struct consume<Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation> { template <typename D> using type = consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation<D>; };

}
