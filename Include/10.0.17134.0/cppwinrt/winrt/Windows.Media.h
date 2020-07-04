﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.2.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Windows_Media_IAudioBuffer<D>::Capacity() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::IAudioBuffer)->get_Capacity(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_IAudioBuffer<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::IAudioBuffer)->get_Length(&value));
    return value;
}

template <typename D> void consume_Windows_Media_IAudioBuffer<D>::Length(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IAudioBuffer)->put_Length(value));
}

template <typename D> Windows::Media::AudioBuffer consume_Windows_Media_IAudioFrame<D>::LockBuffer(Windows::Media::AudioBufferAccessMode const& mode) const
{
    Windows::Media::AudioBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IAudioFrame)->LockBuffer(get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_IAudioFrameFactory<D>::Create(uint32_t capacity) const
{
    Windows::Media::AudioFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IAudioFrameFactory)->Create(capacity, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaPlaybackAutoRepeatMode consume_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs<D>::RequestedAutoRepeatMode() const
{
    Windows::Media::MediaPlaybackAutoRepeatMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::IAutoRepeatModeChangeRequestedEventArgs)->get_RequestedAutoRepeatMode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_IImageDisplayProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IImageDisplayProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IImageDisplayProperties<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IImageDisplayProperties)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IImageDisplayProperties<D>::Subtitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IImageDisplayProperties)->get_Subtitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IImageDisplayProperties<D>::Subtitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IImageDisplayProperties)->put_Subtitle(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_SoundLevelChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_SoundLevelChanged, SoundLevelChanged(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::SoundLevelChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_SoundLevelChanged(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::PlayPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_PlayPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::PlayPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_PlayPressed, PlayPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::PlayPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_PlayPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::PausePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_PausePressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::PausePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_PausePressed, PausePressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::PausePressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_PausePressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::StopPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_StopPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::StopPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_StopPressed, StopPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::StopPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_StopPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::PlayPauseTogglePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_PlayPauseTogglePressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::PlayPauseTogglePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_PlayPauseTogglePressed, PlayPauseTogglePressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::PlayPauseTogglePressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_PlayPauseTogglePressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::RecordPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_RecordPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::RecordPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_RecordPressed, RecordPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::RecordPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_RecordPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::NextTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_NextTrackPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::NextTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_NextTrackPressed, NextTrackPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::NextTrackPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_NextTrackPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::PreviousTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_PreviousTrackPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::PreviousTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_PreviousTrackPressed, PreviousTrackPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::PreviousTrackPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_PreviousTrackPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::FastForwardPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_FastForwardPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::FastForwardPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_FastForwardPressed, FastForwardPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::FastForwardPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_FastForwardPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::RewindPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_RewindPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::RewindPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_RewindPressed, RewindPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::RewindPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_RewindPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::ChannelUpPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_ChannelUpPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::ChannelUpPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_ChannelUpPressed, ChannelUpPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::ChannelUpPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_ChannelUpPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaControl<D>::ChannelDownPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->add_ChannelDownPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::IMediaControl> consume_Windows_Media_IMediaControl<D>::ChannelDownPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaControl>(this, &abi_t<Windows::Media::IMediaControl>::remove_ChannelDownPressed, ChannelDownPressed(handler));
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::ChannelDownPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->remove_ChannelDownPressed(get_abi(cookie)));
}

template <typename D> Windows::Media::SoundLevel consume_Windows_Media_IMediaControl<D>::SoundLevel() const
{
    Windows::Media::SoundLevel value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->get_SoundLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::TrackName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->put_TrackName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IMediaControl<D>::TrackName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->get_TrackName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::ArtistName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->put_ArtistName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IMediaControl<D>::ArtistName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->get_ArtistName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::IsPlaying(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->put_IsPlaying(value));
}

template <typename D> bool consume_Windows_Media_IMediaControl<D>::IsPlaying() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->get_IsPlaying(&value));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaControl<D>::AlbumArt(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->put_AlbumArt(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_IMediaControl<D>::AlbumArt() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaControl)->get_AlbumArt(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaExtension<D>::SetProperties(Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtension)->SetProperties(get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterSchemeHandler(get_abi(activatableClassId), get_abi(scheme)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterSchemeHandler(param::hstring const& activatableClassId, param::hstring const& scheme, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterSchemeHandlerWithSettings(get_abi(activatableClassId), get_abi(scheme), get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterByteStreamHandler(get_abi(activatableClassId), get_abi(fileExtension), get_abi(mimeType)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterByteStreamHandler(param::hstring const& activatableClassId, param::hstring const& fileExtension, param::hstring const& mimeType, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterByteStreamHandlerWithSettings(get_abi(activatableClassId), get_abi(fileExtension), get_abi(mimeType), get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterAudioDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterAudioDecoder(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterAudioDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterAudioDecoderWithSettings(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype), get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterAudioEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterAudioEncoder(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterAudioEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterAudioEncoderWithSettings(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype), get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterVideoDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterVideoDecoder(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterVideoDecoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterVideoDecoderWithSettings(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype), get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterVideoEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterVideoEncoder(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager<D>::RegisterVideoEncoder(param::hstring const& activatableClassId, GUID const& inputSubtype, GUID const& outputSubtype, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager)->RegisterVideoEncoderWithSettings(get_abi(activatableClassId), get_abi(inputSubtype), get_abi(outputSubtype), get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_IMediaExtensionManager2<D>::RegisterMediaExtensionForAppService(Windows::Media::IMediaExtension const& extension, Windows::ApplicationModel::AppService::AppServiceConnection const& connection) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaExtensionManager2)->RegisterMediaExtensionForAppService(get_abi(extension), get_abi(connection)));
}

template <typename D> hstring consume_Windows_Media_IMediaFrame<D>::Type() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->get_Type(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_IMediaFrame<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->get_IsReadOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaFrame<D>::RelativeTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->put_RelativeTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_IMediaFrame<D>::RelativeTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaFrame<D>::SystemRelativeTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->put_SystemRelativeTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_IMediaFrame<D>::SystemRelativeTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->get_SystemRelativeTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaFrame<D>::Duration(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->put_Duration(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_IMediaFrame<D>::Duration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaFrame<D>::IsDiscontinuous(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->put_IsDiscontinuous(value));
}

template <typename D> bool consume_Windows_Media_IMediaFrame<D>::IsDiscontinuous() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->get_IsDiscontinuous(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_IMediaFrame<D>::ExtendedProperties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaFrame)->get_ExtendedProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_IMediaMarker<D>::Time() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaMarker)->get_Time(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_IMediaMarker<D>::MediaMarkerType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaMarker)->get_MediaMarkerType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_IMediaMarker<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaMarker)->get_Text(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_IMediaMarkerTypesStatics<D>::Bookmark() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaMarkerTypesStatics)->get_Bookmark(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> consume_Windows_Media_IMediaMarkers<D>::Markers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaMarkers)->get_Markers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Media_IMediaProcessingTriggerDetails<D>::Arguments() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaProcessingTriggerDetails)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaTimelineController<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->Start());
}

template <typename D> void consume_Windows_Media_IMediaTimelineController<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->Resume());
}

template <typename D> void consume_Windows_Media_IMediaTimelineController<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->Pause());
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_IMediaTimelineController<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaTimelineController<D>::Position(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->put_Position(get_abi(value)));
}

template <typename D> double consume_Windows_Media_IMediaTimelineController<D>::ClockRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->get_ClockRate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaTimelineController<D>::ClockRate(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->put_ClockRate(value));
}

template <typename D> Windows::Media::MediaTimelineControllerState consume_Windows_Media_IMediaTimelineController<D>::State() const
{
    Windows::Media::MediaTimelineControllerState value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->get_State(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_IMediaTimelineController<D>::PositionChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& positionChangedEventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->add_PositionChanged(get_abi(positionChangedEventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Media::IMediaTimelineController> consume_Windows_Media_IMediaTimelineController<D>::PositionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& positionChangedEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaTimelineController>(this, &abi_t<Windows::Media::IMediaTimelineController>::remove_PositionChanged, PositionChanged(positionChangedEventHandler));
}

template <typename D> void consume_Windows_Media_IMediaTimelineController<D>::PositionChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->remove_PositionChanged(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Media_IMediaTimelineController<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& stateChangedEventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->add_StateChanged(get_abi(stateChangedEventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Media::IMediaTimelineController> consume_Windows_Media_IMediaTimelineController<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& stateChangedEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaTimelineController>(this, &abi_t<Windows::Media::IMediaTimelineController>::remove_StateChanged, StateChanged(stateChangedEventHandler));
}

template <typename D> void consume_Windows_Media_IMediaTimelineController<D>::StateChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController)->remove_StateChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_IMediaTimelineController2<D>::Duration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaTimelineController2<D>::Duration(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->put_Duration(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_IMediaTimelineController2<D>::IsLoopingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->get_IsLoopingEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_IMediaTimelineController2<D>::IsLoopingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->put_IsLoopingEnabled(value));
}

template <typename D> event_token consume_Windows_Media_IMediaTimelineController2<D>::Failed(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->add_Failed(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::IMediaTimelineController2> consume_Windows_Media_IMediaTimelineController2<D>::Failed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Media::MediaTimelineControllerFailedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaTimelineController2>(this, &abi_t<Windows::Media::IMediaTimelineController2>::remove_Failed, Failed(eventHandler));
}

template <typename D> void consume_Windows_Media_IMediaTimelineController2<D>::Failed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->remove_Failed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_IMediaTimelineController2<D>::Ended(Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->add_Ended(get_abi(eventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::IMediaTimelineController2> consume_Windows_Media_IMediaTimelineController2<D>::Ended(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Media::IMediaTimelineController2>(this, &abi_t<Windows::Media::IMediaTimelineController2>::remove_Ended, Ended(eventHandler));
}

template <typename D> void consume_Windows_Media_IMediaTimelineController2<D>::Ended(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineController2)->remove_Ended(get_abi(token)));
}

template <typename D> HRESULT consume_Windows_Media_IMediaTimelineControllerFailedEventArgs<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMediaTimelineControllerFailedEventArgs)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_IMusicDisplayProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMusicDisplayProperties<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IMusicDisplayProperties<D>::AlbumArtist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties)->get_AlbumArtist(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMusicDisplayProperties<D>::AlbumArtist(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties)->put_AlbumArtist(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IMusicDisplayProperties<D>::Artist() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties)->get_Artist(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMusicDisplayProperties<D>::Artist(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties)->put_Artist(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IMusicDisplayProperties2<D>::AlbumTitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties2)->get_AlbumTitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IMusicDisplayProperties2<D>::AlbumTitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties2)->put_AlbumTitle(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Media_IMusicDisplayProperties2<D>::TrackNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties2)->get_TrackNumber(&value));
    return value;
}

template <typename D> void consume_Windows_Media_IMusicDisplayProperties2<D>::TrackNumber(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties2)->put_TrackNumber(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Media_IMusicDisplayProperties2<D>::Genres() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties2)->get_Genres(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_IMusicDisplayProperties3<D>::AlbumTrackCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties3)->get_AlbumTrackCount(&value));
    return value;
}

template <typename D> void consume_Windows_Media_IMusicDisplayProperties3<D>::AlbumTrackCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IMusicDisplayProperties3)->put_AlbumTrackCount(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_IPlaybackPositionChangeRequestedEventArgs<D>::RequestedPlaybackPosition() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::IPlaybackPositionChangeRequestedEventArgs)->get_RequestedPlaybackPosition(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_IPlaybackRateChangeRequestedEventArgs<D>::RequestedPlaybackRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::IPlaybackRateChangeRequestedEventArgs)->get_RequestedPlaybackRate(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_IShuffleEnabledChangeRequestedEventArgs<D>::RequestedShuffleEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::IShuffleEnabledChangeRequestedEventArgs)->get_RequestedShuffleEnabled(&value));
    return value;
}

template <typename D> Windows::Media::MediaPlaybackStatus consume_Windows_Media_ISystemMediaTransportControls<D>::PlaybackStatus() const
{
    Windows::Media::MediaPlaybackStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_PlaybackStatus(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::PlaybackStatus(Windows::Media::MediaPlaybackStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_PlaybackStatus(get_abi(value)));
}

template <typename D> Windows::Media::SystemMediaTransportControlsDisplayUpdater consume_Windows_Media_ISystemMediaTransportControls<D>::DisplayUpdater() const
{
    Windows::Media::SystemMediaTransportControlsDisplayUpdater value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_DisplayUpdater(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SoundLevel consume_Windows_Media_ISystemMediaTransportControls<D>::SoundLevel() const
{
    Windows::Media::SoundLevel value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_SoundLevel(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsPlayEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsPlayEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsPlayEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsPlayEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsStopEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsStopEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsStopEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsStopEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsPauseEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsPauseEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsPauseEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsPauseEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsRecordEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsRecordEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsRecordEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsRecordEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsFastForwardEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsFastForwardEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsFastForwardEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsFastForwardEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsRewindEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsRewindEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsRewindEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsRewindEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsPreviousEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsPreviousEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsPreviousEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsPreviousEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsNextEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsNextEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsNextEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsNextEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsChannelUpEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsChannelUpEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsChannelUpEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsChannelUpEnabled(value));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls<D>::IsChannelDownEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->get_IsChannelDownEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::IsChannelDownEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->put_IsChannelDownEnabled(value));
}

template <typename D> event_token consume_Windows_Media_ISystemMediaTransportControls<D>::ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->add_ButtonPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::ISystemMediaTransportControls> consume_Windows_Media_ISystemMediaTransportControls<D>::ButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::ISystemMediaTransportControls>(this, &abi_t<Windows::Media::ISystemMediaTransportControls>::remove_ButtonPressed, ButtonPressed(handler));
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::ButtonPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->remove_ButtonPressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_ISystemMediaTransportControls<D>::PropertyChanged(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->add_PropertyChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::ISystemMediaTransportControls> consume_Windows_Media_ISystemMediaTransportControls<D>::PropertyChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::ISystemMediaTransportControls>(this, &abi_t<Windows::Media::ISystemMediaTransportControls>::remove_PropertyChanged, PropertyChanged(handler));
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls<D>::PropertyChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls)->remove_PropertyChanged(get_abi(token)));
}

template <typename D> Windows::Media::MediaPlaybackAutoRepeatMode consume_Windows_Media_ISystemMediaTransportControls2<D>::AutoRepeatMode() const
{
    Windows::Media::MediaPlaybackAutoRepeatMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->get_AutoRepeatMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->put_AutoRepeatMode(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_ISystemMediaTransportControls2<D>::ShuffleEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->get_ShuffleEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::ShuffleEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->put_ShuffleEnabled(value));
}

template <typename D> double consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->get_PlaybackRate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackRate(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->put_PlaybackRate(value));
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::UpdateTimelineProperties(Windows::Media::SystemMediaTransportControlsTimelineProperties const& timelineProperties) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->UpdateTimelineProperties(get_abi(timelineProperties)));
}

