﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "winrt/base.h"

#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Foundation.Diagnostics.2.h"
#include "winrt/Windows.Foundation.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceOperationCreation(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(operationName), relatedContext));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceOperationCompletion(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(status)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceOperationRelation(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(relation)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceSynchronousWorkStart(get_abi(traceLevel), get_abi(source), get_abi(platformId), operationId, get_abi(work)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->TraceSynchronousWorkCompletion(get_abi(traceLevel), get_abi(source), get_abi(work)));
}

template <typename D> winrt::event_token consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const
{
    winrt::event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->add_TracingStatusChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> typename consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TracingStatusChanged_revoker consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, TracingStatusChanged_revoker>(this, TracingStatusChanged(handler));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics<D>::TracingStatusChanged(winrt::event_token const& cookie) const noexcept
{
    WINRT_VERIFY_(0, WINRT_SHIM(Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics)->remove_TracingStatusChanged(get_abi(cookie)));
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_IErrorDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_IErrorDetails<D>::LongDescription() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetails)->get_LongDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Foundation_Diagnostics_IErrorDetails<D>::HelpUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetails)->get_HelpUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> consume_Windows_Foundation_Diagnostics_IErrorDetailsStatics<D>::CreateFromHResultAsync(int32_t errorCode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorDetailsStatics)->CreateFromHResultAsync(errorCode, put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IErrorReportingSettings<D>::SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorReportingSettings)->SetErrorOptions(get_abi(value)));
}

