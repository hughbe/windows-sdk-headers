// C++/WinRT v1.0.180227.3

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
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Capture.Frames.2.h"
#include "winrt/impl/Windows.Media.Devices.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
#include "winrt/impl/Windows.Media.FaceAnalysis.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Playback.2.h"
#include "winrt/impl/Windows.Media.Protection.2.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.2.h"
#include "winrt/impl/Windows.Networking.BackgroundTransfer.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.FileProperties.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Core_IAudioStreamDescriptor<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties encodingProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioStreamDescriptor)->get_EncodingProperties(put_abi(encodingProperties)));
    return encodingProperties;
}

template <typename D> void consume_Windows_Media_Core_IAudioStreamDescriptor2<D>::LeadingEncoderPadding(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioStreamDescriptor2)->put_LeadingEncoderPadding(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Core_IAudioStreamDescriptor2<D>::LeadingEncoderPadding() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioStreamDescriptor2)->get_LeadingEncoderPadding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IAudioStreamDescriptor2<D>::TrailingEncoderPadding(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioStreamDescriptor2)->put_TrailingEncoderPadding(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Media_Core_IAudioStreamDescriptor2<D>::TrailingEncoderPadding() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioStreamDescriptor2)->get_TrailingEncoderPadding(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::AudioStreamDescriptor consume_Windows_Media_Core_IAudioStreamDescriptor3<D>::Copy() const
{
    Windows::Media::Core::AudioStreamDescriptor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioStreamDescriptor3)->Copy(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::AudioStreamDescriptor consume_Windows_Media_Core_IAudioStreamDescriptorFactory<D>::Create(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Media::Core::AudioStreamDescriptor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioStreamDescriptorFactory)->Create(get_abi(encodingProperties), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Media_Core_IAudioTrack<D>::OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrack)->add_OpenFailed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IAudioTrack> consume_Windows_Media_Core_IAudioTrack<D>::OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IAudioTrack>(this, &abi_t<Windows::Media::Core::IAudioTrack>::remove_OpenFailed, OpenFailed(handler));
}

template <typename D> void consume_Windows_Media_Core_IAudioTrack<D>::OpenFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrack)->remove_OpenFailed(get_abi(token)));
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Core_IAudioTrack<D>::GetEncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrack)->GetEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Core_IAudioTrack<D>::PlaybackItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrack)->get_PlaybackItem(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_IAudioTrack<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrack)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::AudioTrackSupportInfo consume_Windows_Media_Core_IAudioTrack<D>::SupportInfo() const
{
    Windows::Media::Core::AudioTrackSupportInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrack)->get_SupportInfo(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Media_Core_IAudioTrackOpenFailedEventArgs<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrackOpenFailedEventArgs)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaDecoderStatus consume_Windows_Media_Core_IAudioTrackSupportInfo<D>::DecoderStatus() const
{
    Windows::Media::Core::MediaDecoderStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrackSupportInfo)->get_DecoderStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::AudioDecoderDegradation consume_Windows_Media_Core_IAudioTrackSupportInfo<D>::Degradation() const
{
    Windows::Media::Core::AudioDecoderDegradation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrackSupportInfo)->get_Degradation(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::AudioDecoderDegradationReason consume_Windows_Media_Core_IAudioTrackSupportInfo<D>::DegradationReason() const
{
    Windows::Media::Core::AudioDecoderDegradationReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrackSupportInfo)->get_DegradationReason(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaSourceStatus consume_Windows_Media_Core_IAudioTrackSupportInfo<D>::MediaSourceStatus() const
{
    Windows::Media::Core::MediaSourceStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IAudioTrackSupportInfo)->get_MediaSourceStatus(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IChapterCue<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IChapterCue)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Core_IChapterCue<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IChapterCue)->get_Title(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::CodecKind consume_Windows_Media_Core_ICodecInfo<D>::Kind() const
{
    Windows::Media::Core::CodecKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecInfo)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::CodecCategory consume_Windows_Media_Core_ICodecInfo<D>::Category() const
{
    Windows::Media::Core::CodecCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecInfo)->get_Category(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Media_Core_ICodecInfo<D>::Subtypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecInfo)->get_Subtypes(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Core_ICodecInfo<D>::IsTrusted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecInfo)->get_IsTrusted(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::CodecInfo>> consume_Windows_Media_Core_ICodecQuery<D>::FindAllAsync(Windows::Media::Core::CodecKind const& kind, Windows::Media::Core::CodecCategory const& category, param::hstring const& subType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::CodecInfo>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecQuery)->FindAllAsync(get_abi(kind), get_abi(category), get_abi(subType), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatDV25() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatDV25(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatDV50() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatDV50(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatDvc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatDvc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatDvh1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatDvh1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatDvhD() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatDvhD(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatDvsd() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatDvsd(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatDvsl() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatDvsl(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatH263() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatH263(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatH264() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatH264(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatH265() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatH265(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatH264ES() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatH264ES(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatHevc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatHevc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatHevcES() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatHevcES(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatM4S2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatM4S2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMjpg() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMjpg(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMP43() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMP43(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMP4S() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMP4S(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMP4V() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMP4V(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMpeg2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMpeg2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatVP80() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatVP80(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatVP90() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatVP90(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMpg1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMpg1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMss1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMss1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatMss2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatMss2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatWmv1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatWmv1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatWmv2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatWmv2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatWmv3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatWmv3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormatWvc1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormatWvc1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::VideoFormat420O() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_VideoFormat420O(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatAac() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatAac(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatAdts() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatAdts(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatAlac() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatAlac(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatAmrNB() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatAmrNB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatAmrWB() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatAmrWB(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatAmrWP() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatAmrWP(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatDolbyAC3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatDolbyAC3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatDolbyAC3Spdif() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatDolbyAC3Spdif(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatDolbyDDPlus() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatDolbyDDPlus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatDrm() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatDrm(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatDts() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatDts(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatFlac() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatFlac(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatFloat() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatFloat(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatMP3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatMP3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatMPeg() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatMPeg(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatMsp1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatMsp1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatOpus() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatOpus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatPcm() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatPcm(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatWmaSpdif() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatWmaSpdif(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatWMAudioLossless() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatWMAudioLossless(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatWMAudioV8() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatWMAudioV8(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ICodecSubtypesStatics<D>::AudioFormatWMAudioV9() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ICodecSubtypesStatics)->get_AudioFormatWMAudioV9(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IDataCue<D>::Data(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IDataCue)->put_Data(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Core_IDataCue<D>::Data() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IDataCue)->get_Data(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::PropertySet consume_Windows_Media_Core_IDataCue2<D>::Properties() const
{
    Windows::Foundation::Collections::PropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IDataCue2)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::FaceDetectionEffectFrame consume_Windows_Media_Core_IFaceDetectedEventArgs<D>::ResultFrame() const
{
    Windows::Media::Core::FaceDetectionEffectFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectedEventArgs)->get_ResultFrame(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IFaceDetectionEffect<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffect)->put_Enabled(value));
}

template <typename D> bool consume_Windows_Media_Core_IFaceDetectionEffect<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffect)->get_Enabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IFaceDetectionEffect<D>::DesiredDetectionInterval(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffect)->put_DesiredDetectionInterval(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IFaceDetectionEffect<D>::DesiredDetectionInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffect)->get_DesiredDetectionInterval(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IFaceDetectionEffect<D>::FaceDetected(Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffect)->add_FaceDetected(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Core::IFaceDetectionEffect> consume_Windows_Media_Core_IFaceDetectionEffect<D>::FaceDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IFaceDetectionEffect>(this, &abi_t<Windows::Media::Core::IFaceDetectionEffect>::remove_FaceDetected, FaceDetected(handler));
}

template <typename D> void consume_Windows_Media_Core_IFaceDetectionEffect<D>::FaceDetected(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffect)->remove_FaceDetected(get_abi(cookie)));
}

template <typename D> void consume_Windows_Media_Core_IFaceDetectionEffectDefinition<D>::DetectionMode(Windows::Media::Core::FaceDetectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffectDefinition)->put_DetectionMode(get_abi(value)));
}

template <typename D> Windows::Media::Core::FaceDetectionMode consume_Windows_Media_Core_IFaceDetectionEffectDefinition<D>::DetectionMode() const
{
    Windows::Media::Core::FaceDetectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffectDefinition)->get_DetectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IFaceDetectionEffectDefinition<D>::SynchronousDetectionEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffectDefinition)->put_SynchronousDetectionEnabled(value));
}

template <typename D> bool consume_Windows_Media_Core_IFaceDetectionEffectDefinition<D>::SynchronousDetectionEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffectDefinition)->get_SynchronousDetectionEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::FaceAnalysis::DetectedFace> consume_Windows_Media_Core_IFaceDetectionEffectFrame<D>::DetectedFaces() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::FaceAnalysis::DetectedFace> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IFaceDetectionEffectFrame)->get_DetectedFaces(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IHighDynamicRangeControl<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IHighDynamicRangeControl)->put_Enabled(value));
}

template <typename D> bool consume_Windows_Media_Core_IHighDynamicRangeControl<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IHighDynamicRangeControl)->get_Enabled(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Core_IHighDynamicRangeOutput<D>::Certainty() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IHighDynamicRangeOutput)->get_Certainty(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Core::FrameController> consume_Windows_Media_Core_IHighDynamicRangeOutput<D>::FrameControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Core::FrameController> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IHighDynamicRangeOutput)->get_FrameControllers(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedTextPoint consume_Windows_Media_Core_IImageCue<D>::Position() const
{
    Windows::Media::Core::TimedTextPoint value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IImageCue)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IImageCue<D>::Position(Windows::Media::Core::TimedTextPoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IImageCue)->put_Position(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextSize consume_Windows_Media_Core_IImageCue<D>::Extent() const
{
    Windows::Media::Core::TimedTextSize value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IImageCue)->get_Extent(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IImageCue<D>::Extent(Windows::Media::Core::TimedTextSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IImageCue)->put_Extent(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IImageCue<D>::SoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IImageCue)->put_SoftwareBitmap(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Media_Core_IImageCue<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IImageCue)->get_SoftwareBitmap(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs<D>::Source() const
{
    Windows::Media::Core::MediaStreamSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStream consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs<D>::RandomAccessStream() const
{
    Windows::Storage::Streams::IRandomAccessStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs)->get_RandomAccessStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Media_Core_ILowLightFusionResult<D>::Frame() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ILowLightFusionResult)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> consume_Windows_Media_Core_ILowLightFusionStatics<D>::SupportedBitmapPixelFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ILowLightFusionStatics)->get_SupportedBitmapPixelFormats(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Core_ILowLightFusionStatics<D>::MaxSupportedFrameCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ILowLightFusionStatics)->get_MaxSupportedFrameCount(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Core::LowLightFusionResult, double> consume_Windows_Media_Core_ILowLightFusionStatics<D>::FuseAsync(param::async_iterable<Windows::Graphics::Imaging::SoftwareBitmap> const& frameSet) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Core::LowLightFusionResult, double> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ILowLightFusionStatics)->FuseAsync(get_abi(frameSet), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Media_Core_IMediaBinder<D>::Binding(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBinder)->add_Binding(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaBinder> consume_Windows_Media_Core_IMediaBinder<D>::Binding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaBinder>(this, &abi_t<Windows::Media::Core::IMediaBinder>::remove_Binding, Binding(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaBinder<D>::Binding(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBinder)->remove_Binding(get_abi(token)));
}

template <typename D> hstring consume_Windows_Media_Core_IMediaBinder<D>::Token() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBinder)->get_Token(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaBinder<D>::Token(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBinder)->put_Token(get_abi(value)));
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaBinder<D>::Source() const
{
    Windows::Media::Core::MediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBinder)->get_Source(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMediaBindingEventArgs<D>::Canceled(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs)->add_Canceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaBindingEventArgs> consume_Windows_Media_Core_IMediaBindingEventArgs<D>::Canceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaBindingEventArgs>(this, &abi_t<Windows::Media::Core::IMediaBindingEventArgs>::remove_Canceled, Canceled(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaBindingEventArgs<D>::Canceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs)->remove_Canceled(get_abi(token)));
}

template <typename D> Windows::Media::Core::MediaBinder consume_Windows_Media_Core_IMediaBindingEventArgs<D>::MediaBinder() const
{
    Windows::Media::Core::MediaBinder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs)->get_MediaBinder(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Media_Core_IMediaBindingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_Media_Core_IMediaBindingEventArgs<D>::SetUri(Windows::Foundation::Uri const& uri) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs)->SetUri(get_abi(uri)));
}

template <typename D> void consume_Windows_Media_Core_IMediaBindingEventArgs<D>::SetStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs)->SetStream(get_abi(stream), get_abi(contentType)));
}

template <typename D> void consume_Windows_Media_Core_IMediaBindingEventArgs<D>::SetStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs)->SetStreamReference(get_abi(stream), get_abi(contentType)));
}

template <typename D> void consume_Windows_Media_Core_IMediaBindingEventArgs2<D>::SetAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs2)->SetAdaptiveMediaSource(get_abi(mediaSource)));
}

template <typename D> void consume_Windows_Media_Core_IMediaBindingEventArgs2<D>::SetStorageFile(Windows::Storage::IStorageFile const& file) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs2)->SetStorageFile(get_abi(file)));
}

template <typename D> void consume_Windows_Media_Core_IMediaBindingEventArgs3<D>::SetDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaBindingEventArgs3)->SetDownloadOperation(get_abi(downloadOperation)));
}

template <typename D> void consume_Windows_Media_Core_IMediaCue<D>::StartTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaCue)->put_StartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaCue<D>::StartTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaCue)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaCue<D>::Duration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaCue)->put_Duration(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaCue<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaCue)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaCue<D>::Id(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaCue)->put_Id(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Core_IMediaCue<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaCue)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::IMediaCue consume_Windows_Media_Core_IMediaCueEventArgs<D>::Cue() const
{
    Windows::Media::Core::IMediaCue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaCueEventArgs)->get_Cue(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMediaSource2<D>::OpenOperationCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource2)->add_OpenOperationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaSource2> consume_Windows_Media_Core_IMediaSource2<D>::OpenOperationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaSource2>(this, &abi_t<Windows::Media::Core::IMediaSource2>::remove_OpenOperationCompleted, OpenOperationCompleted(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaSource2<D>::OpenOperationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource2)->remove_OpenOperationCompleted(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Media_Core_IMediaSource2<D>::CustomProperties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource2)->get_CustomProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Core_IMediaSource2<D>::Duration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource2)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Core_IMediaSource2<D>::IsOpen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource2)->get_IsOpen(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedTextSource> consume_Windows_Media_Core_IMediaSource2<D>::ExternalTimedTextSources() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedTextSource> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource2)->get_ExternalTimedTextSources(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedMetadataTrack> consume_Windows_Media_Core_IMediaSource2<D>::ExternalTimedMetadataTracks() const
{
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedMetadataTrack> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource2)->get_ExternalTimedMetadataTracks(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMediaSource3<D>::StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource3)->add_StateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaSource3> consume_Windows_Media_Core_IMediaSource3<D>::StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaSource3>(this, &abi_t<Windows::Media::Core::IMediaSource3>::remove_StateChanged, StateChanged(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaSource3<D>::StateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource3)->remove_StateChanged(get_abi(token)));
}

template <typename D> Windows::Media::Core::MediaSourceState consume_Windows_Media_Core_IMediaSource3<D>::State() const
{
    Windows::Media::Core::MediaSourceState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource3)->get_State(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaSource3<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource3)->Reset());
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSource consume_Windows_Media_Core_IMediaSource4<D>::AdaptiveMediaSource() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource4)->get_AdaptiveMediaSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Core_IMediaSource4<D>::MediaStreamSource() const
{
    Windows::Media::Core::MediaStreamSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource4)->get_MediaStreamSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MseStreamSource consume_Windows_Media_Core_IMediaSource4<D>::MseStreamSource() const
{
    Windows::Media::Core::MseStreamSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource4)->get_MseStreamSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Core_IMediaSource4<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource4)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Core_IMediaSource4<D>::OpenAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource4)->OpenAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Networking::BackgroundTransfer::DownloadOperation consume_Windows_Media_Core_IMediaSource5<D>::DownloadOperation() const
{
    Windows::Networking::BackgroundTransfer::DownloadOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSource5)->get_DownloadOperation(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMediaSourceAppServiceConnection<D>::InitializeMediaStreamSourceRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSourceAppServiceConnection, Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceAppServiceConnection)->add_InitializeMediaStreamSourceRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaSourceAppServiceConnection> consume_Windows_Media_Core_IMediaSourceAppServiceConnection<D>::InitializeMediaStreamSourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSourceAppServiceConnection, Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaSourceAppServiceConnection>(this, &abi_t<Windows::Media::Core::IMediaSourceAppServiceConnection>::remove_InitializeMediaStreamSourceRequested, InitializeMediaStreamSourceRequested(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaSourceAppServiceConnection<D>::InitializeMediaStreamSourceRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceAppServiceConnection)->remove_InitializeMediaStreamSourceRequested(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Core_IMediaSourceAppServiceConnection<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceAppServiceConnection)->Start());
}

template <typename D> Windows::Media::Core::MediaSourceAppServiceConnection consume_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory<D>::Create(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) const
{
    Windows::Media::Core::MediaSourceAppServiceConnection result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceAppServiceConnectionFactory)->Create(get_abi(appServiceConnection), put_abi(result)));
    return result;
}