template <typename D> event_token consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackPositionChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->add_PlaybackPositionChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::ISystemMediaTransportControls2> consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackPositionChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::ISystemMediaTransportControls2>(this, &abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_PlaybackPositionChangeRequested, PlaybackPositionChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackPositionChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->remove_PlaybackPositionChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->add_PlaybackRateChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::ISystemMediaTransportControls2> consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackRateChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::ISystemMediaTransportControls2>(this, &abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_PlaybackRateChangeRequested, PlaybackRateChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::PlaybackRateChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->remove_PlaybackRateChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_ISystemMediaTransportControls2<D>::ShuffleEnabledChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->add_ShuffleEnabledChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::ISystemMediaTransportControls2> consume_Windows_Media_ISystemMediaTransportControls2<D>::ShuffleEnabledChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::ISystemMediaTransportControls2>(this, &abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_ShuffleEnabledChangeRequested, ShuffleEnabledChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::ShuffleEnabledChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->remove_ShuffleEnabledChangeRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_ISystemMediaTransportControls2<D>::AutoRepeatModeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->add_AutoRepeatModeChangeRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::ISystemMediaTransportControls2> consume_Windows_Media_ISystemMediaTransportControls2<D>::AutoRepeatModeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::ISystemMediaTransportControls2>(this, &abi_t<Windows::Media::ISystemMediaTransportControls2>::remove_AutoRepeatModeChangeRequested, AutoRepeatModeChangeRequested(handler));
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControls2<D>::AutoRepeatModeChangeRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControls2)->remove_AutoRepeatModeChangeRequested(get_abi(token)));
}

