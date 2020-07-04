// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.Core.2.h"
#include "winrt/impl/Windows.Media.Capture.Frames.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.Devices.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AdvancedPhotoMode consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>::Mode() const
{
    Windows::Media::Devices::AdvancedPhotoMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Capture_IAdvancedCapturedPhoto<D>::Context() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto)->get_Context(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Rect> consume_Windows_Media_Capture_IAdvancedCapturedPhoto2<D>::FrameBoundsRelativeToReferencePhoto() const
{
    Windows::Foundation::IReference<Windows::Foundation::Rect> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedCapturedPhoto2)->get_FrameBoundsRelativeToReferencePhoto(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->CaptureAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::CaptureAsync(Windows::Foundation::IInspectable const& context) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->CaptureWithContextAsync(get_abi(context), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->add_OptionalReferencePhotoCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAdvancedPhotoCapture>(this, &abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_OptionalReferencePhotoCaptured, OptionalReferencePhotoCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::OptionalReferencePhotoCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->remove_OptionalReferencePhotoCaptured(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::AllPhotosCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->add_AllPhotosCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAdvancedPhotoCapture> consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::AllPhotosCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAdvancedPhotoCapture>(this, &abi_t<Windows::Media::Capture::IAdvancedPhotoCapture>::remove_AllPhotosCaptured, AllPhotosCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::AllPhotosCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->remove_AllPhotosCaptured(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IAdvancedPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAdvancedPhotoCapture)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::PlugInState(Windows::Media::Capture::AppBroadcastPlugInState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->put_PlugInState(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInState consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::PlugInState() const
{
    Windows::Media::Capture::AppBroadcastPlugInState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->get_PlugInState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::SignInInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->put_SignInInfo(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::SignInInfo() const
{
    Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->get_SignInInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::StreamInfo(Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->put_StreamInfo(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::StreamInfo() const
{
    Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->get_StreamInfo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::AppId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::BroadcastTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->get_BroadcastTitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::ViewerCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->put_ViewerCount(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::ViewerCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->get_ViewerCount(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason const& reason, uint32_t providerSpecificReason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->TerminateBroadcast(get_abi(reason), providerSpecificReason));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::HeartbeatRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->add_HeartbeatRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService> consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::HeartbeatRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundService>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService>::remove_HeartbeatRequested, HeartbeatRequested(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::HeartbeatRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->remove_HeartbeatRequested(get_abi(token)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastBackgroundService<D>::TitleId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService)->get_TitleId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastTitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->put_BroadcastTitle(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->get_BroadcastLanguage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastLanguage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->put_BroadcastLanguage(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastChannel() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->get_BroadcastChannel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastChannel(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->put_BroadcastChannel(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastTitleChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->add_BroadcastTitleChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2> consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastTitleChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundService2>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastTitleChanged, BroadcastTitleChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastTitleChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->remove_BroadcastTitleChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastLanguageChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->add_BroadcastLanguageChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2> consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastLanguageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundService2>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastLanguageChanged, BroadcastLanguageChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastLanguageChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->remove_BroadcastLanguageChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastChannelChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->add_BroadcastChannelChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundService2> consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastChannelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundService2>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundService2>::remove_BroadcastChannelChanged, BroadcastChannelChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundService2<D>::BroadcastChannelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundService2)->remove_BroadcastChannelChanged(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInState consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInState() const
{
    Windows::Media::Capture::AppBroadcastSignInState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->get_SignInState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthRequestUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->put_OAuthRequestUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthRequestUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->get_OAuthRequestUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthCallbackUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->put_OAuthCallbackUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::OAuthCallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->get_OAuthCallbackUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationResult consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::AuthenticationResult() const
{
    Windows::Security::Authentication::Web::WebAuthenticationResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->get_AuthenticationResult(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::UserName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->put_UserName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->add_SignInStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>::remove_SignInStateChanged, SignInStateChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo<D>::SignInStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo)->remove_SignInStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2<D>::UserNameChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2)->add_UserNameChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2> consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2<D>::UserNameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>::remove_UserNameChanged, UserNameChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceSignInInfo2<D>::UserNameChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2)->remove_UserNameChanged(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamState consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamState() const
{
    Windows::Media::Capture::AppBroadcastStreamState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->get_StreamState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::DesiredVideoEncodingBitrate(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->put_DesiredVideoEncodingBitrate(value));
}

template <typename D> uint64_t consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::DesiredVideoEncodingBitrate() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->get_DesiredVideoEncodingBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::BandwidthTestBitrate(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->put_BandwidthTestBitrate(value));
}

template <typename D> uint64_t consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::BandwidthTestBitrate() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->get_BandwidthTestBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::AudioCodec(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->put_AudioCodec(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::AudioCodec() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->get_AudioCodec(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamReader consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::BroadcastStreamReader() const
{
    Windows::Media::Capture::AppBroadcastStreamReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->get_BroadcastStreamReader(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->add_StreamStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_StreamStateChanged, StreamStateChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::StreamStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->remove_StreamStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingResolutionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->add_VideoEncodingResolutionChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingResolutionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_VideoEncodingResolutionChanged, VideoEncodingResolutionChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingResolutionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->remove_VideoEncodingResolutionChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->add_VideoEncodingBitrateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingBitrateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>(this, &abi_t<Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>::remove_VideoEncodingBitrateChanged, VideoEncodingBitrateChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo<D>::VideoEncodingBitrateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo)->remove_VideoEncodingBitrateChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastBackgroundServiceStreamInfo2<D>::ReportProblemWithStream() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2)->ReportProblemWithStream());
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraCaptureState consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppBroadcastCameraCaptureState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastCameraCaptureStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsBroadcastEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsBroadcastEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsDisabledByPolicy() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsDisabledByPolicy(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsGpuConstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsGpuConstrained(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::HasHardwareEncoder() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_HasHardwareEncoder(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsAudioCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_IsAudioCaptureEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsAudioCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsAudioCaptureEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsMicrophoneCaptureEnabledByDefault(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_IsMicrophoneCaptureEnabledByDefault(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsMicrophoneCaptureEnabledByDefault() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsMicrophoneCaptureEnabledByDefault(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsEchoCancellationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_IsEchoCancellationEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsEchoCancellationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsEchoCancellationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::SystemAudioGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_SystemAudioGain(value));
}

template <typename D> double consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::SystemAudioGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_SystemAudioGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::MicrophoneGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_MicrophoneGain(value));
}

template <typename D> double consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::MicrophoneGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_MicrophoneGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsCameraCaptureEnabledByDefault(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_IsCameraCaptureEnabledByDefault(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsCameraCaptureEnabledByDefault() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsCameraCaptureEnabledByDefault(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::SelectedCameraId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_SelectedCameraId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::SelectedCameraId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_SelectedCameraId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_CameraOverlayLocation(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraOverlayLocation consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::CameraOverlayLocation() const
{
    Windows::Media::Capture::AppBroadcastCameraOverlayLocation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_CameraOverlayLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_CameraOverlaySize(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraOverlaySize consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::CameraOverlaySize() const
{
    Windows::Media::Capture::AppBroadcastCameraOverlaySize value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_CameraOverlaySize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsCursorImageCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->put_IsCursorImageCaptureEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastGlobalSettings<D>::IsCursorImageCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastGlobalSettings)->get_IsCursorImageCaptureEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs)->put_Handled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastHeartbeatRequestedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastGlobalSettings consume_Windows_Media_Capture_IAppBroadcastManagerStatics<D>::GetGlobalSettings() const
{
    Windows::Media::Capture::AppBroadcastGlobalSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastManagerStatics)->GetGlobalSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastManagerStatics<D>::ApplyGlobalSettings(Windows::Media::Capture::AppBroadcastGlobalSettings const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastManagerStatics)->ApplyGlobalSettings(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastProviderSettings consume_Windows_Media_Capture_IAppBroadcastManagerStatics<D>::GetProviderSettings() const
{
    Windows::Media::Capture::AppBroadcastProviderSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastManagerStatics)->GetProviderSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastManagerStatics<D>::ApplyProviderSettings(Windows::Media::Capture::AppBroadcastProviderSettings const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastManagerStatics)->ApplyProviderSettings(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastMicrophoneCaptureState consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppBroadcastMicrophoneCaptureState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastMicrophoneCaptureStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastPlugIn<D>::AppId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugIn)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastProviderSettings consume_Windows_Media_Capture_IAppBroadcastPlugIn<D>::ProviderSettings() const
{
    Windows::Media::Capture::AppBroadcastProviderSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugIn)->get_ProviderSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Media_Capture_IAppBroadcastPlugIn<D>::Logo() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugIn)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastPlugIn<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugIn)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastPlugInManager<D>::IsBroadcastProviderAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugInManager)->get_IsBroadcastProviderAvailable(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn> consume_Windows_Media_Capture_IAppBroadcastPlugInManager<D>::PlugInList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugInManager)->get_PlugInList(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugIn consume_Windows_Media_Capture_IAppBroadcastPlugInManager<D>::DefaultPlugIn() const
{
    Windows::Media::Capture::AppBroadcastPlugIn value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugInManager)->get_DefaultPlugIn(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastPlugInManager<D>::DefaultPlugIn(Windows::Media::Capture::AppBroadcastPlugIn const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugInManager)->put_DefaultPlugIn(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInManager consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics<D>::GetDefault() const
{
    Windows::Media::Capture::AppBroadcastPlugInManager ppInstance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugInManagerStatics)->GetDefault(put_abi(ppInstance)));
    return ppInstance;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInManager consume_Windows_Media_Capture_IAppBroadcastPlugInManagerStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::Media::Capture::AppBroadcastPlugInManager ppInstance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugInManagerStatics)->GetForUser(get_abi(user), put_abi(ppInstance)));
    return ppInstance;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInState consume_Windows_Media_Capture_IAppBroadcastPlugInStateChangedEventArgs<D>::PlugInState() const
{
    Windows::Media::Capture::AppBroadcastPlugInState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs)->get_PlugInState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastPreview<D>::StopPreview() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreview)->StopPreview());
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewState consume_Windows_Media_Capture_IAppBroadcastPreview<D>::PreviewState() const
{
    Windows::Media::Capture::AppBroadcastPreviewState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreview)->get_PreviewState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_IAppBroadcastPreview<D>::ErrorCode() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreview)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastPreview<D>::PreviewStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreview)->add_PreviewStateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastPreview> consume_Windows_Media_Capture_IAppBroadcastPreview<D>::PreviewStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastPreview>(this, &abi_t<Windows::Media::Capture::IAppBroadcastPreview>::remove_PreviewStateChanged, PreviewStateChanged(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastPreview<D>::PreviewStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreview)->remove_PreviewStateChanged(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewStreamReader consume_Windows_Media_Capture_IAppBroadcastPreview<D>::PreviewStreamReader() const
{
    Windows::Media::Capture::AppBroadcastPreviewStreamReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreview)->get_PreviewStreamReader(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewState consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs<D>::PreviewState() const
{
    Windows::Media::Capture::AppBroadcastPreviewState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs)->get_PreviewState(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastPreviewStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->get_VideoWidth(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->get_VideoHeight(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoStride() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->get_VideoStride(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoBitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->get_VideoBitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoBitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->get_VideoBitmapAlphaMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::TryGetNextVideoFrame() const
{
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame frame{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->TryGetNextVideoFrame(put_abi(frame)));
    return frame;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->add_VideoFrameArrived(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastPreviewStreamReader> consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastPreviewStreamReader>(this, &abi_t<Windows::Media::Capture::IAppBroadcastPreviewStreamReader>::remove_VideoFrameArrived, VideoFrameArrived(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastPreviewStreamReader<D>::VideoFrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamReader)->remove_VideoFrameArrived(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame<D>::VideoHeader() const
{
    Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame)->get_VideoHeader(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoFrame<D>::VideoBuffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame)->get_VideoBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader<D>::AbsoluteTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader)->get_AbsoluteTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader<D>::RelativeTimestamp() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader)->get_RelativeTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Capture_IAppBroadcastPreviewStreamVideoHeader<D>::FrameId() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader)->get_FrameId(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::DefaultBroadcastTitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->put_DefaultBroadcastTitle(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::DefaultBroadcastTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->get_DefaultBroadcastTitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::AudioEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->put_AudioEncodingBitrate(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::AudioEncodingBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->get_AudioEncodingBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::CustomVideoEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->put_CustomVideoEncodingBitrate(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::CustomVideoEncodingBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->get_CustomVideoEncodingBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::CustomVideoEncodingHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->put_CustomVideoEncodingHeight(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::CustomVideoEncodingHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->get_CustomVideoEncodingHeight(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::CustomVideoEncodingWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->put_CustomVideoEncodingWidth(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::CustomVideoEncodingWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->get_CustomVideoEncodingWidth(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->put_VideoEncodingBitrateMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::VideoEncodingBitrateMode() const
{
    Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->get_VideoEncodingBitrateMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->put_VideoEncodingResolutionMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode consume_Windows_Media_Capture_IAppBroadcastProviderSettings<D>::VideoEncodingResolutionMode() const
{
    Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastProviderSettings)->get_VideoEncodingResolutionMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastCaptureTargetType consume_Windows_Media_Capture_IAppBroadcastServices<D>::CaptureTargetType() const
{
    Windows::Media::Capture::AppBroadcastCaptureTargetType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->get_CaptureTargetType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastServices<D>::CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->put_CaptureTargetType(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastServices<D>::BroadcastTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->get_BroadcastTitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastServices<D>::BroadcastTitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->put_BroadcastTitle(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastServices<D>::BroadcastLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->get_BroadcastLanguage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastServices<D>::BroadcastLanguage(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->put_BroadcastLanguage(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IAppBroadcastServices<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastServices<D>::CanCapture() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->get_CanCapture(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Media_Capture_IAppBroadcastServices<D>::EnterBroadcastModeAsync(Windows::Media::Capture::AppBroadcastPlugIn const& plugIn) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->EnterBroadcastModeAsync(get_abi(plugIn), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastServices<D>::ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->ExitBroadcastMode(get_abi(reason)));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastServices<D>::StartBroadcast() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->StartBroadcast());
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastServices<D>::PauseBroadcast() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->PauseBroadcast());
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastServices<D>::ResumeBroadcast() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->ResumeBroadcast());
}

template <typename D> Windows::Media::Capture::AppBroadcastPreview consume_Windows_Media_Capture_IAppBroadcastServices<D>::StartPreview(Windows::Foundation::Size const& desiredSize) const
{
    Windows::Media::Capture::AppBroadcastPreview preview{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->StartPreview(get_abi(desiredSize), put_abi(preview)));
    return preview;
}

template <typename D> Windows::Media::Capture::AppBroadcastState consume_Windows_Media_Capture_IAppBroadcastServices<D>::State() const
{
    Windows::Media::Capture::AppBroadcastState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastServices)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInState consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs<D>::SignInState() const
{
    Windows::Media::Capture::AppBroadcastSignInState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs)->get_SignInState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInResult consume_Windows_Media_Capture_IAppBroadcastSignInStateChangedEventArgs<D>::Result() const
{
    Windows::Media::Capture::AppBroadcastSignInResult value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastState<D>::IsCaptureTargetRunning() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_IsCaptureTargetRunning(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastState<D>::ViewerCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_ViewerCount(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastState<D>::ShouldCaptureMicrophone() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_ShouldCaptureMicrophone(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::ShouldCaptureMicrophone(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->put_ShouldCaptureMicrophone(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::RestartMicrophoneCapture() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->RestartMicrophoneCapture());
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastState<D>::ShouldCaptureCamera() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_ShouldCaptureCamera(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::ShouldCaptureCamera(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->put_ShouldCaptureCamera(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::RestartCameraCapture() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->RestartCameraCapture());
}

template <typename D> Windows::Foundation::Size consume_Windows_Media_Capture_IAppBroadcastState<D>::EncodedVideoSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_EncodedVideoSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastMicrophoneCaptureState consume_Windows_Media_Capture_IAppBroadcastState<D>::MicrophoneCaptureState() const
{
    Windows::Media::Capture::AppBroadcastMicrophoneCaptureState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_MicrophoneCaptureState(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastState<D>::MicrophoneCaptureError() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_MicrophoneCaptureError(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastCameraCaptureState consume_Windows_Media_Capture_IAppBroadcastState<D>::CameraCaptureState() const
{
    Windows::Media::Capture::AppBroadcastCameraCaptureState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_CameraCaptureState(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastState<D>::CameraCaptureError() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_CameraCaptureError(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamState consume_Windows_Media_Capture_IAppBroadcastState<D>::StreamState() const
{
    Windows::Media::Capture::AppBroadcastStreamState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_StreamState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastPlugInState consume_Windows_Media_Capture_IAppBroadcastState<D>::PlugInState() const
{
    Windows::Media::Capture::AppBroadcastPlugInState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_PlugInState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Capture_IAppBroadcastState<D>::OAuthRequestUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_OAuthRequestUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Capture_IAppBroadcastState<D>::OAuthCallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_OAuthCallbackUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationResult consume_Windows_Media_Capture_IAppBroadcastState<D>::AuthenticationResult() const
{
    Windows::Security::Authentication::Web::WebAuthenticationResult value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_AuthenticationResult(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::AuthenticationResult(Windows::Security::Authentication::Web::WebAuthenticationResult const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->put_AuthenticationResult(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::SignInState(Windows::Media::Capture::AppBroadcastSignInState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->put_SignInState(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppBroadcastSignInState consume_Windows_Media_Capture_IAppBroadcastState<D>::SignInState() const
{
    Windows::Media::Capture::AppBroadcastSignInState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_SignInState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastTerminationReason consume_Windows_Media_Capture_IAppBroadcastState<D>::TerminationReason() const
{
    Windows::Media::Capture::AppBroadcastTerminationReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_TerminationReason(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastState<D>::TerminationReasonPlugInSpecific() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->get_TerminationReasonPlugInSpecific(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastState<D>::ViewerCountChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->add_ViewerCountChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastState> consume_Windows_Media_Capture_IAppBroadcastState<D>::ViewerCountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastState>(this, &abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_ViewerCountChanged, ViewerCountChanged(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::ViewerCountChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->remove_ViewerCountChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastState<D>::MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->add_MicrophoneCaptureStateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastState> consume_Windows_Media_Capture_IAppBroadcastState<D>::MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastState>(this, &abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_MicrophoneCaptureStateChanged, MicrophoneCaptureStateChanged(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::MicrophoneCaptureStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->remove_MicrophoneCaptureStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastState<D>::CameraCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->add_CameraCaptureStateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastState> consume_Windows_Media_Capture_IAppBroadcastState<D>::CameraCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastState>(this, &abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_CameraCaptureStateChanged, CameraCaptureStateChanged(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::CameraCaptureStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->remove_CameraCaptureStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastState<D>::PlugInStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->add_PlugInStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastState> consume_Windows_Media_Capture_IAppBroadcastState<D>::PlugInStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastState>(this, &abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_PlugInStateChanged, PlugInStateChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::PlugInStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->remove_PlugInStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastState<D>::StreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->add_StreamStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastState> consume_Windows_Media_Capture_IAppBroadcastState<D>::StreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastState>(this, &abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_StreamStateChanged, StreamStateChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::StreamStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->remove_StreamStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastState<D>::CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->add_CaptureTargetClosed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastState> consume_Windows_Media_Capture_IAppBroadcastState<D>::CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastState>(this, &abi_t<Windows::Media::Capture::IAppBroadcastState>::remove_CaptureTargetClosed, CaptureTargetClosed(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastState<D>::CaptureTargetClosed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastState)->remove_CaptureTargetClosed(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamAudioHeader consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame<D>::AudioHeader() const
{
    Windows::Media::Capture::AppBroadcastStreamAudioHeader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamAudioFrame)->get_AudioHeader(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Capture_IAppBroadcastStreamAudioFrame<D>::AudioBuffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamAudioFrame)->get_AudioBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>::AbsoluteTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamAudioHeader)->get_AbsoluteTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>::RelativeTimestamp() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamAudioHeader)->get_RelativeTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamAudioHeader)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>::HasDiscontinuity() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamAudioHeader)->get_HasDiscontinuity(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Capture_IAppBroadcastStreamAudioHeader<D>::FrameId() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamAudioHeader)->get_FrameId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::AudioChannels() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->get_AudioChannels(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::AudioSampleRate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->get_AudioSampleRate(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::AudioAacSequence() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->get_AudioAacSequence(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::AudioBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->get_AudioBitrate(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamAudioFrame consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::TryGetNextAudioFrame() const
{
    Windows::Media::Capture::AppBroadcastStreamAudioFrame frame{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->TryGetNextAudioFrame(put_abi(frame)));
    return frame;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::VideoWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->get_VideoWidth(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::VideoHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->get_VideoHeight(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::VideoBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->get_VideoBitrate(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamVideoFrame consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::TryGetNextVideoFrame() const
{
    Windows::Media::Capture::AppBroadcastStreamVideoFrame frame{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->TryGetNextVideoFrame(put_abi(frame)));
    return frame;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::AudioFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->add_AudioFrameArrived(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader> consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::AudioFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastStreamReader>(this, &abi_t<Windows::Media::Capture::IAppBroadcastStreamReader>::remove_AudioFrameArrived, AudioFrameArrived(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::AudioFrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->remove_AudioFrameArrived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::VideoFrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->add_VideoFrameArrived(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppBroadcastStreamReader> consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::VideoFrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppBroadcastStreamReader>(this, &abi_t<Windows::Media::Capture::IAppBroadcastStreamReader>::remove_VideoFrameArrived, VideoFrameArrived(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppBroadcastStreamReader<D>::VideoFrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamReader)->remove_VideoFrameArrived(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamState consume_Windows_Media_Capture_IAppBroadcastStreamStateChangedEventArgs<D>::StreamState() const
{
    Windows::Media::Capture::AppBroadcastStreamState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs)->get_StreamState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastStreamVideoHeader consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame<D>::VideoHeader() const
{
    Windows::Media::Capture::AppBroadcastStreamVideoHeader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoFrame)->get_VideoHeader(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Capture_IAppBroadcastStreamVideoFrame<D>::VideoBuffer() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoFrame)->get_VideoBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>::AbsoluteTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoHeader)->get_AbsoluteTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>::RelativeTimestamp() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoHeader)->get_RelativeTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoHeader)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>::IsKeyFrame() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoHeader)->get_IsKeyFrame(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>::HasDiscontinuity() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoHeader)->get_HasDiscontinuity(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Media_Capture_IAppBroadcastStreamVideoHeader<D>::FrameId() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastStreamVideoHeader)->get_FrameId(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastBackgroundService consume_Windows_Media_Capture_IAppBroadcastTriggerDetails<D>::BackgroundService() const
{
    Windows::Media::Capture::AppBroadcastBackgroundService value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastTriggerDetails)->get_BackgroundService(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppBroadcastViewerCountChangedEventArgs<D>::ViewerCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs)->get_ViewerCount(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCapture<D>::IsCapturingAudio() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->get_IsCapturingAudio(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCapture<D>::IsCapturingVideo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->get_IsCapturingVideo(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCapture<D>::CapturingChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->add_CapturingChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCapture> consume_Windows_Media_Capture_IAppCapture<D>::CapturingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCapture>(this, &abi_t<Windows::Media::Capture::IAppCapture>::remove_CapturingChanged, CapturingChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppCapture<D>::CapturingChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCapture)->remove_CapturingChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_ToggleGameBarKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_ToggleGameBarKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_ToggleGameBarKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleGameBarKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_ToggleGameBarKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_SaveHistoricalVideoKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_SaveHistoricalVideoKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_SaveHistoricalVideoKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::SaveHistoricalVideoKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_SaveHistoricalVideoKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_TakeScreenshotKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_TakeScreenshotKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_TakeScreenshotKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::TakeScreenshotKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_TakeScreenshotKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingIndicatorKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingIndicatorKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->put_ToggleRecordingIndicatorKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys<D>::ToggleRecordingIndicatorKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys)->get_ToggleRecordingIndicatorKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2)->put_ToggleMicrophoneCaptureKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2)->get_ToggleMicrophoneCaptureKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2)->put_ToggleMicrophoneCaptureKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys2<D>::ToggleMicrophoneCaptureKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2)->get_ToggleMicrophoneCaptureKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->put_ToggleCameraCaptureKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->get_ToggleCameraCaptureKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->put_ToggleCameraCaptureKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleCameraCaptureKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->get_ToggleCameraCaptureKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKey(Windows::System::VirtualKey const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->put_ToggleBroadcastKey(get_abi(value)));
}

template <typename D> Windows::System::VirtualKey consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->get_ToggleBroadcastKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->put_ToggleBroadcastKeyModifiers(get_abi(value)));
}

template <typename D> Windows::System::VirtualKeyModifiers consume_Windows_Media_Capture_IAppCaptureAlternateShortcutKeys3<D>::ToggleBroadcastKeyModifiers() const
{
    Windows::System::VirtualKeyModifiers value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3)->get_ToggleBroadcastKeyModifiers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppCaptureDurationGeneratedEventArgs<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Media_Capture_IAppCaptureFileGeneratedEventArgs<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureSettings consume_Windows_Media_Capture_IAppCaptureManagerStatics<D>::GetCurrentSettings() const
{
    Windows::Media::Capture::AppCaptureSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureManagerStatics)->GetCurrentSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureManagerStatics<D>::ApplySettings(Windows::Media::Capture::AppCaptureSettings const& appCaptureSettings) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureManagerStatics)->ApplySettings(get_abi(appCaptureSettings)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::AddStringEvent(param::hstring const& name, param::hstring const& value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->AddStringEvent(get_abi(name), get_abi(value), get_abi(priority)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::AddInt32Event(param::hstring const& name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->AddInt32Event(get_abi(name), value, get_abi(priority)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::AddDoubleEvent(param::hstring const& name, double value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->AddDoubleEvent(get_abi(name), value, get_abi(priority)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::StartStringState(param::hstring const& name, param::hstring const& value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->StartStringState(get_abi(name), get_abi(value), get_abi(priority)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::StartInt32State(param::hstring const& name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->StartInt32State(get_abi(name), value, get_abi(priority)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::StartDoubleState(param::hstring const& name, double value, Windows::Media::Capture::AppCaptureMetadataPriority const& priority) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->StartDoubleState(get_abi(name), value, get_abi(priority)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::StopState(param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->StopState(get_abi(name)));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::StopAllStates() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->StopAllStates());
}

template <typename D> uint64_t consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::RemainingStorageBytesAvailable() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->get_RemainingStorageBytesAvailable(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::MetadataPurged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureMetadataWriter, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->add_MetadataPurged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCaptureMetadataWriter> consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::MetadataPurged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureMetadataWriter, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCaptureMetadataWriter>(this, &abi_t<Windows::Media::Capture::IAppCaptureMetadataWriter>::remove_MetadataPurged, MetadataPurged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureMetadataWriter<D>::MetadataPurged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMetadataWriter)->remove_MetadataPurged(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppCaptureMicrophoneCaptureState consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureMicrophoneCaptureStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::StopRecording() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->StopRecording());
}

template <typename D> Windows::Media::Capture::AppCaptureRecordingState consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::State() const
{
    Windows::Media::Capture::AppCaptureRecordingState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::ErrorCode() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::Duration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::File() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::IsFileTruncated() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->get_IsFileTruncated(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->add_StateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation> consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCaptureRecordOperation>(this, &abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_StateChanged, StateChanged(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->remove_StateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::DurationGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->add_DurationGenerated(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation> consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::DurationGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCaptureRecordOperation>(this, &abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_DurationGenerated, DurationGenerated(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::DurationGenerated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->remove_DurationGenerated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::FileGenerated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->add_FileGenerated(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCaptureRecordOperation> consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::FileGenerated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCaptureRecordOperation>(this, &abi_t<Windows::Media::Capture::IAppCaptureRecordOperation>::remove_FileGenerated, FileGenerated(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureRecordOperation<D>::FileGenerated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordOperation)->remove_FileGenerated(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppCaptureRecordingState consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs<D>::State() const
{
    Windows::Media::Capture::AppCaptureRecordingState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureRecordingStateChangedEventArgs<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs)->get_ErrorCode(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureRecordOperation consume_Windows_Media_Capture_IAppCaptureServices<D>::Record() const
{
    Windows::Media::Capture::AppCaptureRecordOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureServices)->Record(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Capture::AppCaptureRecordOperation consume_Windows_Media_Capture_IAppCaptureServices<D>::RecordTimeSpan(Windows::Foundation::DateTime const& startTime, Windows::Foundation::TimeSpan const& duration) const
{
    Windows::Media::Capture::AppCaptureRecordOperation operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureServices)->RecordTimeSpan(get_abi(startTime), get_abi(duration), put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureServices<D>::CanCapture() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureServices)->get_CanCapture(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureState consume_Windows_Media_Capture_IAppCaptureServices<D>::State() const
{
    Windows::Media::Capture::AppCaptureState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureServices)->get_State(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::AppCaptureDestinationFolder(Windows::Storage::StorageFolder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_AppCaptureDestinationFolder(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Media_Capture_IAppCaptureSettings<D>::AppCaptureDestinationFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_AppCaptureDestinationFolder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::AudioEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_AudioEncodingBitrate(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureSettings<D>::AudioEncodingBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_AudioEncodingBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsAudioCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_IsAudioCaptureEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsAudioCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsAudioCaptureEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::CustomVideoEncodingBitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_CustomVideoEncodingBitrate(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureSettings<D>::CustomVideoEncodingBitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_CustomVideoEncodingBitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::CustomVideoEncodingHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_CustomVideoEncodingHeight(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureSettings<D>::CustomVideoEncodingHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_CustomVideoEncodingHeight(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::CustomVideoEncodingWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_CustomVideoEncodingWidth(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureSettings<D>::CustomVideoEncodingWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_CustomVideoEncodingWidth(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::HistoricalBufferLength(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_HistoricalBufferLength(value));
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureSettings<D>::HistoricalBufferLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_HistoricalBufferLength(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_HistoricalBufferLengthUnit(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit consume_Windows_Media_Capture_IAppCaptureSettings<D>::HistoricalBufferLengthUnit() const
{
    Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_HistoricalBufferLengthUnit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsHistoricalCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_IsHistoricalCaptureEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsHistoricalCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsHistoricalCaptureEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsHistoricalCaptureOnBatteryAllowed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_IsHistoricalCaptureOnBatteryAllowed(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsHistoricalCaptureOnBatteryAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsHistoricalCaptureOnBatteryAllowed(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_IsHistoricalCaptureOnWirelessDisplayAllowed(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsHistoricalCaptureOnWirelessDisplayAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsHistoricalCaptureOnWirelessDisplayAllowed(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::MaximumRecordLength(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_MaximumRecordLength(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IAppCaptureSettings<D>::MaximumRecordLength() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_MaximumRecordLength(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::ScreenshotDestinationFolder(Windows::Storage::StorageFolder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_ScreenshotDestinationFolder(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFolder consume_Windows_Media_Capture_IAppCaptureSettings<D>::ScreenshotDestinationFolder() const
{
    Windows::Storage::StorageFolder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_ScreenshotDestinationFolder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_VideoEncodingBitrateMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode consume_Windows_Media_Capture_IAppCaptureSettings<D>::VideoEncodingBitrateMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_VideoEncodingBitrateMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_VideoEncodingResolutionMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode consume_Windows_Media_Capture_IAppCaptureSettings<D>::VideoEncodingResolutionMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_VideoEncodingResolutionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsAppCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->put_IsAppCaptureEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsAppCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsAppCaptureEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsCpuConstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsCpuConstrained(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsDisabledByPolicy() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsDisabledByPolicy(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::IsMemoryConstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_IsMemoryConstrained(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings<D>::HasHardwareEncoder() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings)->get_HasHardwareEncoder(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings2<D>::IsGpuConstrained() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings2)->get_IsGpuConstrained(&value));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureAlternateShortcutKeys consume_Windows_Media_Capture_IAppCaptureSettings2<D>::AlternateShortcutKeys() const
{
    Windows::Media::Capture::AppCaptureAlternateShortcutKeys value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings2)->get_AlternateShortcutKeys(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings3<D>::IsMicrophoneCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings3)->put_IsMicrophoneCaptureEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings3<D>::IsMicrophoneCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings3)->get_IsMicrophoneCaptureEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings4<D>::IsMicrophoneCaptureEnabledByDefault(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->put_IsMicrophoneCaptureEnabledByDefault(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings4<D>::IsMicrophoneCaptureEnabledByDefault() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->get_IsMicrophoneCaptureEnabledByDefault(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings4<D>::SystemAudioGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->put_SystemAudioGain(value));
}

template <typename D> double consume_Windows_Media_Capture_IAppCaptureSettings4<D>::SystemAudioGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->get_SystemAudioGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings4<D>::MicrophoneGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->put_MicrophoneGain(value));
}

template <typename D> double consume_Windows_Media_Capture_IAppCaptureSettings4<D>::MicrophoneGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->get_MicrophoneGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings4<D>::VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->put_VideoEncodingFrameRateMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode consume_Windows_Media_Capture_IAppCaptureSettings4<D>::VideoEncodingFrameRateMode() const
{
    Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings4)->get_VideoEncodingFrameRateMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings5<D>::IsEchoCancellationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings5)->put_IsEchoCancellationEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings5<D>::IsEchoCancellationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings5)->get_IsEchoCancellationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureSettings5<D>::IsCursorImageCaptureEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings5)->put_IsCursorImageCaptureEnabled(value));
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureSettings5<D>::IsCursorImageCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureSettings5)->get_IsCursorImageCaptureEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureState<D>::IsTargetRunning() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->get_IsTargetRunning(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureState<D>::IsHistoricalCaptureEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->get_IsHistoricalCaptureEnabled(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IAppCaptureState<D>::ShouldCaptureMicrophone() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->get_ShouldCaptureMicrophone(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureState<D>::ShouldCaptureMicrophone(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->put_ShouldCaptureMicrophone(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureState<D>::RestartMicrophoneCapture() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->RestartMicrophoneCapture());
}

template <typename D> Windows::Media::Capture::AppCaptureMicrophoneCaptureState consume_Windows_Media_Capture_IAppCaptureState<D>::MicrophoneCaptureState() const
{
    Windows::Media::Capture::AppCaptureMicrophoneCaptureState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->get_MicrophoneCaptureState(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IAppCaptureState<D>::MicrophoneCaptureError() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->get_MicrophoneCaptureError(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCaptureState<D>::MicrophoneCaptureStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->add_MicrophoneCaptureStateChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCaptureState> consume_Windows_Media_Capture_IAppCaptureState<D>::MicrophoneCaptureStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCaptureState>(this, &abi_t<Windows::Media::Capture::IAppCaptureState>::remove_MicrophoneCaptureStateChanged, MicrophoneCaptureStateChanged(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureState<D>::MicrophoneCaptureStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->remove_MicrophoneCaptureStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IAppCaptureState<D>::CaptureTargetClosed(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->add_CaptureTargetClosed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IAppCaptureState> consume_Windows_Media_Capture_IAppCaptureState<D>::CaptureTargetClosed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IAppCaptureState>(this, &abi_t<Windows::Media::Capture::IAppCaptureState>::remove_CaptureTargetClosed, CaptureTargetClosed(value));
}

template <typename D> void consume_Windows_Media_Capture_IAppCaptureState<D>::CaptureTargetClosed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureState)->remove_CaptureTargetClosed(get_abi(token)));
}

template <typename D> Windows::Media::Capture::AppCapture consume_Windows_Media_Capture_IAppCaptureStatics<D>::GetForCurrentView() const
{
    Windows::Media::Capture::AppCapture value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IAppCaptureStatics2<D>::SetAllowedAsync(bool allowed) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IAppCaptureStatics2)->SetAllowedAsync(allowed, put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings consume_Windows_Media_Capture_ICameraCaptureUI<D>::PhotoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUI)->get_PhotoSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings consume_Windows_Media_Capture_ICameraCaptureUI<D>::VideoSettings() const
{
    Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUI)->get_VideoSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Media_Capture_ICameraCaptureUI<D>::CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode const& mode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUI)->CaptureFileAsync(get_abi(mode), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Media::Capture::CameraCaptureUIPhotoFormat consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIPhotoFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_Format(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_Format(get_abi(value)));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_MaxResolution(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_MaxResolution(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_CroppedSizeInPixels(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedSizeInPixels(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_CroppedSizeInPixels(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_CroppedAspectRatio(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::CroppedAspectRatio(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_CroppedAspectRatio(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->get_AllowCropping(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIPhotoCaptureSettings<D>::AllowCropping(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings)->put_AllowCropping(value));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIVideoFormat consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::Format() const
{
    Windows::Media::Capture::CameraCaptureUIVideoFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_Format(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::Format(Windows::Media::Capture::CameraCaptureUIVideoFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_Format(get_abi(value)));
}

template <typename D> Windows::Media::Capture::CameraCaptureUIMaxVideoResolution consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution() const
{
    Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_MaxResolution(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_MaxResolution(get_abi(value)));
}

template <typename D> float consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_MaxDurationInSeconds(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::MaxDurationInSeconds(float value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_MaxDurationInSeconds(value));
}

template <typename D> bool consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->get_AllowTrimming(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_ICameraCaptureUIVideoCaptureSettings<D>::AllowTrimming(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings)->put_AllowTrimming(value));
}

template <typename D> void consume_Windows_Media_Capture_ICameraOptionsUIStatics<D>::Show(Windows::Media::Capture::MediaCapture const& mediaCapture) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICameraOptionsUIStatics)->Show(get_abi(mediaCapture)));
}

template <typename D> uint32_t consume_Windows_Media_Capture_ICapturedFrame<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrame)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_ICapturedFrame<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrame)->get_Height(&value));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrameControlValues consume_Windows_Media_Capture_ICapturedFrame2<D>::ControlValues() const
{
    Windows::Media::Capture::CapturedFrameControlValues value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrame2)->get_ControlValues(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPropertySet consume_Windows_Media_Capture_ICapturedFrame2<D>::BitmapProperties() const
{
    Windows::Graphics::Imaging::BitmapPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrame2)->get_BitmapProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::Exposure() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::ExposureCompensation() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_ExposureCompensation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::IsoSpeed() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_IsoSpeed(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::Focus() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_Focus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::SceneMode() const
{
    Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_SceneMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::Flashed() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_Flashed(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::FlashPowerPercent() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_FlashPowerPercent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::WhiteBalance() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_WhiteBalance(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_Media_Capture_ICapturedFrameControlValues<D>::ZoomFactor() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues)->get_ZoomFactor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::FocusState() const
{
    Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::IsoDigitalGain() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_IsoDigitalGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::IsoAnalogGain() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_IsoAnalogGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::SensorFrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_SensorFrameRate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> consume_Windows_Media_Capture_ICapturedFrameControlValues2<D>::WhiteBalanceGain() const
{
    Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameControlValues2)->get_WhiteBalanceGain(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Media_Capture_ICapturedFrameWithSoftwareBitmap<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap)->get_SoftwareBitmap(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_ICapturedPhoto<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedPhoto)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_ICapturedPhoto<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ICapturedPhoto)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarTargetCapturePolicy consume_Windows_Media_Capture_IGameBarServices<D>::TargetCapturePolicy() const
{
    Windows::Media::Capture::GameBarTargetCapturePolicy value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->get_TargetCapturePolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IGameBarServices<D>::EnableCapture() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->EnableCapture());
}

template <typename D> void consume_Windows_Media_Capture_IGameBarServices<D>::DisableCapture() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->DisableCapture());
}

template <typename D> Windows::Media::Capture::GameBarServicesTargetInfo consume_Windows_Media_Capture_IGameBarServices<D>::TargetInfo() const
{
    Windows::Media::Capture::GameBarServicesTargetInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->get_TargetInfo(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IGameBarServices<D>::SessionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppBroadcastServices consume_Windows_Media_Capture_IGameBarServices<D>::AppBroadcastServices() const
{
    Windows::Media::Capture::AppBroadcastServices value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->get_AppBroadcastServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::AppCaptureServices consume_Windows_Media_Capture_IGameBarServices<D>::AppCaptureServices() const
{
    Windows::Media::Capture::AppCaptureServices value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->get_AppCaptureServices(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IGameBarServices<D>::CommandReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->add_CommandReceived(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IGameBarServices> consume_Windows_Media_Capture_IGameBarServices<D>::CommandReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IGameBarServices>(this, &abi_t<Windows::Media::Capture::IGameBarServices>::remove_CommandReceived, CommandReceived(value));
}

template <typename D> void consume_Windows_Media_Capture_IGameBarServices<D>::CommandReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServices)->remove_CommandReceived(get_abi(token)));
}

template <typename D> Windows::Media::Capture::GameBarCommand consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs<D>::Command() const
{
    Windows::Media::Capture::GameBarCommand value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesCommandEventArgs)->get_Command(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarCommandOrigin consume_Windows_Media_Capture_IGameBarServicesCommandEventArgs<D>::Origin() const
{
    Windows::Media::Capture::GameBarCommandOrigin value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesCommandEventArgs)->get_Origin(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IGameBarServicesManager<D>::GameBarServicesCreated(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesManager)->add_GameBarServicesCreated(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IGameBarServicesManager> consume_Windows_Media_Capture_IGameBarServicesManager<D>::GameBarServicesCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IGameBarServicesManager>(this, &abi_t<Windows::Media::Capture::IGameBarServicesManager>::remove_GameBarServicesCreated, GameBarServicesCreated(value));
}

template <typename D> void consume_Windows_Media_Capture_IGameBarServicesManager<D>::GameBarServicesCreated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesManager)->remove_GameBarServicesCreated(get_abi(token)));
}

template <typename D> Windows::Media::Capture::GameBarServices consume_Windows_Media_Capture_IGameBarServicesManagerGameBarServicesCreatedEventArgs<D>::GameBarServices() const
{
    Windows::Media::Capture::GameBarServices value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs)->get_GameBarServices(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarServicesManager consume_Windows_Media_Capture_IGameBarServicesManagerStatics<D>::GetDefault() const
{
    Windows::Media::Capture::GameBarServicesManager ppInstance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesManagerStatics)->GetDefault(put_abi(ppInstance)));
    return ppInstance;
}

template <typename D> hstring consume_Windows_Media_Capture_IGameBarServicesTargetInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesTargetInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IGameBarServicesTargetInfo<D>::AppId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesTargetInfo)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IGameBarServicesTargetInfo<D>::TitleId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesTargetInfo)->get_TitleId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::GameBarServicesDisplayMode consume_Windows_Media_Capture_IGameBarServicesTargetInfo<D>::DisplayMode() const
{
    Windows::Media::Capture::GameBarServicesDisplayMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IGameBarServicesTargetInfo)->get_DisplayMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording)->StopAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording2<D>::PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording2)->PauseAsync(get_abi(behavior), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagMediaRecording2<D>::ResumeAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording2)->ResumeAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> consume_Windows_Media_Capture_ILowLagMediaRecording3<D>::PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording3)->PauseWithResultAsync(get_abi(behavior), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> consume_Windows_Media_Capture_ILowLagMediaRecording3<D>::StopWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagMediaRecording3)->StopWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> consume_Windows_Media_Capture_ILowLagPhotoCapture<D>::CaptureAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoCapture)->CaptureAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoCapture)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::StartAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->StopAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::FinishAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->FinishAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->add_PhotoCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::ILowLagPhotoSequenceCapture> consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture>(this, &abi_t<Windows::Media::Capture::ILowLagPhotoSequenceCapture>::remove_PhotoCaptured, PhotoCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_ILowLagPhotoSequenceCapture<D>::PhotoCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::ILowLagPhotoSequenceCapture)->remove_PhotoCaptured(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::InitializeAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->InitializeAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::InitializeAsync(Windows::Media::Capture::MediaCaptureInitializationSettings const& mediaCaptureInitializationSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->InitializeWithSettingsAsync(get_abi(mediaCaptureInitializationSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToStorageFileAsync(get_abi(encodingProfile), get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToStreamAsync(get_abi(encodingProfile), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StartRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StartRecordToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::StopRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->StopRecordAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::CapturePhotoToStorageFileAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->CapturePhotoToStorageFileAsync(get_abi(type), get_abi(file), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::CapturePhotoToStreamAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->CapturePhotoToStreamAsync(get_abi(type), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::AddEffectAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, param::hstring const& effectActivationID, Windows::Foundation::Collections::IPropertySet const& effectSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->AddEffectAsync(get_abi(mediaStreamType), get_abi(effectActivationID), get_abi(effectSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture<D>::ClearEffectsAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->ClearEffectsAsync(get_abi(mediaStreamType), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetEncoderProperty(get_abi(mediaStreamType), get_abi(propertyId), get_abi(propertyValue)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Capture_IMediaCapture<D>::GetEncoderProperty(Windows::Media::Capture::MediaStreamType const& mediaStreamType, GUID const& propertyId) const
{
    Windows::Foundation::IInspectable propertyValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetEncoderProperty(get_abi(mediaStreamType), get_abi(propertyId), put_abi(propertyValue)));
    return propertyValue;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture<D>::Failed(Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->add_Failed(get_abi(errorEventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture> consume_Windows_Media_Capture_IMediaCapture<D>::Failed(auto_revoke_t, Windows::Media::Capture::MediaCaptureFailedEventHandler const& errorEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture>(this, &abi_t<Windows::Media::Capture::IMediaCapture>::remove_Failed, Failed(errorEventHandler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::Failed(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->remove_Failed(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture<D>::RecordLimitationExceeded(Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->add_RecordLimitationExceeded(get_abi(recordLimitationExceededEventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture> consume_Windows_Media_Capture_IMediaCapture<D>::RecordLimitationExceeded(auto_revoke_t, Windows::Media::Capture::RecordLimitationExceededEventHandler const& recordLimitationExceededEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture>(this, &abi_t<Windows::Media::Capture::IMediaCapture>::remove_RecordLimitationExceeded, RecordLimitationExceeded(recordLimitationExceededEventHandler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::RecordLimitationExceeded(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->remove_RecordLimitationExceeded(get_abi(eventCookie)));
}

template <typename D> Windows::Media::Capture::MediaCaptureSettings consume_Windows_Media_Capture_IMediaCapture<D>::MediaCaptureSettings() const
{
    Windows::Media::Capture::MediaCaptureSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->get_MediaCaptureSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::AudioDeviceController consume_Windows_Media_Capture_IMediaCapture<D>::AudioDeviceController() const
{
    Windows::Media::Devices::AudioDeviceController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->get_AudioDeviceController(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceController consume_Windows_Media_Capture_IMediaCapture<D>::VideoDeviceController() const
{
    Windows::Media::Devices::VideoDeviceController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->get_VideoDeviceController(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetPreviewMirroring(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetPreviewMirroring(value));
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCapture<D>::GetPreviewMirroring() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetPreviewMirroring(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetPreviewRotation(Windows::Media::Capture::VideoRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetPreviewRotation(get_abi(value)));
}

template <typename D> Windows::Media::Capture::VideoRotation consume_Windows_Media_Capture_IMediaCapture<D>::GetPreviewRotation() const
{
    Windows::Media::Capture::VideoRotation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetPreviewRotation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture<D>::SetRecordRotation(Windows::Media::Capture::VideoRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->SetRecordRotation(get_abi(value)));
}

template <typename D> Windows::Media::Capture::VideoRotation consume_Windows_Media_Capture_IMediaCapture<D>::GetRecordRotation() const
{
    Windows::Media::Capture::VideoRotation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture)->GetRecordRotation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToStorageFileAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToStorageFileAsync(get_abi(encodingProfile), get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToStreamAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToStreamAsync(get_abi(encodingProfile), get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagRecordToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagRecordToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagPhotoCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> consume_Windows_Media_Capture_IMediaCapture2<D>::PrepareLowLagPhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->PrepareLowLagPhotoSequenceCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture2<D>::SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType const& mediaStreamType, Windows::Media::MediaProperties::IMediaEncodingProperties const& mediaEncodingProperties, Windows::Media::MediaProperties::MediaPropertySet const& encoderProperties) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture2)->SetEncodingPropertiesAsync(get_abi(mediaStreamType), get_abi(mediaEncodingProperties), get_abi(encoderProperties), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> consume_Windows_Media_Capture_IMediaCapture3<D>::PrepareVariablePhotoSequenceCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& type) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->PrepareVariablePhotoSequenceCaptureAsync(get_abi(type), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture3<D>::FocusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->add_FocusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture3> consume_Windows_Media_Capture_IMediaCapture3<D>::FocusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture3>(this, &abi_t<Windows::Media::Capture::IMediaCapture3>::remove_FocusChanged, FocusChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture3<D>::FocusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->remove_FocusChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture3<D>::PhotoConfirmationCaptured(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->add_PhotoConfirmationCaptured(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture3> consume_Windows_Media_Capture_IMediaCapture3<D>::PhotoConfirmationCaptured(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture3>(this, &abi_t<Windows::Media::Capture::IMediaCapture3>::remove_PhotoConfirmationCaptured, PhotoConfirmationCaptured(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture3<D>::PhotoConfirmationCaptured(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture3)->remove_PhotoConfirmationCaptured(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> consume_Windows_Media_Capture_IMediaCapture4<D>::AddAudioEffectAsync(Windows::Media::Effects::IAudioEffectDefinition const& definition) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->AddAudioEffectAsync(get_abi(definition), put_abi(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> consume_Windows_Media_Capture_IMediaCapture4<D>::AddVideoEffectAsync(Windows::Media::Effects::IVideoEffectDefinition const& definition, Windows::Media::Capture::MediaStreamType const& mediaStreamType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension> op{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->AddVideoEffectAsync(get_abi(definition), get_abi(mediaStreamType), put_abi(op)));
    return op;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture4<D>::PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->PauseRecordAsync(get_abi(behavior), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture4<D>::ResumeRecordAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->ResumeRecordAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamStateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->add_CameraStreamStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture4> consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture4>(this, &abi_t<Windows::Media::Capture::IMediaCapture4>::remove_CameraStreamStateChanged, CameraStreamStateChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->remove_CameraStreamStateChanged(get_abi(token)));
}

template <typename D> Windows::Media::Devices::CameraStreamState consume_Windows_Media_Capture_IMediaCapture4<D>::CameraStreamState() const
{
    Windows::Media::Devices::CameraStreamState streamState{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->get_CameraStreamState(put_abi(streamState)));
    return streamState;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> consume_Windows_Media_Capture_IMediaCapture4<D>::GetPreviewFrameAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->GetPreviewFrameAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> consume_Windows_Media_Capture_IMediaCapture4<D>::GetPreviewFrameAsync(Windows::Media::VideoFrame const& destination) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->GetPreviewFrameCopyAsync(get_abi(destination), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->add_ThermalStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture4> consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture4>(this, &abi_t<Windows::Media::Capture::IMediaCapture4>::remove_ThermalStatusChanged, ThermalStatusChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->remove_ThermalStatusChanged(get_abi(token)));
}

template <typename D> Windows::Media::Capture::MediaCaptureThermalStatus consume_Windows_Media_Capture_IMediaCapture4<D>::ThermalStatus() const
{
    Windows::Media::Capture::MediaCaptureThermalStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->get_ThermalStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> consume_Windows_Media_Capture_IMediaCapture4<D>::PrepareAdvancedPhotoCaptureAsync(Windows::Media::MediaProperties::ImageEncodingProperties const& encodingProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture4)->PrepareAdvancedPhotoCaptureAsync(get_abi(encodingProperties), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCapture5<D>::RemoveEffectAsync(Windows::Media::IMediaExtension const& effect) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->RemoveEffectAsync(get_abi(effect), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> consume_Windows_Media_Capture_IMediaCapture5<D>::PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior const& behavior) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->PauseRecordWithResultAsync(get_abi(behavior), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> consume_Windows_Media_Capture_IMediaCapture5<D>::StopRecordWithResultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->StopRecordWithResultAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> consume_Windows_Media_Capture_IMediaCapture5<D>::FrameSources() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->get_FrameSources(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> consume_Windows_Media_Capture_IMediaCapture5<D>::CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->CreateFrameReaderAsync(get_abi(inputSource), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> consume_Windows_Media_Capture_IMediaCapture5<D>::CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->CreateFrameReaderWithSubtypeAsync(get_abi(inputSource), get_abi(outputSubtype), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> consume_Windows_Media_Capture_IMediaCapture5<D>::CreateFrameReaderAsync(Windows::Media::Capture::Frames::MediaFrameSource const& inputSource, param::hstring const& outputSubtype, Windows::Graphics::Imaging::BitmapSize const& outputSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture5)->CreateFrameReaderWithSubtypeAndSizeAsync(get_abi(inputSource), get_abi(outputSubtype), get_abi(outputSize), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture6)->add_CaptureDeviceExclusiveControlStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::IMediaCapture6> consume_Windows_Media_Capture_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::IMediaCapture6>(this, &abi_t<Windows::Media::Capture::IMediaCapture6>::remove_CaptureDeviceExclusiveControlStatusChanged, CaptureDeviceExclusiveControlStatusChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_IMediaCapture6<D>::CaptureDeviceExclusiveControlStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture6)->remove_CaptureDeviceExclusiveControlStatusChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> consume_Windows_Media_Capture_IMediaCapture6<D>::CreateMultiSourceFrameReaderAsync(param::async_iterable<Windows::Media::Capture::Frames::MediaFrameSource> const& inputSources) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapture6)->CreateMultiSourceFrameReaderAsync(get_abi(inputSources), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus consume_Windows_Media_Capture_IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs<D>::Status() const
{
    Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureFailedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IMediaCaptureFailedEventArgs<D>::Code() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureFailedEventArgs)->get_Code(&value));
    return value;
}

template <typename D> Windows::Media::Devices::MediaCaptureFocusState consume_Windows_Media_Capture_IMediaCaptureFocusChangedEventArgs<D>::FocusState() const
{
    Windows::Media::Devices::MediaCaptureFocusState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::AudioDeviceId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_AudioDeviceId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::AudioDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_AudioDeviceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::VideoDeviceId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_VideoDeviceId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_StreamingCaptureMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_StreamingCaptureMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->put_PhotoCaptureSource(get_abi(value)));
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource consume_Windows_Media_Capture_IMediaCaptureInitializationSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings)->get_PhotoCaptureSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::MediaCategory(Windows::Media::Capture::MediaCategory const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->put_MediaCategory(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCategory consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->get_MediaCategory(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::AudioProcessing(Windows::Media::AudioProcessing const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->put_AudioProcessing(get_abi(value)));
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Capture_IMediaCaptureInitializationSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings2)->get_AudioProcessing(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::AudioSource(Windows::Media::Core::IMediaSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->put_AudioSource(get_abi(value)));
}

template <typename D> Windows::Media::Core::IMediaSource consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::AudioSource() const
{
    Windows::Media::Core::IMediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->get_AudioSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::VideoSource(Windows::Media::Core::IMediaSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->put_VideoSource(get_abi(value)));
}

template <typename D> Windows::Media::Core::IMediaSource consume_Windows_Media_Capture_IMediaCaptureInitializationSettings3<D>::VideoSource() const
{
    Windows::Media::Core::IMediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings3)->get_VideoSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfile consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::VideoProfile() const
{
    Windows::Media::Capture::MediaCaptureVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::VideoProfile(Windows::Media::Capture::MediaCaptureVideoProfile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_VideoProfile(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_PreviewMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PreviewMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_PreviewMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_RecordMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::RecordMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_RecordMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription() const
{
    Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->get_PhotoMediaDescription(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings4<D>::PhotoMediaDescription(Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings4)->put_PhotoMediaDescription(get_abi(value)));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGroup consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SourceGroup() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->get_SourceGroup(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SourceGroup(Windows::Media::Capture::Frames::MediaFrameSourceGroup const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->put_SourceGroup(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureSharingMode consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SharingMode() const
{
    Windows::Media::Capture::MediaCaptureSharingMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->get_SharingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::SharingMode(Windows::Media::Capture::MediaCaptureSharingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->put_SharingMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::MediaCaptureMemoryPreference consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::MemoryPreference() const
{
    Windows::Media::Capture::MediaCaptureMemoryPreference value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->get_MemoryPreference(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings5<D>::MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings5)->put_MemoryPreference(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>::AlwaysPlaySystemShutterSound() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings6)->get_AlwaysPlaySystemShutterSound(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Capture_IMediaCaptureInitializationSettings6<D>::AlwaysPlaySystemShutterSound(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureInitializationSettings6)->put_AlwaysPlaySystemShutterSound(value));
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Capture_IMediaCapturePauseResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapturePauseResult)->get_LastFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IMediaCapturePauseResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCapturePauseResult)->get_RecordDuration(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureSettings<D>::AudioDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_AudioDeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureSettings<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::StreamingCaptureMode consume_Windows_Media_Capture_IMediaCaptureSettings<D>::StreamingCaptureMode() const
{
    Windows::Media::Capture::StreamingCaptureMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_StreamingCaptureMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::PhotoCaptureSource consume_Windows_Media_Capture_IMediaCaptureSettings<D>::PhotoCaptureSource() const
{
    Windows::Media::Capture::PhotoCaptureSource value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_PhotoCaptureSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::VideoDeviceCharacteristic consume_Windows_Media_Capture_IMediaCaptureSettings<D>::VideoDeviceCharacteristic() const
{
    Windows::Media::Capture::VideoDeviceCharacteristic value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings)->get_VideoDeviceCharacteristic(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_ConcurrentRecordAndPhotoSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::ConcurrentRecordAndPhotoSequenceSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_ConcurrentRecordAndPhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::CameraSoundRequiredForRegion() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_CameraSoundRequiredForRegion(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::Horizontal35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_Horizontal35mmEquivalentFocalLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::PitchOffsetDegrees() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_PitchOffsetDegrees(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::Vertical35mmEquivalentFocalLength() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_Vertical35mmEquivalentFocalLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaCategory consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::MediaCategory() const
{
    Windows::Media::Capture::MediaCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_MediaCategory(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Capture_IMediaCaptureSettings2<D>::AudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings2)->get_AudioProcessing(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice consume_Windows_Media_Capture_IMediaCaptureSettings3<D>::Direct3D11Device() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureSettings3)->get_Direct3D11Device(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureStatics<D>::IsVideoProfileSupported(param::hstring const& videoDeviceId) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->IsVideoProfileSupported(get_abi(videoDeviceId), &value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureStatics<D>::FindAllVideoProfiles(param::hstring const& videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->FindAllVideoProfiles(get_abi(videoDeviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureStatics<D>::FindConcurrentProfiles(param::hstring const& videoDeviceId) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->FindConcurrentProfiles(get_abi(videoDeviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureStatics<D>::FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStatics)->FindKnownVideoProfiles(get_abi(videoDeviceId), get_abi(name), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Capture_IMediaCaptureStopResult<D>::LastFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStopResult)->get_LastFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IMediaCaptureStopResult<D>::RecordDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureStopResult)->get_RecordDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StartPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StartPreviewAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, Windows::Media::IMediaExtension const& customMediaSink) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StartPreviewToCustomSinkAsync(get_abi(encodingProfile), get_abi(customMediaSink), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StartPreviewToCustomSinkAsync(Windows::Media::MediaProperties::MediaEncodingProfile const& encodingProfile, param::hstring const& customSinkActivationId, Windows::Foundation::Collections::IPropertySet const& customSinkSettings) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StartPreviewToCustomSinkIdAsync(get_abi(encodingProfile), get_abi(customSinkActivationId), get_abi(customSinkSettings), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_IMediaCaptureVideoPreview<D>::StopPreviewAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoPreview)->StopPreviewAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::VideoDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_VideoDeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::SupportedPreviewMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_SupportedPreviewMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::SupportedRecordMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_SupportedRecordMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::SupportedPhotoMediaDescription() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->get_SupportedPhotoMediaDescription(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> consume_Windows_Media_Capture_IMediaCaptureVideoProfile<D>::GetConcurrency() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile)->GetConcurrency(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo> consume_Windows_Media_Capture_IMediaCaptureVideoProfile2<D>::FrameSourceInfos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile2)->get_FrameSourceInfos(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> consume_Windows_Media_Capture_IMediaCaptureVideoProfile2<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfile2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_Height(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::FrameRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_FrameRate(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::IsVariablePhotoSequenceSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_IsVariablePhotoSequenceSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription<D>::IsHdrVideoSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription)->get_IsHdrVideoSupported(&value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription2<D>::Subtype() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2)->get_Subtype(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> consume_Windows_Media_Capture_IMediaCaptureVideoProfileMediaDescription2<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Capture_IOptionalReferencePhotoCapturedEventArgs<D>::Context() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs)->get_Context(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>::Thumbnail() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoCapturedEventArgs)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IPhotoCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::CapturedFrame consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>::Frame() const
{
    Windows::Media::Capture::CapturedFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_IPhotoConfirmationCapturedEventArgs<D>::CaptureTimeOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs)->get_CaptureTimeOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_Capture_IVideoStreamConfiguration<D>::InputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IVideoStreamConfiguration)->get_InputProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_Capture_IVideoStreamConfiguration<D>::OutputProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::IVideoStreamConfiguration)->get_OutputProperties(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Media::Capture::MediaCaptureFailedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Capture::MediaCaptureFailedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Capture::MediaCaptureFailedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* errorEventArgs) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Capture::MediaCapture const*>(&sender), *reinterpret_cast<Windows::Media::Capture::MediaCaptureFailedEventArgs const*>(&errorEventArgs));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Media::Capture::RecordLimitationExceededEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Media::Capture::RecordLimitationExceededEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Media::Capture::RecordLimitationExceededEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Media::Capture::MediaCapture const*>(&sender));
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
struct produce<D, Windows::Media::Capture::IAdvancedCapturedPhoto> : produce_base<D, Windows::Media::Capture::IAdvancedCapturedPhoto>
{
    HRESULT __stdcall get_Frame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Devices::AdvancedPhotoMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::AdvancedPhotoMode>(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Context(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAdvancedCapturedPhoto2> : produce_base<D, Windows::Media::Capture::IAdvancedCapturedPhoto2>
{
    HRESULT __stdcall get_FrameBoundsRelativeToReferencePhoto(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Rect>>(this->shim().FrameBoundsRelativeToReferencePhoto());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAdvancedPhotoCapture> : produce_base<D, Windows::Media::Capture::IAdvancedPhotoCapture>
{
    HRESULT __stdcall CaptureAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>>(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CaptureWithContextAsync(void* context, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedCapturedPhoto>>(this->shim().CaptureAsync(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&context)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_OptionalReferencePhotoCaptured(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().OptionalReferencePhotoCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionalReferencePhotoCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionalReferencePhotoCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AllPhotosCaptured(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AllPhotosCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AdvancedPhotoCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AllPhotosCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllPhotosCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundService> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundService>
{
    HRESULT __stdcall put_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlugInState(*reinterpret_cast<Windows::Media::Capture::AppBroadcastPlugInState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPlugInState>(this->shim().PlugInState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SignInInfo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignInInfo(*reinterpret_cast<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SignInInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo>(this->shim().SignInInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StreamInfo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamInfo(*reinterpret_cast<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StreamInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo>(this->shim().StreamInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastTitle(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BroadcastTitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ViewerCount(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewerCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewerCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ViewerCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TerminateBroadcast(Windows::Media::Capture::AppBroadcastTerminationReason reason, uint32_t providerSpecificReason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TerminateBroadcast(*reinterpret_cast<Windows::Media::Capture::AppBroadcastTerminationReason const*>(&reason), providerSpecificReason);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_HeartbeatRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().HeartbeatRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_HeartbeatRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HeartbeatRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TitleId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TitleId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundService2> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundService2>
{
    HRESULT __stdcall put_BroadcastTitle(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastTitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastLanguage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BroadcastLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BroadcastLanguage(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastLanguage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastChannel(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BroadcastChannel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BroadcastChannel(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastChannel(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BroadcastTitleChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BroadcastTitleChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BroadcastTitleChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastTitleChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BroadcastLanguageChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BroadcastLanguageChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BroadcastLanguageChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastLanguageChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BroadcastChannelChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BroadcastChannelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundService, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BroadcastChannelChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastChannelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo>
{
    HRESULT __stdcall get_SignInState(Windows::Media::Capture::AppBroadcastSignInState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastSignInState>(this->shim().SignInState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OAuthRequestUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OAuthRequestUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthRequestUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().OAuthRequestUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OAuthCallbackUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OAuthCallbackUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthCallbackUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().OAuthCallbackUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationResult(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::WebAuthenticationResult>(this->shim().AuthenticationResult());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SignInStateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SignInStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SignInStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignInStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2>
{
    HRESULT __stdcall add_UserNameChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UserNameChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UserNameChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserNameChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo>
{
    HRESULT __stdcall get_StreamState(Windows::Media::Capture::AppBroadcastStreamState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastStreamState>(this->shim().StreamState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredVideoEncodingBitrate(uint64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredVideoEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredVideoEncodingBitrate(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().DesiredVideoEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BandwidthTestBitrate(uint64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BandwidthTestBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BandwidthTestBitrate(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BandwidthTestBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioCodec(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioCodec(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioCodec(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioCodec());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastStreamReader(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastStreamReader>(this->shim().BroadcastStreamReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StreamStateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StreamStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StreamStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoEncodingResolutionChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoEncodingResolutionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoEncodingResolutionChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingResolutionChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoEncodingBitrateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoEncodingBitrateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoEncodingBitrateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingBitrateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2> : produce_base<D, Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2>
{
    HRESULT __stdcall ReportProblemWithStream() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportProblemWithStream();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppBroadcastCameraCaptureState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastCameraCaptureState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastGlobalSettings> : produce_base<D, Windows::Media::Capture::IAppBroadcastGlobalSettings>
{
    HRESULT __stdcall get_IsBroadcastEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBroadcastEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabledByPolicy(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDisabledByPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsGpuConstrained(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGpuConstrained());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasHardwareEncoder(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasHardwareEncoder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAudioCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAudioCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAudioCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMicrophoneCaptureEnabledByDefault(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMicrophoneCaptureEnabledByDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEchoCancellationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEchoCancellationEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEchoCancellationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SystemAudioGain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemAudioGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemAudioGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SystemAudioGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MicrophoneGain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MicrophoneGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCameraCaptureEnabledByDefault(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCameraCaptureEnabledByDefault(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCameraCaptureEnabledByDefault(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCameraCaptureEnabledByDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedCameraId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedCameraId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedCameraId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SelectedCameraId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraOverlayLocation(*reinterpret_cast<Windows::Media::Capture::AppBroadcastCameraOverlayLocation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraOverlayLocation(Windows::Media::Capture::AppBroadcastCameraOverlayLocation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastCameraOverlayLocation>(this->shim().CameraOverlayLocation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraOverlaySize(*reinterpret_cast<Windows::Media::Capture::AppBroadcastCameraOverlaySize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraOverlaySize(Windows::Media::Capture::AppBroadcastCameraOverlaySize* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastCameraOverlaySize>(this->shim().CameraOverlaySize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCursorImageCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCursorImageCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs>
{
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
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastManagerStatics> : produce_base<D, Windows::Media::Capture::IAppBroadcastManagerStatics>
{
    HRESULT __stdcall GetGlobalSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastGlobalSettings>(this->shim().GetGlobalSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ApplyGlobalSettings(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplyGlobalSettings(*reinterpret_cast<Windows::Media::Capture::AppBroadcastGlobalSettings const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetProviderSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastProviderSettings>(this->shim().GetProviderSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ApplyProviderSettings(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplyProviderSettings(*reinterpret_cast<Windows::Media::Capture::AppBroadcastProviderSettings const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppBroadcastMicrophoneCaptureState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugIn> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugIn>
{
    HRESULT __stdcall get_AppId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastProviderSettings>(this->shim().ProviderSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugInManager> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugInManager>
{
    HRESULT __stdcall get_IsBroadcastProviderAvailable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBroadcastProviderAvailable());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInList(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::AppBroadcastPlugIn>>(this->shim().PlugInList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultPlugIn(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPlugIn>(this->shim().DefaultPlugIn());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultPlugIn(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultPlugIn(*reinterpret_cast<Windows::Media::Capture::AppBroadcastPlugIn const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugInManagerStatics> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>
{
    HRESULT __stdcall GetDefault(void** ppInstance) noexcept final
    {
        try
        {
            *ppInstance = nullptr;
            typename D::abi_guard guard(this->shim());
            *ppInstance = detach_from<Windows::Media::Capture::AppBroadcastPlugInManager>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(void* user, void** ppInstance) noexcept final
    {
        try
        {
            *ppInstance = nullptr;
            typename D::abi_guard guard(this->shim());
            *ppInstance = detach_from<Windows::Media::Capture::AppBroadcastPlugInManager>(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs>
{
    HRESULT __stdcall get_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPlugInState>(this->shim().PlugInState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreview> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreview>
{
    HRESULT __stdcall StopPreview() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPreview();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewState(Windows::Media::Capture::AppBroadcastPreviewState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPreviewState>(this->shim().PreviewState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PreviewStateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PreviewStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreview, Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviewStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviewStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewStreamReader(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPreviewStreamReader>(this->shim().PreviewStreamReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs>
{
    HRESULT __stdcall get_PreviewState(Windows::Media::Capture::AppBroadcastPreviewState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPreviewState>(this->shim().PreviewState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStreamReader> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStreamReader>
{
    HRESULT __stdcall get_VideoWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideoWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideoHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoStride(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideoStride());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().VideoBitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapAlphaMode>(this->shim().VideoBitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetNextVideoFrame(void** frame) noexcept final
    {
        try
        {
            *frame = nullptr;
            typename D::abi_guard guard(this->shim());
            *frame = detach_from<Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame>(this->shim().TryGetNextVideoFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoFrameArrived(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoFrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastPreviewStreamReader, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoFrameArrived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoFrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame>
{
    HRESULT __stdcall get_VideoHeader(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader>(this->shim().VideoHeader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBuffer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().VideoBuffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader> : produce_base<D, Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader>
{
    HRESULT __stdcall get_AbsoluteTimestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().AbsoluteTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTimestamp(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastProviderSettings> : produce_base<D, Windows::Media::Capture::IAppBroadcastProviderSettings>
{
    HRESULT __stdcall put_DefaultBroadcastTitle(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultBroadcastTitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultBroadcastTitle(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultBroadcastTitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioEncodingBitrate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().AudioEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CustomVideoEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CustomVideoEncodingHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CustomVideoEncodingWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingBitrateMode(*reinterpret_cast<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingBitrateMode(Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastVideoEncodingBitrateMode>(this->shim().VideoEncodingBitrateMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingResolutionMode(*reinterpret_cast<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingResolutionMode(Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastVideoEncodingResolutionMode>(this->shim().VideoEncodingResolutionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastServices> : produce_base<D, Windows::Media::Capture::IAppBroadcastServices>
{
    HRESULT __stdcall get_CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastCaptureTargetType>(this->shim().CaptureTargetType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CaptureTargetType(Windows::Media::Capture::AppBroadcastCaptureTargetType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureTargetType(*reinterpret_cast<Windows::Media::Capture::AppBroadcastCaptureTargetType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastTitle(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BroadcastTitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BroadcastTitle(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastTitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastLanguage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BroadcastLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BroadcastLanguage(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BroadcastLanguage(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanCapture(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanCapture());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnterBroadcastModeAsync(void* plugIn, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<uint32_t>>(this->shim().EnterBroadcastModeAsync(*reinterpret_cast<Windows::Media::Capture::AppBroadcastPlugIn const*>(&plugIn)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ExitBroadcastMode(Windows::Media::Capture::AppBroadcastExitBroadcastModeReason reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitBroadcastMode(*reinterpret_cast<Windows::Media::Capture::AppBroadcastExitBroadcastModeReason const*>(&reason));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartBroadcast() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartBroadcast();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PauseBroadcast() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PauseBroadcast();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ResumeBroadcast() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResumeBroadcast();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartPreview(Windows::Foundation::Size desiredSize, void** preview) noexcept final
    {
        try
        {
            *preview = nullptr;
            typename D::abi_guard guard(this->shim());
            *preview = detach_from<Windows::Media::Capture::AppBroadcastPreview>(this->shim().StartPreview(*reinterpret_cast<Windows::Foundation::Size const*>(&desiredSize)));
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
            *value = detach_from<Windows::Media::Capture::AppBroadcastState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs>
{
    HRESULT __stdcall get_SignInState(Windows::Media::Capture::AppBroadcastSignInState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastSignInState>(this->shim().SignInState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::Media::Capture::AppBroadcastSignInResult* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastSignInResult>(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastState> : produce_base<D, Windows::Media::Capture::IAppBroadcastState>
{
    HRESULT __stdcall get_IsCaptureTargetRunning(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCaptureTargetRunning());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewerCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ViewerCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldCaptureMicrophone(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldCaptureMicrophone());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldCaptureMicrophone(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RestartMicrophoneCapture() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestartMicrophoneCapture();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldCaptureCamera(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldCaptureCamera());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldCaptureCamera(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldCaptureCamera(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RestartCameraCapture() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestartCameraCapture();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EncodedVideoSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().EncodedVideoSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureState(Windows::Media::Capture::AppBroadcastMicrophoneCaptureState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastMicrophoneCaptureState>(this->shim().MicrophoneCaptureState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureError(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MicrophoneCaptureError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraCaptureState(Windows::Media::Capture::AppBroadcastCameraCaptureState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastCameraCaptureState>(this->shim().CameraCaptureState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraCaptureError(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CameraCaptureError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StreamState(Windows::Media::Capture::AppBroadcastStreamState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastStreamState>(this->shim().StreamState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInState(Windows::Media::Capture::AppBroadcastPlugInState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastPlugInState>(this->shim().PlugInState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthRequestUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().OAuthRequestUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OAuthCallbackUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().OAuthCallbackUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationResult(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::WebAuthenticationResult>(this->shim().AuthenticationResult());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationResult(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationResult(*reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationResult const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SignInState(Windows::Media::Capture::AppBroadcastSignInState value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SignInState(*reinterpret_cast<Windows::Media::Capture::AppBroadcastSignInState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SignInState(Windows::Media::Capture::AppBroadcastSignInState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastSignInState>(this->shim().SignInState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TerminationReason(Windows::Media::Capture::AppBroadcastTerminationReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastTerminationReason>(this->shim().TerminationReason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TerminationReasonPlugInSpecific(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TerminationReasonPlugInSpecific());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ViewerCountChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ViewerCountChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ViewerCountChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewerCountChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MicrophoneCaptureStateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MicrophoneCaptureStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MicrophoneCaptureStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneCaptureStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CameraCaptureStateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CameraCaptureStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraCaptureStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraCaptureStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlugInStateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlugInStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlugInStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlugInStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StreamStateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StreamStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StreamStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CaptureTargetClosed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CaptureTargetClosed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastState, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CaptureTargetClosed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureTargetClosed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamAudioFrame> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamAudioFrame>
{
    HRESULT __stdcall get_AudioHeader(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastStreamAudioHeader>(this->shim().AudioHeader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioBuffer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().AudioBuffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamAudioHeader> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamAudioHeader>
{
    HRESULT __stdcall get_AbsoluteTimestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().AbsoluteTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTimestamp(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasDiscontinuity(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasDiscontinuity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamReader> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamReader>
{
    HRESULT __stdcall get_AudioChannels(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().AudioChannels());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioSampleRate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().AudioSampleRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioAacSequence(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().AudioAacSequence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioBitrate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().AudioBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetNextAudioFrame(void** frame) noexcept final
    {
        try
        {
            *frame = nullptr;
            typename D::abi_guard guard(this->shim());
            *frame = detach_from<Windows::Media::Capture::AppBroadcastStreamAudioFrame>(this->shim().TryGetNextAudioFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideoWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideoHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBitrate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().VideoBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetNextVideoFrame(void** frame) noexcept final
    {
        try
        {
            *frame = nullptr;
            typename D::abi_guard guard(this->shim());
            *frame = detach_from<Windows::Media::Capture::AppBroadcastStreamVideoFrame>(this->shim().TryGetNextVideoFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AudioFrameArrived(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AudioFrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioFrameArrived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioFrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoFrameArrived(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoFrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppBroadcastStreamReader, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoFrameArrived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoFrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs>
{
    HRESULT __stdcall get_StreamState(Windows::Media::Capture::AppBroadcastStreamState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastStreamState>(this->shim().StreamState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamVideoFrame> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamVideoFrame>
{
    HRESULT __stdcall get_VideoHeader(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastStreamVideoHeader>(this->shim().VideoHeader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoBuffer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().VideoBuffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastStreamVideoHeader> : produce_base<D, Windows::Media::Capture::IAppBroadcastStreamVideoHeader>
{
    HRESULT __stdcall get_AbsoluteTimestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().AbsoluteTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTimestamp(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsKeyFrame(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsKeyFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasDiscontinuity(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasDiscontinuity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameId(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().FrameId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastTriggerDetails> : produce_base<D, Windows::Media::Capture::IAppBroadcastTriggerDetails>
{
    HRESULT __stdcall get_BackgroundService(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastBackgroundService>(this->shim().BackgroundService());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs>
{
    HRESULT __stdcall get_ViewerCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ViewerCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCapture> : produce_base<D, Windows::Media::Capture::IAppCapture>
{
    HRESULT __stdcall get_IsCapturingAudio(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCapturingAudio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCapturingVideo(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCapturingVideo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CapturingChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CapturingChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CapturingChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CapturingChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> : produce_base<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys>
{
    HRESULT __stdcall put_ToggleGameBarKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleGameBarKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleGameBarKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().ToggleGameBarKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleGameBarKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleGameBarKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().ToggleGameBarKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SaveHistoricalVideoKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveHistoricalVideoKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SaveHistoricalVideoKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().SaveHistoricalVideoKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveHistoricalVideoKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SaveHistoricalVideoKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().SaveHistoricalVideoKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().ToggleRecordingKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().ToggleRecordingKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TakeScreenshotKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TakeScreenshotKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TakeScreenshotKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().TakeScreenshotKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TakeScreenshotKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TakeScreenshotKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().TakeScreenshotKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingIndicatorKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingIndicatorKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingIndicatorKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().ToggleRecordingIndicatorKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleRecordingIndicatorKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleRecordingIndicatorKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().ToggleRecordingIndicatorKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2> : produce_base<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2>
{
    HRESULT __stdcall put_ToggleMicrophoneCaptureKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleMicrophoneCaptureKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleMicrophoneCaptureKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().ToggleMicrophoneCaptureKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleMicrophoneCaptureKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleMicrophoneCaptureKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().ToggleMicrophoneCaptureKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3> : produce_base<D, Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3>
{
    HRESULT __stdcall put_ToggleCameraCaptureKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleCameraCaptureKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleCameraCaptureKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().ToggleCameraCaptureKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleCameraCaptureKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleCameraCaptureKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().ToggleCameraCaptureKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleBroadcastKey(Windows::System::VirtualKey value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleBroadcastKey(*reinterpret_cast<Windows::System::VirtualKey const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleBroadcastKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().ToggleBroadcastKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ToggleBroadcastKeyModifiers(*reinterpret_cast<Windows::System::VirtualKeyModifiers const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ToggleBroadcastKeyModifiers(Windows::System::VirtualKeyModifiers* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKeyModifiers>(this->shim().ToggleBroadcastKeyModifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs>
{
    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs>
{
    HRESULT __stdcall get_File(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureManagerStatics> : produce_base<D, Windows::Media::Capture::IAppCaptureManagerStatics>
{
    HRESULT __stdcall GetCurrentSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureSettings>(this->shim().GetCurrentSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ApplySettings(void* appCaptureSettings) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ApplySettings(*reinterpret_cast<Windows::Media::Capture::AppCaptureSettings const*>(&appCaptureSettings));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureMetadataWriter> : produce_base<D, Windows::Media::Capture::IAppCaptureMetadataWriter>
{
    HRESULT __stdcall AddStringEvent(HSTRING name, HSTRING value, Windows::Media::Capture::AppCaptureMetadataPriority priority) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddStringEvent(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Media::Capture::AppCaptureMetadataPriority const*>(&priority));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddInt32Event(HSTRING name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority priority) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddInt32Event(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Media::Capture::AppCaptureMetadataPriority const*>(&priority));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddDoubleEvent(HSTRING name, double value, Windows::Media::Capture::AppCaptureMetadataPriority priority) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddDoubleEvent(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Media::Capture::AppCaptureMetadataPriority const*>(&priority));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartStringState(HSTRING name, HSTRING value, Windows::Media::Capture::AppCaptureMetadataPriority priority) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartStringState(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::Media::Capture::AppCaptureMetadataPriority const*>(&priority));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartInt32State(HSTRING name, int32_t value, Windows::Media::Capture::AppCaptureMetadataPriority priority) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartInt32State(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Media::Capture::AppCaptureMetadataPriority const*>(&priority));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartDoubleState(HSTRING name, double value, Windows::Media::Capture::AppCaptureMetadataPriority priority) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDoubleState(*reinterpret_cast<hstring const*>(&name), value, *reinterpret_cast<Windows::Media::Capture::AppCaptureMetadataPriority const*>(&priority));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopState(HSTRING name) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopState(*reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopAllStates() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAllStates();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemainingStorageBytesAvailable(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().RemainingStorageBytesAvailable());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MetadataPurged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MetadataPurged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureMetadataWriter, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MetadataPurged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MetadataPurged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppCaptureMicrophoneCaptureState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureRecordOperation> : produce_base<D, Windows::Media::Capture::IAppCaptureRecordOperation>
{
    HRESULT __stdcall StopRecording() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopRecording();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Media::Capture::AppCaptureRecordingState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureRecordingState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().Duration());
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
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsFileTruncated(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().IsFileTruncated());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DurationGenerated(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DurationGenerated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DurationGenerated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DurationGenerated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FileGenerated(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FileGenerated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureRecordOperation, Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FileGenerated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileGenerated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs> : produce_base<D, Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs>
{
    HRESULT __stdcall get_State(Windows::Media::Capture::AppCaptureRecordingState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureRecordingState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureServices> : produce_base<D, Windows::Media::Capture::IAppCaptureServices>
{
    HRESULT __stdcall Record(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Media::Capture::AppCaptureRecordOperation>(this->shim().Record());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RecordTimeSpan(Windows::Foundation::DateTime startTime, Windows::Foundation::TimeSpan duration, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Media::Capture::AppCaptureRecordOperation>(this->shim().RecordTimeSpan(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanCapture(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanCapture());
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
            *value = detach_from<Windows::Media::Capture::AppCaptureState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings>
{
    HRESULT __stdcall put_AppCaptureDestinationFolder(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppCaptureDestinationFolder(*reinterpret_cast<Windows::Storage::StorageFolder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppCaptureDestinationFolder(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().AppCaptureDestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioEncodingBitrate(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioEncodingBitrate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().AudioEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsAudioCaptureEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAudioCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAudioCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAudioCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingBitrate(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingBitrate(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CustomVideoEncodingBitrate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingHeight(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CustomVideoEncodingHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CustomVideoEncodingWidth(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomVideoEncodingWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomVideoEncodingWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CustomVideoEncodingWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HistoricalBufferLength(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HistoricalBufferLength(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HistoricalBufferLength(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().HistoricalBufferLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HistoricalBufferLengthUnit(*reinterpret_cast<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HistoricalBufferLengthUnit(Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureHistoricalBufferLengthUnit>(this->shim().HistoricalBufferLengthUnit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsHistoricalCaptureEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHistoricalCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHistoricalCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsHistoricalCaptureOnBatteryAllowed(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHistoricalCaptureOnBatteryAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureOnBatteryAllowed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHistoricalCaptureOnBatteryAllowed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsHistoricalCaptureOnWirelessDisplayAllowed(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHistoricalCaptureOnWirelessDisplayAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureOnWirelessDisplayAllowed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHistoricalCaptureOnWirelessDisplayAllowed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaximumRecordLength(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaximumRecordLength(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumRecordLength(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().MaximumRecordLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScreenshotDestinationFolder(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScreenshotDestinationFolder(*reinterpret_cast<Windows::Storage::StorageFolder const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenshotDestinationFolder(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().ScreenshotDestinationFolder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingBitrateMode(*reinterpret_cast<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingBitrateMode(Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureVideoEncodingBitrateMode>(this->shim().VideoEncodingBitrateMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingResolutionMode(*reinterpret_cast<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingResolutionMode(Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureVideoEncodingResolutionMode>(this->shim().VideoEncodingResolutionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsAppCaptureEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAppCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAppCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAppCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCpuConstrained(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCpuConstrained());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDisabledByPolicy(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDisabledByPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMemoryConstrained(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMemoryConstrained());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasHardwareEncoder(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasHardwareEncoder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings2> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings2>
{
    HRESULT __stdcall get_IsGpuConstrained(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGpuConstrained());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateShortcutKeys(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureAlternateShortcutKeys>(this->shim().AlternateShortcutKeys());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings3> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings3>
{
    HRESULT __stdcall put_IsMicrophoneCaptureEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMicrophoneCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMicrophoneCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMicrophoneCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings4> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings4>
{
    HRESULT __stdcall put_IsMicrophoneCaptureEnabledByDefault(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsMicrophoneCaptureEnabledByDefault(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMicrophoneCaptureEnabledByDefault(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMicrophoneCaptureEnabledByDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SystemAudioGain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemAudioGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemAudioGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SystemAudioGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MicrophoneGain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MicrophoneGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoEncodingFrameRateMode(*reinterpret_cast<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoEncodingFrameRateMode(Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureVideoEncodingFrameRateMode>(this->shim().VideoEncodingFrameRateMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureSettings5> : produce_base<D, Windows::Media::Capture::IAppCaptureSettings5>
{
    HRESULT __stdcall put_IsEchoCancellationEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEchoCancellationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEchoCancellationEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEchoCancellationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCursorImageCaptureEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCursorImageCaptureEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCursorImageCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCursorImageCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureState> : produce_base<D, Windows::Media::Capture::IAppCaptureState>
{
    HRESULT __stdcall get_IsTargetRunning(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTargetRunning());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHistoricalCaptureEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHistoricalCaptureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShouldCaptureMicrophone(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldCaptureMicrophone());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldCaptureMicrophone(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldCaptureMicrophone(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RestartMicrophoneCapture() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RestartMicrophoneCapture();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureState(Windows::Media::Capture::AppCaptureMicrophoneCaptureState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureMicrophoneCaptureState>(this->shim().MicrophoneCaptureState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MicrophoneCaptureError(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MicrophoneCaptureError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MicrophoneCaptureStateChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MicrophoneCaptureStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MicrophoneCaptureStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MicrophoneCaptureStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CaptureTargetClosed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CaptureTargetClosed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::AppCaptureState, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CaptureTargetClosed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureTargetClosed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureStatics> : produce_base<D, Windows::Media::Capture::IAppCaptureStatics>
{
    HRESULT __stdcall GetForCurrentView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCapture>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IAppCaptureStatics2> : produce_base<D, Windows::Media::Capture::IAppCaptureStatics2>
{
    HRESULT __stdcall SetAllowedAsync(bool allowed, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetAllowedAsync(allowed));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUI> : produce_base<D, Windows::Media::Capture::ICameraCaptureUI>
{
    HRESULT __stdcall get_PhotoSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings>(this->shim().PhotoSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings>(this->shim().VideoSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CaptureFileAsync(Windows::Media::Capture::CameraCaptureUIMode mode, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().CaptureFileAsync(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> : produce_base<D, Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings>
{
    HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CameraCaptureUIPhotoFormat>(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIPhotoFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIPhotoFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution>(this->shim().MaxResolution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxResolution(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIMaxPhotoResolution const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedSizeInPixels(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().CroppedSizeInPixels());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedSizeInPixels(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CroppedSizeInPixels(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CroppedAspectRatio(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().CroppedAspectRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CroppedAspectRatio(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CroppedAspectRatio(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowCropping(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowCropping());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowCropping(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowCropping(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> : produce_base<D, Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings>
{
    HRESULT __stdcall get_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CameraCaptureUIVideoFormat>(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Format(Windows::Media::Capture::CameraCaptureUIVideoFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIVideoFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution>(this->shim().MaxResolution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxResolution(Windows::Media::Capture::CameraCaptureUIMaxVideoResolution value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxResolution(*reinterpret_cast<Windows::Media::Capture::CameraCaptureUIMaxVideoResolution const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDurationInSeconds(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxDurationInSeconds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxDurationInSeconds(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxDurationInSeconds(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowTrimming(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowTrimming());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowTrimming(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowTrimming(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICameraOptionsUIStatics> : produce_base<D, Windows::Media::Capture::ICameraOptionsUIStatics>
{
    HRESULT __stdcall Show(void* mediaCapture) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Show(*reinterpret_cast<Windows::Media::Capture::MediaCapture const*>(&mediaCapture));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrame> : produce_base<D, Windows::Media::Capture::ICapturedFrame>
{
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
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrame2> : produce_base<D, Windows::Media::Capture::ICapturedFrame2>
{
    HRESULT __stdcall get_ControlValues(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrameControlValues>(this->shim().ControlValues());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPropertySet>(this->shim().BitmapProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrameControlValues> : produce_base<D, Windows::Media::Capture::ICapturedFrameControlValues>
{
    HRESULT __stdcall get_Exposure(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsoSpeed(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().IsoSpeed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Focus(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().Focus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SceneMode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Media::Devices::CaptureSceneMode>>(this->shim().SceneMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Flashed(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().Flashed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FlashPowerPercent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().FlashPowerPercent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalance(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().WhiteBalance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ZoomFactor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().ZoomFactor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrameControlValues2> : produce_base<D, Windows::Media::Capture::ICapturedFrameControlValues2>
{
    HRESULT __stdcall get_FocusState(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Media::Devices::MediaCaptureFocusState>>(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsoDigitalGain(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<double>>(this->shim().IsoDigitalGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsoAnalogGain(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<double>>(this->shim().IsoAnalogGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SensorFrameRate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaRatio>(this->shim().SensorFrameRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteBalanceGain(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Media::Capture::WhiteBalanceGain>>(this->shim().WhiteBalanceGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> : produce_base<D, Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap>
{
    HRESULT __stdcall get_SoftwareBitmap(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().SoftwareBitmap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ICapturedPhoto> : produce_base<D, Windows::Media::Capture::ICapturedPhoto>
{
    HRESULT __stdcall get_Frame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Frame());
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
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServices> : produce_base<D, Windows::Media::Capture::IGameBarServices>
{
    HRESULT __stdcall get_TargetCapturePolicy(Windows::Media::Capture::GameBarTargetCapturePolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::GameBarTargetCapturePolicy>(this->shim().TargetCapturePolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableCapture() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableCapture();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DisableCapture() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableCapture();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::GameBarServicesTargetInfo>(this->shim().TargetInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppBroadcastServices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppBroadcastServices>(this->shim().AppBroadcastServices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppCaptureServices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::AppCaptureServices>(this->shim().AppCaptureServices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CommandReceived(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CommandReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServices, Windows::Media::Capture::GameBarServicesCommandEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CommandReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommandReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesCommandEventArgs> : produce_base<D, Windows::Media::Capture::IGameBarServicesCommandEventArgs>
{
    HRESULT __stdcall get_Command(Windows::Media::Capture::GameBarCommand* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::GameBarCommand>(this->shim().Command());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Origin(Windows::Media::Capture::GameBarCommandOrigin* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::GameBarCommandOrigin>(this->shim().Origin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesManager> : produce_base<D, Windows::Media::Capture::IGameBarServicesManager>
{
    HRESULT __stdcall add_GameBarServicesCreated(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().GameBarServicesCreated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::GameBarServicesManager, Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_GameBarServicesCreated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GameBarServicesCreated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs> : produce_base<D, Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs>
{
    HRESULT __stdcall get_GameBarServices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::GameBarServices>(this->shim().GameBarServices());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesManagerStatics> : produce_base<D, Windows::Media::Capture::IGameBarServicesManagerStatics>
{
    HRESULT __stdcall GetDefault(void** ppInstance) noexcept final
    {
        try
        {
            *ppInstance = nullptr;
            typename D::abi_guard guard(this->shim());
            *ppInstance = detach_from<Windows::Media::Capture::GameBarServicesManager>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IGameBarServicesTargetInfo> : produce_base<D, Windows::Media::Capture::IGameBarServicesTargetInfo>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TitleId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TitleId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayMode(Windows::Media::Capture::GameBarServicesDisplayMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::GameBarServicesDisplayMode>(this->shim().DisplayMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording>
{
    HRESULT __stdcall StartAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording2> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording2>
{
    HRESULT __stdcall PauseAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().PauseAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ResumeAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ResumeAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagMediaRecording3> : produce_base<D, Windows::Media::Capture::ILowLagMediaRecording3>
{
    HRESULT __stdcall PauseWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>>(this->shim().PauseWithResultAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopWithResultAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>>(this->shim().StopWithResultAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagPhotoCapture> : produce_base<D, Windows::Media::Capture::ILowLagPhotoCapture>
{
    HRESULT __stdcall CaptureAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::CapturedPhoto>>(this->shim().CaptureAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture> : produce_base<D, Windows::Media::Capture::ILowLagPhotoSequenceCapture>
{
    HRESULT __stdcall StartAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FinishAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FinishAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoCaptured(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PhotoCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::LowLagPhotoSequenceCapture, Windows::Media::Capture::PhotoCapturedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture> : produce_base<D, Windows::Media::Capture::IMediaCapture>
{
    HRESULT __stdcall InitializeAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InitializeAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InitializeWithSettingsAsync(void* mediaCaptureInitializationSettings, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InitializeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCaptureInitializationSettings const*>(&mediaCaptureInitializationSettings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToStorageFileAsync(void* encodingProfile, void* file, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartRecordToStorageFileAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToStreamAsync(void* encodingProfile, void* stream, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartRecordToStreamAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToCustomSinkAsync(void* encodingProfile, void* customMediaSink, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Media::IMediaExtension const*>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartRecordToCustomSinkIdAsync(void* encodingProfile, HSTRING customSinkActivationId, void* customSinkSettings, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<hstring const*>(&customSinkActivationId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopRecordAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StopRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CapturePhotoToStorageFileAsync(void* type, void* file, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CapturePhotoToStorageFileAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CapturePhotoToStreamAsync(void* type, void* stream, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CapturePhotoToStreamAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddEffectAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, HSTRING effectActivationID, void* effectSettings, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().AddEffectAsync(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<hstring const*>(&effectActivationID), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&effectSettings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ClearEffectsAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ClearEffectsAsync(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, void* propertyValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncoderProperty(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<GUID const*>(&propertyId), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&propertyValue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetEncoderProperty(Windows::Media::Capture::MediaStreamType mediaStreamType, GUID propertyId, void** propertyValue) noexcept final
    {
        try
        {
            *propertyValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *propertyValue = detach_from<Windows::Foundation::IInspectable>(this->shim().GetEncoderProperty(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<GUID const*>(&propertyId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Failed(void* errorEventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().Failed(*reinterpret_cast<Windows::Media::Capture::MediaCaptureFailedEventHandler const*>(&errorEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Failed(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Failed(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RecordLimitationExceeded(void* recordLimitationExceededEventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().RecordLimitationExceeded(*reinterpret_cast<Windows::Media::Capture::RecordLimitationExceededEventHandler const*>(&recordLimitationExceededEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RecordLimitationExceeded(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecordLimitationExceeded(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCaptureSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureSettings>(this->shim().MediaCaptureSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceController(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::AudioDeviceController>(this->shim().AudioDeviceController());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceController(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::VideoDeviceController>(this->shim().VideoDeviceController());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPreviewMirroring(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewMirroring(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewMirroring(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetPreviewMirroring());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPreviewRotation(Windows::Media::Capture::VideoRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPreviewRotation(*reinterpret_cast<Windows::Media::Capture::VideoRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewRotation(Windows::Media::Capture::VideoRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::VideoRotation>(this->shim().GetPreviewRotation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetRecordRotation(Windows::Media::Capture::VideoRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRecordRotation(*reinterpret_cast<Windows::Media::Capture::VideoRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRecordRotation(Windows::Media::Capture::VideoRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::VideoRotation>(this->shim().GetRecordRotation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture2> : produce_base<D, Windows::Media::Capture::IMediaCapture2>
{
    HRESULT __stdcall PrepareLowLagRecordToStorageFileAsync(void* encodingProfile, void* file, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>>(this->shim().PrepareLowLagRecordToStorageFileAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagRecordToStreamAsync(void* encodingProfile, void* stream, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>>(this->shim().PrepareLowLagRecordToStreamAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagRecordToCustomSinkAsync(void* encodingProfile, void* customMediaSink, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>>(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Media::IMediaExtension const*>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagRecordToCustomSinkIdAsync(void* encodingProfile, HSTRING customSinkActivationId, void* customSinkSettings, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagMediaRecording>>(this->shim().PrepareLowLagRecordToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<hstring const*>(&customSinkActivationId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagPhotoCaptureAsync(void* type, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoCapture>>(this->shim().PrepareLowLagPhotoCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PrepareLowLagPhotoSequenceCaptureAsync(void* type, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::LowLagPhotoSequenceCapture>>(this->shim().PrepareLowLagPhotoSequenceCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingPropertiesAsync(Windows::Media::Capture::MediaStreamType mediaStreamType, void* mediaEncodingProperties, void* encoderProperties, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetEncodingPropertiesAsync(*reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType), *reinterpret_cast<Windows::Media::MediaProperties::IMediaEncodingProperties const*>(&mediaEncodingProperties), *reinterpret_cast<Windows::Media::MediaProperties::MediaPropertySet const*>(&encoderProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture3> : produce_base<D, Windows::Media::Capture::IMediaCapture3>
{
    HRESULT __stdcall PrepareVariablePhotoSequenceCaptureAsync(void* type, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Core::VariablePhotoSequenceCapture>>(this->shim().PrepareVariablePhotoSequenceCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FocusChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FocusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FocusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PhotoConfirmationCaptured(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PhotoConfirmationCaptured(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PhotoConfirmationCaptured(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoConfirmationCaptured(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture4> : produce_base<D, Windows::Media::Capture::IMediaCapture4>
{
    HRESULT __stdcall AddAudioEffectAsync(void* definition, void** op) noexcept final
    {
        try
        {
            *op = nullptr;
            typename D::abi_guard guard(this->shim());
            *op = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>>(this->shim().AddAudioEffectAsync(*reinterpret_cast<Windows::Media::Effects::IAudioEffectDefinition const*>(&definition)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddVideoEffectAsync(void* definition, Windows::Media::Capture::MediaStreamType mediaStreamType, void** op) noexcept final
    {
        try
        {
            *op = nullptr;
            typename D::abi_guard guard(this->shim());
            *op = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::IMediaExtension>>(this->shim().AddVideoEffectAsync(*reinterpret_cast<Windows::Media::Effects::IVideoEffectDefinition const*>(&definition), *reinterpret_cast<Windows::Media::Capture::MediaStreamType const*>(&mediaStreamType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PauseRecordAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().PauseRecordAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ResumeRecordAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ResumeRecordAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CameraStreamStateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CameraStreamStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraStreamStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraStreamStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraStreamState(Windows::Media::Devices::CameraStreamState* streamState) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamState = detach_from<Windows::Media::Devices::CameraStreamState>(this->shim().CameraStreamState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewFrameAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>>(this->shim().GetPreviewFrameAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewFrameCopyAsync(void* destination, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::VideoFrame>>(this->shim().GetPreviewFrameAsync(*reinterpret_cast<Windows::Media::VideoFrame const*>(&destination)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ThermalStatusChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ThermalStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ThermalStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ThermalStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ThermalStatus(Windows::Media::Capture::MediaCaptureThermalStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureThermalStatus>(this->shim().ThermalStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PrepareAdvancedPhotoCaptureAsync(void* encodingProperties, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::AdvancedPhotoCapture>>(this->shim().PrepareAdvancedPhotoCaptureAsync(*reinterpret_cast<Windows::Media::MediaProperties::ImageEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture5> : produce_base<D, Windows::Media::Capture::IMediaCapture5>
{
    HRESULT __stdcall RemoveEffectAsync(void* effect, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RemoveEffectAsync(*reinterpret_cast<Windows::Media::IMediaExtension const*>(&effect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PauseRecordWithResultAsync(Windows::Media::Devices::MediaCapturePauseBehavior behavior, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCapturePauseResult>>(this->shim().PauseRecordWithResultAsync(*reinterpret_cast<Windows::Media::Devices::MediaCapturePauseBehavior const*>(&behavior)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopRecordWithResultAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::MediaCaptureStopResult>>(this->shim().StopRecordWithResultAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameSources(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Media::Capture::Frames::MediaFrameSource>>(this->shim().FrameSources());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameReaderAsync(void* inputSource, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>>(this->shim().CreateFrameReaderAsync(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSource const*>(&inputSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameReaderWithSubtypeAsync(void* inputSource, HSTRING outputSubtype, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>>(this->shim().CreateFrameReaderAsync(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSource const*>(&inputSource), *reinterpret_cast<hstring const*>(&outputSubtype)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameReaderWithSubtypeAndSizeAsync(void* inputSource, HSTRING outputSubtype, struct struct_Windows_Graphics_Imaging_BitmapSize outputSize, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReader>>(this->shim().CreateFrameReaderAsync(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSource const*>(&inputSource), *reinterpret_cast<hstring const*>(&outputSubtype), *reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&outputSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapture6> : produce_base<D, Windows::Media::Capture::IMediaCapture6>
{
    HRESULT __stdcall add_CaptureDeviceExclusiveControlStatusChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CaptureDeviceExclusiveControlStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::MediaCapture, Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CaptureDeviceExclusiveControlStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureDeviceExclusiveControlStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateMultiSourceFrameReaderAsync(void* inputSources, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader>>(this->shim().CreateMultiSourceFrameReaderAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Media::Capture::Frames::MediaFrameSource> const*>(&inputSources)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureFailedEventArgs>
{
    HRESULT __stdcall get_Message(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Code(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> : produce_base<D, Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs>
{
    HRESULT __stdcall get_FocusState(Windows::Media::Devices::MediaCaptureFocusState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::MediaCaptureFocusState>(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings>
{
    HRESULT __stdcall put_AudioDeviceId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioDeviceId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioDeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoDeviceId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoDeviceId(*reinterpret_cast<hstring const*>(&value));
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

    HRESULT __stdcall put_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StreamingCaptureMode(*reinterpret_cast<Windows::Media::Capture::StreamingCaptureMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::StreamingCaptureMode>(this->shim().StreamingCaptureMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoCaptureSource(*reinterpret_cast<Windows::Media::Capture::PhotoCaptureSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::PhotoCaptureSource>(this->shim().PhotoCaptureSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings2> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings2>
{
    HRESULT __stdcall put_MediaCategory(Windows::Media::Capture::MediaCategory value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaCategory(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCategory>(this->shim().MediaCategory());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioProcessing(Windows::Media::AudioProcessing value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioProcessing(*reinterpret_cast<Windows::Media::AudioProcessing const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioProcessing>(this->shim().AudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings3> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings3>
{
    HRESULT __stdcall put_AudioSource(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioSource(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::IMediaSource>(this->shim().AudioSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoSource(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoSource(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::IMediaSource>(this->shim().VideoSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings4> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings4>
{
    HRESULT __stdcall get_VideoProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureVideoProfile>(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VideoProfile(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfile(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PreviewMediaDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>(this->shim().PreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PreviewMediaDescription(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviewMediaDescription(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RecordMediaDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>(this->shim().RecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RecordMediaDescription(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecordMediaDescription(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoMediaDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>(this->shim().PhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PhotoMediaDescription(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhotoMediaDescription(*reinterpret_cast<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings5> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings5>
{
    HRESULT __stdcall get_SourceGroup(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::Frames::MediaFrameSourceGroup>(this->shim().SourceGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SourceGroup(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceGroup(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSourceGroup const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureSharingMode>(this->shim().SharingMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SharingMode(Windows::Media::Capture::MediaCaptureSharingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharingMode(*reinterpret_cast<Windows::Media::Capture::MediaCaptureSharingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCaptureMemoryPreference>(this->shim().MemoryPreference());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MemoryPreference(Windows::Media::Capture::MediaCaptureMemoryPreference value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MemoryPreference(*reinterpret_cast<Windows::Media::Capture::MediaCaptureMemoryPreference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureInitializationSettings6> : produce_base<D, Windows::Media::Capture::IMediaCaptureInitializationSettings6>
{
    HRESULT __stdcall get_AlwaysPlaySystemShutterSound(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AlwaysPlaySystemShutterSound());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysPlaySystemShutterSound(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysPlaySystemShutterSound(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCapturePauseResult> : produce_base<D, Windows::Media::Capture::IMediaCapturePauseResult>
{
    HRESULT __stdcall get_LastFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RecordDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureSettings> : produce_base<D, Windows::Media::Capture::IMediaCaptureSettings>
{
    HRESULT __stdcall get_AudioDeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioDeviceId());
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

    HRESULT __stdcall get_StreamingCaptureMode(Windows::Media::Capture::StreamingCaptureMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::StreamingCaptureMode>(this->shim().StreamingCaptureMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhotoCaptureSource(Windows::Media::Capture::PhotoCaptureSource* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::PhotoCaptureSource>(this->shim().PhotoCaptureSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceCharacteristic(Windows::Media::Capture::VideoDeviceCharacteristic* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::VideoDeviceCharacteristic>(this->shim().VideoDeviceCharacteristic());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureSettings2> : produce_base<D, Windows::Media::Capture::IMediaCaptureSettings2>
{
    HRESULT __stdcall get_ConcurrentRecordAndPhotoSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ConcurrentRecordAndPhotoSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConcurrentRecordAndPhotoSequenceSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ConcurrentRecordAndPhotoSequenceSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraSoundRequiredForRegion(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CameraSoundRequiredForRegion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Horizontal35mmEquivalentFocalLength(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().Horizontal35mmEquivalentFocalLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PitchOffsetDegrees(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<int32_t>>(this->shim().PitchOffsetDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Vertical35mmEquivalentFocalLength(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().Vertical35mmEquivalentFocalLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaCategory(Windows::Media::Capture::MediaCategory* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::MediaCategory>(this->shim().MediaCategory());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioProcessing(Windows::Media::AudioProcessing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioProcessing>(this->shim().AudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureSettings3> : produce_base<D, Windows::Media::Capture::IMediaCaptureSettings3>
{
    HRESULT __stdcall get_Direct3D11Device(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>(this->shim().Direct3D11Device());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureStatics> : produce_base<D, Windows::Media::Capture::IMediaCaptureStatics>
{
    HRESULT __stdcall IsVideoProfileSupported(HSTRING videoDeviceId, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVideoProfileSupported(*reinterpret_cast<hstring const*>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllVideoProfiles(HSTRING videoDeviceId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>>(this->shim().FindAllVideoProfiles(*reinterpret_cast<hstring const*>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindConcurrentProfiles(HSTRING videoDeviceId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>>(this->shim().FindConcurrentProfiles(*reinterpret_cast<hstring const*>(&videoDeviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindKnownVideoProfiles(HSTRING videoDeviceId, Windows::Media::Capture::KnownVideoProfile name, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>>(this->shim().FindKnownVideoProfiles(*reinterpret_cast<hstring const*>(&videoDeviceId), *reinterpret_cast<Windows::Media::Capture::KnownVideoProfile const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureStopResult> : produce_base<D, Windows::Media::Capture::IMediaCaptureStopResult>
{
    HRESULT __stdcall get_LastFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().LastFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RecordDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RecordDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoPreview> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoPreview>
{
    HRESULT __stdcall StartPreviewAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartPreviewToCustomSinkAsync(void* encodingProfile, void* customMediaSink, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<Windows::Media::IMediaExtension const*>(&customMediaSink)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartPreviewToCustomSinkIdAsync(void* encodingProfile, HSTRING customSinkActivationId, void* customSinkSettings, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StartPreviewToCustomSinkAsync(*reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&encodingProfile), *reinterpret_cast<hstring const*>(&customSinkActivationId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&customSinkSettings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopPreviewAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().StopPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfile> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfile>
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

    HRESULT __stdcall get_SupportedPreviewMediaDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>>(this->shim().SupportedPreviewMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedRecordMediaDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>>(this->shim().SupportedRecordMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedPhotoMediaDescription(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription>>(this->shim().SupportedPhotoMediaDescription());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetConcurrency(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile>>(this->shim().GetConcurrency());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfile2> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfile2>
{
    HRESULT __stdcall get_FrameSourceInfos(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo>>(this->shim().FrameSourceInfos());
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
            *value = detach_from<Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription>
{
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

    HRESULT __stdcall get_FrameRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().FrameRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsVariablePhotoSequenceSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVariablePhotoSequenceSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHdrVideoSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHdrVideoSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2> : produce_base<D, Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2>
{
    HRESULT __stdcall get_Subtype(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subtype());
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
            *value = detach_from<Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Context(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IPhotoCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IPhotoCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Frame());
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
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> : produce_base<D, Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs>
{
    HRESULT __stdcall get_Frame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrame>(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CaptureTimeOffset(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().CaptureTimeOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::IVideoStreamConfiguration> : produce_base<D, Windows::Media::Capture::IVideoStreamConfiguration>
{
    HRESULT __stdcall get_InputProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::VideoEncodingProperties>(this->shim().InputProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::VideoEncodingProperties>(this->shim().OutputProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

inline Windows::Media::Capture::AppBroadcastGlobalSettings AppBroadcastManager::GetGlobalSettings()
{
    return get_activation_factory<AppBroadcastManager, Windows::Media::Capture::IAppBroadcastManagerStatics>().GetGlobalSettings();
}

inline void AppBroadcastManager::ApplyGlobalSettings(Windows::Media::Capture::AppBroadcastGlobalSettings const& value)
{
    get_activation_factory<AppBroadcastManager, Windows::Media::Capture::IAppBroadcastManagerStatics>().ApplyGlobalSettings(value);
}

inline Windows::Media::Capture::AppBroadcastProviderSettings AppBroadcastManager::GetProviderSettings()
{
    return get_activation_factory<AppBroadcastManager, Windows::Media::Capture::IAppBroadcastManagerStatics>().GetProviderSettings();
}

inline void AppBroadcastManager::ApplyProviderSettings(Windows::Media::Capture::AppBroadcastProviderSettings const& value)
{
    get_activation_factory<AppBroadcastManager, Windows::Media::Capture::IAppBroadcastManagerStatics>().ApplyProviderSettings(value);
}

inline Windows::Media::Capture::AppBroadcastPlugInManager AppBroadcastPlugInManager::GetDefault()
{
    return get_activation_factory<AppBroadcastPlugInManager, Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>().GetDefault();
}

inline Windows::Media::Capture::AppBroadcastPlugInManager AppBroadcastPlugInManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<AppBroadcastPlugInManager, Windows::Media::Capture::IAppBroadcastPlugInManagerStatics>().GetForUser(user);
}

inline Windows::Media::Capture::AppCapture AppCapture::GetForCurrentView()
{
    return get_activation_factory<AppCapture, Windows::Media::Capture::IAppCaptureStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncAction AppCapture::SetAllowedAsync(bool allowed)
{
    return get_activation_factory<AppCapture, Windows::Media::Capture::IAppCaptureStatics2>().SetAllowedAsync(allowed);
}

inline Windows::Media::Capture::AppCaptureSettings AppCaptureManager::GetCurrentSettings()
{
    return get_activation_factory<AppCaptureManager, Windows::Media::Capture::IAppCaptureManagerStatics>().GetCurrentSettings();
}

inline void AppCaptureManager::ApplySettings(Windows::Media::Capture::AppCaptureSettings const& appCaptureSettings)
{
    get_activation_factory<AppCaptureManager, Windows::Media::Capture::IAppCaptureManagerStatics>().ApplySettings(appCaptureSettings);
}

inline AppCaptureMetadataWriter::AppCaptureMetadataWriter() :
    AppCaptureMetadataWriter(get_activation_factory<AppCaptureMetadataWriter>().ActivateInstance<AppCaptureMetadataWriter>())
{}

inline CameraCaptureUI::CameraCaptureUI() :
    CameraCaptureUI(get_activation_factory<CameraCaptureUI>().ActivateInstance<CameraCaptureUI>())
{}

inline void CameraOptionsUI::Show(Windows::Media::Capture::MediaCapture const& mediaCapture)
{
    get_activation_factory<CameraOptionsUI, Windows::Media::Capture::ICameraOptionsUIStatics>().Show(mediaCapture);
}

inline Windows::Media::Capture::GameBarServicesManager GameBarServicesManager::GetDefault()
{
    return get_activation_factory<GameBarServicesManager, Windows::Media::Capture::IGameBarServicesManagerStatics>().GetDefault();
}

inline MediaCapture::MediaCapture() :
    MediaCapture(get_activation_factory<MediaCapture>().ActivateInstance<MediaCapture>())
{}

inline bool MediaCapture::IsVideoProfileSupported(param::hstring const& videoDeviceId)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().IsVideoProfileSupported(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindAllVideoProfiles(param::hstring const& videoDeviceId)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().FindAllVideoProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindConcurrentProfiles(param::hstring const& videoDeviceId)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().FindConcurrentProfiles(videoDeviceId);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::MediaCaptureVideoProfile> MediaCapture::FindKnownVideoProfiles(param::hstring const& videoDeviceId, Windows::Media::Capture::KnownVideoProfile const& name)
{
    return get_activation_factory<MediaCapture, Windows::Media::Capture::IMediaCaptureStatics>().FindKnownVideoProfiles(videoDeviceId, name);
}

inline MediaCaptureInitializationSettings::MediaCaptureInitializationSettings() :
    MediaCaptureInitializationSettings(get_activation_factory<MediaCaptureInitializationSettings>().ActivateInstance<MediaCaptureInitializationSettings>())
{}

template <typename L> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(L handler) :
    MediaCaptureFailedEventHandler(impl::make_delegate<MediaCaptureFailedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(F* handler) :
    MediaCaptureFailedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> MediaCaptureFailedEventHandler::MediaCaptureFailedEventHandler(O* object, M method) :
    MediaCaptureFailedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void MediaCaptureFailedEventHandler::operator()(Windows::Media::Capture::MediaCapture const& sender, Windows::Media::Capture::MediaCaptureFailedEventArgs const& errorEventArgs) const
{
    check_hresult((*(impl::abi_t<MediaCaptureFailedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(errorEventArgs)));
}

template <typename L> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(L handler) :
    RecordLimitationExceededEventHandler(impl::make_delegate<RecordLimitationExceededEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(F* handler) :
    RecordLimitationExceededEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> RecordLimitationExceededEventHandler::RecordLimitationExceededEventHandler(O* object, M method) :
    RecordLimitationExceededEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void RecordLimitationExceededEventHandler::operator()(Windows::Media::Capture::MediaCapture const& sender) const
{
    check_hresult((*(impl::abi_t<RecordLimitationExceededEventHandler>**)this)->Invoke(get_abi(sender)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto> {};
template<> struct hash<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAdvancedCapturedPhoto2> {};
template<> struct hash<winrt::Windows::Media::Capture::IAdvancedPhotoCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAdvancedPhotoCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundService> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastBackgroundService> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundService2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastBackgroundService2> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceSignInInfo2> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastBackgroundServiceStreamInfo2> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastCameraCaptureStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastGlobalSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastGlobalSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastHeartbeatRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastManagerStatics> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastManagerStatics> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastMicrophoneCaptureStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPlugIn> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPlugIn> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPlugInManager> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPlugInManager> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPlugInManagerStatics> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPlugInManagerStatics> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPlugInStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPreview> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPreview> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPreviewStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamReader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamReader> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastPreviewStreamVideoHeader> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastProviderSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastProviderSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastServices> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastServices> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastSignInStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastState> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastState> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastStreamAudioFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastStreamAudioFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastStreamAudioHeader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastStreamAudioHeader> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastStreamReader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastStreamReader> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastStreamStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastStreamVideoFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastStreamVideoFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastStreamVideoHeader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastStreamVideoHeader> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastTriggerDetails> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppBroadcastViewerCountChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys2> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureAlternateShortcutKeys3> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureDurationGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureFileGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureManagerStatics> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureManagerStatics> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureMetadataWriter> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureMetadataWriter> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureMicrophoneCaptureStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureRecordOperation> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureRecordOperation> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureRecordingStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureServices> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureServices> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureSettings2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureSettings2> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureSettings3> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureSettings3> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureSettings4> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureSettings4> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureSettings5> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureSettings5> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureState> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureState> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureStatics> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureStatics> {};
template<> struct hash<winrt::Windows::Media::Capture::IAppCaptureStatics2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IAppCaptureStatics2> {};
template<> struct hash<winrt::Windows::Media::Capture::ICameraCaptureUI> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICameraCaptureUI> {};
template<> struct hash<winrt::Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICameraCaptureUIPhotoCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICameraCaptureUIVideoCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::ICameraOptionsUIStatics> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICameraOptionsUIStatics> {};
template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICapturedFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrame2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICapturedFrame2> {};
template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrameControlValues> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICapturedFrameControlValues> {};
template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrameControlValues2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICapturedFrameControlValues2> {};
template<> struct hash<winrt::Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICapturedFrameWithSoftwareBitmap> {};
template<> struct hash<winrt::Windows::Media::Capture::ICapturedPhoto> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ICapturedPhoto> {};
template<> struct hash<winrt::Windows::Media::Capture::IGameBarServices> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IGameBarServices> {};
template<> struct hash<winrt::Windows::Media::Capture::IGameBarServicesCommandEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IGameBarServicesCommandEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IGameBarServicesManager> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IGameBarServicesManager> {};
template<> struct hash<winrt::Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IGameBarServicesManagerGameBarServicesCreatedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IGameBarServicesManagerStatics> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IGameBarServicesManagerStatics> {};
template<> struct hash<winrt::Windows::Media::Capture::IGameBarServicesTargetInfo> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IGameBarServicesTargetInfo> {};
template<> struct hash<winrt::Windows::Media::Capture::ILowLagMediaRecording> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ILowLagMediaRecording> {};
template<> struct hash<winrt::Windows::Media::Capture::ILowLagMediaRecording2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ILowLagMediaRecording2> {};
template<> struct hash<winrt::Windows::Media::Capture::ILowLagMediaRecording3> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ILowLagMediaRecording3> {};
template<> struct hash<winrt::Windows::Media::Capture::ILowLagPhotoCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ILowLagPhotoCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::ILowLagPhotoSequenceCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::ILowLagPhotoSequenceCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCapture2> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture3> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCapture3> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture4> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCapture4> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture5> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCapture5> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCapture6> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCapture6> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureDeviceExclusiveControlStatusChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureFocusChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings2> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings3> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings3> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings4> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings4> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings5> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings5> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings6> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureInitializationSettings6> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCapturePauseResult> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCapturePauseResult> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureSettings2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureSettings2> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureSettings3> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureSettings3> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureStatics> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureStatics> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureStopResult> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureStopResult> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoPreview> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureVideoPreview> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfile> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureVideoProfile> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfile2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureVideoProfile2> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription> {};
template<> struct hash<winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IMediaCaptureVideoProfileMediaDescription2> {};
template<> struct hash<winrt::Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IOptionalReferencePhotoCapturedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IPhotoCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IPhotoCapturedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IPhotoConfirmationCapturedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::IVideoStreamConfiguration> : winrt::impl::hash_base<winrt::Windows::Media::Capture::IVideoStreamConfiguration> {};
template<> struct hash<winrt::Windows::Media::Capture::AdvancedCapturedPhoto> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AdvancedCapturedPhoto> {};
template<> struct hash<winrt::Windows::Media::Capture::AdvancedPhotoCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AdvancedPhotoCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastBackgroundService> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastBackgroundService> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceSignInInfo> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastBackgroundServiceStreamInfo> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastCameraCaptureStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastGlobalSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastGlobalSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastHeartbeatRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastManager> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastManager> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastMicrophoneCaptureStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPlugIn> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPlugIn> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPlugInManager> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPlugInManager> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPlugInStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPreview> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPreview> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPreviewStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamReader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamReader> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastPreviewStreamVideoHeader> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastProviderSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastProviderSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastServices> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastServices> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastSignInStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastState> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastState> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastStreamAudioFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastStreamAudioFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastStreamAudioHeader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastStreamAudioHeader> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastStreamReader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastStreamReader> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastStreamStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastStreamVideoFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastStreamVideoFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastStreamVideoHeader> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastStreamVideoHeader> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastTriggerDetails> {};
template<> struct hash<winrt::Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppBroadcastViewerCountChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureAlternateShortcutKeys> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureAlternateShortcutKeys> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureDurationGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureFileGeneratedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureManager> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureManager> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureMetadataWriter> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureMetadataWriter> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureMicrophoneCaptureStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureRecordOperation> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureRecordOperation> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureRecordingStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureServices> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureServices> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::AppCaptureState> : winrt::impl::hash_base<winrt::Windows::Media::Capture::AppCaptureState> {};
template<> struct hash<winrt::Windows::Media::Capture::CameraCaptureUI> : winrt::impl::hash_base<winrt::Windows::Media::Capture::CameraCaptureUI> {};
template<> struct hash<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::CameraCaptureUIPhotoCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::CameraCaptureUIVideoCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::CameraOptionsUI> : winrt::impl::hash_base<winrt::Windows::Media::Capture::CameraOptionsUI> {};
template<> struct hash<winrt::Windows::Media::Capture::CapturedFrame> : winrt::impl::hash_base<winrt::Windows::Media::Capture::CapturedFrame> {};
template<> struct hash<winrt::Windows::Media::Capture::CapturedFrameControlValues> : winrt::impl::hash_base<winrt::Windows::Media::Capture::CapturedFrameControlValues> {};
template<> struct hash<winrt::Windows::Media::Capture::CapturedPhoto> : winrt::impl::hash_base<winrt::Windows::Media::Capture::CapturedPhoto> {};
template<> struct hash<winrt::Windows::Media::Capture::GameBarServices> : winrt::impl::hash_base<winrt::Windows::Media::Capture::GameBarServices> {};
template<> struct hash<winrt::Windows::Media::Capture::GameBarServicesCommandEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::GameBarServicesCommandEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::GameBarServicesManager> : winrt::impl::hash_base<winrt::Windows::Media::Capture::GameBarServicesManager> {};
template<> struct hash<winrt::Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::GameBarServicesManagerGameBarServicesCreatedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::GameBarServicesTargetInfo> : winrt::impl::hash_base<winrt::Windows::Media::Capture::GameBarServicesTargetInfo> {};
template<> struct hash<winrt::Windows::Media::Capture::LowLagMediaRecording> : winrt::impl::hash_base<winrt::Windows::Media::Capture::LowLagMediaRecording> {};
template<> struct hash<winrt::Windows::Media::Capture::LowLagPhotoCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::LowLagPhotoCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::LowLagPhotoSequenceCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCapture> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCapture> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureDeviceExclusiveControlStatusChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureFocusChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureInitializationSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCapturePauseResult> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCapturePauseResult> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureSettings> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureSettings> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureStopResult> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureStopResult> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureVideoProfile> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureVideoProfile> {};
template<> struct hash<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> : winrt::impl::hash_base<winrt::Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription> {};
template<> struct hash<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::OptionalReferencePhotoCapturedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::PhotoCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::PhotoCapturedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Capture::PhotoConfirmationCapturedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Capture::VideoStreamConfiguration> : winrt::impl::hash_base<winrt::Windows::Media::Capture::VideoStreamConfiguration> {};

}

WINRT_WARNING_POP