template <typename D> HRESULT consume_Windows_Media_Core_IMediaSourceError<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceError)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaSourceError consume_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs<D>::Error() const
{
    Windows::Media::Core::MediaSourceError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaSourceState consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs<D>::OldState() const
{
    Windows::Media::Core::MediaSourceState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStateChangedEventArgs)->get_OldState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaSourceState consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs<D>::NewState() const
{
    Windows::Media::Core::MediaSourceState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStateChangedEventArgs)->get_NewState(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromAdaptiveMediaSource(get_abi(mediaSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromMediaStreamSource(Windows::Media::Core::MediaStreamSource const& mediaSource) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromMediaStreamSource(get_abi(mediaSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromMseStreamSource(Windows::Media::Core::MseStreamSource const& mediaSource) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromMseStreamSource(get_abi(mediaSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromIMediaSource(Windows::Media::Core::IMediaSource const& mediaSource) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromIMediaSource(get_abi(mediaSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromStorageFile(Windows::Storage::IStorageFile const& file) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromStorageFile(get_abi(file), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromStream(get_abi(stream), get_abi(contentType), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromStreamReference(get_abi(stream), get_abi(contentType), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics<D>::CreateFromUri(Windows::Foundation::Uri const& uri) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics)->CreateFromUri(get_abi(uri), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics2<D>::CreateFromMediaBinder(Windows::Media::Core::MediaBinder const& binder) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics2)->CreateFromMediaBinder(get_abi(binder), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics3<D>::CreateFromMediaFrameSource(Windows::Media::Capture::Frames::MediaFrameSource const& frameSource) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics3)->CreateFromMediaFrameSource(get_abi(frameSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Core_IMediaSourceStatics4<D>::CreateFromDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const
{
    Windows::Media::Core::MediaSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaSourceStatics4)->CreateFromDownloadOperation(get_abi(downloadOperation), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Media_Core_IMediaStreamDescriptor<D>::IsSelected() const
{
    bool selected{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamDescriptor)->get_IsSelected(&selected));
    return selected;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamDescriptor<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamDescriptor)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Core_IMediaStreamDescriptor<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamDescriptor)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamDescriptor<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamDescriptor)->put_Language(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Core_IMediaStreamDescriptor<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamDescriptor)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamDescriptor2<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamDescriptor2)->put_Label(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Core_IMediaStreamDescriptor2<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamDescriptor2)->get_Label(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMediaStreamSample<D>::Processed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->add_Processed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaStreamSample> consume_Windows_Media_Core_IMediaStreamSample<D>::Processed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaStreamSample>(this, &abi_t<Windows::Media::Core::IMediaStreamSample>::remove_Processed, Processed(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSample<D>::Processed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->remove_Processed(get_abi(token)));
}

template <typename D> Windows::Storage::Streams::Buffer consume_Windows_Media_Core_IMediaStreamSample<D>::Buffer() const
{
    Windows::Storage::Streams::Buffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_Buffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaStreamSample<D>::Timestamp() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSamplePropertySet consume_Windows_Media_Core_IMediaStreamSample<D>::ExtendedProperties() const
{
    Windows::Media::Core::MediaStreamSamplePropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_ExtendedProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSampleProtectionProperties consume_Windows_Media_Core_IMediaStreamSample<D>::Protection() const
{
    Windows::Media::Core::MediaStreamSampleProtectionProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_Protection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSample<D>::DecodeTimestamp(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->put_DecodeTimestamp(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaStreamSample<D>::DecodeTimestamp() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_DecodeTimestamp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSample<D>::Duration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->put_Duration(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaStreamSample<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSample<D>::KeyFrame(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->put_KeyFrame(value));
}

template <typename D> bool consume_Windows_Media_Core_IMediaStreamSample<D>::KeyFrame() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_KeyFrame(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSample<D>::Discontinuous(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->put_Discontinuous(value));
}

template <typename D> bool consume_Windows_Media_Core_IMediaStreamSample<D>::Discontinuous() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSample)->get_Discontinuous(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>::SetKeyIdentifier(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleProtectionProperties)->SetKeyIdentifier(value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>::GetKeyIdentifier(com_array<uint8_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleProtectionProperties)->GetKeyIdentifier(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>::SetInitializationVector(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleProtectionProperties)->SetInitializationVector(value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>::GetInitializationVector(com_array<uint8_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleProtectionProperties)->GetInitializationVector(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>::SetSubSampleMapping(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleProtectionProperties)->SetSubSampleMapping(value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>::GetSubSampleMapping(com_array<uint8_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleProtectionProperties)->GetSubSampleMapping(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> Windows::Media::Core::MediaStreamSample consume_Windows_Media_Core_IMediaStreamSampleStatics<D>::CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Foundation::TimeSpan const& timestamp) const
{
    Windows::Media::Core::MediaStreamSample value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleStatics)->CreateFromBuffer(get_abi(buffer), get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> consume_Windows_Media_Core_IMediaStreamSampleStatics<D>::CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, uint32_t count, Windows::Foundation::TimeSpan const& timestamp) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSampleStatics)->CreateFromStreamAsync(get_abi(stream), count, get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMediaStreamSource<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaStreamSource> consume_Windows_Media_Core_IMediaStreamSource<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaStreamSource>(this, &abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Closed, Closed(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->remove_Closed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMediaStreamSource<D>::Starting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->add_Starting(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaStreamSource> consume_Windows_Media_Core_IMediaStreamSource<D>::Starting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaStreamSource>(this, &abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Starting, Starting(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::Starting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->remove_Starting(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMediaStreamSource<D>::Paused(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->add_Paused(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaStreamSource> consume_Windows_Media_Core_IMediaStreamSource<D>::Paused(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaStreamSource>(this, &abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Paused, Paused(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::Paused(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->remove_Paused(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMediaStreamSource<D>::SampleRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->add_SampleRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaStreamSource> consume_Windows_Media_Core_IMediaStreamSource<D>::SampleRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaStreamSource>(this, &abi_t<Windows::Media::Core::IMediaStreamSource>::remove_SampleRequested, SampleRequested(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::SampleRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->remove_SampleRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMediaStreamSource<D>::SwitchStreamsRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->add_SwitchStreamsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaStreamSource> consume_Windows_Media_Core_IMediaStreamSource<D>::SwitchStreamsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaStreamSource>(this, &abi_t<Windows::Media::Core::IMediaStreamSource>::remove_SwitchStreamsRequested, SwitchStreamsRequested(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::SwitchStreamsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->remove_SwitchStreamsRequested(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::NotifyError(Windows::Media::Core::MediaStreamSourceErrorStatus const& errorStatus) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->NotifyError(get_abi(errorStatus)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::AddStreamDescriptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->AddStreamDescriptor(get_abi(descriptor)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::MediaProtectionManager(Windows::Media::Protection::MediaProtectionManager const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->put_MediaProtectionManager(get_abi(value)));
}

template <typename D> Windows::Media::Protection::MediaProtectionManager consume_Windows_Media_Core_IMediaStreamSource<D>::MediaProtectionManager() const
{
    Windows::Media::Protection::MediaProtectionManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->get_MediaProtectionManager(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::Duration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->put_Duration(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaStreamSource<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::CanSeek(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->put_CanSeek(value));
}

template <typename D> bool consume_Windows_Media_Core_IMediaStreamSource<D>::CanSeek() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->get_CanSeek(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::BufferTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->put_BufferTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaStreamSource<D>::BufferTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->get_BufferTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::SetBufferedRange(Windows::Foundation::TimeSpan const& startOffset, Windows::Foundation::TimeSpan const& endOffset) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->SetBufferedRange(get_abi(startOffset), get_abi(endOffset)));
}

template <typename D> Windows::Storage::FileProperties::MusicProperties consume_Windows_Media_Core_IMediaStreamSource<D>::MusicProperties() const
{
    Windows::Storage::FileProperties::MusicProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->get_MusicProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::FileProperties::VideoProperties consume_Windows_Media_Core_IMediaStreamSource<D>::VideoProperties() const
{
    Windows::Storage::FileProperties::VideoProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->get_VideoProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Media_Core_IMediaStreamSource<D>::Thumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource<D>::AddProtectionKey(Windows::Media::Core::IMediaStreamDescriptor const& streamDescriptor, array_view<uint8_t const> keyIdentifier, array_view<uint8_t const> licenseData) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource)->AddProtectionKey(get_abi(streamDescriptor), keyIdentifier.size(), get_abi(keyIdentifier), licenseData.size(), get_abi(licenseData)));
}

template <typename D> event_token consume_Windows_Media_Core_IMediaStreamSource2<D>::SampleRendered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource2)->add_SampleRendered(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMediaStreamSource2> consume_Windows_Media_Core_IMediaStreamSource2<D>::SampleRendered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMediaStreamSource2>(this, &abi_t<Windows::Media::Core::IMediaStreamSource2>::remove_SampleRendered, SampleRendered(handler));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource2<D>::SampleRendered(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource2)->remove_SampleRendered(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource3<D>::MaxSupportedPlaybackRate(optional<double> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource3)->put_MaxSupportedPlaybackRate(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Media_Core_IMediaStreamSource3<D>::MaxSupportedPlaybackRate() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource3)->get_MaxSupportedPlaybackRate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSource4<D>::IsLive(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource4)->put_IsLive(value));
}

template <typename D> bool consume_Windows_Media_Core_IMediaStreamSource4<D>::IsLive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSource4)->get_IsLive(&value));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSourceClosedRequest consume_Windows_Media_Core_IMediaStreamSourceClosedEventArgs<D>::Request() const
{
    Windows::Media::Core::MediaStreamSourceClosedRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceClosedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSourceClosedReason consume_Windows_Media_Core_IMediaStreamSourceClosedRequest<D>::Reason() const
{
    Windows::Media::Core::MediaStreamSourceClosedReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceClosedRequest)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Core_IMediaStreamSourceFactory<D>::CreateFromDescriptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const
{
    Windows::Media::Core::MediaStreamSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceFactory)->CreateFromDescriptor(get_abi(descriptor), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Core_IMediaStreamSourceFactory<D>::CreateFromDescriptors(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Core::IMediaStreamDescriptor const& descriptor2) const
{
    Windows::Media::Core::MediaStreamSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceFactory)->CreateFromDescriptors(get_abi(descriptor), get_abi(descriptor2), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs<D>::SampleLag() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs)->get_SampleLag(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::IMediaStreamDescriptor consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>::StreamDescriptor() const
{
    Windows::Media::Core::IMediaStreamDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRequest)->get_StreamDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSourceSampleRequestDeferral consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>::GetDeferral() const
{
    Windows::Media::Core::MediaStreamSourceSampleRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>::Sample(Windows::Media::Core::MediaStreamSample const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRequest)->put_Sample(get_abi(value)));
}

template <typename D> Windows::Media::Core::MediaStreamSample consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>::Sample() const
{
    Windows::Media::Core::MediaStreamSample value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRequest)->get_Sample(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>::ReportSampleProgress(uint32_t progress) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRequest)->ReportSampleProgress(progress));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral)->Complete());
}

template <typename D> Windows::Media::Core::MediaStreamSourceSampleRequest consume_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs<D>::Request() const
{
    Windows::Media::Core::MediaStreamSourceSampleRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSourceStartingRequest consume_Windows_Media_Core_IMediaStreamSourceStartingEventArgs<D>::Request() const
{
    Windows::Media::Core::MediaStreamSourceStartingRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceStartingEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Core_IMediaStreamSourceStartingRequest<D>::StartPosition() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceStartingRequest)->get_StartPosition(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSourceStartingRequestDeferral consume_Windows_Media_Core_IMediaStreamSourceStartingRequest<D>::GetDeferral() const
{
    Windows::Media::Core::MediaStreamSourceStartingRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceStartingRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSourceStartingRequest<D>::SetActualStartPosition(Windows::Foundation::TimeSpan const& position) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceStartingRequest)->SetActualStartPosition(get_abi(position)));
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral)->Complete());
}

template <typename D> Windows::Media::Core::IMediaStreamDescriptor consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest<D>::OldStreamDescriptor() const
{
    Windows::Media::Core::IMediaStreamDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest)->get_OldStreamDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::IMediaStreamDescriptor consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest<D>::NewStreamDescriptor() const
{
    Windows::Media::Core::IMediaStreamDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest)->get_NewStreamDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest<D>::GetDeferral() const
{
    Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral)->Complete());
}

template <typename D> Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs<D>::Request() const
{
    Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_IMediaTrack<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaTrack)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_IMediaTrack<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaTrack)->get_Language(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaTrackKind consume_Windows_Media_Core_IMediaTrack<D>::TrackKind() const
{
    Windows::Media::Core::MediaTrackKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaTrack)->get_TrackKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMediaTrack<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaTrack)->put_Label(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Core_IMediaTrack<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMediaTrack)->get_Label(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMseSourceBuffer<D>::UpdateStarting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->add_UpdateStarting(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseSourceBuffer> consume_Windows_Media_Core_IMseSourceBuffer<D>::UpdateStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseSourceBuffer>(this, &abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_UpdateStarting, UpdateStarting(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::UpdateStarting(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->remove_UpdateStarting(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseSourceBuffer<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseSourceBuffer> consume_Windows_Media_Core_IMseSourceBuffer<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseSourceBuffer>(this, &abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseSourceBuffer<D>::UpdateEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->add_UpdateEnded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseSourceBuffer> consume_Windows_Media_Core_IMseSourceBuffer<D>::UpdateEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseSourceBuffer>(this, &abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_UpdateEnded, UpdateEnded(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::UpdateEnded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->remove_UpdateEnded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseSourceBuffer<D>::ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->add_ErrorOccurred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseSourceBuffer> consume_Windows_Media_Core_IMseSourceBuffer<D>::ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseSourceBuffer>(this, &abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_ErrorOccurred, ErrorOccurred(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::ErrorOccurred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->remove_ErrorOccurred(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseSourceBuffer<D>::Aborted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->add_Aborted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseSourceBuffer> consume_Windows_Media_Core_IMseSourceBuffer<D>::Aborted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseSourceBuffer>(this, &abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_Aborted, Aborted(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::Aborted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->remove_Aborted(get_abi(token)));
}

template <typename D> Windows::Media::Core::MseAppendMode consume_Windows_Media_Core_IMseSourceBuffer<D>::Mode() const
{
    Windows::Media::Core::MseAppendMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::Mode(Windows::Media::Core::MseAppendMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->put_Mode(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Core_IMseSourceBuffer<D>::IsUpdating() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->get_IsUpdating(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseTimeRange> consume_Windows_Media_Core_IMseSourceBuffer<D>::Buffered() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseTimeRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->get_Buffered(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMseSourceBuffer<D>::TimestampOffset() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->get_TimestampOffset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::TimestampOffset(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->put_TimestampOffset(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_IMseSourceBuffer<D>::AppendWindowStart() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->get_AppendWindowStart(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::AppendWindowStart(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->put_AppendWindowStart(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Core_IMseSourceBuffer<D>::AppendWindowEnd() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->get_AppendWindowEnd(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::AppendWindowEnd(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->put_AppendWindowEnd(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::AppendBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->AppendBuffer(get_abi(buffer)));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::AppendStream(Windows::Storage::Streams::IInputStream const& stream) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->AppendStream(get_abi(stream)));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::AppendStream(Windows::Storage::Streams::IInputStream const& stream, uint64_t maxSize) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->AppendStreamMaxSize(get_abi(stream), maxSize));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::Abort() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->Abort());
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBuffer<D>::Remove(Windows::Foundation::TimeSpan const& start, optional<Windows::Foundation::TimeSpan> const& end) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBuffer)->Remove(get_abi(start), get_abi(end)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseSourceBufferList<D>::SourceBufferAdded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBufferList)->add_SourceBufferAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseSourceBufferList> consume_Windows_Media_Core_IMseSourceBufferList<D>::SourceBufferAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseSourceBufferList>(this, &abi_t<Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferAdded, SourceBufferAdded(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBufferList<D>::SourceBufferAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBufferList)->remove_SourceBufferAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseSourceBufferList<D>::SourceBufferRemoved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBufferList)->add_SourceBufferRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseSourceBufferList> consume_Windows_Media_Core_IMseSourceBufferList<D>::SourceBufferRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseSourceBufferList>(this, &abi_t<Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferRemoved, SourceBufferRemoved(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseSourceBufferList<D>::SourceBufferRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBufferList)->remove_SourceBufferRemoved(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseSourceBuffer> consume_Windows_Media_Core_IMseSourceBufferList<D>::Buffers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseSourceBuffer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseSourceBufferList)->get_Buffers(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IMseStreamSource<D>::Opened(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->add_Opened(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseStreamSource> consume_Windows_Media_Core_IMseStreamSource<D>::Opened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseStreamSource>(this, &abi_t<Windows::Media::Core::IMseStreamSource>::remove_Opened, Opened(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseStreamSource<D>::Opened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->remove_Opened(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseStreamSource<D>::Ended(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->add_Ended(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseStreamSource> consume_Windows_Media_Core_IMseStreamSource<D>::Ended(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseStreamSource>(this, &abi_t<Windows::Media::Core::IMseStreamSource>::remove_Ended, Ended(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseStreamSource<D>::Ended(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->remove_Ended(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_IMseStreamSource<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IMseStreamSource> consume_Windows_Media_Core_IMseStreamSource<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IMseStreamSource>(this, &abi_t<Windows::Media::Core::IMseStreamSource>::remove_Closed, Closed(handler));
}

template <typename D> void consume_Windows_Media_Core_IMseStreamSource<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->remove_Closed(get_abi(token)));
}

template <typename D> Windows::Media::Core::MseSourceBufferList consume_Windows_Media_Core_IMseStreamSource<D>::SourceBuffers() const
{
    Windows::Media::Core::MseSourceBufferList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->get_SourceBuffers(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MseSourceBufferList consume_Windows_Media_Core_IMseStreamSource<D>::ActiveSourceBuffers() const
{
    Windows::Media::Core::MseSourceBufferList value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->get_ActiveSourceBuffers(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MseReadyState consume_Windows_Media_Core_IMseStreamSource<D>::ReadyState() const
{
    Windows::Media::Core::MseReadyState value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->get_ReadyState(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Core_IMseStreamSource<D>::Duration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMseStreamSource<D>::Duration(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->put_Duration(get_abi(value)));
}

template <typename D> Windows::Media::Core::MseSourceBuffer consume_Windows_Media_Core_IMseStreamSource<D>::AddSourceBuffer(param::hstring const& mimeType) const
{
    Windows::Media::Core::MseSourceBuffer buffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->AddSourceBuffer(get_abi(mimeType), put_abi(buffer)));
    return buffer;
}

template <typename D> void consume_Windows_Media_Core_IMseStreamSource<D>::RemoveSourceBuffer(Windows::Media::Core::MseSourceBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->RemoveSourceBuffer(get_abi(buffer)));
}

template <typename D> void consume_Windows_Media_Core_IMseStreamSource<D>::EndOfStream(Windows::Media::Core::MseEndOfStreamStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource)->EndOfStream(get_abi(status)));
}

template <typename D> Windows::Foundation::IReference<Windows::Media::Core::MseTimeRange> consume_Windows_Media_Core_IMseStreamSource2<D>::LiveSeekableRange() const
{
    Windows::Foundation::IReference<Windows::Media::Core::MseTimeRange> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource2)->get_LiveSeekableRange(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_IMseStreamSource2<D>::LiveSeekableRange(optional<Windows::Media::Core::MseTimeRange> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSource2)->put_LiveSeekableRange(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Core_IMseStreamSourceStatics<D>::IsContentTypeSupported(param::hstring const& contentType) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IMseStreamSourceStatics)->IsContentTypeSupported(get_abi(contentType), &value));
    return value;
}

template <typename D> Windows::Media::Core::HighDynamicRangeControl consume_Windows_Media_Core_ISceneAnalysisEffect<D>::HighDynamicRangeAnalyzer() const
{
    Windows::Media::Core::HighDynamicRangeControl value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffect)->get_HighDynamicRangeAnalyzer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ISceneAnalysisEffect<D>::DesiredAnalysisInterval(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffect)->put_DesiredAnalysisInterval(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Core_ISceneAnalysisEffect<D>::DesiredAnalysisInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffect)->get_DesiredAnalysisInterval(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_ISceneAnalysisEffect<D>::SceneAnalyzed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffect)->add_SceneAnalyzed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Core::ISceneAnalysisEffect> consume_Windows_Media_Core_ISceneAnalysisEffect<D>::SceneAnalyzed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::ISceneAnalysisEffect>(this, &abi_t<Windows::Media::Core::ISceneAnalysisEffect>::remove_SceneAnalyzed, SceneAnalyzed(handler));
}

template <typename D> void consume_Windows_Media_Core_ISceneAnalysisEffect<D>::SceneAnalyzed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffect)->remove_SceneAnalyzed(get_abi(cookie)));
}

template <typename D> Windows::Media::Capture::CapturedFrameControlValues consume_Windows_Media_Core_ISceneAnalysisEffectFrame<D>::FrameControlValues() const
{
    Windows::Media::Capture::CapturedFrameControlValues value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffectFrame)->get_FrameControlValues(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::HighDynamicRangeOutput consume_Windows_Media_Core_ISceneAnalysisEffectFrame<D>::HighDynamicRange() const
{
    Windows::Media::Core::HighDynamicRangeOutput value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffectFrame)->get_HighDynamicRange(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::SceneAnalysisRecommendation consume_Windows_Media_Core_ISceneAnalysisEffectFrame2<D>::AnalysisRecommendation() const
{
    Windows::Media::Core::SceneAnalysisRecommendation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalysisEffectFrame2)->get_AnalysisRecommendation(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::SceneAnalysisEffectFrame consume_Windows_Media_Core_ISceneAnalyzedEventArgs<D>::ResultFrame() const
{
    Windows::Media::Core::SceneAnalysisEffectFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISceneAnalyzedEventArgs)->get_ResultFrame(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>::SelectedIndexChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISingleSelectMediaTrackList)->add_SelectedIndexChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::ISingleSelectMediaTrackList> consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>::SelectedIndexChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::ISingleSelectMediaTrackList>(this, &abi_t<Windows::Media::Core::ISingleSelectMediaTrackList>::remove_SelectedIndexChanged, SelectedIndexChanged(handler));
}

template <typename D> void consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>::SelectedIndexChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISingleSelectMediaTrackList)->remove_SelectedIndexChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>::SelectedIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISingleSelectMediaTrackList)->put_SelectedIndex(value));
}

template <typename D> int32_t consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>::SelectedIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISingleSelectMediaTrackList)->get_SelectedIndex(&value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ISpeechCue<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISpeechCue)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ISpeechCue<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISpeechCue)->put_Text(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Core_ISpeechCue<D>::StartPositionInInput() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISpeechCue)->get_StartPositionInInput(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ISpeechCue<D>::StartPositionInInput(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISpeechCue)->put_StartPositionInInput(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Core_ISpeechCue<D>::EndPositionInInput() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISpeechCue)->get_EndPositionInInput(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ISpeechCue<D>::EndPositionInInput(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ISpeechCue)->put_EndPositionInInput(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::TimedMetadataEncodingProperties consume_Windows_Media_Core_ITimedMetadataStreamDescriptor<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::TimedMetadataEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataStreamDescriptor)->get_EncodingProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedMetadataStreamDescriptor consume_Windows_Media_Core_ITimedMetadataStreamDescriptor<D>::Copy() const
{
    Windows::Media::Core::TimedMetadataStreamDescriptor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataStreamDescriptor)->Copy(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::TimedMetadataStreamDescriptor consume_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory<D>::Create(Windows::Media::MediaProperties::TimedMetadataEncodingProperties const& encodingProperties) const
{
    Windows::Media::Core::TimedMetadataStreamDescriptor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataStreamDescriptorFactory)->Create(get_abi(encodingProperties), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Media_Core_ITimedMetadataTrack<D>::CueEntered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->add_CueEntered(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::ITimedMetadataTrack> consume_Windows_Media_Core_ITimedMetadataTrack<D>::CueEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::ITimedMetadataTrack>(this, &abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_CueEntered, CueEntered(handler));
}

template <typename D> void consume_Windows_Media_Core_ITimedMetadataTrack<D>::CueEntered(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->remove_CueEntered(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_ITimedMetadataTrack<D>::CueExited(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->add_CueExited(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::ITimedMetadataTrack> consume_Windows_Media_Core_ITimedMetadataTrack<D>::CueExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::ITimedMetadataTrack>(this, &abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_CueExited, CueExited(handler));
}

template <typename D> void consume_Windows_Media_Core_ITimedMetadataTrack<D>::CueExited(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->remove_CueExited(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Core_ITimedMetadataTrack<D>::TrackFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->add_TrackFailed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::ITimedMetadataTrack> consume_Windows_Media_Core_ITimedMetadataTrack<D>::TrackFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::ITimedMetadataTrack>(this, &abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_TrackFailed, TrackFailed(handler));
}

template <typename D> void consume_Windows_Media_Core_ITimedMetadataTrack<D>::TrackFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->remove_TrackFailed(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> consume_Windows_Media_Core_ITimedMetadataTrack<D>::Cues() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->get_Cues(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> consume_Windows_Media_Core_ITimedMetadataTrack<D>::ActiveCues() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->get_ActiveCues(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedMetadataKind consume_Windows_Media_Core_ITimedMetadataTrack<D>::TimedMetadataKind() const
{
    Windows::Media::Core::TimedMetadataKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->get_TimedMetadataKind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ITimedMetadataTrack<D>::DispatchType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->get_DispatchType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedMetadataTrack<D>::AddCue(Windows::Media::Core::IMediaCue const& cue) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->AddCue(get_abi(cue)));
}

template <typename D> void consume_Windows_Media_Core_ITimedMetadataTrack<D>::RemoveCue(Windows::Media::Core::IMediaCue const& cue) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack)->RemoveCue(get_abi(cue)));
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Core_ITimedMetadataTrack2<D>::PlaybackItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack2)->get_PlaybackItem(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ITimedMetadataTrack2<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrack2)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedMetadataTrackErrorCode consume_Windows_Media_Core_ITimedMetadataTrackError<D>::ErrorCode() const
{
    Windows::Media::Core::TimedMetadataTrackErrorCode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrackError)->get_ErrorCode(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Media_Core_ITimedMetadataTrackError<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrackError)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedMetadataTrack consume_Windows_Media_Core_ITimedMetadataTrackFactory<D>::Create(param::hstring const& id, param::hstring const& language, Windows::Media::Core::TimedMetadataKind const& kind) const
{
    Windows::Media::Core::TimedMetadataTrack value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrackFactory)->Create(get_abi(id), get_abi(language), get_abi(kind), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedMetadataTrackError consume_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs<D>::Error() const
{
    Windows::Media::Core::TimedMetadataTrackError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrackFailedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> consume_Windows_Media_Core_ITimedMetadataTrackProvider<D>::TimedMetadataTracks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedMetadataTrackProvider)->get_TimedMetadataTracks(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedTextRegion consume_Windows_Media_Core_ITimedTextCue<D>::CueRegion() const
{
    Windows::Media::Core::TimedTextRegion value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextCue)->get_CueRegion(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextCue<D>::CueRegion(Windows::Media::Core::TimedTextRegion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextCue)->put_CueRegion(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextStyle consume_Windows_Media_Core_ITimedTextCue<D>::CueStyle() const
{
    Windows::Media::Core::TimedTextStyle value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextCue)->get_CueStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextCue<D>::CueStyle(Windows::Media::Core::TimedTextStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextCue)->put_CueStyle(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextLine> consume_Windows_Media_Core_ITimedTextCue<D>::Lines() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextLine> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextCue)->get_Lines(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ITimedTextLine<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextLine)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextLine<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextLine)->put_Text(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextSubformat> consume_Windows_Media_Core_ITimedTextLine<D>::Subformats() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextSubformat> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextLine)->get_Subformats(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_ITimedTextRegion<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_Name(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextPoint consume_Windows_Media_Core_ITimedTextRegion<D>::Position() const
{
    Windows::Media::Core::TimedTextPoint value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::Position(Windows::Media::Core::TimedTextPoint const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_Position(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextSize consume_Windows_Media_Core_ITimedTextRegion<D>::Extent() const
{
    Windows::Media::Core::TimedTextSize value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_Extent(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::Extent(Windows::Media::Core::TimedTextSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_Extent(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Media_Core_ITimedTextRegion<D>::Background() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_Background(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::Background(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_Background(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextWritingMode consume_Windows_Media_Core_ITimedTextRegion<D>::WritingMode() const
{
    Windows::Media::Core::TimedTextWritingMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_WritingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::WritingMode(Windows::Media::Core::TimedTextWritingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_WritingMode(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextDisplayAlignment consume_Windows_Media_Core_ITimedTextRegion<D>::DisplayAlignment() const
{
    Windows::Media::Core::TimedTextDisplayAlignment value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_DisplayAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_DisplayAlignment(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextDouble consume_Windows_Media_Core_ITimedTextRegion<D>::LineHeight() const
{
    Windows::Media::Core::TimedTextDouble value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_LineHeight(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::LineHeight(Windows::Media::Core::TimedTextDouble const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_LineHeight(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Core_ITimedTextRegion<D>::IsOverflowClipped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_IsOverflowClipped(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::IsOverflowClipped(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_IsOverflowClipped(value));
}

template <typename D> Windows::Media::Core::TimedTextPadding consume_Windows_Media_Core_ITimedTextRegion<D>::Padding() const
{
    Windows::Media::Core::TimedTextPadding value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_Padding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::Padding(Windows::Media::Core::TimedTextPadding const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_Padding(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextWrapping consume_Windows_Media_Core_ITimedTextRegion<D>::TextWrapping() const
{
    Windows::Media::Core::TimedTextWrapping value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_TextWrapping(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::TextWrapping(Windows::Media::Core::TimedTextWrapping const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_TextWrapping(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Media_Core_ITimedTextRegion<D>::ZIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_ZIndex(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::ZIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_ZIndex(value));
}

template <typename D> Windows::Media::Core::TimedTextScrollMode consume_Windows_Media_Core_ITimedTextRegion<D>::ScrollMode() const
{
    Windows::Media::Core::TimedTextScrollMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->get_ScrollMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextRegion<D>::ScrollMode(Windows::Media::Core::TimedTextScrollMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextRegion)->put_ScrollMode(get_abi(value)));
}

template <typename D> event_token consume_Windows_Media_Core_ITimedTextSource<D>::Resolved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSource)->add_Resolved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::ITimedTextSource> consume_Windows_Media_Core_ITimedTextSource<D>::Resolved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::ITimedTextSource>(this, &abi_t<Windows::Media::Core::ITimedTextSource>::remove_Resolved, Resolved(handler));
}

template <typename D> void consume_Windows_Media_Core_ITimedTextSource<D>::Resolved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSource)->remove_Resolved(get_abi(token)));
}

template <typename D> Windows::Media::Core::TimedMetadataTrackError consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs<D>::Error() const
{
    Windows::Media::Core::TimedMetadataTrackError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceResolveResultEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs<D>::Tracks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceResolveResultEventArgs)->get_Tracks(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics<D>::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Media::Core::TimedTextSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics)->CreateFromStream(get_abi(stream), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics<D>::CreateFromUri(Windows::Foundation::Uri const& uri) const
{
    Windows::Media::Core::TimedTextSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics)->CreateFromUri(get_abi(uri), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics<D>::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& defaultLanguage) const
{
    Windows::Media::Core::TimedTextSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics)->CreateFromStreamWithLanguage(get_abi(stream), get_abi(defaultLanguage), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics<D>::CreateFromUri(Windows::Foundation::Uri const& uri, param::hstring const& defaultLanguage) const
{
    Windows::Media::Core::TimedTextSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics)->CreateFromUriWithLanguage(get_abi(uri), get_abi(defaultLanguage), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics2<D>::CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream) const
{
    Windows::Media::Core::TimedTextSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics2)->CreateFromStreamWithIndex(get_abi(stream), get_abi(indexStream), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics2<D>::CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri) const
{
    Windows::Media::Core::TimedTextSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics2)->CreateFromUriWithIndex(get_abi(uri), get_abi(indexUri), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics2<D>::CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream, param::hstring const& defaultLanguage) const
{
    Windows::Media::Core::TimedTextSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics2)->CreateFromStreamWithIndexAndLanguage(get_abi(stream), get_abi(indexStream), get_abi(defaultLanguage), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::TimedTextSource consume_Windows_Media_Core_ITimedTextSourceStatics2<D>::CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri, param::hstring const& defaultLanguage) const
{
    Windows::Media::Core::TimedTextSource result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSourceStatics2)->CreateFromUriWithIndexAndLanguage(get_abi(uri), get_abi(indexUri), get_abi(defaultLanguage), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Media_Core_ITimedTextStyle<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_Name(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Core_ITimedTextStyle<D>::FontFamily() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_FontFamily(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::FontFamily(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_FontFamily(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextDouble consume_Windows_Media_Core_ITimedTextStyle<D>::FontSize() const
{
    Windows::Media::Core::TimedTextDouble value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_FontSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::FontSize(Windows::Media::Core::TimedTextDouble const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_FontSize(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextWeight consume_Windows_Media_Core_ITimedTextStyle<D>::FontWeight() const
{
    Windows::Media::Core::TimedTextWeight value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_FontWeight(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::FontWeight(Windows::Media::Core::TimedTextWeight const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_FontWeight(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Media_Core_ITimedTextStyle<D>::Foreground() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_Foreground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::Foreground(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_Foreground(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Media_Core_ITimedTextStyle<D>::Background() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_Background(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::Background(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_Background(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Core_ITimedTextStyle<D>::IsBackgroundAlwaysShown() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_IsBackgroundAlwaysShown(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::IsBackgroundAlwaysShown(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_IsBackgroundAlwaysShown(value));
}

template <typename D> Windows::Media::Core::TimedTextFlowDirection consume_Windows_Media_Core_ITimedTextStyle<D>::FlowDirection() const
{
    Windows::Media::Core::TimedTextFlowDirection value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_FlowDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::FlowDirection(Windows::Media::Core::TimedTextFlowDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_FlowDirection(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextLineAlignment consume_Windows_Media_Core_ITimedTextStyle<D>::LineAlignment() const
{
    Windows::Media::Core::TimedTextLineAlignment value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_LineAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::LineAlignment(Windows::Media::Core::TimedTextLineAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_LineAlignment(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_Media_Core_ITimedTextStyle<D>::OutlineColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_OutlineColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::OutlineColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_OutlineColor(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextDouble consume_Windows_Media_Core_ITimedTextStyle<D>::OutlineThickness() const
{
    Windows::Media::Core::TimedTextDouble value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_OutlineThickness(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::OutlineThickness(Windows::Media::Core::TimedTextDouble const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_OutlineThickness(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextDouble consume_Windows_Media_Core_ITimedTextStyle<D>::OutlineRadius() const
{
    Windows::Media::Core::TimedTextDouble value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->get_OutlineRadius(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle<D>::OutlineRadius(Windows::Media::Core::TimedTextDouble const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle)->put_OutlineRadius(get_abi(value)));
}

template <typename D> Windows::Media::Core::TimedTextFontStyle consume_Windows_Media_Core_ITimedTextStyle2<D>::FontStyle() const
{
    Windows::Media::Core::TimedTextFontStyle value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->get_FontStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle2<D>::FontStyle(Windows::Media::Core::TimedTextFontStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->put_FontStyle(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Core_ITimedTextStyle2<D>::IsUnderlineEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->get_IsUnderlineEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle2<D>::IsUnderlineEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->put_IsUnderlineEnabled(value));
}

template <typename D> bool consume_Windows_Media_Core_ITimedTextStyle2<D>::IsLineThroughEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->get_IsLineThroughEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle2<D>::IsLineThroughEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->put_IsLineThroughEnabled(value));
}

template <typename D> bool consume_Windows_Media_Core_ITimedTextStyle2<D>::IsOverlineEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->get_IsOverlineEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextStyle2<D>::IsOverlineEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextStyle2)->put_IsOverlineEnabled(value));
}

template <typename D> int32_t consume_Windows_Media_Core_ITimedTextSubformat<D>::StartIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSubformat)->get_StartIndex(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextSubformat<D>::StartIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSubformat)->put_StartIndex(value));
}

template <typename D> int32_t consume_Windows_Media_Core_ITimedTextSubformat<D>::Length() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSubformat)->get_Length(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextSubformat<D>::Length(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSubformat)->put_Length(value));
}

template <typename D> Windows::Media::Core::TimedTextStyle consume_Windows_Media_Core_ITimedTextSubformat<D>::SubformatStyle() const
{
    Windows::Media::Core::TimedTextStyle value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSubformat)->get_SubformatStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Core_ITimedTextSubformat<D>::SubformatStyle(Windows::Media::Core::TimedTextStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::ITimedTextSubformat)->put_SubformatStyle(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Core_IVideoStabilizationEffect<D>::Enabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStabilizationEffect)->put_Enabled(value));
}

template <typename D> bool consume_Windows_Media_Core_IVideoStabilizationEffect<D>::Enabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStabilizationEffect)->get_Enabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Core_IVideoStabilizationEffect<D>::EnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStabilizationEffect)->add_EnabledChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Media::Core::IVideoStabilizationEffect> consume_Windows_Media_Core_IVideoStabilizationEffect<D>::EnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IVideoStabilizationEffect>(this, &abi_t<Windows::Media::Core::IVideoStabilizationEffect>::remove_EnabledChanged, EnabledChanged(handler));
}

template <typename D> void consume_Windows_Media_Core_IVideoStabilizationEffect<D>::EnabledChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStabilizationEffect)->remove_EnabledChanged(get_abi(cookie)));
}

template <typename D> Windows::Media::Capture::VideoStreamConfiguration consume_Windows_Media_Core_IVideoStabilizationEffect<D>::GetRecommendedStreamConfiguration(Windows::Media::Devices::VideoDeviceController const& controller, Windows::Media::MediaProperties::VideoEncodingProperties const& desiredProperties) const
{
    Windows::Media::Capture::VideoStreamConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStabilizationEffect)->GetRecommendedStreamConfiguration(get_abi(controller), get_abi(desiredProperties), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason consume_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs<D>::Reason() const
{
    Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_Core_IVideoStreamDescriptor<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties encodingProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStreamDescriptor)->get_EncodingProperties(put_abi(encodingProperties)));
    return encodingProperties;
}

template <typename D> Windows::Media::Core::VideoStreamDescriptor consume_Windows_Media_Core_IVideoStreamDescriptor2<D>::Copy() const
{
    Windows::Media::Core::VideoStreamDescriptor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStreamDescriptor2)->Copy(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Core::VideoStreamDescriptor consume_Windows_Media_Core_IVideoStreamDescriptorFactory<D>::Create(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties) const
{
    Windows::Media::Core::VideoStreamDescriptor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoStreamDescriptorFactory)->Create(get_abi(encodingProperties), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Media_Core_IVideoTrack<D>::OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrack)->add_OpenFailed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Core::IVideoTrack> consume_Windows_Media_Core_IVideoTrack<D>::OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Core::IVideoTrack>(this, &abi_t<Windows::Media::Core::IVideoTrack>::remove_OpenFailed, OpenFailed(handler));
}

template <typename D> void consume_Windows_Media_Core_IVideoTrack<D>::OpenFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrack)->remove_OpenFailed(get_abi(token)));
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_Core_IVideoTrack<D>::GetEncodingProperties() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrack)->GetEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Playback::MediaPlaybackItem consume_Windows_Media_Core_IVideoTrack<D>::PlaybackItem() const
{
    Windows::Media::Playback::MediaPlaybackItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrack)->get_PlaybackItem(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Core_IVideoTrack<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrack)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::VideoTrackSupportInfo consume_Windows_Media_Core_IVideoTrack<D>::SupportInfo() const
{
    Windows::Media::Core::VideoTrackSupportInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrack)->get_SupportInfo(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Media_Core_IVideoTrackOpenFailedEventArgs<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrackOpenFailedEventArgs)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaDecoderStatus consume_Windows_Media_Core_IVideoTrackSupportInfo<D>::DecoderStatus() const
{
    Windows::Media::Core::MediaDecoderStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrackSupportInfo)->get_DecoderStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaSourceStatus consume_Windows_Media_Core_IVideoTrackSupportInfo<D>::MediaSourceStatus() const
{
    Windows::Media::Core::MediaSourceStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Core::IVideoTrackSupportInfo)->get_MediaSourceStatus(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Core::IAudioStreamDescriptor> : produce_base<D, Windows::Media::Core::IAudioStreamDescriptor>
{
    HRESULT __stdcall get_EncodingProperties(void** encodingProperties) noexcept final
    {
        try
        {
            *encodingProperties = nullptr;
            typename D::abi_guard guard(this->shim());
            *encodingProperties = detach_from<Windows::Media::MediaProperties::AudioEncodingProperties>(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IAudioStreamDescriptor2> : produce_base<D, Windows::Media::Core::IAudioStreamDescriptor2>
{
    HRESULT __stdcall put_LeadingEncoderPadding(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeadingEncoderPadding(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LeadingEncoderPadding(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().LeadingEncoderPadding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TrailingEncoderPadding(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrailingEncoderPadding(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrailingEncoderPadding(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().TrailingEncoderPadding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IAudioStreamDescriptor3> : produce_base<D, Windows::Media::Core::IAudioStreamDescriptor3>
{
    HRESULT __stdcall Copy(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::AudioStreamDescriptor>(this->shim().Copy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IAudioStreamDescriptorFactory> : produce_base<D, Windows::Media::Core::IAudioStreamDescriptorFactory>
{
    HRESULT __stdcall Create(void* encodingProperties, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::AudioStreamDescriptor>(this->shim().Create(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IAudioTrack> : produce_base<D, Windows::Media::Core::IAudioTrack>
{
    HRESULT __stdcall add_OpenFailed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().OpenFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OpenFailed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetEncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::AudioEncodingProperties>(this->shim().GetEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().PlaybackItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::AudioTrackSupportInfo>(this->shim().SupportInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IAudioTrackOpenFailedEventArgs> : produce_base<D, Windows::Media::Core::IAudioTrackOpenFailedEventArgs>
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
struct produce<D, Windows::Media::Core::IAudioTrackSupportInfo> : produce_base<D, Windows::Media::Core::IAudioTrackSupportInfo>
{
    HRESULT __stdcall get_DecoderStatus(Windows::Media::Core::MediaDecoderStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaDecoderStatus>(this->shim().DecoderStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Degradation(Windows::Media::Core::AudioDecoderDegradation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::AudioDecoderDegradation>(this->shim().Degradation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DegradationReason(Windows::Media::Core::AudioDecoderDegradationReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::AudioDecoderDegradationReason>(this->shim().DegradationReason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaSourceStatus(Windows::Media::Core::MediaSourceStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSourceStatus>(this->shim().MediaSourceStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IChapterCue> : produce_base<D, Windows::Media::Core::IChapterCue>
{
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
};

template <typename D>
struct produce<D, Windows::Media::Core::ICodecInfo> : produce_base<D, Windows::Media::Core::ICodecInfo>
{
    HRESULT __stdcall get_Kind(Windows::Media::Core::CodecKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::CodecKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Category(Windows::Media::Core::CodecCategory* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::CodecCategory>(this->shim().Category());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Subtypes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Subtypes());
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

    HRESULT __stdcall get_IsTrusted(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTrusted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ICodecQuery> : produce_base<D, Windows::Media::Core::ICodecQuery>
{
    HRESULT __stdcall FindAllAsync(Windows::Media::Core::CodecKind kind, Windows::Media::Core::CodecCategory category, HSTRING subType, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::CodecInfo>>>(this->shim().FindAllAsync(*reinterpret_cast<Windows::Media::Core::CodecKind const*>(&kind), *reinterpret_cast<Windows::Media::Core::CodecCategory const*>(&category), *reinterpret_cast<hstring const*>(&subType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ICodecSubtypesStatics> : produce_base<D, Windows::Media::Core::ICodecSubtypesStatics>
{
    HRESULT __stdcall get_VideoFormatDV25(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatDV25());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatDV50(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatDV50());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatDvc(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatDvc());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatDvh1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatDvh1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatDvhD(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatDvhD());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatDvsd(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatDvsd());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatDvsl(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatDvsl());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatH263(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatH263());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatH264(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatH264());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatH265(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatH265());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatH264ES(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatH264ES());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatHevc(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatHevc());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatHevcES(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatHevcES());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatM4S2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatM4S2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMjpg(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMjpg());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMP43(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMP43());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMP4S(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMP4S());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMP4V(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMP4V());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMpeg2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMpeg2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatVP80(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatVP80());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatVP90(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatVP90());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMpg1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMpg1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMss1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMss1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatMss2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatMss2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatWmv1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatWmv1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatWmv2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatWmv2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatWmv3(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatWmv3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormatWvc1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormatWvc1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormat420O(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoFormat420O());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatAac(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatAac());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatAdts(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatAdts());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatAlac(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatAlac());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatAmrNB(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatAmrNB());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatAmrWB(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatAmrWB());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatAmrWP(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatAmrWP());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatDolbyAC3(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatDolbyAC3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatDolbyAC3Spdif(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatDolbyAC3Spdif());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatDolbyDDPlus(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatDolbyDDPlus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatDrm(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatDrm());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatDts(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatDts());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatFlac(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatFlac());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatFloat(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatFloat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatMP3(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatMP3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatMPeg(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatMPeg());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatMsp1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatMsp1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatOpus(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatOpus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatPcm(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatPcm());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatWmaSpdif(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatWmaSpdif());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatWMAudioLossless(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatWMAudioLossless());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatWMAudioV8(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatWMAudioV8());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioFormatWMAudioV9(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AudioFormatWMAudioV9());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IDataCue> : produce_base<D, Windows::Media::Core::IDataCue>
{
    HRESULT __stdcall put_Data(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
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
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IDataCue2> : produce_base<D, Windows::Media::Core::IDataCue2>
{
    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::PropertySet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IFaceDetectedEventArgs> : produce_base<D, Windows::Media::Core::IFaceDetectedEventArgs>
{
    HRESULT __stdcall get_ResultFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::FaceDetectionEffectFrame>(this->shim().ResultFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IFaceDetectionEffect> : produce_base<D, Windows::Media::Core::IFaceDetectionEffect>
{
    HRESULT __stdcall put_Enabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredDetectionInterval(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredDetectionInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredDetectionInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DesiredDetectionInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FaceDetected(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().FaceDetected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FaceDetected(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FaceDetected(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IFaceDetectionEffectDefinition> : produce_base<D, Windows::Media::Core::IFaceDetectionEffectDefinition>
{
    HRESULT __stdcall put_DetectionMode(Windows::Media::Core::FaceDetectionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetectionMode(*reinterpret_cast<Windows::Media::Core::FaceDetectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DetectionMode(Windows::Media::Core::FaceDetectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::FaceDetectionMode>(this->shim().DetectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SynchronousDetectionEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SynchronousDetectionEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SynchronousDetectionEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SynchronousDetectionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IFaceDetectionEffectFrame> : produce_base<D, Windows::Media::Core::IFaceDetectionEffectFrame>
{
    HRESULT __stdcall get_DetectedFaces(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::FaceAnalysis::DetectedFace>>(this->shim().DetectedFaces());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IHighDynamicRangeControl> : produce_base<D, Windows::Media::Core::IHighDynamicRangeControl>
{
    HRESULT __stdcall put_Enabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IHighDynamicRangeOutput> : produce_base<D, Windows::Media::Core::IHighDynamicRangeOutput>
{
    HRESULT __stdcall get_Certainty(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Certainty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameControllers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Core::FrameController>>(this->shim().FrameControllers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IImageCue> : produce_base<D, Windows::Media::Core::IImageCue>
{
    HRESULT __stdcall get_Position(struct struct_Windows_Media_Core_TimedTextPoint* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextPoint>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(struct struct_Windows_Media_Core_TimedTextPoint value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Media::Core::TimedTextPoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Extent(struct struct_Windows_Media_Core_TimedTextSize* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextSize>(this->shim().Extent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Extent(struct struct_Windows_Media_Core_TimedTextSize value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Extent(*reinterpret_cast<Windows::Media::Core::TimedTextSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SoftwareBitmap(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
struct produce<D, Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs> : produce_base<D, Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>
{
    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RandomAccessStream(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStream>(this->shim().RandomAccessStream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ILowLightFusionResult> : produce_base<D, Windows::Media::Core::ILowLightFusionResult>
{
    HRESULT __stdcall get_Frame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ILowLightFusionStatics> : produce_base<D, Windows::Media::Core::ILowLightFusionStatics>
{
    HRESULT __stdcall get_SupportedBitmapPixelFormats(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat>>(this->shim().SupportedBitmapPixelFormats());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSupportedFrameCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().MaxSupportedFrameCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FuseAsync(void* frameSet, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Core::LowLightFusionResult, double>>(this->shim().FuseAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Graphics::Imaging::SoftwareBitmap> const*>(&frameSet)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaBinder> : produce_base<D, Windows::Media::Core::IMediaBinder>
{
    HRESULT __stdcall add_Binding(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Binding(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Binding(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Binding(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Token(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Token());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Token(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Token(*reinterpret_cast<hstring const*>(&value));
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
            *value = detach_from<Windows::Media::Core::MediaSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaBindingEventArgs> : produce_base<D, Windows::Media::Core::IMediaBindingEventArgs>
{
    HRESULT __stdcall add_Canceled(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Canceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Canceled(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Canceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaBinder(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaBinder>(this->shim().MediaBinder());
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
            *deferral = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetUri(void* uri) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetStream(void* stream, HSTRING contentType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<hstring const*>(&contentType));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetStreamReference(void* stream, HSTRING contentType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStreamReference(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&stream), *reinterpret_cast<hstring const*>(&contentType));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaBindingEventArgs2> : produce_base<D, Windows::Media::Core::IMediaBindingEventArgs2>
{
    HRESULT __stdcall SetAdaptiveMediaSource(void* mediaSource) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAdaptiveMediaSource(*reinterpret_cast<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const*>(&mediaSource));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetStorageFile(void* file) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStorageFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaBindingEventArgs3> : produce_base<D, Windows::Media::Core::IMediaBindingEventArgs3>
{
    HRESULT __stdcall SetDownloadOperation(void* downloadOperation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDownloadOperation(*reinterpret_cast<Windows::Networking::BackgroundTransfer::DownloadOperation const*>(&downloadOperation));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaCue> : produce_base<D, Windows::Media::Core::IMediaCue>
{
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

    HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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

    HRESULT __stdcall put_Id(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaCueEventArgs> : produce_base<D, Windows::Media::Core::IMediaCueEventArgs>
{
    HRESULT __stdcall get_Cue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::IMediaCue>(this->shim().Cue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSource> : produce_base<D, Windows::Media::Core::IMediaSource>
{};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSource2> : produce_base<D, Windows::Media::Core::IMediaSource2>
{
    HRESULT __stdcall add_OpenOperationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().OpenOperationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OpenOperationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenOperationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().CustomProperties());
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

    HRESULT __stdcall get_IsOpen(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOpen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExternalTimedTextSources(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedTextSource>>(this->shim().ExternalTimedTextSources());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExternalTimedMetadataTracks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedMetadataTrack>>(this->shim().ExternalTimedMetadataTracks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSource3> : produce_base<D, Windows::Media::Core::IMediaSource3>
{
    HRESULT __stdcall add_StateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> const*>(&handler)));
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

    HRESULT __stdcall get_State(Windows::Media::Core::MediaSourceState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSourceState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSource4> : produce_base<D, Windows::Media::Core::IMediaSource4>
{
    HRESULT __stdcall get_AdaptiveMediaSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource>(this->shim().AdaptiveMediaSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaStreamSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().MediaStreamSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MseStreamSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MseStreamSource>(this->shim().MseStreamSource());
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

    HRESULT __stdcall OpenAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().OpenAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSource5> : produce_base<D, Windows::Media::Core::IMediaSource5>
{
    HRESULT __stdcall get_DownloadOperation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::BackgroundTransfer::DownloadOperation>(this->shim().DownloadOperation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceAppServiceConnection> : produce_base<D, Windows::Media::Core::IMediaSourceAppServiceConnection>
{
    HRESULT __stdcall add_InitializeMediaStreamSourceRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().InitializeMediaStreamSourceRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSourceAppServiceConnection, Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_InitializeMediaStreamSourceRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitializeMediaStreamSourceRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceAppServiceConnectionFactory> : produce_base<D, Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>
{
    HRESULT __stdcall Create(void* appServiceConnection, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSourceAppServiceConnection>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::AppService::AppServiceConnection const*>(&appServiceConnection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceError> : produce_base<D, Windows::Media::Core::IMediaSourceError>
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
struct produce<D, Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs> : produce_base<D, Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>
{
    HRESULT __stdcall get_Error(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSourceError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceStateChangedEventArgs> : produce_base<D, Windows::Media::Core::IMediaSourceStateChangedEventArgs>
{
    HRESULT __stdcall get_OldState(Windows::Media::Core::MediaSourceState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSourceState>(this->shim().OldState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewState(Windows::Media::Core::MediaSourceState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSourceState>(this->shim().NewState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceStatics> : produce_base<D, Windows::Media::Core::IMediaSourceStatics>
{
    HRESULT __stdcall CreateFromAdaptiveMediaSource(void* mediaSource, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromAdaptiveMediaSource(*reinterpret_cast<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const*>(&mediaSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromMediaStreamSource(void* mediaSource, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromMediaStreamSource(*reinterpret_cast<Windows::Media::Core::MediaStreamSource const*>(&mediaSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromMseStreamSource(void* mediaSource, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromMseStreamSource(*reinterpret_cast<Windows::Media::Core::MseStreamSource const*>(&mediaSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromIMediaSource(void* mediaSource, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromIMediaSource(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&mediaSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStorageFile(void* file, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromStorageFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStream(void* stream, HSTRING contentType, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromStream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<hstring const*>(&contentType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStreamReference(void* stream, HSTRING contentType, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromStreamReference(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&stream), *reinterpret_cast<hstring const*>(&contentType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUri(void* uri, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceStatics2> : produce_base<D, Windows::Media::Core::IMediaSourceStatics2>
{
    HRESULT __stdcall CreateFromMediaBinder(void* binder, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromMediaBinder(*reinterpret_cast<Windows::Media::Core::MediaBinder const*>(&binder)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceStatics3> : produce_base<D, Windows::Media::Core::IMediaSourceStatics3>
{
    HRESULT __stdcall CreateFromMediaFrameSource(void* frameSource, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromMediaFrameSource(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameSource const*>(&frameSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaSourceStatics4> : produce_base<D, Windows::Media::Core::IMediaSourceStatics4>
{
    HRESULT __stdcall CreateFromDownloadOperation(void* downloadOperation, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaSource>(this->shim().CreateFromDownloadOperation(*reinterpret_cast<Windows::Networking::BackgroundTransfer::DownloadOperation const*>(&downloadOperation)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamDescriptor> : produce_base<D, Windows::Media::Core::IMediaStreamDescriptor>
{
    HRESULT __stdcall get_IsSelected(bool* selected) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *selected = detach_from<bool>(this->shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamDescriptor2> : produce_base<D, Windows::Media::Core::IMediaStreamDescriptor2>
{
    HRESULT __stdcall put_Label(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Label(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSample> : produce_base<D, Windows::Media::Core::IMediaStreamSample>
{
    HRESULT __stdcall add_Processed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Processed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Processed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Processed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Buffer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::Buffer>(this->shim().Buffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Timestamp());
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
            *value = detach_from<Windows::Media::Core::MediaStreamSamplePropertySet>(this->shim().ExtendedProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Protection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSampleProtectionProperties>(this->shim().Protection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DecodeTimestamp(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecodeTimestamp(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DecodeTimestamp(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DecodeTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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

    HRESULT __stdcall put_KeyFrame(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyFrame(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyFrame(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().KeyFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Discontinuous(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Discontinuous(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Discontinuous(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Discontinuous());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSampleProtectionProperties> : produce_base<D, Windows::Media::Core::IMediaStreamSampleProtectionProperties>
{
    HRESULT __stdcall SetKeyIdentifier(uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetKeyIdentifier(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetKeyIdentifier(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            this->shim().GetKeyIdentifier(detach_abi<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetInitializationVector(uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInitializationVector(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetInitializationVector(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            this->shim().GetInitializationVector(detach_abi<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetSubSampleMapping(uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSubSampleMapping(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSubSampleMapping(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            this->shim().GetSubSampleMapping(detach_abi<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSampleStatics> : produce_base<D, Windows::Media::Core::IMediaStreamSampleStatics>
{
    HRESULT __stdcall CreateFromBuffer(void* buffer, Windows::Foundation::TimeSpan timestamp, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSample>(this->shim().CreateFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timestamp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStreamAsync(void* stream, uint32_t count, Windows::Foundation::TimeSpan timestamp, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample>>(this->shim().CreateFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream), count, *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&timestamp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSource> : produce_base<D, Windows::Media::Core::IMediaStreamSource>
{
    HRESULT __stdcall add_Closed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Starting(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Starting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Starting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Starting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Paused(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Paused(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Paused(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Paused(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SampleRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SampleRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SampleRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SampleRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SwitchStreamsRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SwitchStreamsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SwitchStreamsRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SwitchStreamsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NotifyError(Windows::Media::Core::MediaStreamSourceErrorStatus errorStatus) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyError(*reinterpret_cast<Windows::Media::Core::MediaStreamSourceErrorStatus const*>(&errorStatus));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddStreamDescriptor(void* descriptor) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddStreamDescriptor(*reinterpret_cast<Windows::Media::Core::IMediaStreamDescriptor const*>(&descriptor));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MediaProtectionManager(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaProtectionManager(*reinterpret_cast<Windows::Media::Protection::MediaProtectionManager const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaProtectionManager(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Protection::MediaProtectionManager>(this->shim().MediaProtectionManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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

    HRESULT __stdcall put_CanSeek(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanSeek(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanSeek(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanSeek());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BufferTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BufferTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BufferTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().BufferTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetBufferedRange(Windows::Foundation::TimeSpan startOffset, Windows::Foundation::TimeSpan endOffset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBufferedRange(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startOffset), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&endOffset));
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
            *value = detach_from<Windows::Storage::FileProperties::MusicProperties>(this->shim().MusicProperties());
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
            *value = detach_from<Windows::Storage::FileProperties::VideoProperties>(this->shim().VideoProperties());
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

    HRESULT __stdcall AddProtectionKey(void* streamDescriptor, uint32_t __keyIdentifierSize, uint8_t* keyIdentifier, uint32_t __licenseDataSize, uint8_t* licenseData) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddProtectionKey(*reinterpret_cast<Windows::Media::Core::IMediaStreamDescriptor const*>(&streamDescriptor), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(keyIdentifier), reinterpret_cast<uint8_t const *>(keyIdentifier) + __keyIdentifierSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(licenseData), reinterpret_cast<uint8_t const *>(licenseData) + __licenseDataSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSource2> : produce_base<D, Windows::Media::Core::IMediaStreamSource2>
{
    HRESULT __stdcall add_SampleRendered(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SampleRendered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SampleRendered(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SampleRendered(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSource3> : produce_base<D, Windows::Media::Core::IMediaStreamSource3>
{
    HRESULT __stdcall put_MaxSupportedPlaybackRate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxSupportedPlaybackRate(*reinterpret_cast<Windows::Foundation::IReference<double> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSupportedPlaybackRate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<double>>(this->shim().MaxSupportedPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSource4> : produce_base<D, Windows::Media::Core::IMediaStreamSource4>
{
    HRESULT __stdcall put_IsLive(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLive(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceClosedEventArgs> : produce_base<D, Windows::Media::Core::IMediaStreamSourceClosedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSourceClosedRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceClosedRequest> : produce_base<D, Windows::Media::Core::IMediaStreamSourceClosedRequest>
{
    HRESULT __stdcall get_Reason(Windows::Media::Core::MediaStreamSourceClosedReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSourceClosedReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceFactory> : produce_base<D, Windows::Media::Core::IMediaStreamSourceFactory>
{
    HRESULT __stdcall CreateFromDescriptor(void* descriptor, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().CreateFromDescriptor(*reinterpret_cast<Windows::Media::Core::IMediaStreamDescriptor const*>(&descriptor)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDescriptors(void* descriptor, void* descriptor2, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().CreateFromDescriptors(*reinterpret_cast<Windows::Media::Core::IMediaStreamDescriptor const*>(&descriptor), *reinterpret_cast<Windows::Media::Core::IMediaStreamDescriptor const*>(&descriptor2)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs> : produce_base<D, Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>
{
    HRESULT __stdcall get_SampleLag(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().SampleLag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceSampleRequest> : produce_base<D, Windows::Media::Core::IMediaStreamSourceSampleRequest>
{
    HRESULT __stdcall get_StreamDescriptor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::IMediaStreamDescriptor>(this->shim().StreamDescriptor());
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
            *deferral = detach_from<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Sample(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sample(*reinterpret_cast<Windows::Media::Core::MediaStreamSample const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sample(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSample>(this->shim().Sample());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReportSampleProgress(uint32_t progress) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportSampleProgress(progress);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral> : produce_base<D, Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>
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
struct produce<D, Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs> : produce_base<D, Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSourceSampleRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceStartingEventArgs> : produce_base<D, Windows::Media::Core::IMediaStreamSourceStartingEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSourceStartingRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceStartingRequest> : produce_base<D, Windows::Media::Core::IMediaStreamSourceStartingRequest>
{
    HRESULT __stdcall get_StartPosition(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().StartPosition());
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
            *deferral = detach_from<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetActualStartPosition(Windows::Foundation::TimeSpan position) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActualStartPosition(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&position));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral> : produce_base<D, Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>
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
struct produce<D, Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest> : produce_base<D, Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>
{
    HRESULT __stdcall get_OldStreamDescriptor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::IMediaStreamDescriptor>(this->shim().OldStreamDescriptor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewStreamDescriptor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::IMediaStreamDescriptor>(this->shim().NewStreamDescriptor());
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
            *deferral = detach_from<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral> : produce_base<D, Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>
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
struct produce<D, Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs> : produce_base<D, Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMediaTrack> : produce_base<D, Windows::Media::Core::IMediaTrack>
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

    HRESULT __stdcall get_Language(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrackKind(Windows::Media::Core::MediaTrackKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaTrackKind>(this->shim().TrackKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Label(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Label(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMseSourceBuffer> : produce_base<D, Windows::Media::Core::IMseSourceBuffer>
{
    HRESULT __stdcall add_UpdateStarting(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UpdateStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UpdateStarting(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateStarting(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UpdateEnded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UpdateEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UpdateEnded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateEnded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ErrorOccurred(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ErrorOccurred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ErrorOccurred(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorOccurred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Aborted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Aborted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Aborted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Aborted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Mode(Windows::Media::Core::MseAppendMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MseAppendMode>(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::Media::Core::MseAppendMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::Media::Core::MseAppendMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsUpdating(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUpdating());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Buffered(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseTimeRange>>(this->shim().Buffered());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimestampOffset(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TimestampOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TimestampOffset(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimestampOffset(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppendWindowStart(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().AppendWindowStart());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppendWindowStart(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendWindowStart(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppendWindowEnd(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().AppendWindowEnd());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppendWindowEnd(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendWindowEnd(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AppendBuffer(void* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AppendStream(void* stream) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendStream(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AppendStreamMaxSize(void* stream, uint64_t maxSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendStream(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&stream), maxSize);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Abort() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Abort();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Remove(Windows::Foundation::TimeSpan start, void* end) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&start), *reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&end));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMseSourceBufferList> : produce_base<D, Windows::Media::Core::IMseSourceBufferList>
{
    HRESULT __stdcall add_SourceBufferAdded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceBufferAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceBufferAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceBufferAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceBufferRemoved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceBufferRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceBufferRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceBufferRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Buffers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseSourceBuffer>>(this->shim().Buffers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMseStreamSource> : produce_base<D, Windows::Media::Core::IMseStreamSource>
{
    HRESULT __stdcall add_Opened(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Opened(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Opened(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opened(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Ended(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Ended(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const*>(&handler)));
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

    HRESULT __stdcall add_Closed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SourceBuffers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MseSourceBufferList>(this->shim().SourceBuffers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveSourceBuffers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MseSourceBufferList>(this->shim().ActiveSourceBuffers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReadyState(Windows::Media::Core::MseReadyState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MseReadyState>(this->shim().ReadyState());
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

    HRESULT __stdcall AddSourceBuffer(HSTRING mimeType, void** buffer) noexcept final
    {
        try
        {
            *buffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *buffer = detach_from<Windows::Media::Core::MseSourceBuffer>(this->shim().AddSourceBuffer(*reinterpret_cast<hstring const*>(&mimeType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveSourceBuffer(void* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveSourceBuffer(*reinterpret_cast<Windows::Media::Core::MseSourceBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EndOfStream(Windows::Media::Core::MseEndOfStreamStatus status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndOfStream(*reinterpret_cast<Windows::Media::Core::MseEndOfStreamStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMseStreamSource2> : produce_base<D, Windows::Media::Core::IMseStreamSource2>
{
    HRESULT __stdcall get_LiveSeekableRange(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Media::Core::MseTimeRange>>(this->shim().LiveSeekableRange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LiveSeekableRange(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LiveSeekableRange(*reinterpret_cast<Windows::Foundation::IReference<Windows::Media::Core::MseTimeRange> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IMseStreamSourceStatics> : produce_base<D, Windows::Media::Core::IMseStreamSourceStatics>
{
    HRESULT __stdcall IsContentTypeSupported(HSTRING contentType, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsContentTypeSupported(*reinterpret_cast<hstring const*>(&contentType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ISceneAnalysisEffect> : produce_base<D, Windows::Media::Core::ISceneAnalysisEffect>
{
    HRESULT __stdcall get_HighDynamicRangeAnalyzer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::HighDynamicRangeControl>(this->shim().HighDynamicRangeAnalyzer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredAnalysisInterval(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredAnalysisInterval(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredAnalysisInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DesiredAnalysisInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SceneAnalyzed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().SceneAnalyzed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SceneAnalyzed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SceneAnalyzed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ISceneAnalysisEffectFrame> : produce_base<D, Windows::Media::Core::ISceneAnalysisEffectFrame>
{
    HRESULT __stdcall get_FrameControlValues(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::CapturedFrameControlValues>(this->shim().FrameControlValues());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HighDynamicRange(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::HighDynamicRangeOutput>(this->shim().HighDynamicRange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ISceneAnalysisEffectFrame2> : produce_base<D, Windows::Media::Core::ISceneAnalysisEffectFrame2>
{
    HRESULT __stdcall get_AnalysisRecommendation(Windows::Media::Core::SceneAnalysisRecommendation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::SceneAnalysisRecommendation>(this->shim().AnalysisRecommendation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ISceneAnalyzedEventArgs> : produce_base<D, Windows::Media::Core::ISceneAnalyzedEventArgs>
{
    HRESULT __stdcall get_ResultFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::SceneAnalysisEffectFrame>(this->shim().ResultFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ISingleSelectMediaTrackList> : produce_base<D, Windows::Media::Core::ISingleSelectMediaTrackList>
{
    HRESULT __stdcall add_SelectedIndexChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SelectedIndexChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectedIndexChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedIndexChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedIndex(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedIndex(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SelectedIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ISpeechCue> : produce_base<D, Windows::Media::Core::ISpeechCue>
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

    HRESULT __stdcall put_Text(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartPositionInInput(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<int32_t>>(this->shim().StartPositionInInput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartPositionInInput(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPositionInInput(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndPositionInInput(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<int32_t>>(this->shim().EndPositionInInput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndPositionInInput(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPositionInInput(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedMetadataStreamDescriptor> : produce_base<D, Windows::Media::Core::ITimedMetadataStreamDescriptor>
{
    HRESULT __stdcall get_EncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::TimedMetadataEncodingProperties>(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Copy(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::TimedMetadataStreamDescriptor>(this->shim().Copy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedMetadataStreamDescriptorFactory> : produce_base<D, Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>
{
    HRESULT __stdcall Create(void* encodingProperties, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::TimedMetadataStreamDescriptor>(this->shim().Create(*reinterpret_cast<Windows::Media::MediaProperties::TimedMetadataEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedMetadataTrack> : produce_base<D, Windows::Media::Core::ITimedMetadataTrack>
{
    HRESULT __stdcall add_CueEntered(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CueEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CueEntered(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CueEntered(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CueExited(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CueExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CueExited(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CueExited(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_TrackFailed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().TrackFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TrackFailed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrackFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Cues(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue>>(this->shim().Cues());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveCues(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue>>(this->shim().ActiveCues());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimedMetadataKind(Windows::Media::Core::TimedMetadataKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedMetadataKind>(this->shim().TimedMetadataKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DispatchType(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DispatchType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddCue(void* cue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddCue(*reinterpret_cast<Windows::Media::Core::IMediaCue const*>(&cue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveCue(void* cue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveCue(*reinterpret_cast<Windows::Media::Core::IMediaCue const*>(&cue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedMetadataTrack2> : produce_base<D, Windows::Media::Core::ITimedMetadataTrack2>
{
    HRESULT __stdcall get_PlaybackItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().PlaybackItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedMetadataTrackError> : produce_base<D, Windows::Media::Core::ITimedMetadataTrackError>
{
    HRESULT __stdcall get_ErrorCode(Windows::Media::Core::TimedMetadataTrackErrorCode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedMetadataTrackErrorCode>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
struct produce<D, Windows::Media::Core::ITimedMetadataTrackFactory> : produce_base<D, Windows::Media::Core::ITimedMetadataTrackFactory>
{
    HRESULT __stdcall Create(HSTRING id, HSTRING language, Windows::Media::Core::TimedMetadataKind kind, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedMetadataTrack>(this->shim().Create(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&language), *reinterpret_cast<Windows::Media::Core::TimedMetadataKind const*>(&kind)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedMetadataTrackFailedEventArgs> : produce_base<D, Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>
{
    HRESULT __stdcall get_Error(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedMetadataTrackError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedMetadataTrackProvider> : produce_base<D, Windows::Media::Core::ITimedMetadataTrackProvider>
{
    HRESULT __stdcall get_TimedMetadataTracks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>>(this->shim().TimedMetadataTracks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextCue> : produce_base<D, Windows::Media::Core::ITimedTextCue>
{
    HRESULT __stdcall get_CueRegion(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextRegion>(this->shim().CueRegion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CueRegion(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CueRegion(*reinterpret_cast<Windows::Media::Core::TimedTextRegion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CueStyle(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextStyle>(this->shim().CueStyle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CueStyle(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CueStyle(*reinterpret_cast<Windows::Media::Core::TimedTextStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Lines(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextLine>>(this->shim().Lines());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextLine> : produce_base<D, Windows::Media::Core::ITimedTextLine>
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

    HRESULT __stdcall put_Text(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Subformats(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextSubformat>>(this->shim().Subformats());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextRegion> : produce_base<D, Windows::Media::Core::ITimedTextRegion>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(struct struct_Windows_Media_Core_TimedTextPoint* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextPoint>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(struct struct_Windows_Media_Core_TimedTextPoint value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Media::Core::TimedTextPoint const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Extent(struct struct_Windows_Media_Core_TimedTextSize* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextSize>(this->shim().Extent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Extent(struct struct_Windows_Media_Core_TimedTextSize value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Extent(*reinterpret_cast<Windows::Media::Core::TimedTextSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Background(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Background());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Background(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Background(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WritingMode(Windows::Media::Core::TimedTextWritingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextWritingMode>(this->shim().WritingMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_WritingMode(Windows::Media::Core::TimedTextWritingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WritingMode(*reinterpret_cast<Windows::Media::Core::TimedTextWritingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextDisplayAlignment>(this->shim().DisplayAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayAlignment(*reinterpret_cast<Windows::Media::Core::TimedTextDisplayAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextDouble>(this->shim().LineHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineHeight(*reinterpret_cast<Windows::Media::Core::TimedTextDouble const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverflowClipped(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOverflowClipped());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsOverflowClipped(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverflowClipped(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Padding(struct struct_Windows_Media_Core_TimedTextPadding* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextPadding>(this->shim().Padding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Padding(struct struct_Windows_Media_Core_TimedTextPadding value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Padding(*reinterpret_cast<Windows::Media::Core::TimedTextPadding const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TextWrapping(Windows::Media::Core::TimedTextWrapping* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextWrapping>(this->shim().TextWrapping());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TextWrapping(Windows::Media::Core::TimedTextWrapping value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextWrapping(*reinterpret_cast<Windows::Media::Core::TimedTextWrapping const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ZIndex(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ZIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ZIndex(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ZIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollMode(Windows::Media::Core::TimedTextScrollMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextScrollMode>(this->shim().ScrollMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScrollMode(Windows::Media::Core::TimedTextScrollMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollMode(*reinterpret_cast<Windows::Media::Core::TimedTextScrollMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextSource> : produce_base<D, Windows::Media::Core::ITimedTextSource>
{
    HRESULT __stdcall add_Resolved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Resolved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Resolved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resolved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextSourceResolveResultEventArgs> : produce_base<D, Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>
{
    HRESULT __stdcall get_Error(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedMetadataTrackError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Tracks(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack>>(this->shim().Tracks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextSourceStatics> : produce_base<D, Windows::Media::Core::ITimedTextSourceStatics>
{
    HRESULT __stdcall CreateFromStream(void* stream, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromStream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUri(void* uri, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStreamWithLanguage(void* stream, HSTRING defaultLanguage, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromStream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<hstring const*>(&defaultLanguage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUriWithLanguage(void* uri, HSTRING defaultLanguage, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<hstring const*>(&defaultLanguage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextSourceStatics2> : produce_base<D, Windows::Media::Core::ITimedTextSourceStatics2>
{
    HRESULT __stdcall CreateFromStreamWithIndex(void* stream, void* indexStream, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromStreamWithIndex(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&indexStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUriWithIndex(void* uri, void* indexUri, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromUriWithIndex(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Uri const*>(&indexUri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStreamWithIndexAndLanguage(void* stream, void* indexStream, HSTRING defaultLanguage, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromStreamWithIndex(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&indexStream), *reinterpret_cast<hstring const*>(&defaultLanguage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromUriWithIndexAndLanguage(void* uri, void* indexUri, HSTRING defaultLanguage, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::TimedTextSource>(this->shim().CreateFromUriWithIndex(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Uri const*>(&indexUri), *reinterpret_cast<hstring const*>(&defaultLanguage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextStyle> : produce_base<D, Windows::Media::Core::ITimedTextStyle>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FontFamily(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FontFamily());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FontFamily(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontFamily(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FontSize(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextDouble>(this->shim().FontSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FontSize(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontSize(*reinterpret_cast<Windows::Media::Core::TimedTextDouble const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FontWeight(Windows::Media::Core::TimedTextWeight* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextWeight>(this->shim().FontWeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FontWeight(Windows::Media::Core::TimedTextWeight value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontWeight(*reinterpret_cast<Windows::Media::Core::TimedTextWeight const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Foreground(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Foreground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Foreground(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Foreground(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Background(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Background());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Background(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Background(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsBackgroundAlwaysShown(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBackgroundAlwaysShown());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsBackgroundAlwaysShown(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsBackgroundAlwaysShown(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirection(Windows::Media::Core::TimedTextFlowDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextFlowDirection>(this->shim().FlowDirection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FlowDirection(Windows::Media::Core::TimedTextFlowDirection value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlowDirection(*reinterpret_cast<Windows::Media::Core::TimedTextFlowDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LineAlignment(Windows::Media::Core::TimedTextLineAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextLineAlignment>(this->shim().LineAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LineAlignment(Windows::Media::Core::TimedTextLineAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineAlignment(*reinterpret_cast<Windows::Media::Core::TimedTextLineAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutlineColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().OutlineColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutlineColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutlineColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextDouble>(this->shim().OutlineThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutlineThickness(*reinterpret_cast<Windows::Media::Core::TimedTextDouble const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextDouble>(this->shim().OutlineRadius());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutlineRadius(*reinterpret_cast<Windows::Media::Core::TimedTextDouble const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextStyle2> : produce_base<D, Windows::Media::Core::ITimedTextStyle2>
{
    HRESULT __stdcall get_FontStyle(Windows::Media::Core::TimedTextFontStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextFontStyle>(this->shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FontStyle(Windows::Media::Core::TimedTextFontStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontStyle(*reinterpret_cast<Windows::Media::Core::TimedTextFontStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsUnderlineEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUnderlineEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsUnderlineEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsUnderlineEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLineThroughEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLineThroughEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsLineThroughEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLineThroughEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverlineEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOverlineEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsOverlineEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverlineEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::ITimedTextSubformat> : produce_base<D, Windows::Media::Core::ITimedTextSubformat>
{
    HRESULT __stdcall get_StartIndex(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().StartIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartIndex(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Length(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Length(int32_t value) noexcept final
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

    HRESULT __stdcall get_SubformatStyle(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::TimedTextStyle>(this->shim().SubformatStyle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SubformatStyle(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubformatStyle(*reinterpret_cast<Windows::Media::Core::TimedTextStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IVideoStabilizationEffect> : produce_base<D, Windows::Media::Core::IVideoStabilizationEffect>
{
    HRESULT __stdcall put_Enabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Enabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_EnabledChanged(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().EnabledChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_EnabledChanged(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnabledChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRecommendedStreamConfiguration(void* controller, void* desiredProperties, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Capture::VideoStreamConfiguration>(this->shim().GetRecommendedStreamConfiguration(*reinterpret_cast<Windows::Media::Devices::VideoDeviceController const*>(&controller), *reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingProperties const*>(&desiredProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs> : produce_base<D, Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IVideoStreamDescriptor> : produce_base<D, Windows::Media::Core::IVideoStreamDescriptor>
{
    HRESULT __stdcall get_EncodingProperties(void** encodingProperties) noexcept final
    {
        try
        {
            *encodingProperties = nullptr;
            typename D::abi_guard guard(this->shim());
            *encodingProperties = detach_from<Windows::Media::MediaProperties::VideoEncodingProperties>(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IVideoStreamDescriptor2> : produce_base<D, Windows::Media::Core::IVideoStreamDescriptor2>
{
    HRESULT __stdcall Copy(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::VideoStreamDescriptor>(this->shim().Copy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IVideoStreamDescriptorFactory> : produce_base<D, Windows::Media::Core::IVideoStreamDescriptorFactory>
{
    HRESULT __stdcall Create(void* encodingProperties, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Core::VideoStreamDescriptor>(this->shim().Create(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IVideoTrack> : produce_base<D, Windows::Media::Core::IVideoTrack>
{
    HRESULT __stdcall add_OpenFailed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().OpenFailed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OpenFailed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OpenFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetEncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::VideoEncodingProperties>(this->shim().GetEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::MediaPlaybackItem>(this->shim().PlaybackItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::VideoTrackSupportInfo>(this->shim().SupportInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Core::IVideoTrackOpenFailedEventArgs> : produce_base<D, Windows::Media::Core::IVideoTrackOpenFailedEventArgs>
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
struct produce<D, Windows::Media::Core::IVideoTrackSupportInfo> : produce_base<D, Windows::Media::Core::IVideoTrackSupportInfo>
{
    HRESULT __stdcall get_DecoderStatus(Windows::Media::Core::MediaDecoderStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaDecoderStatus>(this->shim().DecoderStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaSourceStatus(Windows::Media::Core::MediaSourceStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSourceStatus>(this->shim().MediaSourceStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

inline AudioStreamDescriptor::AudioStreamDescriptor(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) :
    AudioStreamDescriptor(get_activation_factory<AudioStreamDescriptor, Windows::Media::Core::IAudioStreamDescriptorFactory>().Create(encodingProperties))
{}

inline ChapterCue::ChapterCue() :
    ChapterCue(get_activation_factory<ChapterCue>().ActivateInstance<ChapterCue>())
{}

inline CodecQuery::CodecQuery() :
    CodecQuery(get_activation_factory<CodecQuery>().ActivateInstance<CodecQuery>())
{}

inline hstring CodecSubtypes::VideoFormatDV25()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatDV25();
}

inline hstring CodecSubtypes::VideoFormatDV50()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatDV50();
}

inline hstring CodecSubtypes::VideoFormatDvc()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatDvc();
}

inline hstring CodecSubtypes::VideoFormatDvh1()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatDvh1();
}

inline hstring CodecSubtypes::VideoFormatDvhD()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatDvhD();
}

inline hstring CodecSubtypes::VideoFormatDvsd()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatDvsd();
}

inline hstring CodecSubtypes::VideoFormatDvsl()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatDvsl();
}

inline hstring CodecSubtypes::VideoFormatH263()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatH263();
}

inline hstring CodecSubtypes::VideoFormatH264()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatH264();
}

inline hstring CodecSubtypes::VideoFormatH265()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatH265();
}

inline hstring CodecSubtypes::VideoFormatH264ES()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatH264ES();
}

inline hstring CodecSubtypes::VideoFormatHevc()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatHevc();
}

inline hstring CodecSubtypes::VideoFormatHevcES()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatHevcES();
}

inline hstring CodecSubtypes::VideoFormatM4S2()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatM4S2();
}

inline hstring CodecSubtypes::VideoFormatMjpg()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMjpg();
}

inline hstring CodecSubtypes::VideoFormatMP43()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMP43();
}

inline hstring CodecSubtypes::VideoFormatMP4S()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMP4S();
}

inline hstring CodecSubtypes::VideoFormatMP4V()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMP4V();
}

inline hstring CodecSubtypes::VideoFormatMpeg2()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMpeg2();
}

inline hstring CodecSubtypes::VideoFormatVP80()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatVP80();
}

inline hstring CodecSubtypes::VideoFormatVP90()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatVP90();
}

inline hstring CodecSubtypes::VideoFormatMpg1()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMpg1();
}

inline hstring CodecSubtypes::VideoFormatMss1()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMss1();
}

inline hstring CodecSubtypes::VideoFormatMss2()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatMss2();
}

inline hstring CodecSubtypes::VideoFormatWmv1()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatWmv1();
}

inline hstring CodecSubtypes::VideoFormatWmv2()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatWmv2();
}

inline hstring CodecSubtypes::VideoFormatWmv3()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatWmv3();
}

inline hstring CodecSubtypes::VideoFormatWvc1()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormatWvc1();
}

inline hstring CodecSubtypes::VideoFormat420O()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().VideoFormat420O();
}

inline hstring CodecSubtypes::AudioFormatAac()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatAac();
}

inline hstring CodecSubtypes::AudioFormatAdts()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatAdts();
}

inline hstring CodecSubtypes::AudioFormatAlac()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatAlac();
}

inline hstring CodecSubtypes::AudioFormatAmrNB()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatAmrNB();
}

inline hstring CodecSubtypes::AudioFormatAmrWB()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatAmrWB();
}

inline hstring CodecSubtypes::AudioFormatAmrWP()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatAmrWP();
}

inline hstring CodecSubtypes::AudioFormatDolbyAC3()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatDolbyAC3();
}

inline hstring CodecSubtypes::AudioFormatDolbyAC3Spdif()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatDolbyAC3Spdif();
}

inline hstring CodecSubtypes::AudioFormatDolbyDDPlus()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatDolbyDDPlus();
}

inline hstring CodecSubtypes::AudioFormatDrm()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatDrm();
}

inline hstring CodecSubtypes::AudioFormatDts()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatDts();
}

inline hstring CodecSubtypes::AudioFormatFlac()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatFlac();
}

inline hstring CodecSubtypes::AudioFormatFloat()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatFloat();
}

inline hstring CodecSubtypes::AudioFormatMP3()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatMP3();
}

inline hstring CodecSubtypes::AudioFormatMPeg()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatMPeg();
}

inline hstring CodecSubtypes::AudioFormatMsp1()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatMsp1();
}

inline hstring CodecSubtypes::AudioFormatOpus()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatOpus();
}

inline hstring CodecSubtypes::AudioFormatPcm()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatPcm();
}

inline hstring CodecSubtypes::AudioFormatWmaSpdif()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatWmaSpdif();
}

inline hstring CodecSubtypes::AudioFormatWMAudioLossless()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatWMAudioLossless();
}

inline hstring CodecSubtypes::AudioFormatWMAudioV8()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatWMAudioV8();
}

inline hstring CodecSubtypes::AudioFormatWMAudioV9()
{
    return get_activation_factory<CodecSubtypes, Windows::Media::Core::ICodecSubtypesStatics>().AudioFormatWMAudioV9();
}

inline DataCue::DataCue() :
    DataCue(get_activation_factory<DataCue>().ActivateInstance<DataCue>())
{}

inline FaceDetectionEffectDefinition::FaceDetectionEffectDefinition() :
    FaceDetectionEffectDefinition(get_activation_factory<FaceDetectionEffectDefinition>().ActivateInstance<FaceDetectionEffectDefinition>())
{}

inline ImageCue::ImageCue() :
    ImageCue(get_activation_factory<ImageCue>().ActivateInstance<ImageCue>())
{}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> LowLightFusion::SupportedBitmapPixelFormats()
{
    return get_activation_factory<LowLightFusion, Windows::Media::Core::ILowLightFusionStatics>().SupportedBitmapPixelFormats();
}

inline int32_t LowLightFusion::MaxSupportedFrameCount()
{
    return get_activation_factory<LowLightFusion, Windows::Media::Core::ILowLightFusionStatics>().MaxSupportedFrameCount();
}

inline Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Core::LowLightFusionResult, double> LowLightFusion::FuseAsync(param::async_iterable<Windows::Graphics::Imaging::SoftwareBitmap> const& frameSet)
{
    return get_activation_factory<LowLightFusion, Windows::Media::Core::ILowLightFusionStatics>().FuseAsync(frameSet);
}

inline MediaBinder::MediaBinder() :
    MediaBinder(get_activation_factory<MediaBinder>().ActivateInstance<MediaBinder>())
{}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromAdaptiveMediaSource(mediaSource);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromMediaStreamSource(Windows::Media::Core::MediaStreamSource const& mediaSource)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromMediaStreamSource(mediaSource);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromMseStreamSource(Windows::Media::Core::MseStreamSource const& mediaSource)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromMseStreamSource(mediaSource);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromIMediaSource(Windows::Media::Core::IMediaSource const& mediaSource)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromIMediaSource(mediaSource);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromStorageFile(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromStorageFile(file);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromStream(stream, contentType);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromStreamReference(stream, contentType);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromUri(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics>().CreateFromUri(uri);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromMediaBinder(Windows::Media::Core::MediaBinder const& binder)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics2>().CreateFromMediaBinder(binder);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromMediaFrameSource(Windows::Media::Capture::Frames::MediaFrameSource const& frameSource)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics3>().CreateFromMediaFrameSource(frameSource);
}

inline Windows::Media::Core::MediaSource MediaSource::CreateFromDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation)
{
    return get_activation_factory<MediaSource, Windows::Media::Core::IMediaSourceStatics4>().CreateFromDownloadOperation(downloadOperation);
}

inline MediaSourceAppServiceConnection::MediaSourceAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) :
    MediaSourceAppServiceConnection(get_activation_factory<MediaSourceAppServiceConnection, Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>().Create(appServiceConnection))
{}

inline Windows::Media::Core::MediaStreamSample MediaStreamSample::CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Foundation::TimeSpan const& timestamp)
{
    return get_activation_factory<MediaStreamSample, Windows::Media::Core::IMediaStreamSampleStatics>().CreateFromBuffer(buffer, timestamp);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> MediaStreamSample::CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, uint32_t count, Windows::Foundation::TimeSpan const& timestamp)
{
    return get_activation_factory<MediaStreamSample, Windows::Media::Core::IMediaStreamSampleStatics>().CreateFromStreamAsync(stream, count, timestamp);
}

inline MediaStreamSource::MediaStreamSource(Windows::Media::Core::IMediaStreamDescriptor const& descriptor) :
    MediaStreamSource(get_activation_factory<MediaStreamSource, Windows::Media::Core::IMediaStreamSourceFactory>().CreateFromDescriptor(descriptor))
{}

inline MediaStreamSource::MediaStreamSource(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Core::IMediaStreamDescriptor const& descriptor2) :
    MediaStreamSource(get_activation_factory<MediaStreamSource, Windows::Media::Core::IMediaStreamSourceFactory>().CreateFromDescriptors(descriptor, descriptor2))
{}

inline MseStreamSource::MseStreamSource() :
    MseStreamSource(get_activation_factory<MseStreamSource>().ActivateInstance<MseStreamSource>())
{}

inline bool MseStreamSource::IsContentTypeSupported(param::hstring const& contentType)
{
    return get_activation_factory<MseStreamSource, Windows::Media::Core::IMseStreamSourceStatics>().IsContentTypeSupported(contentType);
}

inline SceneAnalysisEffectDefinition::SceneAnalysisEffectDefinition() :
    SceneAnalysisEffectDefinition(get_activation_factory<SceneAnalysisEffectDefinition>().ActivateInstance<SceneAnalysisEffectDefinition>())
{}

inline SpeechCue::SpeechCue() :
    SpeechCue(get_activation_factory<SpeechCue>().ActivateInstance<SpeechCue>())
{}

inline TimedMetadataStreamDescriptor::TimedMetadataStreamDescriptor(Windows::Media::MediaProperties::TimedMetadataEncodingProperties const& encodingProperties) :
    TimedMetadataStreamDescriptor(get_activation_factory<TimedMetadataStreamDescriptor, Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>().Create(encodingProperties))
{}

inline TimedMetadataTrack::TimedMetadataTrack(param::hstring const& id, param::hstring const& language, Windows::Media::Core::TimedMetadataKind const& kind) :
    TimedMetadataTrack(get_activation_factory<TimedMetadataTrack, Windows::Media::Core::ITimedMetadataTrackFactory>().Create(id, language, kind))
{}

inline TimedTextCue::TimedTextCue() :
    TimedTextCue(get_activation_factory<TimedTextCue>().ActivateInstance<TimedTextCue>())
{}

inline TimedTextLine::TimedTextLine() :
    TimedTextLine(get_activation_factory<TimedTextLine>().ActivateInstance<TimedTextLine>())
{}

inline TimedTextRegion::TimedTextRegion() :
    TimedTextRegion(get_activation_factory<TimedTextRegion>().ActivateInstance<TimedTextRegion>())
{}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics>().CreateFromStream(stream);
}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromUri(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics>().CreateFromUri(uri);
}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& defaultLanguage)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics>().CreateFromStream(stream, defaultLanguage);
}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromUri(Windows::Foundation::Uri const& uri, param::hstring const& defaultLanguage)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics>().CreateFromUri(uri, defaultLanguage);
}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics2>().CreateFromStreamWithIndex(stream, indexStream);
}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics2>().CreateFromUriWithIndex(uri, indexUri);
}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream, param::hstring const& defaultLanguage)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics2>().CreateFromStreamWithIndex(stream, indexStream, defaultLanguage);
}

inline Windows::Media::Core::TimedTextSource TimedTextSource::CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri, param::hstring const& defaultLanguage)
{
    return get_activation_factory<TimedTextSource, Windows::Media::Core::ITimedTextSourceStatics2>().CreateFromUriWithIndex(uri, indexUri, defaultLanguage);
}

inline TimedTextStyle::TimedTextStyle() :
    TimedTextStyle(get_activation_factory<TimedTextStyle>().ActivateInstance<TimedTextStyle>())
{}

inline TimedTextSubformat::TimedTextSubformat() :
    TimedTextSubformat(get_activation_factory<TimedTextSubformat>().ActivateInstance<TimedTextSubformat>())
{}

inline VideoStabilizationEffectDefinition::VideoStabilizationEffectDefinition() :
    VideoStabilizationEffectDefinition(get_activation_factory<VideoStabilizationEffectDefinition>().ActivateInstance<VideoStabilizationEffectDefinition>())
{}

inline VideoStreamDescriptor::VideoStreamDescriptor(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties) :
    VideoStreamDescriptor(get_activation_factory<VideoStreamDescriptor, Windows::Media::Core::IVideoStreamDescriptorFactory>().Create(encodingProperties))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Core::IAudioStreamDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Core::IAudioStreamDescriptor> {};
template<> struct hash<winrt::Windows::Media::Core::IAudioStreamDescriptor2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IAudioStreamDescriptor2> {};
template<> struct hash<winrt::Windows::Media::Core::IAudioStreamDescriptor3> : winrt::impl::hash_base<winrt::Windows::Media::Core::IAudioStreamDescriptor3> {};
template<> struct hash<winrt::Windows::Media::Core::IAudioStreamDescriptorFactory> : winrt::impl::hash_base<winrt::Windows::Media::Core::IAudioStreamDescriptorFactory> {};
template<> struct hash<winrt::Windows::Media::Core::IAudioTrack> : winrt::impl::hash_base<winrt::Windows::Media::Core::IAudioTrack> {};
template<> struct hash<winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IAudioTrackOpenFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IAudioTrackSupportInfo> : winrt::impl::hash_base<winrt::Windows::Media::Core::IAudioTrackSupportInfo> {};
template<> struct hash<winrt::Windows::Media::Core::IChapterCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::IChapterCue> {};
template<> struct hash<winrt::Windows::Media::Core::ICodecInfo> : winrt::impl::hash_base<winrt::Windows::Media::Core::ICodecInfo> {};
template<> struct hash<winrt::Windows::Media::Core::ICodecQuery> : winrt::impl::hash_base<winrt::Windows::Media::Core::ICodecQuery> {};
template<> struct hash<winrt::Windows::Media::Core::ICodecSubtypesStatics> : winrt::impl::hash_base<winrt::Windows::Media::Core::ICodecSubtypesStatics> {};
template<> struct hash<winrt::Windows::Media::Core::IDataCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::IDataCue> {};
template<> struct hash<winrt::Windows::Media::Core::IDataCue2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IDataCue2> {};
template<> struct hash<winrt::Windows::Media::Core::IFaceDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IFaceDetectedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IFaceDetectionEffect> : winrt::impl::hash_base<winrt::Windows::Media::Core::IFaceDetectionEffect> {};
template<> struct hash<winrt::Windows::Media::Core::IFaceDetectionEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Core::IFaceDetectionEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Core::IFaceDetectionEffectFrame> : winrt::impl::hash_base<winrt::Windows::Media::Core::IFaceDetectionEffectFrame> {};
template<> struct hash<winrt::Windows::Media::Core::IHighDynamicRangeControl> : winrt::impl::hash_base<winrt::Windows::Media::Core::IHighDynamicRangeControl> {};
template<> struct hash<winrt::Windows::Media::Core::IHighDynamicRangeOutput> : winrt::impl::hash_base<winrt::Windows::Media::Core::IHighDynamicRangeOutput> {};
template<> struct hash<winrt::Windows::Media::Core::IImageCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::IImageCue> {};
template<> struct hash<winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::ILowLightFusionResult> : winrt::impl::hash_base<winrt::Windows::Media::Core::ILowLightFusionResult> {};
template<> struct hash<winrt::Windows::Media::Core::ILowLightFusionStatics> : winrt::impl::hash_base<winrt::Windows::Media::Core::ILowLightFusionStatics> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaBinder> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaBinder> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaBindingEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaBindingEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaBindingEventArgs2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaBindingEventArgs2> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaBindingEventArgs3> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaBindingEventArgs3> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaCue> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaCueEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaCueEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSource> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSource2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSource2> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSource3> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSource3> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSource4> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSource4> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSource5> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSource5> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceAppServiceConnection> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceAppServiceConnectionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceAppServiceConnectionFactory> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceError> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceError> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceStatics> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceStatics> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceStatics2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceStatics2> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceStatics3> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceStatics3> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaSourceStatics4> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaSourceStatics4> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamDescriptor> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamDescriptor2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamDescriptor2> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSample> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSample> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSampleProtectionProperties> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSampleStatics> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSampleStatics> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSource> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSource2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSource2> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSource3> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSource3> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSource4> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSource4> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceClosedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceClosedRequest> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceFactory> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceFactory> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequest> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceStartingEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequest> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IMediaTrack> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMediaTrack> {};
template<> struct hash<winrt::Windows::Media::Core::IMseSourceBuffer> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMseSourceBuffer> {};
template<> struct hash<winrt::Windows::Media::Core::IMseSourceBufferList> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMseSourceBufferList> {};
template<> struct hash<winrt::Windows::Media::Core::IMseStreamSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMseStreamSource> {};
template<> struct hash<winrt::Windows::Media::Core::IMseStreamSource2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMseStreamSource2> {};
template<> struct hash<winrt::Windows::Media::Core::IMseStreamSourceStatics> : winrt::impl::hash_base<winrt::Windows::Media::Core::IMseStreamSourceStatics> {};
template<> struct hash<winrt::Windows::Media::Core::ISceneAnalysisEffect> : winrt::impl::hash_base<winrt::Windows::Media::Core::ISceneAnalysisEffect> {};
template<> struct hash<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame> : winrt::impl::hash_base<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame> {};
template<> struct hash<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame2> : winrt::impl::hash_base<winrt::Windows::Media::Core::ISceneAnalysisEffectFrame2> {};
template<> struct hash<winrt::Windows::Media::Core::ISceneAnalyzedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::ISceneAnalyzedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::ISingleSelectMediaTrackList> : winrt::impl::hash_base<winrt::Windows::Media::Core::ISingleSelectMediaTrackList> {};
template<> struct hash<winrt::Windows::Media::Core::ISpeechCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::ISpeechCue> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptor> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptorFactory> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataStreamDescriptorFactory> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataTrack> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataTrack> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataTrack2> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataTrack2> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataTrackError> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataTrackError> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataTrackFactory> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataTrackFactory> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataTrackFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedMetadataTrackProvider> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedMetadataTrackProvider> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextCue> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextLine> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextLine> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextRegion> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextRegion> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextSource> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextSourceResolveResultEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextSourceStatics> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextSourceStatics> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextSourceStatics2> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextSourceStatics2> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextStyle> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextStyle> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextStyle2> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextStyle2> {};
template<> struct hash<winrt::Windows::Media::Core::ITimedTextSubformat> : winrt::impl::hash_base<winrt::Windows::Media::Core::ITimedTextSubformat> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoStabilizationEffect> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoStabilizationEffect> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoStreamDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoStreamDescriptor> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoStreamDescriptor2> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoStreamDescriptor2> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoStreamDescriptorFactory> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoStreamDescriptorFactory> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoTrack> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoTrack> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoTrackOpenFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::IVideoTrackSupportInfo> : winrt::impl::hash_base<winrt::Windows::Media::Core::IVideoTrackSupportInfo> {};
template<> struct hash<winrt::Windows::Media::Core::AudioStreamDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Core::AudioStreamDescriptor> {};
template<> struct hash<winrt::Windows::Media::Core::AudioTrack> : winrt::impl::hash_base<winrt::Windows::Media::Core::AudioTrack> {};
template<> struct hash<winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::AudioTrackOpenFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::AudioTrackSupportInfo> : winrt::impl::hash_base<winrt::Windows::Media::Core::AudioTrackSupportInfo> {};
template<> struct hash<winrt::Windows::Media::Core::ChapterCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::ChapterCue> {};
template<> struct hash<winrt::Windows::Media::Core::CodecInfo> : winrt::impl::hash_base<winrt::Windows::Media::Core::CodecInfo> {};
template<> struct hash<winrt::Windows::Media::Core::CodecQuery> : winrt::impl::hash_base<winrt::Windows::Media::Core::CodecQuery> {};
template<> struct hash<winrt::Windows::Media::Core::CodecSubtypes> : winrt::impl::hash_base<winrt::Windows::Media::Core::CodecSubtypes> {};
template<> struct hash<winrt::Windows::Media::Core::DataCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::DataCue> {};
template<> struct hash<winrt::Windows::Media::Core::FaceDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::FaceDetectedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::FaceDetectionEffect> : winrt::impl::hash_base<winrt::Windows::Media::Core::FaceDetectionEffect> {};
template<> struct hash<winrt::Windows::Media::Core::FaceDetectionEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Core::FaceDetectionEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Core::FaceDetectionEffectFrame> : winrt::impl::hash_base<winrt::Windows::Media::Core::FaceDetectionEffectFrame> {};
template<> struct hash<winrt::Windows::Media::Core::HighDynamicRangeControl> : winrt::impl::hash_base<winrt::Windows::Media::Core::HighDynamicRangeControl> {};
template<> struct hash<winrt::Windows::Media::Core::HighDynamicRangeOutput> : winrt::impl::hash_base<winrt::Windows::Media::Core::HighDynamicRangeOutput> {};
template<> struct hash<winrt::Windows::Media::Core::ImageCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::ImageCue> {};
template<> struct hash<winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::LowLightFusion> : winrt::impl::hash_base<winrt::Windows::Media::Core::LowLightFusion> {};
template<> struct hash<winrt::Windows::Media::Core::LowLightFusionResult> : winrt::impl::hash_base<winrt::Windows::Media::Core::LowLightFusionResult> {};
template<> struct hash<winrt::Windows::Media::Core::MediaBinder> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaBinder> {};
template<> struct hash<winrt::Windows::Media::Core::MediaBindingEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaBindingEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaCueEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaCueEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaSource> {};
template<> struct hash<winrt::Windows::Media::Core::MediaSourceAppServiceConnection> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaSourceAppServiceConnection> {};
template<> struct hash<winrt::Windows::Media::Core::MediaSourceError> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaSourceError> {};
template<> struct hash<winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaSourceStateChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSample> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSample> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSamplePropertySet> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSamplePropertySet> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSampleProtectionProperties> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSampleProtectionProperties> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSource> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceClosedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceClosedRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceClosedRequest> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceSampleRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceSampleRequest> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestDeferral> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceStartingEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceStartingRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceStartingRequest> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceStartingRequestDeferral> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral> {};
template<> struct hash<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::MseSourceBuffer> : winrt::impl::hash_base<winrt::Windows::Media::Core::MseSourceBuffer> {};
template<> struct hash<winrt::Windows::Media::Core::MseSourceBufferList> : winrt::impl::hash_base<winrt::Windows::Media::Core::MseSourceBufferList> {};
template<> struct hash<winrt::Windows::Media::Core::MseStreamSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::MseStreamSource> {};
template<> struct hash<winrt::Windows::Media::Core::SceneAnalysisEffect> : winrt::impl::hash_base<winrt::Windows::Media::Core::SceneAnalysisEffect> {};
template<> struct hash<winrt::Windows::Media::Core::SceneAnalysisEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Core::SceneAnalysisEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Core::SceneAnalysisEffectFrame> : winrt::impl::hash_base<winrt::Windows::Media::Core::SceneAnalysisEffectFrame> {};
template<> struct hash<winrt::Windows::Media::Core::SceneAnalyzedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::SceneAnalyzedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::SpeechCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::SpeechCue> {};
template<> struct hash<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedMetadataStreamDescriptor> {};
template<> struct hash<winrt::Windows::Media::Core::TimedMetadataTrack> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedMetadataTrack> {};
template<> struct hash<winrt::Windows::Media::Core::TimedMetadataTrackError> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedMetadataTrackError> {};
template<> struct hash<winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedMetadataTrackFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::TimedTextCue> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedTextCue> {};
template<> struct hash<winrt::Windows::Media::Core::TimedTextLine> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedTextLine> {};
template<> struct hash<winrt::Windows::Media::Core::TimedTextRegion> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedTextRegion> {};
template<> struct hash<winrt::Windows::Media::Core::TimedTextSource> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedTextSource> {};
template<> struct hash<winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedTextSourceResolveResultEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::TimedTextStyle> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedTextStyle> {};
template<> struct hash<winrt::Windows::Media::Core::TimedTextSubformat> : winrt::impl::hash_base<winrt::Windows::Media::Core::TimedTextSubformat> {};
template<> struct hash<winrt::Windows::Media::Core::VideoStabilizationEffect> : winrt::impl::hash_base<winrt::Windows::Media::Core::VideoStabilizationEffect> {};
template<> struct hash<winrt::Windows::Media::Core::VideoStabilizationEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Core::VideoStabilizationEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::VideoStreamDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Core::VideoStreamDescriptor> {};
template<> struct hash<winrt::Windows::Media::Core::VideoTrack> : winrt::impl::hash_base<winrt::Windows::Media::Core::VideoTrack> {};
template<> struct hash<winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Core::VideoTrackOpenFailedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Core::VideoTrackSupportInfo> : winrt::impl::hash_base<winrt::Windows::Media::Core::VideoTrackSupportInfo> {};

}

WINRT_WARNING_POP