template <typename D> Windows::Media::SystemMediaTransportControlsButton consume_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs<D>::Button() const
{
    Windows::Media::SystemMediaTransportControlsButton value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs)->get_Button(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaPlaybackType consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::Type() const
{
    Windows::Media::MediaPlaybackType value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::Type(Windows::Media::MediaPlaybackType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->put_Type(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::AppMediaId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->get_AppMediaId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::AppMediaId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->put_AppMediaId(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::RandomAccessStreamReference consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::Thumbnail() const
{
    Windows::Storage::Streams::RandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::Thumbnail(Windows::Storage::Streams::RandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Media::MusicDisplayProperties consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::MusicProperties() const
{
    Windows::Media::MusicDisplayProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->get_MusicProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoDisplayProperties consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::VideoProperties() const
{
    Windows::Media::VideoDisplayProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->get_VideoProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::ImageDisplayProperties consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::ImageProperties() const
{
    Windows::Media::ImageDisplayProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->get_ImageProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::CopyFromFileAsync(Windows::Media::MediaPlaybackType const& type, Windows::Storage::StorageFile const& source) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->CopyFromFileAsync(get_abi(type), get_abi(source), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::ClearAll() const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->ClearAll());
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsDisplayUpdater<D>::Update() const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsDisplayUpdater)->Update());
}

template <typename D> Windows::Media::SystemMediaTransportControlsProperty consume_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs<D>::Property() const
{
    Windows::Media::SystemMediaTransportControlsProperty value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs)->get_Property(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::SystemMediaTransportControls consume_Windows_Media_ISystemMediaTransportControlsStatics<D>::GetForCurrentView() const
{
    Windows::Media::SystemMediaTransportControls mediaControl{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsStatics)->GetForCurrentView(put_abi(mediaControl)));
    return mediaControl;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::StartTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::StartTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->put_StartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::EndTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->get_EndTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::EndTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->put_EndTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::MinSeekTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->get_MinSeekTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::MinSeekTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->put_MinSeekTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::MaxSeekTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->get_MaxSeekTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::MaxSeekTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->put_MaxSeekTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_ISystemMediaTransportControlsTimelineProperties<D>::Position(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::ISystemMediaTransportControlsTimelineProperties)->put_Position(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IVideoDisplayProperties<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IVideoDisplayProperties)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IVideoDisplayProperties<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IVideoDisplayProperties)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_IVideoDisplayProperties<D>::Subtitle() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IVideoDisplayProperties)->get_Subtitle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_IVideoDisplayProperties<D>::Subtitle(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::IVideoDisplayProperties)->put_Subtitle(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Media_IVideoDisplayProperties2<D>::Genres() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoDisplayProperties2)->get_Genres(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_IVideoEffectsStatics<D>::VideoStabilization() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::IVideoEffectsStatics)->get_VideoStabilization(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Media_IVideoFrame<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrame)->get_SoftwareBitmap(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_IVideoFrame<D>::CopyToAsync(Windows::Media::VideoFrame const& frame) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrame)->CopyToAsync(get_abi(frame), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface consume_Windows_Media_IVideoFrame<D>::Direct3DSurface() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrame)->get_Direct3DSurface(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_IVideoFrame2<D>::CopyToAsync(Windows::Media::VideoFrame const& frame, optional<Windows::Graphics::Imaging::BitmapBounds> const& sourceBounds, optional<Windows::Graphics::Imaging::BitmapBounds> const& destinationBounds) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrame2)->CopyToWithBoundsAsync(get_abi(frame), get_abi(sourceBounds), get_abi(destinationBounds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_IVideoFrameFactory<D>::Create(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrameFactory)->Create(get_abi(format), width, height, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_IVideoFrameFactory<D>::CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrameFactory)->CreateWithAlpha(get_abi(format), width, height, get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_IVideoFrameStatics<D>::CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height) const
{
    Windows::Media::VideoFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrameStatics)->CreateAsDirect3D11SurfaceBacked(get_abi(format), width, height, put_abi(result)));
    return result;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_IVideoFrameStatics<D>::CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const
{
    Windows::Media::VideoFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrameStatics)->CreateAsDirect3D11SurfaceBackedWithDevice(get_abi(format), width, height, get_abi(device), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_IVideoFrameStatics<D>::CreateWithSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
{
    Windows::Media::VideoFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrameStatics)->CreateWithSoftwareBitmap(get_abi(bitmap), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_IVideoFrameStatics<D>::CreateWithDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const
{
    Windows::Media::VideoFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::IVideoFrameStatics)->CreateWithDirect3D11Surface(get_abi(surface), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Media::IAudioBuffer> : produce_base<D, Windows::Media::IAudioBuffer>
{
    HRESULT __stdcall get_Capacity(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Capacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Length(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Length(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IAudioFrame> : produce_base<D, Windows::Media::IAudioFrame>
{
    HRESULT __stdcall LockBuffer(Windows::Media::AudioBufferAccessMode mode, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioBuffer>(this->shim().LockBuffer(*reinterpret_cast<Windows::Media::AudioBufferAccessMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IAudioFrameFactory> : produce_base<D, Windows::Media::IAudioFrameFactory>
{
    HRESULT __stdcall Create(uint32_t capacity, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioFrame>(this->shim().Create(capacity));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IAutoRepeatModeChangeRequestedEventArgs> : produce_base<D, Windows::Media::IAutoRepeatModeChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedAutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaPlaybackAutoRepeatMode>(this->shim().RequestedAutoRepeatMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IImageDisplayProperties> : produce_base<D, Windows::Media::IImageDisplayProperties>
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

    HRESULT __stdcall get_Subtitle(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subtitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaControl> : produce_base<D, Windows::Media::IMediaControl>
{
    HRESULT __stdcall add_SoundLevelChanged(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().SoundLevelChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SoundLevelChanged(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SoundLevelChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlayPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PlayPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlayPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PausePressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PausePressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PausePressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PausePressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StopPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StopPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StopPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlayPauseTogglePressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PlayPauseTogglePressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlayPauseTogglePressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlayPauseTogglePressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RecordPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().RecordPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RecordPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecordPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NextTrackPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().NextTrackPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NextTrackPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NextTrackPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PreviousTrackPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PreviousTrackPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PreviousTrackPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PreviousTrackPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FastForwardPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().FastForwardPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FastForwardPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FastForwardPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RewindPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().RewindPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RewindPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RewindPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ChannelUpPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().ChannelUpPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ChannelUpPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChannelUpPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ChannelDownPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().ChannelDownPressed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ChannelDownPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChannelDownPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SoundLevel(Windows::Media::SoundLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SoundLevel>(this->shim().SoundLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TrackName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrackName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrackName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TrackName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ArtistName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArtistName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ArtistName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ArtistName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPlaying(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPlaying(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlaying(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPlaying());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumArt(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlbumArt(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlbumArt(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().AlbumArt());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaExtension> : produce_base<D, Windows::Media::IMediaExtension>
{
    HRESULT __stdcall SetProperties(void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetProperties(*reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaExtensionManager> : produce_base<D, Windows::Media::IMediaExtensionManager>
{
    HRESULT __stdcall RegisterSchemeHandler(HSTRING activatableClassId, HSTRING scheme) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterSchemeHandler(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<hstring const*>(&scheme));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterSchemeHandlerWithSettings(HSTRING activatableClassId, HSTRING scheme, void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterSchemeHandler(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterByteStreamHandler(HSTRING activatableClassId, HSTRING fileExtension, HSTRING mimeType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterByteStreamHandler(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<hstring const*>(&fileExtension), *reinterpret_cast<hstring const*>(&mimeType));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterByteStreamHandlerWithSettings(HSTRING activatableClassId, HSTRING fileExtension, HSTRING mimeType, void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterByteStreamHandler(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<hstring const*>(&fileExtension), *reinterpret_cast<hstring const*>(&mimeType), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterAudioDecoder(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterAudioDecoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterAudioDecoderWithSettings(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype, void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterAudioDecoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterAudioEncoder(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterAudioEncoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterAudioEncoderWithSettings(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype, void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterAudioEncoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterVideoDecoder(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterVideoDecoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterVideoDecoderWithSettings(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype, void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterVideoDecoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterVideoEncoder(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterVideoEncoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterVideoEncoderWithSettings(HSTRING activatableClassId, GUID inputSubtype, GUID outputSubtype, void* configuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterVideoEncoder(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<GUID const*>(&inputSubtype), *reinterpret_cast<GUID const*>(&outputSubtype), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaExtensionManager2> : produce_base<D, Windows::Media::IMediaExtensionManager2>
{
    HRESULT __stdcall RegisterMediaExtensionForAppService(void* extension, void* connection) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterMediaExtensionForAppService(*reinterpret_cast<Windows::Media::IMediaExtension const*>(&extension), *reinterpret_cast<Windows::ApplicationModel::AppService::AppServiceConnection const*>(&connection));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaFrame> : produce_base<D, Windows::Media::IMediaFrame>
{
    HRESULT __stdcall get_Type(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SystemRelativeTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemRelativeTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemRelativeTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().SystemRelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
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

    HRESULT __stdcall put_IsDiscontinuous(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDiscontinuous(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDiscontinuous(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDiscontinuous());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().ExtendedProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaMarker> : produce_base<D, Windows::Media::IMediaMarker>
{
    HRESULT __stdcall get_Time(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Time());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaMarkerType(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MediaMarkerType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Media::IMediaMarkerTypesStatics> : produce_base<D, Windows::Media::IMediaMarkerTypesStatics>
{
    HRESULT __stdcall get_Bookmark(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Bookmark());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaMarkers> : produce_base<D, Windows::Media::IMediaMarkers>
{
    HRESULT __stdcall get_Markers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::IMediaMarker>>(this->shim().Markers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaProcessingTriggerDetails> : produce_base<D, Windows::Media::IMediaProcessingTriggerDetails>
{
    HRESULT __stdcall get_Arguments(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaTimelineController> : produce_base<D, Windows::Media::IMediaTimelineController>
{
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

    HRESULT __stdcall Resume() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClockRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ClockRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ClockRate(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClockRate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Media::MediaTimelineControllerState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaTimelineControllerState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PositionChanged(void* positionChangedEventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().PositionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const*>(&positionChangedEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PositionChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StateChanged(void* stateChangedEventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const*>(&stateChangedEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StateChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaTimelineController2> : produce_base<D, Windows::Media::IMediaTimelineController2>
{
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

    HRESULT __stdcall put_Duration(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLoopingEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLoopingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsLoopingEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLoopingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Failed(void* eventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Failed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Media::MediaTimelineControllerFailedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Failed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Failed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Ended(void* eventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Ended(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::MediaTimelineController, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Ended(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ended(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMediaTimelineControllerFailedEventArgs> : produce_base<D, Windows::Media::IMediaTimelineControllerFailedEventArgs>
{
    HRESULT __stdcall get_ExtendedError(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMusicDisplayProperties> : produce_base<D, Windows::Media::IMusicDisplayProperties>
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

    HRESULT __stdcall get_AlbumArtist(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlbumArtist());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumArtist(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlbumArtist(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Artist(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Artist());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Artist(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Artist(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMusicDisplayProperties2> : produce_base<D, Windows::Media::IMusicDisplayProperties2>
{
    HRESULT __stdcall get_AlbumTitle(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlbumTitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumTitle(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlbumTitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrackNumber(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TrackNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TrackNumber(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrackNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Genres(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Genres());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IMusicDisplayProperties3> : produce_base<D, Windows::Media::IMusicDisplayProperties3>
{
    HRESULT __stdcall get_AlbumTrackCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().AlbumTrackCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlbumTrackCount(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlbumTrackCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IPlaybackPositionChangeRequestedEventArgs> : produce_base<D, Windows::Media::IPlaybackPositionChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedPlaybackPosition(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RequestedPlaybackPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IPlaybackRateChangeRequestedEventArgs> : produce_base<D, Windows::Media::IPlaybackRateChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedPlaybackRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RequestedPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IShuffleEnabledChangeRequestedEventArgs> : produce_base<D, Windows::Media::IShuffleEnabledChangeRequestedEventArgs>
{
    HRESULT __stdcall get_RequestedShuffleEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequestedShuffleEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControls> : produce_base<D, Windows::Media::ISystemMediaTransportControls>
{
    HRESULT __stdcall get_PlaybackStatus(Windows::Media::MediaPlaybackStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaPlaybackStatus>(this->shim().PlaybackStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackStatus(Windows::Media::MediaPlaybackStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackStatus(*reinterpret_cast<Windows::Media::MediaPlaybackStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayUpdater(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SystemMediaTransportControlsDisplayUpdater>(this->shim().DisplayUpdater());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SoundLevel(Windows::Media::SoundLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SoundLevel>(this->shim().SoundLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPlayEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPlayEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPlayEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPlayEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsStopEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStopEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsStopEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsStopEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPauseEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPauseEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPauseEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPauseEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsRecordEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRecordEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsRecordEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRecordEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsFastForwardEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFastForwardEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsFastForwardEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFastForwardEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsRewindEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRewindEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsRewindEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRewindEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPreviousEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPreviousEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPreviousEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPreviousEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsNextEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsNextEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsNextEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsNextEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsChannelUpEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsChannelUpEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsChannelUpEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsChannelUpEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsChannelDownEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsChannelDownEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsChannelDownEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsChannelDownEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ButtonPressed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ButtonPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ButtonPressed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ButtonPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PropertyChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PropertyChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertyChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertyChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControls2> : produce_base<D, Windows::Media::ISystemMediaTransportControls2>
{
    HRESULT __stdcall get_AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaPlaybackAutoRepeatMode>(this->shim().AutoRepeatMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRepeatMode(Windows::Media::MediaPlaybackAutoRepeatMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRepeatMode(*reinterpret_cast<Windows::Media::MediaPlaybackAutoRepeatMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShuffleEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShuffleEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShuffleEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShuffleEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().PlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackRate(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackRate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateTimelineProperties(void* timelineProperties) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateTimelineProperties(*reinterpret_cast<Windows::Media::SystemMediaTransportControlsTimelineProperties const*>(&timelineProperties));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackPositionChangeRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlaybackPositionChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackPositionChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackPositionChangeRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackPositionChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackRateChangeRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PlaybackRateChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::PlaybackRateChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackRateChangeRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackRateChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ShuffleEnabledChangeRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ShuffleEnabledChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::ShuffleEnabledChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ShuffleEnabledChangeRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShuffleEnabledChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AutoRepeatModeChangeRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AutoRepeatModeChangeRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::SystemMediaTransportControls, Windows::Media::AutoRepeatModeChangeRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AutoRepeatModeChangeRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRepeatModeChangeRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs> : produce_base<D, Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs>
{
    HRESULT __stdcall get_Button(Windows::Media::SystemMediaTransportControlsButton* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SystemMediaTransportControlsButton>(this->shim().Button());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsDisplayUpdater> : produce_base<D, Windows::Media::ISystemMediaTransportControlsDisplayUpdater>
{
    HRESULT __stdcall get_Type(Windows::Media::MediaPlaybackType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaPlaybackType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Type(Windows::Media::MediaPlaybackType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::Media::MediaPlaybackType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppMediaId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppMediaId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppMediaId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppMediaId(*reinterpret_cast<hstring const*>(&value));
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

    HRESULT __stdcall put_Thumbnail(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::Storage::Streams::RandomAccessStreamReference const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MusicProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MusicDisplayProperties>(this->shim().MusicProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoDisplayProperties>(this->shim().VideoProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ImageProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::ImageDisplayProperties>(this->shim().ImageProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyFromFileAsync(Windows::Media::MediaPlaybackType type, void* source, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().CopyFromFileAsync(*reinterpret_cast<Windows::Media::MediaPlaybackType const*>(&type), *reinterpret_cast<Windows::Storage::StorageFile const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ClearAll() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAll();
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
struct produce<D, Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs> : produce_base<D, Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs>
{
    HRESULT __stdcall get_Property(Windows::Media::SystemMediaTransportControlsProperty* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::SystemMediaTransportControlsProperty>(this->shim().Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsStatics> : produce_base<D, Windows::Media::ISystemMediaTransportControlsStatics>
{
    HRESULT __stdcall GetForCurrentView(void** mediaControl) noexcept final
    {
        try
        {
            *mediaControl = nullptr;
            typename D::abi_guard guard(this->shim());
            *mediaControl = detach_from<Windows::Media::SystemMediaTransportControls>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::ISystemMediaTransportControlsTimelineProperties> : produce_base<D, Windows::Media::ISystemMediaTransportControlsTimelineProperties>
{
    HRESULT __stdcall get_StartTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinSeekTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().MinSeekTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinSeekTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinSeekTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSeekTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().MaxSeekTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSeekTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxSeekTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoDisplayProperties> : produce_base<D, Windows::Media::IVideoDisplayProperties>
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

    HRESULT __stdcall get_Subtitle(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subtitle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Subtitle(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subtitle(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoDisplayProperties2> : produce_base<D, Windows::Media::IVideoDisplayProperties2>
{
    HRESULT __stdcall get_Genres(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Genres());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoEffectsStatics> : produce_base<D, Windows::Media::IVideoEffectsStatics>
{
    HRESULT __stdcall get_VideoStabilization(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoStabilization());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoFrame> : produce_base<D, Windows::Media::IVideoFrame>
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

    HRESULT __stdcall CopyToAsync(void* frame, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CopyToAsync(*reinterpret_cast<Windows::Media::VideoFrame const*>(&frame)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3DSurface(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>(this->shim().Direct3DSurface());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoFrame2> : produce_base<D, Windows::Media::IVideoFrame2>
{
    HRESULT __stdcall CopyToWithBoundsAsync(void* frame, void* sourceBounds, void* destinationBounds, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CopyToAsync(*reinterpret_cast<Windows::Media::VideoFrame const*>(&frame), *reinterpret_cast<Windows::Foundation::IReference<Windows::Graphics::Imaging::BitmapBounds> const*>(&sourceBounds), *reinterpret_cast<Windows::Foundation::IReference<Windows::Graphics::Imaging::BitmapBounds> const*>(&destinationBounds)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoFrameFactory> : produce_base<D, Windows::Media::IVideoFrameFactory>
{
    HRESULT __stdcall Create(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().Create(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().CreateWithAlpha(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height, *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::IVideoFrameStatics> : produce_base<D, Windows::Media::IVideoFrameStatics>
{
    HRESULT __stdcall CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat format, int32_t width, int32_t height, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::VideoFrame>(this->shim().CreateAsDirect3D11SurfaceBacked(*reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), width, height));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAsDirect3D11SurfaceBackedWithDevice(Windows::Graphics::DirectX::DirectXPixelFormat format, int32_t width, int32_t height, void* device, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::VideoFrame>(this->shim().CreateAsDirect3D11SurfaceBacked(*reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&format), width, height, *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSoftwareBitmap(void* bitmap, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::VideoFrame>(this->shim().CreateWithSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithDirect3D11Surface(void* surface, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::VideoFrame>(this->shim().CreateWithDirect3D11Surface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media {

inline AudioFrame::AudioFrame(uint32_t capacity) :
    AudioFrame(get_activation_factory<AudioFrame, Windows::Media::IAudioFrameFactory>().Create(capacity))
{}

inline event_token MediaControl::SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().SoundLevelChanged(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_SoundLevelChanged, factory.SoundLevelChanged(handler) };
}

inline void MediaControl::SoundLevelChanged(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().SoundLevelChanged(cookie);
}

inline event_token MediaControl::PlayPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PlayPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::PlayPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPressed, factory.PlayPressed(handler) };
}

inline void MediaControl::PlayPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PlayPressed(cookie);
}

inline event_token MediaControl::PausePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PausePressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::PausePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_PausePressed, factory.PausePressed(handler) };
}

inline void MediaControl::PausePressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PausePressed(cookie);
}

inline event_token MediaControl::StopPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().StopPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::StopPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_StopPressed, factory.StopPressed(handler) };
}

inline void MediaControl::StopPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().StopPressed(cookie);
}

inline event_token MediaControl::PlayPauseTogglePressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PlayPauseTogglePressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::PlayPauseTogglePressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_PlayPauseTogglePressed, factory.PlayPauseTogglePressed(handler) };
}

inline void MediaControl::PlayPauseTogglePressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PlayPauseTogglePressed(cookie);
}

inline event_token MediaControl::RecordPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().RecordPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::RecordPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_RecordPressed, factory.RecordPressed(handler) };
}

inline void MediaControl::RecordPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().RecordPressed(cookie);
}

inline event_token MediaControl::NextTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().NextTrackPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::NextTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_NextTrackPressed, factory.NextTrackPressed(handler) };
}

inline void MediaControl::NextTrackPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().NextTrackPressed(cookie);
}

inline event_token MediaControl::PreviousTrackPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PreviousTrackPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::PreviousTrackPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_PreviousTrackPressed, factory.PreviousTrackPressed(handler) };
}

inline void MediaControl::PreviousTrackPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().PreviousTrackPressed(cookie);
}

inline event_token MediaControl::FastForwardPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().FastForwardPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::FastForwardPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_FastForwardPressed, factory.FastForwardPressed(handler) };
}

inline void MediaControl::FastForwardPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().FastForwardPressed(cookie);
}

inline event_token MediaControl::RewindPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().RewindPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::RewindPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_RewindPressed, factory.RewindPressed(handler) };
}

inline void MediaControl::RewindPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().RewindPressed(cookie);
}

inline event_token MediaControl::ChannelUpPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().ChannelUpPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::ChannelUpPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelUpPressed, factory.ChannelUpPressed(handler) };
}

inline void MediaControl::ChannelUpPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().ChannelUpPressed(cookie);
}

inline event_token MediaControl::ChannelDownPressed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().ChannelDownPressed(handler);
}

inline factory_event_revoker<Windows::Media::IMediaControl> MediaControl::ChannelDownPressed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<MediaControl, Windows::Media::IMediaControl>();
    return { factory, &impl::abi_t<Windows::Media::IMediaControl>::remove_ChannelDownPressed, factory.ChannelDownPressed(handler) };
}

inline void MediaControl::ChannelDownPressed(event_token const& cookie)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().ChannelDownPressed(cookie);
}

inline Windows::Media::SoundLevel MediaControl::SoundLevel()
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().SoundLevel();
}

inline void MediaControl::TrackName(param::hstring const& value)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().TrackName(value);
}

inline hstring MediaControl::TrackName()
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().TrackName();
}

inline void MediaControl::ArtistName(param::hstring const& value)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().ArtistName(value);
}

inline hstring MediaControl::ArtistName()
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().ArtistName();
}

inline void MediaControl::IsPlaying(bool value)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().IsPlaying(value);
}

inline bool MediaControl::IsPlaying()
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().IsPlaying();
}

inline void MediaControl::AlbumArt(Windows::Foundation::Uri const& value)
{
    get_activation_factory<MediaControl, Windows::Media::IMediaControl>().AlbumArt(value);
}

inline Windows::Foundation::Uri MediaControl::AlbumArt()
{
    return get_activation_factory<MediaControl, Windows::Media::IMediaControl>().AlbumArt();
}

inline MediaExtensionManager::MediaExtensionManager() :
    MediaExtensionManager(get_activation_factory<MediaExtensionManager>().ActivateInstance<MediaExtensionManager>())
{}

inline hstring MediaMarkerTypes::Bookmark()
{
    return get_activation_factory<MediaMarkerTypes, Windows::Media::IMediaMarkerTypesStatics>().Bookmark();
}

inline MediaTimelineController::MediaTimelineController() :
    MediaTimelineController(get_activation_factory<MediaTimelineController>().ActivateInstance<MediaTimelineController>())
{}

inline Windows::Media::SystemMediaTransportControls SystemMediaTransportControls::GetForCurrentView()
{
    return get_activation_factory<SystemMediaTransportControls, Windows::Media::ISystemMediaTransportControlsStatics>().GetForCurrentView();
}

inline SystemMediaTransportControlsTimelineProperties::SystemMediaTransportControlsTimelineProperties() :
    SystemMediaTransportControlsTimelineProperties(get_activation_factory<SystemMediaTransportControlsTimelineProperties>().ActivateInstance<SystemMediaTransportControlsTimelineProperties>())
{}

inline hstring VideoEffects::VideoStabilization()
{
    return get_activation_factory<VideoEffects, Windows::Media::IVideoEffectsStatics>().VideoStabilization();
}

inline VideoFrame::VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) :
    VideoFrame(get_activation_factory<VideoFrame, Windows::Media::IVideoFrameFactory>().Create(format, width, height))
{}

inline VideoFrame::VideoFrame(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) :
    VideoFrame(get_activation_factory<VideoFrame, Windows::Media::IVideoFrameFactory>().CreateWithAlpha(format, width, height, alpha))
{}

inline Windows::Media::VideoFrame VideoFrame::CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height)
{
    return get_activation_factory<VideoFrame, Windows::Media::IVideoFrameStatics>().CreateAsDirect3D11SurfaceBacked(format, width, height);
}

inline Windows::Media::VideoFrame VideoFrame::CreateAsDirect3D11SurfaceBacked(Windows::Graphics::DirectX::DirectXPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device)
{
    return get_activation_factory<VideoFrame, Windows::Media::IVideoFrameStatics>().CreateAsDirect3D11SurfaceBacked(format, width, height, device);
}

inline Windows::Media::VideoFrame VideoFrame::CreateWithSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap)
{
    return get_activation_factory<VideoFrame, Windows::Media::IVideoFrameStatics>().CreateWithSoftwareBitmap(bitmap);
}

inline Windows::Media::VideoFrame VideoFrame::CreateWithDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface)
{
    return get_activation_factory<VideoFrame, Windows::Media::IVideoFrameStatics>().CreateWithDirect3D11Surface(surface);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::IAudioBuffer> : winrt::impl::hash_base<winrt::Windows::Media::IAudioBuffer> {};
template<> struct hash<winrt::Windows::Media::IAudioFrame> : winrt::impl::hash_base<winrt::Windows::Media::IAudioFrame> {};
template<> struct hash<winrt::Windows::Media::IAudioFrameFactory> : winrt::impl::hash_base<winrt::Windows::Media::IAudioFrameFactory> {};
template<> struct hash<winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::IImageDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::IImageDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::IMediaControl> : winrt::impl::hash_base<winrt::Windows::Media::IMediaControl> {};
template<> struct hash<winrt::Windows::Media::IMediaExtension> : winrt::impl::hash_base<winrt::Windows::Media::IMediaExtension> {};
template<> struct hash<winrt::Windows::Media::IMediaExtensionManager> : winrt::impl::hash_base<winrt::Windows::Media::IMediaExtensionManager> {};
template<> struct hash<winrt::Windows::Media::IMediaExtensionManager2> : winrt::impl::hash_base<winrt::Windows::Media::IMediaExtensionManager2> {};
template<> struct hash<winrt::Windows::Media::IMediaFrame> : winrt::impl::hash_base<winrt::Windows::Media::IMediaFrame> {};
template<> struct hash<winrt::Windows::Media::IMediaMarker> : winrt::impl::hash_base<winrt::Windows::Media::IMediaMarker> {};
template<> struct hash<winrt::Windows::Media::IMediaMarkerTypesStatics> : winrt::impl::hash_base<winrt::Windows::Media::IMediaMarkerTypesStatics> {};
template<> struct hash<winrt::Windows::Media::IMediaMarkers> : winrt::impl::hash_base<winrt::Windows::Media::IMediaMarkers> {};
template<> struct hash<winrt::Windows::Media::IMediaProcessingTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Media::IMediaProcessingTriggerDetails> {};
template<> struct hash<winrt::Windows::Media::IMediaTimelineController> : winrt::impl::hash_base<winrt::Windows::Media::IMediaTimelineController> {};
template<> struct hash<winrt::Windows::Media::IMediaTimelineController2> : winrt::impl::hash_base<winrt::Windows::Media::IMediaTimelineController2> {};
template<> struct hash<winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::IMediaTimelineControllerFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::IMusicDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::IMusicDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::IMusicDisplayProperties2> : winrt::impl::hash_base<winrt::Windows::Media::IMusicDisplayProperties2> {};
template<> struct hash<winrt::Windows::Media::IMusicDisplayProperties3> : winrt::impl::hash_base<winrt::Windows::Media::IMusicDisplayProperties3> {};
template<> struct hash<winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::IPlaybackPositionChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::IPlaybackRateChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::IShuffleEnabledChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::ISystemMediaTransportControls> : winrt::impl::hash_base<winrt::Windows::Media::ISystemMediaTransportControls> {};
template<> struct hash<winrt::Windows::Media::ISystemMediaTransportControls2> : winrt::impl::hash_base<winrt::Windows::Media::ISystemMediaTransportControls2> {};
template<> struct hash<winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs> {};
template<> struct hash<winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater> : winrt::impl::hash_base<winrt::Windows::Media::ISystemMediaTransportControlsDisplayUpdater> {};
template<> struct hash<winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::ISystemMediaTransportControlsStatics> : winrt::impl::hash_base<winrt::Windows::Media::ISystemMediaTransportControlsStatics> {};
template<> struct hash<winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties> : winrt::impl::hash_base<winrt::Windows::Media::ISystemMediaTransportControlsTimelineProperties> {};
template<> struct hash<winrt::Windows::Media::IVideoDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::IVideoDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::IVideoDisplayProperties2> : winrt::impl::hash_base<winrt::Windows::Media::IVideoDisplayProperties2> {};
template<> struct hash<winrt::Windows::Media::IVideoEffectsStatics> : winrt::impl::hash_base<winrt::Windows::Media::IVideoEffectsStatics> {};
template<> struct hash<winrt::Windows::Media::IVideoFrame> : winrt::impl::hash_base<winrt::Windows::Media::IVideoFrame> {};
template<> struct hash<winrt::Windows::Media::IVideoFrame2> : winrt::impl::hash_base<winrt::Windows::Media::IVideoFrame2> {};
template<> struct hash<winrt::Windows::Media::IVideoFrameFactory> : winrt::impl::hash_base<winrt::Windows::Media::IVideoFrameFactory> {};
template<> struct hash<winrt::Windows::Media::IVideoFrameStatics> : winrt::impl::hash_base<winrt::Windows::Media::IVideoFrameStatics> {};
template<> struct hash<winrt::Windows::Media::AudioBuffer> : winrt::impl::hash_base<winrt::Windows::Media::AudioBuffer> {};
template<> struct hash<winrt::Windows::Media::AudioFrame> : winrt::impl::hash_base<winrt::Windows::Media::AudioFrame> {};
template<> struct hash<winrt::Windows::Media::AutoRepeatModeChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::AutoRepeatModeChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::ImageDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::ImageDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::MediaControl> : winrt::impl::hash_base<winrt::Windows::Media::MediaControl> {};
template<> struct hash<winrt::Windows::Media::MediaExtensionManager> : winrt::impl::hash_base<winrt::Windows::Media::MediaExtensionManager> {};
template<> struct hash<winrt::Windows::Media::MediaMarkerTypes> : winrt::impl::hash_base<winrt::Windows::Media::MediaMarkerTypes> {};
template<> struct hash<winrt::Windows::Media::MediaProcessingTriggerDetails> : winrt::impl::hash_base<winrt::Windows::Media::MediaProcessingTriggerDetails> {};
template<> struct hash<winrt::Windows::Media::MediaTimelineController> : winrt::impl::hash_base<winrt::Windows::Media::MediaTimelineController> {};
template<> struct hash<winrt::Windows::Media::MediaTimelineControllerFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::MediaTimelineControllerFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::MusicDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::MusicDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::PlaybackPositionChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::PlaybackPositionChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::PlaybackRateChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::PlaybackRateChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::ShuffleEnabledChangeRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::ShuffleEnabledChangeRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SystemMediaTransportControls> : winrt::impl::hash_base<winrt::Windows::Media::SystemMediaTransportControls> {};
template<> struct hash<winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SystemMediaTransportControlsDisplayUpdater> : winrt::impl::hash_base<winrt::Windows::Media::SystemMediaTransportControlsDisplayUpdater> {};
template<> struct hash<winrt::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::SystemMediaTransportControlsTimelineProperties> : winrt::impl::hash_base<winrt::Windows::Media::SystemMediaTransportControlsTimelineProperties> {};
template<> struct hash<winrt::Windows::Media::VideoDisplayProperties> : winrt::impl::hash_base<winrt::Windows::Media::VideoDisplayProperties> {};
template<> struct hash<winrt::Windows::Media::VideoEffects> : winrt::impl::hash_base<winrt::Windows::Media::VideoEffects> {};
template<> struct hash<winrt::Windows::Media::VideoFrame> : winrt::impl::hash_base<winrt::Windows::Media::VideoFrame> {};

}

WINRT_WARNING_POP