template <typename D> Windows::Foundation::Diagnostics::ErrorOptions consume_Windows_Foundation_Diagnostics_IErrorReportingSettings<D>::GetErrorOptions() const
{
    Windows::Foundation::Diagnostics::ErrorOptions value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IErrorReportingSettings)->GetErrorOptions(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->AddLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->AddLoggingChannelWithLevel(get_abi(loggingChannel), get_abi(maxLevel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->RemoveLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::CloseAndSaveToFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->CloseAndSaveToFileAsync(put_abi(operation)));
    return operation;
}

template <typename D> winrt::event_token consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::LogFileGenerated(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const
{
    winrt::event_token token{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->add_LogFileGenerated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> typename consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::LogFileGenerated_revoker consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::LogFileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, LogFileGenerated_revoker>(this, LogFileGenerated(handler));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_IFileLoggingSession<D>::LogFileGenerated(winrt::event_token const& token) const noexcept
{
    WINRT_VERIFY_(0, WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSession)->remove_LogFileGenerated(get_abi(token)));
}

template <typename D> Windows::Foundation::Diagnostics::FileLoggingSession consume_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory<D>::Create(param::hstring const& name) const
{
    Windows::Foundation::Diagnostics::FileLoggingSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::IFileLoggingSessionFactory)->Create(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs)->get_File(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_ILoggingActivity<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity)->get_Name(put_abi(value)));
    return value;
}

template <typename D> winrt::guid consume_Windows_Foundation_Diagnostics_ILoggingActivity<D>::Id() const
{
    winrt::guid value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::Channel() const
{
    Windows::Foundation::Diagnostics::LoggingChannel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->get_Channel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::StopActivity(param::hstring const& stopEventName) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->StopActivity(get_abi(stopEventName)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->StopActivityWithFields(get_abi(stopEventName), get_abi(fields)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingActivity2<D>::StopActivity(param::hstring const& stopEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivity2)->StopActivityWithFieldsAndOptions(get_abi(stopEventName), get_abi(fields), get_abi(options)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory<D>::CreateLoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    Windows::Foundation::Diagnostics::LoggingActivity loggingActivity{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivityFactory)->CreateLoggingActivity(get_abi(activityName), get_abi(loggingChannel), put_abi(loggingActivity)));
    return loggingActivity;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingActivityFactory<D>::CreateLoggingActivityWithLevel(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    Windows::Foundation::Diagnostics::LoggingActivity loggingActivity{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingActivityFactory)->CreateLoggingActivityWithLevel(get_abi(activityName), get_abi(loggingChannel), get_abi(level), put_abi(loggingActivity)));
    return loggingActivity;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->get_Name(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->get_Enabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingLevel consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::Level() const
{
    Windows::Foundation::Diagnostics::LoggingLevel value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->get_Level(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogMessage(param::hstring const& eventString) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogMessage(get_abi(eventString)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogMessage(param::hstring const& eventString, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogMessageWithLevel(get_abi(eventString), get_abi(level)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogValuePair(param::hstring const& value1, int32_t value2) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogValuePair(get_abi(value1), value2));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LogValuePair(param::hstring const& value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->LogValuePairWithLevel(get_abi(value1), value2, get_abi(level)));
}

template <typename D> winrt::event_token consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LoggingEnabled(Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const
{
    winrt::event_token token{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->add_LoggingEnabled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> typename consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LoggingEnabled_revoker consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LoggingEnabled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, LoggingEnabled_revoker>(this, LoggingEnabled(handler));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannel<D>::LoggingEnabled(winrt::event_token const& token) const noexcept
{
    WINRT_VERIFY_(0, WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel)->remove_LoggingEnabled(get_abi(token)));
}

template <typename D> winrt::guid consume_Windows_Foundation_Diagnostics_ILoggingChannel2<D>::Id() const
{
    winrt::guid value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannel2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory<D>::Create(param::hstring const& name) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelFactory)->Create(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2<D>::CreateWithOptions(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelFactory2)->CreateWithOptions(get_abi(name), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannel consume_Windows_Foundation_Diagnostics_ILoggingChannelFactory2<D>::CreateWithOptionsAndId(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, winrt::guid const& id) const
{
    Windows::Foundation::Diagnostics::LoggingChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelFactory2)->CreateWithOptionsAndId(get_abi(name), get_abi(options), get_abi(id), put_abi(result)));
    return result;
}

template <typename D> winrt::guid consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions<D>::Group() const
{
    winrt::guid value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelOptions)->get_Group(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingChannelOptions<D>::Group(winrt::guid const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelOptions)->put_Group(get_abi(value)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingChannelOptions consume_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory<D>::Create(winrt::guid const& group) const
{
    Windows::Foundation::Diagnostics::LoggingChannelOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory)->Create(get_abi(group), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->Clear());
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::BeginStruct(param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->BeginStruct(get_abi(name)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::BeginStruct(param::hstring const& name, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->BeginStructWithTags(get_abi(name), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::EndStruct() const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->EndStruct());
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddEmpty(param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddEmpty(get_abi(name)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddEmptyWithFormat(get_abi(name), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddEmpty(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddEmptyWithFormatAndTags(get_abi(name), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8(param::hstring const& name, uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8(param::hstring const& name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt8Array(param::hstring const& name, array_view<uint8_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt8ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16(param::hstring const& name, int16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16(param::hstring const& name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16Array(param::hstring const& name, array_view<int16_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt16Array(param::hstring const& name, array_view<int16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt16ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16(param::hstring const& name, uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16(param::hstring const& name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt16Array(param::hstring const& name, array_view<uint16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt16ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32(param::hstring const& name, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32(param::hstring const& name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32Array(param::hstring const& name, array_view<int32_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt32Array(param::hstring const& name, array_view<int32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt32ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32(param::hstring const& name, uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32(param::hstring const& name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt32Array(param::hstring const& name, array_view<uint32_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt32ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64(param::hstring const& name, int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64(param::hstring const& name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64Array(param::hstring const& name, array_view<int64_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddInt64Array(param::hstring const& name, array_view<int64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddInt64ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64(param::hstring const& name, uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64(param::hstring const& name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddUInt64Array(param::hstring const& name, array_view<uint64_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddUInt64ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingle(param::hstring const& name, float value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingle(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleWithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingle(param::hstring const& name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleWithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingleArray(param::hstring const& name, array_view<float const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSingleArray(param::hstring const& name, array_view<float const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSingleArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDouble(param::hstring const& name, double value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDouble(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleWithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDouble(param::hstring const& name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleWithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDoubleArray(param::hstring const& name, array_view<double const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDoubleArray(param::hstring const& name, array_view<double const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDoubleArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16(param::hstring const& name, char16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16WithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16(param::hstring const& name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16WithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16Array(param::hstring const& name, array_view<char16_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16Array(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16ArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddChar16Array(param::hstring const& name, array_view<char16_t const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddChar16ArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBoolean(param::hstring const& name, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBoolean(get_abi(name), value));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanWithFormat(get_abi(name), value, get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBoolean(param::hstring const& name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanWithFormatAndTags(get_abi(name), value, get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBooleanArray(param::hstring const& name, array_view<bool const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddBooleanArray(param::hstring const& name, array_view<bool const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddBooleanArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddString(param::hstring const& name, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddString(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddString(param::hstring const& name, param::hstring const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddStringArray(param::hstring const& name, array_view<hstring const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddStringArray(param::hstring const& name, array_view<hstring const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddStringArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuid(param::hstring const& name, winrt::guid const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuid(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuid(param::hstring const& name, winrt::guid const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuid(param::hstring const& name, winrt::guid const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddGuidArray(param::hstring const& name, array_view<winrt::guid const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddGuidArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTime(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTime(param::hstring const& name, Windows::Foundation::DateTime const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddDateTimeArray(param::hstring const& name, array_view<Windows::Foundation::DateTime const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddDateTimeArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpan(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpan(param::hstring const& name, Windows::Foundation::TimeSpan const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddTimeSpanArray(param::hstring const& name, array_view<Windows::Foundation::TimeSpan const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddTimeSpanArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPoint(param::hstring const& name, Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPoint(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPoint(param::hstring const& name, Windows::Foundation::Point const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddPointArray(param::hstring const& name, array_view<Windows::Foundation::Point const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddPointArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSize(param::hstring const& name, Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSize(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSize(param::hstring const& name, Windows::Foundation::Size const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddSizeArray(param::hstring const& name, array_view<Windows::Foundation::Size const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddSizeArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRect(param::hstring const& name, Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRect(get_abi(name), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectWithFormat(get_abi(name), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRect(param::hstring const& name, Windows::Foundation::Rect const& value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectWithFormatAndTags(get_abi(name), get_abi(value), get_abi(format), tags));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectArray(get_abi(name), value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectArrayWithFormat(get_abi(name), value.size(), get_abi(value), get_abi(format)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingFields<D>::AddRectArray(param::hstring const& name, array_view<Windows::Foundation::Rect const> value, Windows::Foundation::Diagnostics::LoggingFieldFormat const& format, int32_t tags) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingFields)->AddRectArrayWithFormatAndTags(get_abi(name), value.size(), get_abi(value), get_abi(format), tags));
}

template <typename D> int64_t consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Keywords() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Keywords(&value));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Keywords(int64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Keywords(value));
}

template <typename D> int32_t consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Tags() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Tags(&value));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Tags(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Tags(value));
}

template <typename D> int16_t consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Task() const
{
    int16_t value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Task(&value));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Task(int16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Task(value));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingOpcode consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Opcode() const
{
    Windows::Foundation::Diagnostics::LoggingOpcode value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_Opcode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::Opcode(Windows::Foundation::Diagnostics::LoggingOpcode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_Opcode(get_abi(value)));
}

template <typename D> winrt::guid consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::ActivityId() const
{
    winrt::guid value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::ActivityId(winrt::guid const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_ActivityId(get_abi(value)));
}

template <typename D> winrt::guid consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::RelatedActivityId() const
{
    winrt::guid value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->get_RelatedActivityId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingOptions<D>::RelatedActivityId(winrt::guid const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptions)->put_RelatedActivityId(get_abi(value)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingOptions consume_Windows_Foundation_Diagnostics_ILoggingOptionsFactory<D>::CreateWithKeywords(int64_t keywords) const
{
    Windows::Foundation::Diagnostics::LoggingOptions result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingOptionsFactory)->CreateWithKeywords(keywords, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::SaveToFileAsync(Windows::Storage::IStorageFolder const& folder, param::hstring const& fileName) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->SaveToFileAsync(get_abi(folder), get_abi(fileName), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->AddLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::AddLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& maxLevel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->AddLoggingChannelWithLevel(get_abi(loggingChannel), get_abi(maxLevel)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingSession<D>::RemoveLoggingChannel(Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSession)->RemoveLoggingChannel(get_abi(loggingChannel)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingSession consume_Windows_Foundation_Diagnostics_ILoggingSessionFactory<D>::Create(param::hstring const& name) const
{
    Windows::Foundation::Diagnostics::LoggingSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingSessionFactory)->Create(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::IsEnabled() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->IsEnabled(&result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->IsEnabledWithLevel(get_abi(level), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::IsEnabled(Windows::Foundation::Diagnostics::LoggingLevel const& level, int64_t keywords) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->IsEnabledWithLevelAndKeywords(get_abi(level), keywords, &result));
    return result;
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEvent(get_abi(eventName)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEventWithFields(get_abi(eventName), get_abi(fields)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEventWithFieldsAndLevel(get_abi(eventName), get_abi(fields), get_abi(level)));
}

template <typename D> void consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::LogEvent(param::hstring const& eventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->LogEventWithFieldsAndOptions(get_abi(eventName), get_abi(fields), get_abi(level), get_abi(options)));
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivity(get_abi(startEventName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivityWithFields(get_abi(startEventName), get_abi(fields), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivityWithFieldsAndLevel(get_abi(startEventName), get_abi(fields), get_abi(level), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Diagnostics::LoggingActivity consume_Windows_Foundation_Diagnostics_ILoggingTarget<D>::StartActivity(param::hstring const& startEventName, Windows::Foundation::Diagnostics::LoggingFields const& fields, Windows::Foundation::Diagnostics::LoggingLevel const& level, Windows::Foundation::Diagnostics::LoggingOptions const& options) const
{
    Windows::Foundation::Diagnostics::LoggingActivity result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ILoggingTarget)->StartActivityWithFieldsAndOptions(get_abi(startEventName), get_abi(fields), get_abi(level), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs<D>::Enabled() const
{
    bool enabled{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs)->get_Enabled(&enabled));
    return enabled;
}

template <typename D> Windows::Foundation::Diagnostics::CausalityTraceLevel consume_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs<D>::TraceLevel() const
{
    Windows::Foundation::Diagnostics::CausalityTraceLevel value{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs)->get_TraceLevel(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> : produce_base<D, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>
{
    int32_t WINRT_CALL TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, void* operationName, uint64_t relatedContext) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TraceOperationCreation, WINRT_WRAP(void), Windows::Foundation::Diagnostics::CausalityTraceLevel const&, Windows::Foundation::Diagnostics::CausalitySource const&, winrt::guid const&, uint64_t, hstring const&, uint64_t);
            this->shim().TraceOperationCreation(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<winrt::guid const*>(&platformId), operationId, *reinterpret_cast<hstring const*>(&operationName), relatedContext);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, Windows::Foundation::AsyncStatus status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TraceOperationCompletion, WINRT_WRAP(void), Windows::Foundation::Diagnostics::CausalityTraceLevel const&, Windows::Foundation::Diagnostics::CausalitySource const&, winrt::guid const&, uint64_t, Windows::Foundation::AsyncStatus const&);
            this->shim().TraceOperationCompletion(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<winrt::guid const*>(&platformId), operationId, *reinterpret_cast<Windows::Foundation::AsyncStatus const*>(&status));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation relation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TraceOperationRelation, WINRT_WRAP(void), Windows::Foundation::Diagnostics::CausalityTraceLevel const&, Windows::Foundation::Diagnostics::CausalitySource const&, winrt::guid const&, uint64_t, Windows::Foundation::Diagnostics::CausalityRelation const&);
            this->shim().TraceOperationRelation(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<winrt::guid const*>(&platformId), operationId, *reinterpret_cast<Windows::Foundation::Diagnostics::CausalityRelation const*>(&relation));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, winrt::guid platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TraceSynchronousWorkStart, WINRT_WRAP(void), Windows::Foundation::Diagnostics::CausalityTraceLevel const&, Windows::Foundation::Diagnostics::CausalitySource const&, winrt::guid const&, uint64_t, Windows::Foundation::Diagnostics::CausalitySynchronousWork const&);
            this->shim().TraceSynchronousWorkStart(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<winrt::guid const*>(&platformId), operationId, *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySynchronousWork const*>(&work));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel, Windows::Foundation::Diagnostics::CausalitySource source, Windows::Foundation::Diagnostics::CausalitySynchronousWork work) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TraceSynchronousWorkCompletion, WINRT_WRAP(void), Windows::Foundation::Diagnostics::CausalityTraceLevel const&, Windows::Foundation::Diagnostics::CausalitySource const&, Windows::Foundation::Diagnostics::CausalitySynchronousWork const&);
            this->shim().TraceSynchronousWorkCompletion(*reinterpret_cast<Windows::Foundation::Diagnostics::CausalityTraceLevel const*>(&traceLevel), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySource const*>(&source), *reinterpret_cast<Windows::Foundation::Diagnostics::CausalitySynchronousWork const*>(&work));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL add_TracingStatusChanged(void* handler, winrt::event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TracingStatusChanged, WINRT_WRAP(winrt::event_token), Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const&);
            *cookie = detach_from<winrt::event_token>(this->shim().TracingStatusChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL remove_TracingStatusChanged(winrt::event_token cookie) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        WINRT_ASSERT_DECLARATION(TracingStatusChanged, WINRT_WRAP(void), winrt::event_token const&);
        this->shim().TracingStatusChanged(*reinterpret_cast<winrt::event_token const*>(&cookie));
        return 0;
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IErrorDetails> : produce_base<D, Windows::Foundation::Diagnostics::IErrorDetails>
{
    int32_t WINRT_CALL get_Description(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Description, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_LongDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LongDescription, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().LongDescription());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_HelpUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HelpUri, WINRT_WRAP(Windows::Foundation::Uri));
            *value = detach_from<Windows::Foundation::Uri>(this->shim().HelpUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IErrorDetailsStatics> : produce_base<D, Windows::Foundation::Diagnostics::IErrorDetailsStatics>
{
    int32_t WINRT_CALL CreateFromHResultAsync(int32_t errorCode, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateFromHResultAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails>), int32_t);
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails>>(this->shim().CreateFromHResultAsync(errorCode));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IErrorReportingSettings> : produce_base<D, Windows::Foundation::Diagnostics::IErrorReportingSettings>
{
    int32_t WINRT_CALL SetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SetErrorOptions, WINRT_WRAP(void), Windows::Foundation::Diagnostics::ErrorOptions const&);
            this->shim().SetErrorOptions(*reinterpret_cast<Windows::Foundation::Diagnostics::ErrorOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL GetErrorOptions(Windows::Foundation::Diagnostics::ErrorOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetErrorOptions, WINRT_WRAP(Windows::Foundation::Diagnostics::ErrorOptions));
            *value = detach_from<Windows::Foundation::Diagnostics::ErrorOptions>(this->shim().GetErrorOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IFileLoggingSession> : produce_base<D, Windows::Foundation::Diagnostics::IFileLoggingSession>
{
    int32_t WINRT_CALL get_Name(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Name, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddLoggingChannel(void* loggingChannel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddLoggingChannel, WINRT_WRAP(void), Windows::Foundation::Diagnostics::ILoggingChannel const&);
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddLoggingChannelWithLevel(void* loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddLoggingChannel, WINRT_WRAP(void), Windows::Foundation::Diagnostics::ILoggingChannel const&, Windows::Foundation::Diagnostics::LoggingLevel const&);
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&maxLevel));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RemoveLoggingChannel(void* loggingChannel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RemoveLoggingChannel, WINRT_WRAP(void), Windows::Foundation::Diagnostics::ILoggingChannel const&);
            this->shim().RemoveLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CloseAndSaveToFileAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CloseAndSaveToFileAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>));
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().CloseAndSaveToFileAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL add_LogFileGenerated(void* handler, winrt::event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogFileGenerated, WINRT_WRAP(winrt::event_token), Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const&);
            *token = detach_from<winrt::event_token>(this->shim().LogFileGenerated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::IFileLoggingSession, Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL remove_LogFileGenerated(winrt::event_token token) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        WINRT_ASSERT_DECLARATION(LogFileGenerated, WINRT_WRAP(void), winrt::event_token const&);
        this->shim().LogFileGenerated(*reinterpret_cast<winrt::event_token const*>(&token));
        return 0;
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> : produce_base<D, Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>
{
    int32_t WINRT_CALL Create(void* name, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Create, WINRT_WRAP(Windows::Foundation::Diagnostics::FileLoggingSession), hstring const&);
            *result = detach_from<Windows::Foundation::Diagnostics::FileLoggingSession>(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> : produce_base<D, Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs>
{
    int32_t WINRT_CALL get_File(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(File, WINRT_WRAP(Windows::Storage::StorageFile));
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingActivity> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingActivity>
{
    int32_t WINRT_CALL get_Name(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Name, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Id(winrt::guid* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Id, WINRT_WRAP(winrt::guid));
            *value = detach_from<winrt::guid>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingActivity2> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingActivity2>
{
    int32_t WINRT_CALL get_Channel(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Channel, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingChannel));
            *value = detach_from<Windows::Foundation::Diagnostics::LoggingChannel>(this->shim().Channel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL StopActivity(void* stopEventName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StopActivity, WINRT_WRAP(void), hstring const&);
            this->shim().StopActivity(*reinterpret_cast<hstring const*>(&stopEventName));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL StopActivityWithFields(void* stopEventName, void* fields) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StopActivity, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&);
            this->shim().StopActivity(*reinterpret_cast<hstring const*>(&stopEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL StopActivityWithFieldsAndOptions(void* stopEventName, void* fields, void* options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StopActivity, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&, Windows::Foundation::Diagnostics::LoggingOptions const&);
            this->shim().StopActivity(*reinterpret_cast<hstring const*>(&stopEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOptions const*>(&options));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingActivityFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingActivityFactory>
{
    int32_t WINRT_CALL CreateLoggingActivity(void* activityName, void* loggingChannel, void** loggingActivity) noexcept final
    {
        try
        {
            *loggingActivity = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateLoggingActivity, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingActivity), hstring const&, Windows::Foundation::Diagnostics::ILoggingChannel const&);
            *loggingActivity = detach_from<Windows::Foundation::Diagnostics::LoggingActivity>(this->shim().CreateLoggingActivity(*reinterpret_cast<hstring const*>(&activityName), *reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CreateLoggingActivityWithLevel(void* activityName, void* loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel level, void** loggingActivity) noexcept final
    {
        try
        {
            *loggingActivity = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateLoggingActivityWithLevel, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingActivity), hstring const&, Windows::Foundation::Diagnostics::ILoggingChannel const&, Windows::Foundation::Diagnostics::LoggingLevel const&);
            *loggingActivity = detach_from<Windows::Foundation::Diagnostics::LoggingActivity>(this->shim().CreateLoggingActivityWithLevel(*reinterpret_cast<hstring const*>(&activityName), *reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannel> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannel>
{
    int32_t WINRT_CALL get_Name(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Name, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Enabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Enabled, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().Enabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Level(Windows::Foundation::Diagnostics::LoggingLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Level, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingLevel));
            *value = detach_from<Windows::Foundation::Diagnostics::LoggingLevel>(this->shim().Level());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogMessage(void* eventString) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogMessage, WINRT_WRAP(void), hstring const&);
            this->shim().LogMessage(*reinterpret_cast<hstring const*>(&eventString));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogMessageWithLevel(void* eventString, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogMessage, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingLevel const&);
            this->shim().LogMessage(*reinterpret_cast<hstring const*>(&eventString), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogValuePair(void* value1, int32_t value2) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogValuePair, WINRT_WRAP(void), hstring const&, int32_t);
            this->shim().LogValuePair(*reinterpret_cast<hstring const*>(&value1), value2);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogValuePairWithLevel(void* value1, int32_t value2, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogValuePair, WINRT_WRAP(void), hstring const&, int32_t, Windows::Foundation::Diagnostics::LoggingLevel const&);
            this->shim().LogValuePair(*reinterpret_cast<hstring const*>(&value1), value2, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL add_LoggingEnabled(void* handler, winrt::event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LoggingEnabled, WINRT_WRAP(winrt::event_token), Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const&);
            *token = detach_from<winrt::event_token>(this->shim().LoggingEnabled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::Diagnostics::ILoggingChannel, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL remove_LoggingEnabled(winrt::event_token token) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        WINRT_ASSERT_DECLARATION(LoggingEnabled, WINRT_WRAP(void), winrt::event_token const&);
        this->shim().LoggingEnabled(*reinterpret_cast<winrt::event_token const*>(&token));
        return 0;
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannel2> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannel2>
{
    int32_t WINRT_CALL get_Id(winrt::guid* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Id, WINRT_WRAP(winrt::guid));
            *value = detach_from<winrt::guid>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory>
{
    int32_t WINRT_CALL Create(void* name, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Create, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingChannel), hstring const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingChannel>(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory2> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelFactory2>
{
    int32_t WINRT_CALL CreateWithOptions(void* name, void* options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateWithOptions, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingChannel), hstring const&, Windows::Foundation::Diagnostics::LoggingChannelOptions const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingChannel>(this->shim().CreateWithOptions(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingChannelOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CreateWithOptionsAndId(void* name, void* options, winrt::guid id, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateWithOptionsAndId, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingChannel), hstring const&, Windows::Foundation::Diagnostics::LoggingChannelOptions const&, winrt::guid const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingChannel>(this->shim().CreateWithOptionsAndId(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingChannelOptions const*>(&options), *reinterpret_cast<winrt::guid const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelOptions> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelOptions>
{
    int32_t WINRT_CALL get_Group(winrt::guid* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Group, WINRT_WRAP(winrt::guid));
            *value = detach_from<winrt::guid>(this->shim().Group());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Group(winrt::guid value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Group, WINRT_WRAP(void), winrt::guid const&);
            this->shim().Group(*reinterpret_cast<winrt::guid const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>
{
    int32_t WINRT_CALL Create(winrt::guid group, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Create, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingChannelOptions), winrt::guid const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingChannelOptions>(this->shim().Create(*reinterpret_cast<winrt::guid const*>(&group)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingFields> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingFields>
{
    int32_t WINRT_CALL Clear() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Clear, WINRT_WRAP(void));
            this->shim().Clear();
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL BeginStruct(void* name) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(BeginStruct, WINRT_WRAP(void), hstring const&);
            this->shim().BeginStruct(*reinterpret_cast<hstring const*>(&name));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL BeginStructWithTags(void* name, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(BeginStruct, WINRT_WRAP(void), hstring const&, int32_t);
            this->shim().BeginStruct(*reinterpret_cast<hstring const*>(&name), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL EndStruct() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EndStruct, WINRT_WRAP(void));
            this->shim().EndStruct();
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddEmpty(void* name) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddEmpty, WINRT_WRAP(void), hstring const&);
            this->shim().AddEmpty(*reinterpret_cast<hstring const*>(&name));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddEmptyWithFormat(void* name, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddEmpty, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddEmpty(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddEmptyWithFormatAndTags(void* name, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddEmpty, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddEmpty(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt8(void* name, uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt8, WINRT_WRAP(void), hstring const&, uint8_t);
            this->shim().AddUInt8(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt8WithFormat(void* name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt8, WINRT_WRAP(void), hstring const&, uint8_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt8(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt8WithFormatAndTags(void* name, uint8_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt8, WINRT_WRAP(void), hstring const&, uint8_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt8(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt8Array(void* name, uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt8Array, WINRT_WRAP(void), hstring const&, array_view<uint8_t const>);
            this->shim().AddUInt8Array(*reinterpret_cast<hstring const*>(&name), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt8ArrayWithFormat(void* name, uint32_t __valueSize, uint8_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt8Array, WINRT_WRAP(void), hstring const&, array_view<uint8_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt8Array(*reinterpret_cast<hstring const*>(&name), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt8ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint8_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt8Array, WINRT_WRAP(void), hstring const&, array_view<uint8_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt8Array(*reinterpret_cast<hstring const*>(&name), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt16(void* name, int16_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt16, WINRT_WRAP(void), hstring const&, int16_t);
            this->shim().AddInt16(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt16WithFormat(void* name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt16, WINRT_WRAP(void), hstring const&, int16_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt16WithFormatAndTags(void* name, int16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt16, WINRT_WRAP(void), hstring const&, int16_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt16Array(void* name, uint32_t __valueSize, int16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt16Array, WINRT_WRAP(void), hstring const&, array_view<int16_t const>);
            this->shim().AddInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<int16_t const>(reinterpret_cast<int16_t const *>(value), reinterpret_cast<int16_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt16ArrayWithFormat(void* name, uint32_t __valueSize, int16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt16Array, WINRT_WRAP(void), hstring const&, array_view<int16_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<int16_t const>(reinterpret_cast<int16_t const *>(value), reinterpret_cast<int16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt16ArrayWithFormatAndTags(void* name, uint32_t __valueSize, int16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt16Array, WINRT_WRAP(void), hstring const&, array_view<int16_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<int16_t const>(reinterpret_cast<int16_t const *>(value), reinterpret_cast<int16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt16(void* name, uint16_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt16, WINRT_WRAP(void), hstring const&, uint16_t);
            this->shim().AddUInt16(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt16WithFormat(void* name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt16, WINRT_WRAP(void), hstring const&, uint16_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt16WithFormatAndTags(void* name, uint16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt16, WINRT_WRAP(void), hstring const&, uint16_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt16Array(void* name, uint32_t __valueSize, uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt16Array, WINRT_WRAP(void), hstring const&, array_view<uint16_t const>);
            this->shim().AddUInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(value), reinterpret_cast<uint16_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt16ArrayWithFormat(void* name, uint32_t __valueSize, uint16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt16Array, WINRT_WRAP(void), hstring const&, array_view<uint16_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(value), reinterpret_cast<uint16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt16ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt16Array, WINRT_WRAP(void), hstring const&, array_view<uint16_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt16Array(*reinterpret_cast<hstring const*>(&name), array_view<uint16_t const>(reinterpret_cast<uint16_t const *>(value), reinterpret_cast<uint16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt32(void* name, int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt32, WINRT_WRAP(void), hstring const&, int32_t);
            this->shim().AddInt32(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt32WithFormat(void* name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt32, WINRT_WRAP(void), hstring const&, int32_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt32WithFormatAndTags(void* name, int32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt32, WINRT_WRAP(void), hstring const&, int32_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt32Array(void* name, uint32_t __valueSize, int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt32Array, WINRT_WRAP(void), hstring const&, array_view<int32_t const>);
            this->shim().AddInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<int32_t const>(reinterpret_cast<int32_t const *>(value), reinterpret_cast<int32_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt32ArrayWithFormat(void* name, uint32_t __valueSize, int32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt32Array, WINRT_WRAP(void), hstring const&, array_view<int32_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<int32_t const>(reinterpret_cast<int32_t const *>(value), reinterpret_cast<int32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt32ArrayWithFormatAndTags(void* name, uint32_t __valueSize, int32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt32Array, WINRT_WRAP(void), hstring const&, array_view<int32_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<int32_t const>(reinterpret_cast<int32_t const *>(value), reinterpret_cast<int32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt32(void* name, uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt32, WINRT_WRAP(void), hstring const&, uint32_t);
            this->shim().AddUInt32(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt32WithFormat(void* name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt32, WINRT_WRAP(void), hstring const&, uint32_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt32WithFormatAndTags(void* name, uint32_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt32, WINRT_WRAP(void), hstring const&, uint32_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt32(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt32Array(void* name, uint32_t __valueSize, uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt32Array, WINRT_WRAP(void), hstring const&, array_view<uint32_t const>);
            this->shim().AddUInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(value), reinterpret_cast<uint32_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt32ArrayWithFormat(void* name, uint32_t __valueSize, uint32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt32Array, WINRT_WRAP(void), hstring const&, array_view<uint32_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(value), reinterpret_cast<uint32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt32ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint32_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt32Array, WINRT_WRAP(void), hstring const&, array_view<uint32_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt32Array(*reinterpret_cast<hstring const*>(&name), array_view<uint32_t const>(reinterpret_cast<uint32_t const *>(value), reinterpret_cast<uint32_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt64(void* name, int64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt64, WINRT_WRAP(void), hstring const&, int64_t);
            this->shim().AddInt64(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt64WithFormat(void* name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt64, WINRT_WRAP(void), hstring const&, int64_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt64WithFormatAndTags(void* name, int64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt64, WINRT_WRAP(void), hstring const&, int64_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt64Array(void* name, uint32_t __valueSize, int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt64Array, WINRT_WRAP(void), hstring const&, array_view<int64_t const>);
            this->shim().AddInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<int64_t const>(reinterpret_cast<int64_t const *>(value), reinterpret_cast<int64_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt64ArrayWithFormat(void* name, uint32_t __valueSize, int64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt64Array, WINRT_WRAP(void), hstring const&, array_view<int64_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<int64_t const>(reinterpret_cast<int64_t const *>(value), reinterpret_cast<int64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddInt64ArrayWithFormatAndTags(void* name, uint32_t __valueSize, int64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddInt64Array, WINRT_WRAP(void), hstring const&, array_view<int64_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<int64_t const>(reinterpret_cast<int64_t const *>(value), reinterpret_cast<int64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt64(void* name, uint64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt64, WINRT_WRAP(void), hstring const&, uint64_t);
            this->shim().AddUInt64(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt64WithFormat(void* name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt64, WINRT_WRAP(void), hstring const&, uint64_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt64WithFormatAndTags(void* name, uint64_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt64, WINRT_WRAP(void), hstring const&, uint64_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt64(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt64Array(void* name, uint32_t __valueSize, uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt64Array, WINRT_WRAP(void), hstring const&, array_view<uint64_t const>);
            this->shim().AddUInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(value), reinterpret_cast<uint64_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt64ArrayWithFormat(void* name, uint32_t __valueSize, uint64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt64Array, WINRT_WRAP(void), hstring const&, array_view<uint64_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddUInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(value), reinterpret_cast<uint64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddUInt64ArrayWithFormatAndTags(void* name, uint32_t __valueSize, uint64_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddUInt64Array, WINRT_WRAP(void), hstring const&, array_view<uint64_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddUInt64Array(*reinterpret_cast<hstring const*>(&name), array_view<uint64_t const>(reinterpret_cast<uint64_t const *>(value), reinterpret_cast<uint64_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSingle(void* name, float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSingle, WINRT_WRAP(void), hstring const&, float);
            this->shim().AddSingle(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSingleWithFormat(void* name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSingle, WINRT_WRAP(void), hstring const&, float, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddSingle(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSingleWithFormatAndTags(void* name, float value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSingle, WINRT_WRAP(void), hstring const&, float, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddSingle(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSingleArray(void* name, uint32_t __valueSize, float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSingleArray, WINRT_WRAP(void), hstring const&, array_view<float const>);
            this->shim().AddSingleArray(*reinterpret_cast<hstring const*>(&name), array_view<float const>(reinterpret_cast<float const *>(value), reinterpret_cast<float const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSingleArrayWithFormat(void* name, uint32_t __valueSize, float* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSingleArray, WINRT_WRAP(void), hstring const&, array_view<float const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddSingleArray(*reinterpret_cast<hstring const*>(&name), array_view<float const>(reinterpret_cast<float const *>(value), reinterpret_cast<float const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSingleArrayWithFormatAndTags(void* name, uint32_t __valueSize, float* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSingleArray, WINRT_WRAP(void), hstring const&, array_view<float const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddSingleArray(*reinterpret_cast<hstring const*>(&name), array_view<float const>(reinterpret_cast<float const *>(value), reinterpret_cast<float const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDouble(void* name, double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDouble, WINRT_WRAP(void), hstring const&, double);
            this->shim().AddDouble(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDoubleWithFormat(void* name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDouble, WINRT_WRAP(void), hstring const&, double, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddDouble(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDoubleWithFormatAndTags(void* name, double value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDouble, WINRT_WRAP(void), hstring const&, double, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddDouble(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDoubleArray(void* name, uint32_t __valueSize, double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDoubleArray, WINRT_WRAP(void), hstring const&, array_view<double const>);
            this->shim().AddDoubleArray(*reinterpret_cast<hstring const*>(&name), array_view<double const>(reinterpret_cast<double const *>(value), reinterpret_cast<double const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDoubleArrayWithFormat(void* name, uint32_t __valueSize, double* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDoubleArray, WINRT_WRAP(void), hstring const&, array_view<double const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddDoubleArray(*reinterpret_cast<hstring const*>(&name), array_view<double const>(reinterpret_cast<double const *>(value), reinterpret_cast<double const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDoubleArrayWithFormatAndTags(void* name, uint32_t __valueSize, double* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDoubleArray, WINRT_WRAP(void), hstring const&, array_view<double const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddDoubleArray(*reinterpret_cast<hstring const*>(&name), array_view<double const>(reinterpret_cast<double const *>(value), reinterpret_cast<double const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddChar16(void* name, char16_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddChar16, WINRT_WRAP(void), hstring const&, char16_t);
            this->shim().AddChar16(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddChar16WithFormat(void* name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddChar16, WINRT_WRAP(void), hstring const&, char16_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddChar16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddChar16WithFormatAndTags(void* name, char16_t value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddChar16, WINRT_WRAP(void), hstring const&, char16_t, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddChar16(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddChar16Array(void* name, uint32_t __valueSize, char16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddChar16Array, WINRT_WRAP(void), hstring const&, array_view<char16_t const>);
            this->shim().AddChar16Array(*reinterpret_cast<hstring const*>(&name), array_view<char16_t const>(reinterpret_cast<char16_t const *>(value), reinterpret_cast<char16_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddChar16ArrayWithFormat(void* name, uint32_t __valueSize, char16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddChar16Array, WINRT_WRAP(void), hstring const&, array_view<char16_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddChar16Array(*reinterpret_cast<hstring const*>(&name), array_view<char16_t const>(reinterpret_cast<char16_t const *>(value), reinterpret_cast<char16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddChar16ArrayWithFormatAndTags(void* name, uint32_t __valueSize, char16_t* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddChar16Array, WINRT_WRAP(void), hstring const&, array_view<char16_t const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddChar16Array(*reinterpret_cast<hstring const*>(&name), array_view<char16_t const>(reinterpret_cast<char16_t const *>(value), reinterpret_cast<char16_t const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddBoolean(void* name, bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddBoolean, WINRT_WRAP(void), hstring const&, bool);
            this->shim().AddBoolean(*reinterpret_cast<hstring const*>(&name), value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddBooleanWithFormat(void* name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddBoolean, WINRT_WRAP(void), hstring const&, bool, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddBoolean(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddBooleanWithFormatAndTags(void* name, bool value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddBoolean, WINRT_WRAP(void), hstring const&, bool, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddBoolean(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddBooleanArray(void* name, uint32_t __valueSize, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddBooleanArray, WINRT_WRAP(void), hstring const&, array_view<bool const>);
            this->shim().AddBooleanArray(*reinterpret_cast<hstring const*>(&name), array_view<bool const>(reinterpret_cast<bool const *>(value), reinterpret_cast<bool const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddBooleanArrayWithFormat(void* name, uint32_t __valueSize, bool* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddBooleanArray, WINRT_WRAP(void), hstring const&, array_view<bool const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddBooleanArray(*reinterpret_cast<hstring const*>(&name), array_view<bool const>(reinterpret_cast<bool const *>(value), reinterpret_cast<bool const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddBooleanArrayWithFormatAndTags(void* name, uint32_t __valueSize, bool* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddBooleanArray, WINRT_WRAP(void), hstring const&, array_view<bool const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddBooleanArray(*reinterpret_cast<hstring const*>(&name), array_view<bool const>(reinterpret_cast<bool const *>(value), reinterpret_cast<bool const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddString(void* name, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddString, WINRT_WRAP(void), hstring const&, hstring const&);
            this->shim().AddString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddStringWithFormat(void* name, void* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddString, WINRT_WRAP(void), hstring const&, hstring const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddStringWithFormatAndTags(void* name, void* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddString, WINRT_WRAP(void), hstring const&, hstring const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddStringArray(void* name, uint32_t __valueSize, void** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddStringArray, WINRT_WRAP(void), hstring const&, array_view<hstring const>);
            this->shim().AddStringArray(*reinterpret_cast<hstring const*>(&name), array_view<hstring const>(reinterpret_cast<hstring const *>(value), reinterpret_cast<hstring const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddStringArrayWithFormat(void* name, uint32_t __valueSize, void** value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddStringArray, WINRT_WRAP(void), hstring const&, array_view<hstring const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddStringArray(*reinterpret_cast<hstring const*>(&name), array_view<hstring const>(reinterpret_cast<hstring const *>(value), reinterpret_cast<hstring const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddStringArrayWithFormatAndTags(void* name, uint32_t __valueSize, void** value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddStringArray, WINRT_WRAP(void), hstring const&, array_view<hstring const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddStringArray(*reinterpret_cast<hstring const*>(&name), array_view<hstring const>(reinterpret_cast<hstring const *>(value), reinterpret_cast<hstring const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddGuid(void* name, winrt::guid value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddGuid, WINRT_WRAP(void), hstring const&, winrt::guid const&);
            this->shim().AddGuid(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<winrt::guid const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddGuidWithFormat(void* name, winrt::guid value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddGuid, WINRT_WRAP(void), hstring const&, winrt::guid const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddGuid(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<winrt::guid const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddGuidWithFormatAndTags(void* name, winrt::guid value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddGuid, WINRT_WRAP(void), hstring const&, winrt::guid const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddGuid(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<winrt::guid const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddGuidArray(void* name, uint32_t __valueSize, winrt::guid* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddGuidArray, WINRT_WRAP(void), hstring const&, array_view<winrt::guid const>);
            this->shim().AddGuidArray(*reinterpret_cast<hstring const*>(&name), array_view<winrt::guid const>(reinterpret_cast<winrt::guid const *>(value), reinterpret_cast<winrt::guid const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddGuidArrayWithFormat(void* name, uint32_t __valueSize, winrt::guid* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddGuidArray, WINRT_WRAP(void), hstring const&, array_view<winrt::guid const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddGuidArray(*reinterpret_cast<hstring const*>(&name), array_view<winrt::guid const>(reinterpret_cast<winrt::guid const *>(value), reinterpret_cast<winrt::guid const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddGuidArrayWithFormatAndTags(void* name, uint32_t __valueSize, winrt::guid* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddGuidArray, WINRT_WRAP(void), hstring const&, array_view<winrt::guid const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddGuidArray(*reinterpret_cast<hstring const*>(&name), array_view<winrt::guid const>(reinterpret_cast<winrt::guid const *>(value), reinterpret_cast<winrt::guid const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDateTime(void* name, Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDateTime, WINRT_WRAP(void), hstring const&, Windows::Foundation::DateTime const&);
            this->shim().AddDateTime(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDateTimeWithFormat(void* name, Windows::Foundation::DateTime value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDateTime, WINRT_WRAP(void), hstring const&, Windows::Foundation::DateTime const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddDateTime(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDateTimeWithFormatAndTags(void* name, Windows::Foundation::DateTime value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDateTime, WINRT_WRAP(void), hstring const&, Windows::Foundation::DateTime const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddDateTime(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::DateTime const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDateTimeArray(void* name, uint32_t __valueSize, Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDateTimeArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::DateTime const>);
            this->shim().AddDateTimeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::DateTime const>(reinterpret_cast<Windows::Foundation::DateTime const *>(value), reinterpret_cast<Windows::Foundation::DateTime const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDateTimeArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::DateTime* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDateTimeArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::DateTime const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddDateTimeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::DateTime const>(reinterpret_cast<Windows::Foundation::DateTime const *>(value), reinterpret_cast<Windows::Foundation::DateTime const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddDateTimeArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::DateTime* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddDateTimeArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::DateTime const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddDateTimeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::DateTime const>(reinterpret_cast<Windows::Foundation::DateTime const *>(value), reinterpret_cast<Windows::Foundation::DateTime const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddTimeSpan(void* name, Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddTimeSpan, WINRT_WRAP(void), hstring const&, Windows::Foundation::TimeSpan const&);
            this->shim().AddTimeSpan(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddTimeSpanWithFormat(void* name, Windows::Foundation::TimeSpan value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddTimeSpan, WINRT_WRAP(void), hstring const&, Windows::Foundation::TimeSpan const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddTimeSpan(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddTimeSpanWithFormatAndTags(void* name, Windows::Foundation::TimeSpan value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddTimeSpan, WINRT_WRAP(void), hstring const&, Windows::Foundation::TimeSpan const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddTimeSpan(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddTimeSpanArray(void* name, uint32_t __valueSize, Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddTimeSpanArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::TimeSpan const>);
            this->shim().AddTimeSpanArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::TimeSpan const>(reinterpret_cast<Windows::Foundation::TimeSpan const *>(value), reinterpret_cast<Windows::Foundation::TimeSpan const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddTimeSpanArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::TimeSpan* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddTimeSpanArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::TimeSpan const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddTimeSpanArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::TimeSpan const>(reinterpret_cast<Windows::Foundation::TimeSpan const *>(value), reinterpret_cast<Windows::Foundation::TimeSpan const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddTimeSpanArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::TimeSpan* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddTimeSpanArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::TimeSpan const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddTimeSpanArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::TimeSpan const>(reinterpret_cast<Windows::Foundation::TimeSpan const *>(value), reinterpret_cast<Windows::Foundation::TimeSpan const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddPoint(void* name, Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddPoint, WINRT_WRAP(void), hstring const&, Windows::Foundation::Point const&);
            this->shim().AddPoint(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddPointWithFormat(void* name, Windows::Foundation::Point value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddPoint, WINRT_WRAP(void), hstring const&, Windows::Foundation::Point const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddPoint(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Point const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddPointWithFormatAndTags(void* name, Windows::Foundation::Point value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddPoint, WINRT_WRAP(void), hstring const&, Windows::Foundation::Point const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddPoint(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Point const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddPointArray(void* name, uint32_t __valueSize, Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddPointArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Point const>);
            this->shim().AddPointArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(value), reinterpret_cast<Windows::Foundation::Point const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddPointArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::Point* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddPointArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Point const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddPointArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(value), reinterpret_cast<Windows::Foundation::Point const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddPointArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::Point* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddPointArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Point const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddPointArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(value), reinterpret_cast<Windows::Foundation::Point const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSize(void* name, Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSize, WINRT_WRAP(void), hstring const&, Windows::Foundation::Size const&);
            this->shim().AddSize(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSizeWithFormat(void* name, Windows::Foundation::Size value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSize, WINRT_WRAP(void), hstring const&, Windows::Foundation::Size const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddSize(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Size const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSizeWithFormatAndTags(void* name, Windows::Foundation::Size value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSize, WINRT_WRAP(void), hstring const&, Windows::Foundation::Size const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddSize(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Size const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSizeArray(void* name, uint32_t __valueSize, Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSizeArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Size const>);
            this->shim().AddSizeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Size const>(reinterpret_cast<Windows::Foundation::Size const *>(value), reinterpret_cast<Windows::Foundation::Size const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSizeArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::Size* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSizeArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Size const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddSizeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Size const>(reinterpret_cast<Windows::Foundation::Size const *>(value), reinterpret_cast<Windows::Foundation::Size const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddSizeArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::Size* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddSizeArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Size const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddSizeArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Size const>(reinterpret_cast<Windows::Foundation::Size const *>(value), reinterpret_cast<Windows::Foundation::Size const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddRect(void* name, Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddRect, WINRT_WRAP(void), hstring const&, Windows::Foundation::Rect const&);
            this->shim().AddRect(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddRectWithFormat(void* name, Windows::Foundation::Rect value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddRect, WINRT_WRAP(void), hstring const&, Windows::Foundation::Rect const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddRect(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Rect const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddRectWithFormatAndTags(void* name, Windows::Foundation::Rect value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddRect, WINRT_WRAP(void), hstring const&, Windows::Foundation::Rect const&, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddRect(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Rect const*>(&value), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddRectArray(void* name, uint32_t __valueSize, Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddRectArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Rect const>);
            this->shim().AddRectArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(value), reinterpret_cast<Windows::Foundation::Rect const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddRectArrayWithFormat(void* name, uint32_t __valueSize, Windows::Foundation::Rect* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddRectArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Rect const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&);
            this->shim().AddRectArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(value), reinterpret_cast<Windows::Foundation::Rect const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddRectArrayWithFormatAndTags(void* name, uint32_t __valueSize, Windows::Foundation::Rect* value, Windows::Foundation::Diagnostics::LoggingFieldFormat format, int32_t tags) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddRectArray, WINRT_WRAP(void), hstring const&, array_view<Windows::Foundation::Rect const>, Windows::Foundation::Diagnostics::LoggingFieldFormat const&, int32_t);
            this->shim().AddRectArray(*reinterpret_cast<hstring const*>(&name), array_view<Windows::Foundation::Rect const>(reinterpret_cast<Windows::Foundation::Rect const *>(value), reinterpret_cast<Windows::Foundation::Rect const *>(value) + __valueSize), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFieldFormat const*>(&format), tags);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingOptions> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingOptions>
{
    int32_t WINRT_CALL get_Keywords(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Keywords, WINRT_WRAP(int64_t));
            *value = detach_from<int64_t>(this->shim().Keywords());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Keywords(int64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Keywords, WINRT_WRAP(void), int64_t);
            this->shim().Keywords(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Tags(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Tags, WINRT_WRAP(int32_t));
            *value = detach_from<int32_t>(this->shim().Tags());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Tags(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Tags, WINRT_WRAP(void), int32_t);
            this->shim().Tags(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Task(int16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Task, WINRT_WRAP(int16_t));
            *value = detach_from<int16_t>(this->shim().Task());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Task(int16_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Task, WINRT_WRAP(void), int16_t);
            this->shim().Task(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Opcode(Windows::Foundation::Diagnostics::LoggingOpcode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Opcode, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingOpcode));
            *value = detach_from<Windows::Foundation::Diagnostics::LoggingOpcode>(this->shim().Opcode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Opcode(Windows::Foundation::Diagnostics::LoggingOpcode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Opcode, WINRT_WRAP(void), Windows::Foundation::Diagnostics::LoggingOpcode const&);
            this->shim().Opcode(*reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOpcode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ActivityId(winrt::guid* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ActivityId, WINRT_WRAP(winrt::guid));
            *value = detach_from<winrt::guid>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ActivityId(winrt::guid value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ActivityId, WINRT_WRAP(void), winrt::guid const&);
            this->shim().ActivityId(*reinterpret_cast<winrt::guid const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_RelatedActivityId(winrt::guid* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RelatedActivityId, WINRT_WRAP(winrt::guid));
            *value = detach_from<winrt::guid>(this->shim().RelatedActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_RelatedActivityId(winrt::guid value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RelatedActivityId, WINRT_WRAP(void), winrt::guid const&);
            this->shim().RelatedActivityId(*reinterpret_cast<winrt::guid const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingOptionsFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingOptionsFactory>
{
    int32_t WINRT_CALL CreateWithKeywords(int64_t keywords, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateWithKeywords, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingOptions), int64_t);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingOptions>(this->shim().CreateWithKeywords(keywords));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingSession> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingSession>
{
    int32_t WINRT_CALL get_Name(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Name, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL SaveToFileAsync(void* folder, void* fileName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SaveToFileAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>), Windows::Storage::IStorageFolder const, hstring const);
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().SaveToFileAsync(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder), *reinterpret_cast<hstring const*>(&fileName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddLoggingChannel(void* loggingChannel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddLoggingChannel, WINRT_WRAP(void), Windows::Foundation::Diagnostics::ILoggingChannel const&);
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL AddLoggingChannelWithLevel(void* loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel maxLevel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AddLoggingChannel, WINRT_WRAP(void), Windows::Foundation::Diagnostics::ILoggingChannel const&, Windows::Foundation::Diagnostics::LoggingLevel const&);
            this->shim().AddLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&maxLevel));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RemoveLoggingChannel(void* loggingChannel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RemoveLoggingChannel, WINRT_WRAP(void), Windows::Foundation::Diagnostics::ILoggingChannel const&);
            this->shim().RemoveLoggingChannel(*reinterpret_cast<Windows::Foundation::Diagnostics::ILoggingChannel const*>(&loggingChannel));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingSessionFactory> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingSessionFactory>
{
    int32_t WINRT_CALL Create(void* name, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Create, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingSession), hstring const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingSession>(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ILoggingTarget> : produce_base<D, Windows::Foundation::Diagnostics::ILoggingTarget>
{
    int32_t WINRT_CALL IsEnabled(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsEnabled, WINRT_WRAP(bool));
            *result = detach_from<bool>(this->shim().IsEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsEnabledWithLevel(Windows::Foundation::Diagnostics::LoggingLevel level, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsEnabled, WINRT_WRAP(bool), Windows::Foundation::Diagnostics::LoggingLevel const&);
            *result = detach_from<bool>(this->shim().IsEnabled(*reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsEnabledWithLevelAndKeywords(Windows::Foundation::Diagnostics::LoggingLevel level, int64_t keywords, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsEnabled, WINRT_WRAP(bool), Windows::Foundation::Diagnostics::LoggingLevel const&, int64_t);
            *result = detach_from<bool>(this->shim().IsEnabled(*reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level), keywords));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogEvent(void* eventName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogEvent, WINRT_WRAP(void), hstring const&);
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogEventWithFields(void* eventName, void* fields) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogEvent, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&);
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogEventWithFieldsAndLevel(void* eventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogEvent, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&, Windows::Foundation::Diagnostics::LoggingLevel const&);
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL LogEventWithFieldsAndOptions(void* eventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level, void* options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(LogEvent, WINRT_WRAP(void), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&, Windows::Foundation::Diagnostics::LoggingLevel const&, Windows::Foundation::Diagnostics::LoggingOptions const&);
            this->shim().LogEvent(*reinterpret_cast<hstring const*>(&eventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOptions const*>(&options));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL StartActivity(void* startEventName, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StartActivity, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingActivity), hstring const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingActivity>(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL StartActivityWithFields(void* startEventName, void* fields, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StartActivity, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingActivity), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingActivity>(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL StartActivityWithFieldsAndLevel(void* startEventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StartActivity, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingActivity), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&, Windows::Foundation::Diagnostics::LoggingLevel const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingActivity>(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL StartActivityWithFieldsAndOptions(void* startEventName, void* fields, Windows::Foundation::Diagnostics::LoggingLevel level, void* options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StartActivity, WINRT_WRAP(Windows::Foundation::Diagnostics::LoggingActivity), hstring const&, Windows::Foundation::Diagnostics::LoggingFields const&, Windows::Foundation::Diagnostics::LoggingLevel const&, Windows::Foundation::Diagnostics::LoggingOptions const&);
            *result = detach_from<Windows::Foundation::Diagnostics::LoggingActivity>(this->shim().StartActivity(*reinterpret_cast<hstring const*>(&startEventName), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingFields const*>(&fields), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingLevel const*>(&level), *reinterpret_cast<Windows::Foundation::Diagnostics::LoggingOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> : produce_base<D, Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs>
{
    int32_t WINRT_CALL get_Enabled(bool* enabled) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Enabled, WINRT_WRAP(bool));
            *enabled = detach_from<bool>(this->shim().Enabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_TraceLevel(Windows::Foundation::Diagnostics::CausalityTraceLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TraceLevel, WINRT_WRAP(Windows::Foundation::Diagnostics::CausalityTraceLevel));
            *value = detach_from<Windows::Foundation::Diagnostics::CausalityTraceLevel>(this->shim().TraceLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics {

inline void AsyncCausalityTracer::TraceOperationCreation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, param::hstring const& operationName, uint64_t relatedContext)
{
    impl::call_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>([&](auto&& f) { return f.TraceOperationCreation(traceLevel, source, platformId, operationId, operationName, relatedContext); });
}

inline void AsyncCausalityTracer::TraceOperationCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::AsyncStatus const& status)
{
    impl::call_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>([&](auto&& f) { return f.TraceOperationCompletion(traceLevel, source, platformId, operationId, status); });
}

inline void AsyncCausalityTracer::TraceOperationRelation(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalityRelation const& relation)
{
    impl::call_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>([&](auto&& f) { return f.TraceOperationRelation(traceLevel, source, platformId, operationId, relation); });
}

inline void AsyncCausalityTracer::TraceSynchronousWorkStart(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, winrt::guid const& platformId, uint64_t operationId, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work)
{
    impl::call_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>([&](auto&& f) { return f.TraceSynchronousWorkStart(traceLevel, source, platformId, operationId, work); });
}

inline void AsyncCausalityTracer::TraceSynchronousWorkCompletion(Windows::Foundation::Diagnostics::CausalityTraceLevel const& traceLevel, Windows::Foundation::Diagnostics::CausalitySource const& source, Windows::Foundation::Diagnostics::CausalitySynchronousWork const& work)
{
    impl::call_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>([&](auto&& f) { return f.TraceSynchronousWorkCompletion(traceLevel, source, work); });
}

inline winrt::event_token AsyncCausalityTracer::TracingStatusChanged(Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler)
{
    return impl::call_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>([&](auto&& f) { return f.TracingStatusChanged(handler); });
}

inline AsyncCausalityTracer::TracingStatusChanged_revoker AsyncCausalityTracer::TracingStatusChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> const& handler)
{
    auto f = get_activation_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>();
    return { f, f.TracingStatusChanged(handler) };
}

inline void AsyncCausalityTracer::TracingStatusChanged(winrt::event_token const& cookie)
{
    impl::call_factory<AsyncCausalityTracer, Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>([&](auto&& f) { return f.TracingStatusChanged(cookie); });
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Diagnostics::ErrorDetails> ErrorDetails::CreateFromHResultAsync(int32_t errorCode)
{
    return impl::call_factory<ErrorDetails, Windows::Foundation::Diagnostics::IErrorDetailsStatics>([&](auto&& f) { return f.CreateFromHResultAsync(errorCode); });
}

inline FileLoggingSession::FileLoggingSession(param::hstring const& name) :
    FileLoggingSession(impl::call_factory<FileLoggingSession, Windows::Foundation::Diagnostics::IFileLoggingSessionFactory>([&](auto&& f) { return f.Create(name); }))
{}

inline LoggingActivity::LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel) :
    LoggingActivity(impl::call_factory<LoggingActivity, Windows::Foundation::Diagnostics::ILoggingActivityFactory>([&](auto&& f) { return f.CreateLoggingActivity(activityName, loggingChannel); }))
{}

inline LoggingActivity::LoggingActivity(param::hstring const& activityName, Windows::Foundation::Diagnostics::ILoggingChannel const& loggingChannel, Windows::Foundation::Diagnostics::LoggingLevel const& level) :
    LoggingActivity(impl::call_factory<LoggingActivity, Windows::Foundation::Diagnostics::ILoggingActivityFactory>([&](auto&& f) { return f.CreateLoggingActivityWithLevel(activityName, loggingChannel, level); }))
{}

inline LoggingChannel::LoggingChannel(param::hstring const& name) :
    LoggingChannel(impl::call_factory<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingChannelFactory>([&](auto&& f) { return f.Create(name); }))
{}

inline LoggingChannel::LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options) :
    LoggingChannel(impl::call_factory<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingChannelFactory2>([&](auto&& f) { return f.CreateWithOptions(name, options); }))
{}

inline LoggingChannel::LoggingChannel(param::hstring const& name, Windows::Foundation::Diagnostics::LoggingChannelOptions const& options, winrt::guid const& id) :
    LoggingChannel(impl::call_factory<LoggingChannel, Windows::Foundation::Diagnostics::ILoggingChannelFactory2>([&](auto&& f) { return f.CreateWithOptionsAndId(name, options, id); }))
{}

inline LoggingChannelOptions::LoggingChannelOptions() :
    LoggingChannelOptions(impl::call_factory<LoggingChannelOptions>([](auto&& f) { return f.template ActivateInstance<LoggingChannelOptions>(); }))
{}

inline LoggingChannelOptions::LoggingChannelOptions(winrt::guid const& group) :
    LoggingChannelOptions(impl::call_factory<LoggingChannelOptions, Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory>([&](auto&& f) { return f.Create(group); }))
{}

inline LoggingFields::LoggingFields() :
    LoggingFields(impl::call_factory<LoggingFields>([](auto&& f) { return f.template ActivateInstance<LoggingFields>(); }))
{}

inline LoggingOptions::LoggingOptions() :
    LoggingOptions(impl::call_factory<LoggingOptions>([](auto&& f) { return f.template ActivateInstance<LoggingOptions>(); }))
{}

inline LoggingOptions::LoggingOptions(int64_t keywords) :
    LoggingOptions(impl::call_factory<LoggingOptions, Windows::Foundation::Diagnostics::ILoggingOptionsFactory>([&](auto&& f) { return f.CreateWithKeywords(keywords); }))
{}

inline LoggingSession::LoggingSession(param::hstring const& name) :
    LoggingSession(impl::call_factory<LoggingSession, Windows::Foundation::Diagnostics::ILoggingSessionFactory>([&](auto&& f) { return f.Create(name); }))
{}

inline RuntimeBrokerErrorSettings::RuntimeBrokerErrorSettings() :
    RuntimeBrokerErrorSettings(impl::call_factory<RuntimeBrokerErrorSettings>([](auto&& f) { return f.template ActivateInstance<RuntimeBrokerErrorSettings>(); }))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::IErrorDetails> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::IErrorDetails> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::IErrorDetailsStatics> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::IErrorDetailsStatics> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::IErrorReportingSettings> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::IErrorReportingSettings> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::IFileLoggingSession> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::IFileLoggingSession> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::IFileLoggingSessionFactory> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingActivity> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingActivity> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingActivity2> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingActivity2> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingActivityFactory> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingActivityFactory> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannel> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingChannel> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannel2> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingChannel2> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory2> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingChannelFactory2> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptions> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptions> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingFields> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingFields> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingOptions> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingOptions> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingOptionsFactory> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingOptionsFactory> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingSession> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingSession> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingSessionFactory> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingSessionFactory> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ILoggingTarget> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ILoggingTarget> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::AsyncCausalityTracer> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::AsyncCausalityTracer> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::ErrorDetails> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::ErrorDetails> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::FileLoggingSession> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::FileLoggingSession> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingActivity> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::LoggingActivity> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingChannel> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::LoggingChannel> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingChannelOptions> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::LoggingChannelOptions> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingFields> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::LoggingFields> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingOptions> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::LoggingOptions> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::LoggingSession> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::LoggingSession> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::RuntimeBrokerErrorSettings> {};
template<> struct hash<winrt::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs> {};

}
