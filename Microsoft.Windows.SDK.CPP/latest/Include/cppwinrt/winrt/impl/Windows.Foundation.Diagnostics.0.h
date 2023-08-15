﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFolder;
struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics {

enum class CausalityRelation : int32_t
{
    AssignDelegate = 0,
    Join = 1,
    Choice = 2,
    Cancel = 3,
    Error = 4,
};

enum class CausalitySource : int32_t
{
    Application = 0,
    Library = 1,
    System = 2,
};

enum class CausalitySynchronousWork : int32_t
{
    CompletionNotification = 0,
    ProgressNotification = 1,
    Execution = 2,
};

enum class CausalityTraceLevel : int32_t
{
    Required = 0,
    Important = 1,
    Verbose = 2,
};

enum class ErrorOptions : uint32_t
{
    None = 0x0,
    SuppressExceptions = 0x1,
    ForceExceptions = 0x2,
    UseSetErrorInfo = 0x4,
    SuppressSetErrorInfo = 0x8,
};

enum class LoggingFieldFormat : int32_t
{
    Default = 0,
    Hidden = 1,
    String = 2,
    Boolean = 3,
    Hexadecimal = 4,
    ProcessId = 5,
    ThreadId = 6,
    Port = 7,
    Ipv4Address = 8,
    Ipv6Address = 9,
    SocketAddress = 10,
    Xml = 11,
    Json = 12,
    Win32Error = 13,
    NTStatus = 14,
    HResult = 15,
    FileTime = 16,
    Signed = 17,
    Unsigned = 18,
};

enum class LoggingLevel : int32_t
{
    Verbose = 0,
    Information = 1,
    Warning = 2,
    Error = 3,
    Critical = 4,
};

enum class LoggingOpcode : int32_t
{
    Info = 0,
    Start = 1,
    Stop = 2,
    Reply = 6,
    Resume = 7,
    Suspend = 8,
    Send = 9,
};

struct IAsyncCausalityTracerStatics;
struct IErrorDetails;
struct IErrorDetailsStatics;
struct IErrorReportingSettings;
struct IFileLoggingSession;
struct IFileLoggingSessionFactory;
struct ILogFileGeneratedEventArgs;
struct ILoggingActivity;
struct ILoggingActivity2;
struct ILoggingActivityFactory;
struct ILoggingChannel;
struct ILoggingChannel2;
struct ILoggingChannelFactory;
struct ILoggingChannelFactory2;
struct ILoggingChannelOptions;
struct ILoggingChannelOptionsFactory;
struct ILoggingFields;
struct ILoggingOptions;
struct ILoggingOptionsFactory;
struct ILoggingSession;
struct ILoggingSessionFactory;
struct ILoggingTarget;
struct ITracingStatusChangedEventArgs;
struct AsyncCausalityTracer;
struct ErrorDetails;
struct FileLoggingSession;
struct LogFileGeneratedEventArgs;
struct LoggingActivity;
struct LoggingChannel;
struct LoggingChannelOptions;
struct LoggingFields;
struct LoggingOptions;
struct LoggingSession;
struct RuntimeBrokerErrorSettings;
struct TracingStatusChangedEventArgs;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::Foundation::Diagnostics::ErrorOptions> : std::true_type {};
template <> struct category<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IErrorDetails>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IFileLoggingSession>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivity>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivity2>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannel>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannel2>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingFields>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingOptions>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingSession>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ILoggingTarget>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Diagnostics::AsyncCausalityTracer>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::ErrorDetails>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::FileLoggingSession>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingActivity>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingChannel>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingFields>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingOptions>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingSession>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalityRelation>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalitySource>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalitySynchronousWork>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::CausalityTraceLevel>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::ErrorOptions>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingFieldFormat>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingLevel>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Diagnostics::LoggingOpcode>{ using type = enum_category; };
template <> struct name<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics" }; };
template <> struct name<Windows::Foundation::Diagnostics::IErrorDetails>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IErrorDetails" }; };
template <> struct name<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IErrorDetailsStatics" }; };
template <> struct name<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IErrorReportingSettings" }; };
template <> struct name<Windows::Foundation::Diagnostics::IFileLoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IFileLoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.IFileLoggingSessionFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingActivity>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingActivity" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingActivity2>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingActivity2" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingActivityFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannel" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannel2>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannel2" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelFactory2" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingFields>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingFields" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingOptionsFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingSessionFactory" }; };
template <> struct name<Windows::Foundation::Diagnostics::ILoggingTarget>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ILoggingTarget" }; };
template <> struct name<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::AsyncCausalityTracer>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.AsyncCausalityTracer" }; };
template <> struct name<Windows::Foundation::Diagnostics::ErrorDetails>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ErrorDetails" }; };
template <> struct name<Windows::Foundation::Diagnostics::FileLoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.FileLoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingActivity>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingActivity" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingChannel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingChannel" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingChannelOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingFields>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingFields" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingSession>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingSession" }; };
template <> struct name<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings" }; };
template <> struct name<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalityRelation>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalityRelation" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalitySource>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalitySource" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalitySynchronousWork>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalitySynchronousWork" }; };
template <> struct name<Windows::Foundation::Diagnostics::CausalityTraceLevel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.CausalityTraceLevel" }; };
template <> struct name<Windows::Foundation::Diagnostics::ErrorOptions>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.ErrorOptions" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingFieldFormat>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingFieldFormat" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingLevel>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingLevel" }; };
template <> struct name<Windows::Foundation::Diagnostics::LoggingOpcode>{ static constexpr auto & value{ L"Windows.Foundation.Diagnostics.LoggingOpcode" }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ static constexpr guid value{ 0x50850B26,0x267E,0x451B,{ 0xA8,0x90,0xAB,0x6A,0x37,0x02,0x45,0xEE } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::IErrorDetails>{ static constexpr guid value{ 0x378CBB01,0x2CC9,0x428F,{ 0x8C,0x55,0x2C,0x99,0x0D,0x46,0x3E,0x8F } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ static constexpr guid value{ 0xB7703750,0x0B1D,0x46C8,{ 0xAA,0x0E,0x4B,0x81,0x78,0xE4,0xFC,0xE9 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ static constexpr guid value{ 0x16369792,0xB03E,0x4BA1,{ 0x8B,0xB8,0xD2,0x8F,0x4A,0xB4,0xD2,0xC0 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::IFileLoggingSession>{ static constexpr guid value{ 0x24C74216,0xFED2,0x404C,{ 0x89,0x5F,0x1F,0x96,0x99,0xCB,0x02,0xF7 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ static constexpr guid value{ 0xEEA08DCE,0x8447,0x4DAA,{ 0x91,0x33,0x12,0xEB,0x46,0xF6,0x97,0xD4 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ static constexpr guid value{ 0x269E976F,0x0D38,0x4C1A,{ 0xB5,0x3F,0xB3,0x95,0xD8,0x81,0xDF,0x84 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingActivity>{ static constexpr guid value{ 0xBC032941,0xB766,0x4CB5,{ 0x98,0x48,0x97,0xAC,0x6B,0xA6,0xD6,0x0C } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingActivity2>{ static constexpr guid value{ 0x26C29808,0x6322,0x456A,{ 0xAF,0x82,0x80,0xC8,0x64,0x2F,0x17,0x8B } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ static constexpr guid value{ 0x6B33B483,0xE10A,0x4C58,{ 0x97,0xD5,0x10,0xFB,0x45,0x10,0x74,0xFB } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingChannel>{ static constexpr guid value{ 0xE9A50343,0x11D7,0x4F01,{ 0xB5,0xCA,0xCF,0x49,0x52,0x78,0xC0,0xA8 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingChannel2>{ static constexpr guid value{ 0x9F4C3CF3,0x0BAC,0x45A5,{ 0x9E,0x33,0xBA,0xF3,0xF3,0xA2,0x46,0xA5 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ static constexpr guid value{ 0x4EDC5B9C,0xAF80,0x4A9B,{ 0xB0,0xDC,0x39,0x8F,0x9A,0xE5,0x20,0x7B } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ static constexpr guid value{ 0x4C6EF5DD,0x3B27,0x4DC9,{ 0x99,0xF0,0x29,0x9C,0x6E,0x46,0x03,0xA1 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ static constexpr guid value{ 0xC3E847FF,0x0EBB,0x4A53,{ 0x8C,0x54,0xDE,0xC2,0x49,0x26,0xCB,0x2C } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ static constexpr guid value{ 0xA93151DA,0x7FAF,0x4191,{ 0x87,0x55,0x5E,0x86,0xDC,0x65,0xD8,0x96 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingFields>{ static constexpr guid value{ 0xD7F6B7AF,0x762D,0x4579,{ 0x83,0xBD,0x52,0xC2,0x3B,0xC3,0x33,0xBC } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingOptions>{ static constexpr guid value{ 0x90BC7850,0x0192,0x4F5D,{ 0xAC,0x26,0x00,0x6A,0xDA,0xCA,0x12,0xD8 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ static constexpr guid value{ 0xD713C6CB,0x98AB,0x464B,{ 0x9F,0x22,0xA3,0x26,0x84,0x78,0x36,0x8A } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingSession>{ static constexpr guid value{ 0x6221F306,0x9380,0x4AD7,{ 0xBA,0xF5,0x41,0xEA,0x93,0x10,0xD7,0x68 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ static constexpr guid value{ 0x4E937EE5,0x58FD,0x45E0,{ 0x8C,0x2F,0xA1,0x32,0xEF,0xF9,0x5C,0x1E } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ILoggingTarget>{ static constexpr guid value{ 0x65F16C35,0xE388,0x4E26,{ 0xB1,0x7A,0xF5,0x1C,0xD3,0xA8,0x39,0x16 } }; };
template <> struct guid_storage<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ static constexpr guid value{ 0x410B7711,0xFF3B,0x477F,{ 0x9C,0x9A,0xD2,0xEF,0xDA,0x30,0x2D,0xC3 } }; };
template <> struct default_interface<Windows::Foundation::Diagnostics::ErrorDetails>{ using type = Windows::Foundation::Diagnostics::IErrorDetails; };
template <> struct default_interface<Windows::Foundation::Diagnostics::FileLoggingSession>{ using type = Windows::Foundation::Diagnostics::IFileLoggingSession; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs>{ using type = Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingActivity>{ using type = Windows::Foundation::Diagnostics::ILoggingActivity; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingChannel>{ using type = Windows::Foundation::Diagnostics::ILoggingChannel; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingChannelOptions>{ using type = Windows::Foundation::Diagnostics::ILoggingChannelOptions; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingFields>{ using type = Windows::Foundation::Diagnostics::ILoggingFields; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingOptions>{ using type = Windows::Foundation::Diagnostics::ILoggingOptions; };
template <> struct default_interface<Windows::Foundation::Diagnostics::LoggingSession>{ using type = Windows::Foundation::Diagnostics::ILoggingSession; };
template <> struct default_interface<Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings>{ using type = Windows::Foundation::Diagnostics::IErrorReportingSettings; };
template <> struct default_interface<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs>{ using type = Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs; };

template <> struct abi<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, void* operationName, uint64_t relatedContext) noexcept = 0;
    virtual int32_t WINRT_CALL TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, Windows::Foundation::AsyncStatus status) noexcept = 0;
    virtual int32_t WINRT_CALL TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation relation) noexcept = 0;
    virtual int32_t WINRT_CALL TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) noexcept = 0;
    virtual int32_t WINRT_CALL TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) noexcept = 0;
    virtual int32_t WINRT_CALL add_TracingStatusChanged(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_TracingStatusChanged(winrt::event_token cookie) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IErrorDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Description(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LongDescription(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_HelpUri(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IErrorDetailsStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromHResultAsync(int32_t errorCode, void** operation) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IErrorReportingSettings>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions value) noexcept = 0;
    virtual int32_t WINRT_CALL GetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions* value) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IFileLoggingSession>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL AddLoggingChannel(void* loggingChannel) noexcept = 0;
    virtual int32_t WINRT_CALL AddLoggingChannelWithLevel(void* loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) noexcept = 0;
    virtual int32_t WINRT_CALL RemoveLoggingChannel(void* loggingChannel) noexcept = 0;
    virtual int32_t WINRT_CALL CloseAndSaveToFileAsync(void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL add_LogFileGenerated(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_LogFileGenerated(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* name, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_File(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivity>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Id(winrt::guid* value) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivity2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Channel(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL StopActivity(void* stopEventName) noexcept = 0;
    virtual int32_t WINRT_CALL StopActivityWithFields(void* stopEventName, void* fields) noexcept = 0;
    virtual int32_t WINRT_CALL StopActivityWithFieldsAndOptions(void* stopEventName, void* fields, void* options) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingActivityFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateLoggingActivity(void* activityName, void* loggingChannel, void** loggingActivity) noexcept = 0;
    virtual int32_t WINRT_CALL CreateLoggingActivityWithLevel(void* activityName, void* loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel level, void** loggingActivity) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannel>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Enabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Level(Windows::Foundation::Diagnostics::LoggingLevel* value) noexcept = 0;
    virtual int32_t WINRT_CALL LogMessage(void* eventString) noexcept = 0;
    virtual int32_t WINRT_CALL LogMessageWithLevel(void* eventString, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept = 0;
    virtual int32_t WINRT_CALL LogValuePair(void* value1, int32_t value2) noexcept = 0;
    virtual int32_t WINRT_CALL LogValuePairWithLevel(void* value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept = 0;
    virtual int32_t WINRT_CALL add_LoggingEnabled(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_LoggingEnabled(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannel2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(winrt::guid* value) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* name, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelFactory2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateWithOptions(void* name, void* options, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateWithOptionsAndId(void* name, void* options, winrt::guid id, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelOptions>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Group(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Group(winrt::guid value) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(winrt::guid group, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingFields>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Clear() noexcept = 0;
    virtual int32_t WINRT_CALL BeginStruct(void* name) noexcept = 0;
    virtual int32_t WINRT_CALL BeginStructWithTags(void* name, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL EndStruct() noexcept = 0;
    virtual int32_t WINRT_CALL AddEmpty(void* name) noexcept = 0;
    virtual int32_t WINRT_CALL AddEmptyWithFormat(void* name, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddEmptyWithFormatAndTags(void* name, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt8(void* name, uint8_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt8WithFormat(void* name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt8WithFormatAndTags(void* name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt8Array(void* name, uint32_t __valueSize, uint8_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt8ArrayWithFormat(void* name, uint32_t __valueSize, uint8_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt8ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint8_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt16(void* name, int16_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt16WithFormat(void* name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt16WithFormatAndTags(void* name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt16Array(void* name, uint32_t __valueSize, int16_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt16ArrayWithFormat(void* name, uint32_t __valueSize, int16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt16ArrayWithFormatAndTags(void* name, uint32_t __valueSize, int16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt16(void* name, uint16_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt16WithFormat(void* name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt16WithFormatAndTags(void* name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt16Array(void* name, uint32_t __valueSize, uint16_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt16ArrayWithFormat(void* name, uint32_t __valueSize, uint16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt16ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt32(void* name, int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt32WithFormat(void* name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt32WithFormatAndTags(void* name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt32Array(void* name, uint32_t __valueSize, int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt32ArrayWithFormat(void* name, uint32_t __valueSize, int32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt32ArrayWithFormatAndTags(void* name, uint32_t __valueSize, int32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt32(void* name, uint32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt32WithFormat(void* name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt32WithFormatAndTags(void* name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt32Array(void* name, uint32_t __valueSize, uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt32ArrayWithFormat(void* name, uint32_t __valueSize, uint32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt32ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt64(void* name, int64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt64WithFormat(void* name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt64WithFormatAndTags(void* name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt64Array(void* name, uint32_t __valueSize, int64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt64ArrayWithFormat(void* name, uint32_t __valueSize, int64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddInt64ArrayWithFormatAndTags(void* name, uint32_t __valueSize, int64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt64(void* name, uint64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt64WithFormat(void* name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt64WithFormatAndTags(void* name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt64Array(void* name, uint32_t __valueSize, uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt64ArrayWithFormat(void* name, uint32_t __valueSize, uint64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddUInt64ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddSingle(void* name, float value) noexcept = 0;
    virtual int32_t WINRT_CALL AddSingleWithFormat(void* name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddSingleWithFormatAndTags(void* name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddSingleArray(void* name, uint32_t __valueSize, float* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddSingleArrayWithFormat(void* name, uint32_t __valueSize, float* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddSingleArrayWithFormatAndTags(void* name, uint32_t __valueSize, float* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddDouble(void* name, double value) noexcept = 0;
    virtual int32_t WINRT_CALL AddDoubleWithFormat(void* name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddDoubleWithFormatAndTags(void* name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddDoubleArray(void* name, uint32_t __valueSize, double* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddDoubleArrayWithFormat(void* name, uint32_t __valueSize, double* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddDoubleArrayWithFormatAndTags(void* name, uint32_t __valueSize, double* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddChar16(void* name, char16_t value) noexcept = 0;
    virtual int32_t WINRT_CALL AddChar16WithFormat(void* name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddChar16WithFormatAndTags(void* name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddChar16Array(void* name, uint32_t __valueSize, char16_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddChar16ArrayWithFormat(void* name, uint32_t __valueSize, char16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddChar16ArrayWithFormatAndTags(void* name, uint32_t __valueSize, char16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddBoolean(void* name, bool value) noexcept = 0;
    virtual int32_t WINRT_CALL AddBooleanWithFormat(void* name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddBooleanWithFormatAndTags(void* name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddBooleanArray(void* name, uint32_t __valueSize, bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddBooleanArrayWithFormat(void* name, uint32_t __valueSize, bool* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddBooleanArrayWithFormatAndTags(void* name, uint32_t __valueSize, bool* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddString(void* name, void* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddStringWithFormat(void* name, void* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddStringWithFormatAndTags(void* name, void* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddStringArray(void* name, uint32_t __valueSize, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL AddStringArrayWithFormat(void* name, uint32_t __valueSize, void** value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddStringArrayWithFormatAndTags(void* name, uint32_t __valueSize, void** value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddGuid(void* name, winrt::guid value) noexcept = 0;
    virtual int32_t WINRT_CALL AddGuidWithFormat(void* name, winrt::guid value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddGuidWithFormatAndTags(void* name, winrt::guid value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddGuidArray(void* name, uint32_t __valueSize, winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddGuidArrayWithFormat(void* name, uint32_t __valueSize, winrt::guid* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddGuidArrayWithFormatAndTags(void* name, uint32_t __valueSize, winrt::guid* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddDateTime(void* name, Windows::Foundation::DateTime value) noexcept = 0;
    virtual int32_t WINRT_CALL AddDateTimeWithFormat(void* name, Windows::Foundation::DateTime value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddDateTimeWithFormatAndTags(void* name, Windows::Foundation::DateTime value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddDateTimeArray(void* name, uint32_t __valueSize, Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddDateTimeArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::DateTime* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddDateTimeArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::DateTime* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddTimeSpan(void* name, Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL AddTimeSpanWithFormat(void* name, Windows::Foundation::TimeSpan value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddTimeSpanWithFormatAndTags(void* name, Windows::Foundation::TimeSpan value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddTimeSpanArray(void* name, uint32_t __valueSize, Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddTimeSpanArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::TimeSpan* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddTimeSpanArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::TimeSpan* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddPoint(void* name, Windows::Foundation::Point value) noexcept = 0;
    virtual int32_t WINRT_CALL AddPointWithFormat(void* name, Windows::Foundation::Point value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddPointWithFormatAndTags(void* name, Windows::Foundation::Point value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddPointArray(void* name, uint32_t __valueSize, Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddPointArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::Point* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddPointArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::Point* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddSize(void* name, Windows::Foundation::Size value) noexcept = 0;
    virtual int32_t WINRT_CALL AddSizeWithFormat(void* name, Windows::Foundation::Size value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddSizeWithFormatAndTags(void* name, Windows::Foundation::Size value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddSizeArray(void* name, uint32_t __valueSize, Windows::Foundation::Size* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddSizeArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::Size* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddSizeArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::Size* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddRect(void* name, Windows::Foundation::Rect value) noexcept = 0;
    virtual int32_t WINRT_CALL AddRectWithFormat(void* name, Windows::Foundation::Rect value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddRectWithFormatAndTags(void* name, Windows::Foundation::Rect value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
    virtual int32_t WINRT_CALL AddRectArray(void* name, uint32_t __valueSize, Windows::Foundation::Rect* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddRectArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::Rect* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept = 0;
    virtual int32_t WINRT_CALL AddRectArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::Rect* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingOptions>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Keywords(int64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Keywords(int64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Tags(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Tags(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Task(int16_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Task(int16_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Opcode(Windows::Foundation::Diagnostics::LoggingOpcode* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Opcode(Windows::Foundation::Diagnostics::LoggingOpcode value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ActivityId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ActivityId(winrt::guid value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RelatedActivityId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RelatedActivityId(winrt::guid value) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingOptionsFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateWithKeywords(int64_t keywords, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingSession>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL SaveToFileAsync(void* folder, void* fileName, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL AddLoggingChannel(void* loggingChannel) noexcept = 0;
    virtual int32_t WINRT_CALL AddLoggingChannelWithLevel(void* loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) noexcept = 0;
    virtual int32_t WINRT_CALL RemoveLoggingChannel(void* loggingChannel) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingSessionFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* name, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ILoggingTarget>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL IsEnabled(bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsEnabledWithLevel(Windows::Foundation::Diagnostics::LoggingLevel level, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsEnabledWithLevelAndKeywords(Windows::Foundation::Diagnostics::LoggingLevel level, int64_t keywords, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL LogEvent(void* eventName) noexcept = 0;
    virtual int32_t WINRT_CALL LogEventWithFields(void* eventName, void* fields) noexcept = 0;
    virtual int32_t WINRT_CALL LogEventWithFieldsAndLevel(void* eventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept = 0;
    virtual int32_t WINRT_CALL LogEventWithFieldsAndOptions(void* eventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level, void* options) noexcept = 0;
    virtual int32_t WINRT_CALL StartActivity(void* startEventName, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL StartActivityWithFields(void* startEventName, void* fields, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL StartActivityWithFieldsAndLevel(void* startEventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL StartActivityWithFieldsAndOptions(void* startEventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level, void* options, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Enabled(bool* enabled) noexcept = 0;
    virtual int32_t WINRT_CALL get_TraceLevel(Windows::Foundation::Diagnostics::CausalityTraceLevel* value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics
{
    void TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext) const;
    void TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status) const;
    void TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation) const;
    void TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const;
    void TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const;
    winrt::event_token TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const;
    using TracingStatusChanged_revoker = impl::event_revoker<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics, &impl::abi_t<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>::remove_TracingStatusChanged>;
    TracingStatusChanged_revoker TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const;
    void TracingStatusChanged(winrt::event_token const& cookie) const noexcept;
};
template <> struct consume<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IErrorDetails
{
    hstring Description() const;
    hstring LongDescription() const;
    Windows::Foundation::Uri HelpUri() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IErrorDetails> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorDetails<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> CreateFromHResultAsync(int32_t errorCode) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IErrorDetailsStatics> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IErrorReportingSettings
{
    void SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions const& value) const;
    Windows::Foundation::Diagnostics::ErrorOptions GetErrorOptions() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IErrorReportingSettings> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IErrorReportingSettings<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IFileLoggingSession
{
    hstring Name() const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const;
    void RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> CloseAndSaveToFileAsync() const;
    winrt::event_token LogFileGenerated(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const;
    using LogFileGenerated_revoker = impl::event_revoker<Windows::Foundation::Diagnostics::IFileLoggingSession, &impl::abi_t<Windows::Foundation::Diagnostics::IFileLoggingSession>::remove_LogFileGenerated>;
    LogFileGenerated_revoker LogFileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const;
    void LogFileGenerated(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::Foundation::Diagnostics::IFileLoggingSession> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory
{
    Windows::Foundation::Diagnostics::FileLoggingSession Create(param::hstring const& name) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs
{
    Windows::Storage::StorageFile File() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingActivity
{
    hstring Name() const;
    winrt::guid Id() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivity> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivity<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingActivity2
{
    Windows::Foundation::Diagnostics::LoggingChannel Channel() const;
    void StopActivity(param::hstring const& stopEventName) const;
    void StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
    void StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivity2> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory
{
    Windows::Foundation::Diagnostics::LoggingActivity CreateLoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    Windows::Foundation::Diagnostics::LoggingActivity CreateLoggingActivityWithLevel(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingActivityFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannel
{
    hstring Name() const;
    bool Enabled() const;
    Windows::Foundation::Diagnostics::LoggingLevel Level() const;
    void LogMessage(param::hstring const& eventString) const;
    void LogMessage(param::hstring const& eventString, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    void LogValuePair(param::hstring const& value1, int32_t value2) const;
    void LogValuePair(param::hstring const& value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    winrt::event_token LoggingEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const;
    using LoggingEnabled_revoker = impl::event_revoker<Windows::Foundation::Diagnostics::ILoggingChannel, &impl::abi_t<Windows::Foundation::Diagnostics::ILoggingChannel>::remove_LoggingEnabled>;
    LoggingEnabled_revoker LoggingEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const;
    void LoggingEnabled(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannel> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannel2
{
    winrt::guid Id() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannel2> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannel2<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory
{
    Windows::Foundation::Diagnostics::LoggingChannel Create(param::hstring const& name) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2
{
    Windows::Foundation::Diagnostics::LoggingChannel CreateWithOptions(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options) const;
    Windows::Foundation::Diagnostics::LoggingChannel CreateWithOptionsAndId(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, winrt::guid const& id) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelFactory2> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions
{
    winrt::guid Group() const;
    void Group(winrt::guid const& value) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelOptions> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory
{
    Windows::Foundation::Diagnostics::LoggingChannelOptions Create(winrt::guid const& group) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingFields
{
    void Clear() const;
    void BeginStruct(param::hstring const& name) const;
    void BeginStruct(param::hstring const& name, int32_t tags) const;
    void EndStruct() const;
    void AddEmpty(param::hstring const& name) const;
    void AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt8(param::hstring const& name, uint8_t value) const;
    void AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value) const;
    void AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt16(param::hstring const& name, int16_t value) const;
    void AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt16Array(param::hstring const& name, array_view<int16_t const> value) const;
    void AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt16(param::hstring const& name, uint16_t value) const;
    void AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value) const;
    void AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt32(param::hstring const& name, int32_t value) const;
    void AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt32Array(param::hstring const& name, array_view<int32_t const> value) const;
    void AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt32(param::hstring const& name, uint32_t value) const;
    void AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value) const;
    void AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt64(param::hstring const& name, int64_t value) const;
    void AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddInt64Array(param::hstring const& name, array_view<int64_t const> value) const;
    void AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt64(param::hstring const& name, uint64_t value) const;
    void AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value) const;
    void AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSingle(param::hstring const& name, float value) const;
    void AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSingleArray(param::hstring const& name, array_view<float const> value) const;
    void AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDouble(param::hstring const& name, double value) const;
    void AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDoubleArray(param::hstring const& name, array_view<double const> value) const;
    void AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddChar16(param::hstring const& name, char16_t value) const;
    void AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddChar16Array(param::hstring const& name, array_view<char16_t const> value) const;
    void AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddBoolean(param::hstring const& name, bool value) const;
    void AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddBooleanArray(param::hstring const& name, array_view<bool const> value) const;
    void AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddString(param::hstring const& name, param::hstring const& value) const;
    void AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddStringArray(param::hstring const& name, array_view<hstring const> value) const;
    void AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddGuid(param::hstring const& name, winrt::guid const& value) const;
    void AddGuid(param::hstring const& name, winrt::guid const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddGuid(param::hstring const& name, winrt::guid const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value) const;
    void AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value) const;
    void AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value) const;
    void AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value) const;
    void AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value) const;
    void AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddPoint(param::hstring const& name, Windows::Foundation::Point const& value) const;
    void AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value) const;
    void AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSize(param::hstring const& name, Windows::Foundation::Size const& value) const;
    void AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value) const;
    void AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddRect(param::hstring const& name, Windows::Foundation::Rect const& value) const;
    void AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
    void AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value) const;
    void AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const;
    void AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingFields> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingFields<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingOptions
{
    int64_t Keywords() const;
    void Keywords(int64_t value) const;
    int32_t Tags() const;
    void Tags(int32_t value) const;
    int16_t Task() const;
    void Task(int16_t value) const;
    Windows::Foundation::Diagnostics::LoggingOpcode Opcode() const;
    void Opcode(Windows::Foundation::Diagnostics::LoggingOpcode const& value) const;
    winrt::guid ActivityId() const;
    void ActivityId(winrt::guid const& value) const;
    winrt::guid RelatedActivityId() const;
    void RelatedActivityId(winrt::guid const& value) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingOptions> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory
{
    Windows::Foundation::Diagnostics::LoggingOptions CreateWithKeywords(int64_t keywords) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingOptionsFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingSession
{
    hstring Name() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> SaveToFileAsync(Windows::Storage::IStorageFolder const& folder, param::hstring const& fileName) const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
    void AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const;
    void RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingSession> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingSession<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory
{
    Windows::Foundation::Diagnostics::LoggingSession Create(param::hstring const& name) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingSessionFactory> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ILoggingTarget
{
    bool IsEnabled() const;
    bool IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    bool IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level, int64_t keywords) const;
    void LogEvent(param::hstring const& eventName) const;
    void LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
    void LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    void LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const;
    Windows::Foundation::Diagnostics::LoggingActivity StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ILoggingTarget> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>; };

template <typename D>
struct consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs
{
    bool Enabled() const;
    Windows::Foundation::Diagnostics::CausalityTraceLevel TraceLevel() const;
};
template <> struct consume<Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> { template <typename D> using type = consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs<D>; };

}
