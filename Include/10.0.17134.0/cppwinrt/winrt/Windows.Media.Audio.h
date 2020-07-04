// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.Devices.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Render.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Audio.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioDeviceInputNode<D>::Device() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioDeviceInputNode)->get_Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioDeviceOutputNode<D>::Device() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioDeviceOutputNode)->get_Device(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::PlaybackSpeedFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_PlaybackSpeedFactor(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioFileInputNode<D>::PlaybackSpeedFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_PlaybackSpeedFactor(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Audio_IAudioFileInputNode<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::Seek(Windows::Foundation::TimeSpan const& position) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->Seek(get_abi(position)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Audio_IAudioFileInputNode<D>::StartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::StartTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_StartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Audio_IAudioFileInputNode<D>::EndTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_EndTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::EndTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_EndTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Audio_IAudioFileInputNode<D>::LoopCount() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_LoopCount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::LoopCount(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->put_LoopCount(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Audio_IAudioFileInputNode<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Media_Audio_IAudioFileInputNode<D>::SourceFile() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->get_SourceFile(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioFileInputNode<D>::FileCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->add_FileCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioFileInputNode> consume_Windows_Media_Audio_IAudioFileInputNode<D>::FileCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioFileInputNode>(this, &abi_t<Windows::Media::Audio::IAudioFileInputNode>::remove_FileCompleted, FileCompleted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFileInputNode<D>::FileCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileInputNode)->remove_FileCompleted(get_abi(token)));
}

template <typename D> Windows::Storage::IStorageFile consume_Windows_Media_Audio_IAudioFileOutputNode<D>::File() const
{
    Windows::Storage::IStorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileOutputNode)->get_File(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_Audio_IAudioFileOutputNode<D>::FileEncodingProfile() const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileOutputNode)->get_FileEncodingProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::TranscodeFailureReason> consume_Windows_Media_Audio_IAudioFileOutputNode<D>::FinalizeAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::TranscodeFailureReason> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFileOutputNode)->FinalizeAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Audio_IAudioFrameCompletedEventArgs<D>::Frame() const
{
    Windows::Media::AudioFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameCompletedEventArgs)->get_Frame(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::PlaybackSpeedFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->put_PlaybackSpeedFactor(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioFrameInputNode<D>::PlaybackSpeedFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->get_PlaybackSpeedFactor(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AddFrame(Windows::Media::AudioFrame const& frame) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->AddFrame(get_abi(frame)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->DiscardQueuedFrames());
}

template <typename D> uint64_t consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QueuedSampleCount() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->get_QueuedSampleCount(&value));
    return value;
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AudioFrameCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->add_AudioFrameCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioFrameInputNode> consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AudioFrameCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioFrameInputNode>(this, &abi_t<Windows::Media::Audio::IAudioFrameInputNode>::remove_AudioFrameCompleted, AudioFrameCompleted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::AudioFrameCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->remove_AudioFrameCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->add_QuantumStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioFrameInputNode> consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QuantumStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioFrameInputNode>(this, &abi_t<Windows::Media::Audio::IAudioFrameInputNode>::remove_QuantumStarted, QuantumStarted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioFrameInputNode<D>::QuantumStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameInputNode)->remove_QuantumStarted(get_abi(token)));
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Audio_IAudioFrameOutputNode<D>::GetFrame() const
{
    Windows::Media::AudioFrame audioFrame{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioFrameOutputNode)->GetFrame(put_abi(audioFrame)));
    return audioFrame;
}

template <typename D> Windows::Media::Audio::AudioFrameInputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameInputNode() const
{
    Windows::Media::Audio::AudioFrameInputNode frameInputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameInputNode(put_abi(frameInputNode)));
    return frameInputNode;
}

template <typename D> Windows::Media::Audio::AudioFrameInputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameInputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Media::Audio::AudioFrameInputNode frameInputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameInputNodeWithFormat(get_abi(encodingProperties), put_abi(frameInputNode)));
    return frameInputNode;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceInputNodeAsync(get_abi(category), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceInputNodeWithFormatAsync(get_abi(category), get_abi(encodingProperties), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Devices::Enumeration::DeviceInformation const& device) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceInputNodeWithFormatOnDeviceAsync(get_abi(category), get_abi(encodingProperties), get_abi(device), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioFrameOutputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameOutputNode() const
{
    Windows::Media::Audio::AudioFrameOutputNode frameOutputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameOutputNode(put_abi(frameOutputNode)));
    return frameOutputNode;
}

template <typename D> Windows::Media::Audio::AudioFrameOutputNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateFrameOutputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Media::Audio::AudioFrameOutputNode frameOutputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFrameOutputNodeWithFormat(get_abi(encodingProperties), put_abi(frameOutputNode)));
    return frameOutputNode;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateDeviceOutputNodeAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateDeviceOutputNodeAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateFileInputNodeAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFileInputNodeAsync(get_abi(file), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateFileOutputNodeAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFileOutputNodeAsync(get_abi(file), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> consume_Windows_Media_Audio_IAudioGraph<D>::CreateFileOutputNodeAsync(Windows::Storage::IStorageFile const& file, Windows::Media::MediaProperties::MediaEncodingProfile const& fileEncodingProfile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateFileOutputNodeWithFileProfileAsync(get_abi(file), get_abi(fileEncodingProfile), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioSubmixNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateSubmixNode() const
{
    Windows::Media::Audio::AudioSubmixNode submixNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateSubmixNode(put_abi(submixNode)));
    return submixNode;
}

template <typename D> Windows::Media::Audio::AudioSubmixNode consume_Windows_Media_Audio_IAudioGraph<D>::CreateSubmixNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    Windows::Media::Audio::AudioSubmixNode submixNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->CreateSubmixNodeWithFormat(get_abi(encodingProperties), put_abi(submixNode)));
    return submixNode;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->Start());
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->Stop());
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::ResetAllNodes() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->ResetAllNodes());
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioGraph<D>::QuantumStarted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->add_QuantumStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioGraph> consume_Windows_Media_Audio_IAudioGraph<D>::QuantumStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioGraph>(this, &abi_t<Windows::Media::Audio::IAudioGraph>::remove_QuantumStarted, QuantumStarted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::QuantumStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->remove_QuantumStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioGraph<D>::QuantumProcessed(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->add_QuantumProcessed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioGraph> consume_Windows_Media_Audio_IAudioGraph<D>::QuantumProcessed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioGraph>(this, &abi_t<Windows::Media::Audio::IAudioGraph>::remove_QuantumProcessed, QuantumProcessed(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::QuantumProcessed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->remove_QuantumProcessed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioGraph<D>::UnrecoverableErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->add_UnrecoverableErrorOccurred(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioGraph> consume_Windows_Media_Audio_IAudioGraph<D>::UnrecoverableErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioGraph>(this, &abi_t<Windows::Media::Audio::IAudioGraph>::remove_UnrecoverableErrorOccurred, UnrecoverableErrorOccurred(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraph<D>::UnrecoverableErrorOccurred(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->remove_UnrecoverableErrorOccurred(get_abi(token)));
}

template <typename D> uint64_t consume_Windows_Media_Audio_IAudioGraph<D>::CompletedQuantumCount() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_CompletedQuantumCount(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Audio_IAudioGraph<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_EncodingProperties(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Audio_IAudioGraph<D>::LatencyInSamples() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_LatencyInSamples(&value));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioGraph<D>::PrimaryRenderDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_PrimaryRenderDevice(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Audio_IAudioGraph<D>::RenderDeviceAudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_RenderDeviceAudioProcessing(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Audio_IAudioGraph<D>::SamplesPerQuantum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph)->get_SamplesPerQuantum(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFrameInputNode consume_Windows_Media_Audio_IAudioGraph2<D>::CreateFrameInputNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Media::Audio::AudioFrameInputNode frameInputNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateFrameInputNodeWithFormatAndEmitter(get_abi(encodingProperties), get_abi(emitter), put_abi(frameInputNode)));
    return frameInputNode;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> consume_Windows_Media_Audio_IAudioGraph2<D>::CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory const& category, Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Devices::Enumeration::DeviceInformation const& device, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(get_abi(category), get_abi(encodingProperties), get_abi(device), get_abi(emitter), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> consume_Windows_Media_Audio_IAudioGraph2<D>::CreateFileInputNodeAsync(Windows::Storage::IStorageFile const& file, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateFileInputNodeWithEmitterAsync(get_abi(file), get_abi(emitter), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioSubmixNode consume_Windows_Media_Audio_IAudioGraph2<D>::CreateSubmixNode(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Media::Audio::AudioSubmixNode submixNode{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateSubmixNodeWithFormatAndEmitter(get_abi(encodingProperties), get_abi(emitter), put_abi(submixNode)));
    return submixNode;
}

template <typename D> Windows::Media::Audio::AudioGraphBatchUpdater consume_Windows_Media_Audio_IAudioGraph2<D>::CreateBatchUpdater() const
{
    Windows::Media::Audio::AudioGraphBatchUpdater updater{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph2)->CreateBatchUpdater(put_abi(updater)));
    return updater;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult> consume_Windows_Media_Audio_IAudioGraph3<D>::CreateMediaSourceAudioInputNodeAsync(Windows::Media::Core::MediaSource const& mediaSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph3)->CreateMediaSourceAudioInputNodeAsync(get_abi(mediaSource), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult> consume_Windows_Media_Audio_IAudioGraph3<D>::CreateMediaSourceAudioInputNodeAsync(Windows::Media::Core::MediaSource const& mediaSource, Windows::Media::Audio::AudioNodeEmitter const& emitter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraph3)->CreateMediaSourceAudioInputNodeWithEmitterAsync(get_abi(mediaSource), get_abi(emitter), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Audio::IAudioNode consume_Windows_Media_Audio_IAudioGraphConnection<D>::Destination() const
{
    Windows::Media::Audio::IAudioNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphConnection)->get_Destination(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphConnection<D>::Gain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphConnection)->put_Gain(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioGraphConnection<D>::Gain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphConnection)->get_Gain(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Audio_IAudioGraphSettings<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_EncodingProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::EncodingProperties(Windows::Media::MediaProperties::AudioEncodingProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_EncodingProperties(get_abi(value)));
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Audio_IAudioGraphSettings<D>::PrimaryRenderDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_PrimaryRenderDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::PrimaryRenderDevice(Windows::Devices::Enumeration::DeviceInformation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_PrimaryRenderDevice(get_abi(value)));
}

template <typename D> Windows::Media::Audio::QuantumSizeSelectionMode consume_Windows_Media_Audio_IAudioGraphSettings<D>::QuantumSizeSelectionMode() const
{
    Windows::Media::Audio::QuantumSizeSelectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_QuantumSizeSelectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::QuantumSizeSelectionMode(Windows::Media::Audio::QuantumSizeSelectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_QuantumSizeSelectionMode(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredSamplesPerQuantum() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_DesiredSamplesPerQuantum(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredSamplesPerQuantum(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_DesiredSamplesPerQuantum(value));
}

template <typename D> Windows::Media::Render::AudioRenderCategory consume_Windows_Media_Audio_IAudioGraphSettings<D>::AudioRenderCategory() const
{
    Windows::Media::Render::AudioRenderCategory value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_AudioRenderCategory(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::AudioRenderCategory(Windows::Media::Render::AudioRenderCategory const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_AudioRenderCategory(get_abi(value)));
}

template <typename D> Windows::Media::AudioProcessing consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredRenderDeviceAudioProcessing() const
{
    Windows::Media::AudioProcessing value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->get_DesiredRenderDeviceAudioProcessing(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings<D>::DesiredRenderDeviceAudioProcessing(Windows::Media::AudioProcessing const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings)->put_DesiredRenderDeviceAudioProcessing(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioGraphSettings2<D>::MaxPlaybackSpeedFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings2)->put_MaxPlaybackSpeedFactor(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioGraphSettings2<D>::MaxPlaybackSpeedFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettings2)->get_MaxPlaybackSpeedFactor(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioGraphSettings consume_Windows_Media_Audio_IAudioGraphSettingsFactory<D>::Create(Windows::Media::Render::AudioRenderCategory const& audioRenderCategory) const
{
    Windows::Media::Audio::AudioGraphSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphSettingsFactory)->Create(get_abi(audioRenderCategory), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> consume_Windows_Media_Audio_IAudioGraphStatics<D>::CreateAsync(Windows::Media::Audio::AudioGraphSettings const& settings) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphStatics)->CreateAsync(get_abi(settings), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioGraphUnrecoverableError consume_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs<D>::Error() const
{
    Windows::Media::Audio::AudioGraphUnrecoverableError value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::AudioGraphConnection> consume_Windows_Media_Audio_IAudioInputNode<D>::OutgoingConnections() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::AudioGraphConnection> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->get_OutgoingConnections(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioInputNode<D>::AddOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->AddOutgoingConnection(get_abi(destination)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioInputNode<D>::AddOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination, double gain) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->AddOutgoingConnectionWithGain(get_abi(destination), gain));
}

template <typename D> void consume_Windows_Media_Audio_IAudioInputNode<D>::RemoveOutgoingConnection(Windows::Media::Audio::IAudioNode const& destination) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode)->RemoveOutgoingConnection(get_abi(destination)));
}

template <typename D> Windows::Media::Audio::AudioNodeEmitter consume_Windows_Media_Audio_IAudioInputNode2<D>::Emitter() const
{
    Windows::Media::Audio::AudioNodeEmitter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioInputNode2)->get_Emitter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> consume_Windows_Media_Audio_IAudioNode<D>::EffectDefinitions() const
{
    Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_EffectDefinitions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::OutgoingGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->put_OutgoingGain(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNode<D>::OutgoingGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_OutgoingGain(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_Audio_IAudioNode<D>::EncodingProperties() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_EncodingProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Audio_IAudioNode<D>::ConsumeInput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->get_ConsumeInput(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::ConsumeInput(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->put_ConsumeInput(value));
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->Start());
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->Stop());
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->Reset());
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::DisableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition const& definition) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->DisableEffectsByDefinition(get_abi(definition)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioNode<D>::EnableEffectsByDefinition(Windows::Media::Effects::IAudioEffectDefinition const& definition) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNode)->EnableEffectsByDefinition(get_abi(definition)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Position(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_Position(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Direction(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_Direction(get_abi(value)));
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShape consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Shape() const
{
    Windows::Media::Audio::AudioNodeEmitterShape value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Shape(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayModel consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DecayModel() const
{
    Windows::Media::Audio::AudioNodeEmitterDecayModel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DecayModel(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Gain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_Gain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::Gain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_Gain(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DistanceScale() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DistanceScale(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DistanceScale(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_DistanceScale(value));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerScale() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DopplerScale(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerScale(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_DopplerScale(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerVelocity() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_DopplerVelocity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter<D>::DopplerVelocity(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->put_DopplerVelocity(get_abi(value)));
}

template <typename D> bool consume_Windows_Media_Audio_IAudioNodeEmitter<D>::IsDopplerDisabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter)->get_IsDopplerDisabled(&value));
    return value;
}

template <typename D> Windows::Media::Audio::SpatialAudioModel consume_Windows_Media_Audio_IAudioNodeEmitter2<D>::SpatialAudioModel() const
{
    Windows::Media::Audio::SpatialAudioModel value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter2)->get_SpatialAudioModel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeEmitter2<D>::SpatialAudioModel(Windows::Media::Audio::SpatialAudioModel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitter2)->put_SpatialAudioModel(get_abi(value)));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>::InnerAngle() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterConeProperties)->get_InnerAngle(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>::OuterAngle() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterConeProperties)->get_OuterAngle(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterConeProperties<D>::OuterAngleGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterConeProperties)->get_OuterAngleGain(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayKind consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::Kind() const
{
    Windows::Media::Audio::AudioNodeEmitterDecayKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::MinGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_MinGain(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::MaxGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_MaxGain(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties consume_Windows_Media_Audio_IAudioNodeEmitterDecayModel<D>::NaturalProperties() const
{
    Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModel)->get_NaturalProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayModel consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics<D>::CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance) const
{
    Windows::Media::Audio::AudioNodeEmitterDecayModel decayModel{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics)->CreateNatural(minGain, maxGain, unityGainDistance, cutoffDistance, put_abi(decayModel)));
    return decayModel;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterDecayModel consume_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics<D>::CreateCustom(double minGain, double maxGain) const
{
    Windows::Media::Audio::AudioNodeEmitterDecayModel decayModel{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics)->CreateCustom(minGain, maxGain, put_abi(decayModel)));
    return decayModel;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitter consume_Windows_Media_Audio_IAudioNodeEmitterFactory<D>::CreateAudioNodeEmitter(Windows::Media::Audio::AudioNodeEmitterShape const& shape, Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, Windows::Media::Audio::AudioNodeEmitterSettings const& settings) const
{
    Windows::Media::Audio::AudioNodeEmitter emitter{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterFactory)->CreateAudioNodeEmitter(get_abi(shape), get_abi(decayModel), get_abi(settings), put_abi(emitter)));
    return emitter;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties<D>::UnityGainDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties)->get_UnityGainDistance(&value));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties<D>::CutoffDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties)->get_CutoffDistance(&value));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShapeKind consume_Windows_Media_Audio_IAudioNodeEmitterShape<D>::Kind() const
{
    Windows::Media::Audio::AudioNodeEmitterShapeKind value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShape)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterConeProperties consume_Windows_Media_Audio_IAudioNodeEmitterShape<D>::ConeProperties() const
{
    Windows::Media::Audio::AudioNodeEmitterConeProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShape)->get_ConeProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShape consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics<D>::CreateCone(double innerAngle, double outerAngle, double outerAngleGain) const
{
    Windows::Media::Audio::AudioNodeEmitterShape shape{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShapeStatics)->CreateCone(innerAngle, outerAngle, outerAngleGain, put_abi(shape)));
    return shape;
}

template <typename D> Windows::Media::Audio::AudioNodeEmitterShape consume_Windows_Media_Audio_IAudioNodeEmitterShapeStatics<D>::CreateOmnidirectional() const
{
    Windows::Media::Audio::AudioNodeEmitterShape shape{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeEmitterShapeStatics)->CreateOmnidirectional(put_abi(shape)));
    return shape;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeListener<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::Position(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_Position(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Media_Audio_IAudioNodeListener<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::Orientation(Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_Orientation(get_abi(value)));
}

template <typename D> double consume_Windows_Media_Audio_IAudioNodeListener<D>::SpeedOfSound() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_SpeedOfSound(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::SpeedOfSound(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_SpeedOfSound(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Media_Audio_IAudioNodeListener<D>::DopplerVelocity() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->get_DopplerVelocity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeListener<D>::DopplerVelocity(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeListener)->put_DopplerVelocity(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Audio_IAudioNodeWithListener<D>::Listener(Windows::Media::Audio::AudioNodeListener const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeWithListener)->put_Listener(get_abi(value)));
}

template <typename D> Windows::Media::Audio::AudioNodeListener consume_Windows_Media_Audio_IAudioNodeWithListener<D>::Listener() const
{
    Windows::Media::Audio::AudioNodeListener value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioNodeWithListener)->get_Listener(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Audio_IAudioStateMonitor<D>::SoundLevelChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioStateMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitor)->add_SoundLevelChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IAudioStateMonitor> consume_Windows_Media_Audio_IAudioStateMonitor<D>::SoundLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioStateMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IAudioStateMonitor>(this, &abi_t<Windows::Media::Audio::IAudioStateMonitor>::remove_SoundLevelChanged, SoundLevelChanged(handler));
}

template <typename D> void consume_Windows_Media_Audio_IAudioStateMonitor<D>::SoundLevelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitor)->remove_SoundLevelChanged(get_abi(token)));
}

template <typename D> Windows::Media::SoundLevel consume_Windows_Media_Audio_IAudioStateMonitor<D>::SoundLevel() const
{
    Windows::Media::SoundLevel value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitor)->get_SoundLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForRenderMonitoring() const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForRenderMonitoring(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category) const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForRenderMonitoringWithCategory(get_abi(category), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role) const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForRenderMonitoringWithCategoryAndDeviceRole(get_abi(category), get_abi(role), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForRenderMonitoringWithCategoryAndDeviceId(Windows::Media::Render::AudioRenderCategory const& category, param::hstring const& deviceId) const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForRenderMonitoringWithCategoryAndDeviceId(get_abi(category), get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForCaptureMonitoring() const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForCaptureMonitoring(put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category) const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForCaptureMonitoringWithCategory(get_abi(category), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role) const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForCaptureMonitoringWithCategoryAndDeviceRole(get_abi(category), get_abi(role), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioStateMonitor consume_Windows_Media_Audio_IAudioStateMonitorStatics<D>::CreateForCaptureMonitoringWithCategoryAndDeviceId(Windows::Media::Capture::MediaCategory const& category, param::hstring const& deviceId) const
{
    Windows::Media::Audio::AudioStateMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IAudioStateMonitorStatics)->CreateForCaptureMonitoringWithCategoryAndDeviceId(get_abi(category), get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Audio::AudioDeviceNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioDeviceNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceInputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioDeviceInputNode consume_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult<D>::DeviceInputNode() const
{
    Windows::Media::Audio::AudioDeviceInputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceInputNodeResult)->get_DeviceInputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioDeviceNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioDeviceNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioDeviceOutputNode consume_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult<D>::DeviceOutputNode() const
{
    Windows::Media::Audio::AudioDeviceOutputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult)->get_DeviceOutputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioFileNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileInputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileInputNode consume_Windows_Media_Audio_ICreateAudioFileInputNodeResult<D>::FileInputNode() const
{
    Windows::Media::Audio::AudioFileInputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileInputNodeResult)->get_FileInputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileNodeCreationStatus consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult<D>::Status() const
{
    Windows::Media::Audio::AudioFileNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileOutputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioFileOutputNode consume_Windows_Media_Audio_ICreateAudioFileOutputNodeResult<D>::FileOutputNode() const
{
    Windows::Media::Audio::AudioFileOutputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioFileOutputNodeResult)->get_FileOutputNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioGraphCreationStatus consume_Windows_Media_Audio_ICreateAudioGraphResult<D>::Status() const
{
    Windows::Media::Audio::AudioGraphCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioGraphResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::AudioGraph consume_Windows_Media_Audio_ICreateAudioGraphResult<D>::Graph() const
{
    Windows::Media::Audio::AudioGraph value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateAudioGraphResult)->get_Graph(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::MediaSourceAudioInputNodeCreationStatus consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult<D>::Status() const
{
    Windows::Media::Audio::MediaSourceAudioInputNodeCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::MediaSourceAudioInputNode consume_Windows_Media_Audio_ICreateMediaSourceAudioInputNodeResult<D>::Node() const
{
    Windows::Media::Audio::MediaSourceAudioInputNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult)->get_Node(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEchoEffectDefinition<D>::WetDryMix(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->put_WetDryMix(value));
}

template <typename D> double consume_Windows_Media_Audio_IEchoEffectDefinition<D>::WetDryMix() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->get_WetDryMix(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Feedback(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->put_Feedback(value));
}

template <typename D> double consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Feedback() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->get_Feedback(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Delay(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->put_Delay(value));
}

template <typename D> double consume_Windows_Media_Audio_IEchoEffectDefinition<D>::Delay() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinition)->get_Delay(&value));
    return value;
}

template <typename D> Windows::Media::Audio::EchoEffectDefinition consume_Windows_Media_Audio_IEchoEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::EchoEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEchoEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Audio_IEqualizerBand<D>::Bandwidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->get_Bandwidth(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEqualizerBand<D>::Bandwidth(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->put_Bandwidth(value));
}

template <typename D> double consume_Windows_Media_Audio_IEqualizerBand<D>::FrequencyCenter() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->get_FrequencyCenter(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEqualizerBand<D>::FrequencyCenter(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->put_FrequencyCenter(value));
}

template <typename D> double consume_Windows_Media_Audio_IEqualizerBand<D>::Gain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->get_Gain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IEqualizerBand<D>::Gain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerBand)->put_Gain(value));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::EqualizerBand> consume_Windows_Media_Audio_IEqualizerEffectDefinition<D>::Bands() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::EqualizerBand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerEffectDefinition)->get_Bands(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Audio::EqualizerEffectDefinition consume_Windows_Media_Audio_IEqualizerEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::EqualizerEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IEqualizerEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs<D>::RequiredSamples() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs)->get_RequiredSamples(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Release(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->put_Release(value));
}

template <typename D> uint32_t consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Release() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->get_Release(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Loudness(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->put_Loudness(value));
}

template <typename D> uint32_t consume_Windows_Media_Audio_ILimiterEffectDefinition<D>::Loudness() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinition)->get_Loudness(&value));
    return value;
}

template <typename D> Windows::Media::Audio::LimiterEffectDefinition consume_Windows_Media_Audio_ILimiterEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::LimiterEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::ILimiterEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::PlaybackSpeedFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->put_PlaybackSpeedFactor(value));
}

template <typename D> double consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::PlaybackSpeedFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->get_PlaybackSpeedFactor(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::Position() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->get_Position(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::Seek(Windows::Foundation::TimeSpan const& position) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->Seek(get_abi(position)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::StartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::StartTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->put_StartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::EndTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->get_EndTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::EndTime(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->put_EndTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::LoopCount() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->get_LoopCount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::LoopCount(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->put_LoopCount(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Core::MediaSource consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::MediaSource() const
{
    Windows::Media::Core::MediaSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->get_MediaSource(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::MediaSourceCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Audio::MediaSourceAudioInputNode, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->add_MediaSourceCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Audio::IMediaSourceAudioInputNode> consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::MediaSourceCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Audio::MediaSourceAudioInputNode, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Audio::IMediaSourceAudioInputNode>(this, &abi_t<Windows::Media::Audio::IMediaSourceAudioInputNode>::remove_MediaSourceCompleted, MediaSourceCompleted(handler));
}

template <typename D> void consume_Windows_Media_Audio_IMediaSourceAudioInputNode<D>::MediaSourceCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IMediaSourceAudioInputNode)->remove_MediaSourceCompleted(get_abi(token)));
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::WetDryMix(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_WetDryMix(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::WetDryMix() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_WetDryMix(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsDelay(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReflectionsDelay(value));
}

template <typename D> uint32_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsDelay() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReflectionsDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbDelay(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReverbDelay(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbDelay() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReverbDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RearDelay(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RearDelay(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RearDelay() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RearDelay(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionLeft(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionLeft(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionLeft() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionLeft(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionRight(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionRight(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionRight() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionRight(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixLeft(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionMatrixLeft(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixLeft() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionMatrixLeft(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixRight(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_PositionMatrixRight(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::PositionMatrixRight() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_PositionMatrixRight(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::EarlyDiffusion(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_EarlyDiffusion(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::EarlyDiffusion() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_EarlyDiffusion(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LateDiffusion(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_LateDiffusion(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LateDiffusion() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_LateDiffusion(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQGain(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_LowEQGain(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQGain() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_LowEQGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQCutoff(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_LowEQCutoff(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::LowEQCutoff() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_LowEQCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQGain(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_HighEQGain(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQGain() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_HighEQGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQCutoff(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_HighEQCutoff(value));
}

template <typename D> uint8_t consume_Windows_Media_Audio_IReverbEffectDefinition<D>::HighEQCutoff() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_HighEQCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterFreq(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomFilterFreq(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterFreq() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomFilterFreq(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterMain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomFilterMain(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterMain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomFilterMain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterHF(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomFilterHF(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomFilterHF() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomFilterHF(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReflectionsGain(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReflectionsGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReflectionsGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbGain(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_ReverbGain(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::ReverbGain() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_ReverbGain(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DecayTime(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_DecayTime(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DecayTime() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_DecayTime(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::Density(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_Density(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::Density() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_Density(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomSize(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_RoomSize(value));
}

template <typename D> double consume_Windows_Media_Audio_IReverbEffectDefinition<D>::RoomSize() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_RoomSize(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DisableLateField(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->put_DisableLateField(value));
}

template <typename D> bool consume_Windows_Media_Audio_IReverbEffectDefinition<D>::DisableLateField() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinition)->get_DisableLateField(&value));
    return value;
}

template <typename D> Windows::Media::Audio::ReverbEffectDefinition consume_Windows_Media_Audio_IReverbEffectDefinitionFactory<D>::Create(Windows::Media::Audio::AudioGraph const& audioGraph) const
{
    Windows::Media::Audio::ReverbEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Audio::IReverbEffectDefinitionFactory)->Create(get_abi(audioGraph), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioDeviceInputNode> : produce_base<D, Windows::Media::Audio::IAudioDeviceInputNode>
{
    HRESULT __stdcall get_Device(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioDeviceOutputNode> : produce_base<D, Windows::Media::Audio::IAudioDeviceOutputNode>
{
    HRESULT __stdcall get_Device(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().Device());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFileInputNode> : produce_base<D, Windows::Media::Audio::IAudioFileInputNode>
{
    HRESULT __stdcall put_PlaybackSpeedFactor(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackSpeedFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSpeedFactor(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().PlaybackSpeedFactor());
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

    HRESULT __stdcall Seek(Windows::Foundation::TimeSpan position) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seek(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&position));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LoopCount(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<int32_t>>(this->shim().LoopCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LoopCount(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoopCount(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
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

    HRESULT __stdcall get_SourceFile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().SourceFile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FileCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FileCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFileInputNode, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FileCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFileOutputNode> : produce_base<D, Windows::Media::Audio::IAudioFileOutputNode>
{
    HRESULT __stdcall get_File(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFile>(this->shim().File());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FileEncodingProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaEncodingProfile>(this->shim().FileEncodingProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FinalizeAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::TranscodeFailureReason>>(this->shim().FinalizeAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFrameCompletedEventArgs> : produce_base<D, Windows::Media::Audio::IAudioFrameCompletedEventArgs>
{
    HRESULT __stdcall get_Frame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioFrame>(this->shim().Frame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFrameInputNode> : produce_base<D, Windows::Media::Audio::IAudioFrameInputNode>
{
    HRESULT __stdcall put_PlaybackSpeedFactor(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackSpeedFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSpeedFactor(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().PlaybackSpeedFactor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddFrame(void* frame) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddFrame(*reinterpret_cast<Windows::Media::AudioFrame const*>(&frame));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DiscardQueuedFrames() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiscardQueuedFrames();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_QueuedSampleCount(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().QueuedSampleCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AudioFrameCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AudioFrameCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::AudioFrameCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioFrameCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioFrameCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_QuantumStarted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().QuantumStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioFrameInputNode, Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_QuantumStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioFrameOutputNode> : produce_base<D, Windows::Media::Audio::IAudioFrameOutputNode>
{
    HRESULT __stdcall GetFrame(void** audioFrame) noexcept final
    {
        try
        {
            *audioFrame = nullptr;
            typename D::abi_guard guard(this->shim());
            *audioFrame = detach_from<Windows::Media::AudioFrame>(this->shim().GetFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraph> : produce_base<D, Windows::Media::Audio::IAudioGraph>
{
    HRESULT __stdcall CreateFrameInputNode(void** frameInputNode) noexcept final
    {
        try
        {
            *frameInputNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *frameInputNode = detach_from<Windows::Media::Audio::AudioFrameInputNode>(this->shim().CreateFrameInputNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameInputNodeWithFormat(void* encodingProperties, void** frameInputNode) noexcept final
    {
        try
        {
            *frameInputNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *frameInputNode = detach_from<Windows::Media::Audio::AudioFrameInputNode>(this->shim().CreateFrameInputNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeAsync(Windows::Media::Capture::MediaCategory category, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>>(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeWithFormatAsync(Windows::Media::Capture::MediaCategory category, void* encodingProperties, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>>(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeWithFormatOnDeviceAsync(Windows::Media::Capture::MediaCategory category, void* encodingProperties, void* device, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>>(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameOutputNode(void** frameOutputNode) noexcept final
    {
        try
        {
            *frameOutputNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *frameOutputNode = detach_from<Windows::Media::Audio::AudioFrameOutputNode>(this->shim().CreateFrameOutputNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFrameOutputNodeWithFormat(void* encodingProperties, void** frameOutputNode) noexcept final
    {
        try
        {
            *frameOutputNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *frameOutputNode = detach_from<Windows::Media::Audio::AudioFrameOutputNode>(this->shim().CreateFrameOutputNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceOutputNodeAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceOutputNodeResult>>(this->shim().CreateDeviceOutputNodeAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFileInputNodeAsync(void* file, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult>>(this->shim().CreateFileInputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFileOutputNodeAsync(void* file, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult>>(this->shim().CreateFileOutputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFileOutputNodeWithFileProfileAsync(void* file, void* fileEncodingProfile, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileOutputNodeResult>>(this->shim().CreateFileOutputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&fileEncodingProfile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSubmixNode(void** submixNode) noexcept final
    {
        try
        {
            *submixNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *submixNode = detach_from<Windows::Media::Audio::AudioSubmixNode>(this->shim().CreateSubmixNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSubmixNodeWithFormat(void* encodingProperties, void** submixNode) noexcept final
    {
        try
        {
            *submixNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *submixNode = detach_from<Windows::Media::Audio::AudioSubmixNode>(this->shim().CreateSubmixNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties)));
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

    HRESULT __stdcall ResetAllNodes() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResetAllNodes();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_QuantumStarted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().QuantumStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_QuantumStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_QuantumProcessed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().QuantumProcessed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_QuantumProcessed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumProcessed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UnrecoverableErrorOccurred(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UnrecoverableErrorOccurred(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioGraph, Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UnrecoverableErrorOccurred(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnrecoverableErrorOccurred(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompletedQuantumCount(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().CompletedQuantumCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::AudioEncodingProperties>(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LatencyInSamples(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().LatencyInSamples());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryRenderDevice(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().PrimaryRenderDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RenderDeviceAudioProcessing(Windows::Media::AudioProcessing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioProcessing>(this->shim().RenderDeviceAudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SamplesPerQuantum(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().SamplesPerQuantum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraph2> : produce_base<D, Windows::Media::Audio::IAudioGraph2>
{
    HRESULT __stdcall CreateFrameInputNodeWithFormatAndEmitter(void* encodingProperties, void* emitter, void** frameInputNode) noexcept final
    {
        try
        {
            *frameInputNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *frameInputNode = detach_from<Windows::Media::Audio::AudioFrameInputNode>(this->shim().CreateFrameInputNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(Windows::Media::Capture::MediaCategory category, void* encodingProperties, void* device, void* emitter, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioDeviceInputNodeResult>>(this->shim().CreateDeviceInputNodeAsync(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&device), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFileInputNodeWithEmitterAsync(void* file, void* emitter, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioFileInputNodeResult>>(this->shim().CreateFileInputNodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSubmixNodeWithFormatAndEmitter(void* encodingProperties, void* emitter, void** submixNode) noexcept final
    {
        try
        {
            *submixNode = nullptr;
            typename D::abi_guard guard(this->shim());
            *submixNode = detach_from<Windows::Media::Audio::AudioSubmixNode>(this->shim().CreateSubmixNode(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateBatchUpdater(void** updater) noexcept final
    {
        try
        {
            *updater = nullptr;
            typename D::abi_guard guard(this->shim());
            *updater = detach_from<Windows::Media::Audio::AudioGraphBatchUpdater>(this->shim().CreateBatchUpdater());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraph3> : produce_base<D, Windows::Media::Audio::IAudioGraph3>
{
    HRESULT __stdcall CreateMediaSourceAudioInputNodeAsync(void* mediaSource, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult>>(this->shim().CreateMediaSourceAudioInputNodeAsync(*reinterpret_cast<Windows::Media::Core::MediaSource const*>(&mediaSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateMediaSourceAudioInputNodeWithEmitterAsync(void* mediaSource, void* emitter, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult>>(this->shim().CreateMediaSourceAudioInputNodeAsync(*reinterpret_cast<Windows::Media::Core::MediaSource const*>(&mediaSource), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitter const*>(&emitter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphConnection> : produce_base<D, Windows::Media::Audio::IAudioGraphConnection>
{
    HRESULT __stdcall get_Destination(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::IAudioNode>(this->shim().Destination());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Gain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Gain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Gain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphSettings> : produce_base<D, Windows::Media::Audio::IAudioGraphSettings>
{
    HRESULT __stdcall get_EncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::AudioEncodingProperties>(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EncodingProperties(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryRenderDevice(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().PrimaryRenderDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PrimaryRenderDevice(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrimaryRenderDevice(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_QuantumSizeSelectionMode(Windows::Media::Audio::QuantumSizeSelectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::QuantumSizeSelectionMode>(this->shim().QuantumSizeSelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_QuantumSizeSelectionMode(Windows::Media::Audio::QuantumSizeSelectionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuantumSizeSelectionMode(*reinterpret_cast<Windows::Media::Audio::QuantumSizeSelectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredSamplesPerQuantum(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().DesiredSamplesPerQuantum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredSamplesPerQuantum(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredSamplesPerQuantum(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AudioRenderCategory(Windows::Media::Render::AudioRenderCategory* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Render::AudioRenderCategory>(this->shim().AudioRenderCategory());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AudioRenderCategory(Windows::Media::Render::AudioRenderCategory value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioRenderCategory(*reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredRenderDeviceAudioProcessing(Windows::Media::AudioProcessing* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioProcessing>(this->shim().DesiredRenderDeviceAudioProcessing());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredRenderDeviceAudioProcessing(Windows::Media::AudioProcessing value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DesiredRenderDeviceAudioProcessing(*reinterpret_cast<Windows::Media::AudioProcessing const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphSettings2> : produce_base<D, Windows::Media::Audio::IAudioGraphSettings2>
{
    HRESULT __stdcall put_MaxPlaybackSpeedFactor(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxPlaybackSpeedFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPlaybackSpeedFactor(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxPlaybackSpeedFactor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphSettingsFactory> : produce_base<D, Windows::Media::Audio::IAudioGraphSettingsFactory>
{
    HRESULT __stdcall Create(Windows::Media::Render::AudioRenderCategory audioRenderCategory, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioGraphSettings>(this->shim().Create(*reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&audioRenderCategory)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphStatics> : produce_base<D, Windows::Media::Audio::IAudioGraphStatics>
{
    HRESULT __stdcall CreateAsync(void* settings, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult>>(this->shim().CreateAsync(*reinterpret_cast<Windows::Media::Audio::AudioGraphSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs> : produce_base<D, Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs>
{
    HRESULT __stdcall get_Error(Windows::Media::Audio::AudioGraphUnrecoverableError* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioGraphUnrecoverableError>(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioInputNode> : produce_base<D, Windows::Media::Audio::IAudioInputNode>
{
    HRESULT __stdcall get_OutgoingConnections(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::AudioGraphConnection>>(this->shim().OutgoingConnections());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddOutgoingConnection(void* destination) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddOutgoingConnection(*reinterpret_cast<Windows::Media::Audio::IAudioNode const*>(&destination));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddOutgoingConnectionWithGain(void* destination, double gain) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddOutgoingConnection(*reinterpret_cast<Windows::Media::Audio::IAudioNode const*>(&destination), gain);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveOutgoingConnection(void* destination) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveOutgoingConnection(*reinterpret_cast<Windows::Media::Audio::IAudioNode const*>(&destination));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioInputNode2> : produce_base<D, Windows::Media::Audio::IAudioInputNode2>
{
    HRESULT __stdcall get_Emitter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeEmitter>(this->shim().Emitter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNode> : produce_base<D, Windows::Media::Audio::IAudioNode>
{
    HRESULT __stdcall get_EffectDefinitions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Media::Effects::IAudioEffectDefinition>>(this->shim().EffectDefinitions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutgoingGain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutgoingGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutgoingGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OutgoingGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::AudioEncodingProperties>(this->shim().EncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConsumeInput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ConsumeInput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ConsumeInput(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConsumeInput(value);
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

    HRESULT __stdcall DisableEffectsByDefinition(void* definition) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableEffectsByDefinition(*reinterpret_cast<Windows::Media::Effects::IAudioEffectDefinition const*>(&definition));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnableEffectsByDefinition(void* definition) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableEffectsByDefinition(*reinterpret_cast<Windows::Media::Effects::IAudioEffectDefinition const*>(&definition));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitter> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitter>
{
    HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Shape(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeEmitterShape>(this->shim().Shape());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DecayModel(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeEmitterDecayModel>(this->shim().DecayModel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Gain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Gain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Gain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DistanceScale(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DistanceScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DistanceScale(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DistanceScale(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DopplerScale(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DopplerScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DopplerScale(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DopplerScale(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DopplerVelocity(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().DopplerVelocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DopplerVelocity(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DopplerVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDopplerDisabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDopplerDisabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitter2> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitter2>
{
    HRESULT __stdcall get_SpatialAudioModel(Windows::Media::Audio::SpatialAudioModel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::SpatialAudioModel>(this->shim().SpatialAudioModel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpatialAudioModel(Windows::Media::Audio::SpatialAudioModel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpatialAudioModel(*reinterpret_cast<Windows::Media::Audio::SpatialAudioModel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterConeProperties> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterConeProperties>
{
    HRESULT __stdcall get_InnerAngle(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().InnerAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OuterAngle(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OuterAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OuterAngleGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OuterAngleGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterDecayModel> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterDecayModel>
{
    HRESULT __stdcall get_Kind(Windows::Media::Audio::AudioNodeEmitterDecayKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeEmitterDecayKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties>(this->shim().NaturalProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>
{
    HRESULT __stdcall CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance, void** decayModel) noexcept final
    {
        try
        {
            *decayModel = nullptr;
            typename D::abi_guard guard(this->shim());
            *decayModel = detach_from<Windows::Media::Audio::AudioNodeEmitterDecayModel>(this->shim().CreateNatural(minGain, maxGain, unityGainDistance, cutoffDistance));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCustom(double minGain, double maxGain, void** decayModel) noexcept final
    {
        try
        {
            *decayModel = nullptr;
            typename D::abi_guard guard(this->shim());
            *decayModel = detach_from<Windows::Media::Audio::AudioNodeEmitterDecayModel>(this->shim().CreateCustom(minGain, maxGain));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterFactory> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterFactory>
{
    HRESULT __stdcall CreateAudioNodeEmitter(void* shape, void* decayModel, Windows::Media::Audio::AudioNodeEmitterSettings settings, void** emitter) noexcept final
    {
        try
        {
            *emitter = nullptr;
            typename D::abi_guard guard(this->shim());
            *emitter = detach_from<Windows::Media::Audio::AudioNodeEmitter>(this->shim().CreateAudioNodeEmitter(*reinterpret_cast<Windows::Media::Audio::AudioNodeEmitterShape const*>(&shape), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitterDecayModel const*>(&decayModel), *reinterpret_cast<Windows::Media::Audio::AudioNodeEmitterSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties>
{
    HRESULT __stdcall get_UnityGainDistance(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().UnityGainDistance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CutoffDistance(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CutoffDistance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterShape> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterShape>
{
    HRESULT __stdcall get_Kind(Windows::Media::Audio::AudioNodeEmitterShapeKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeEmitterShapeKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConeProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeEmitterConeProperties>(this->shim().ConeProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeEmitterShapeStatics> : produce_base<D, Windows::Media::Audio::IAudioNodeEmitterShapeStatics>
{
    HRESULT __stdcall CreateCone(double innerAngle, double outerAngle, double outerAngleGain, void** shape) noexcept final
    {
        try
        {
            *shape = nullptr;
            typename D::abi_guard guard(this->shim());
            *shape = detach_from<Windows::Media::Audio::AudioNodeEmitterShape>(this->shim().CreateCone(innerAngle, outerAngle, outerAngleGain));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateOmnidirectional(void** shape) noexcept final
    {
        try
        {
            *shape = nullptr;
            typename D::abi_guard guard(this->shim());
            *shape = detach_from<Windows::Media::Audio::AudioNodeEmitterShape>(this->shim().CreateOmnidirectional());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeListener> : produce_base<D, Windows::Media::Audio::IAudioNodeListener>
{
    HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Position(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::quaternion>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(Windows::Foundation::Numerics::quaternion value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpeedOfSound(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SpeedOfSound());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpeedOfSound(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpeedOfSound(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DopplerVelocity(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().DopplerVelocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DopplerVelocity(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DopplerVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioNodeWithListener> : produce_base<D, Windows::Media::Audio::IAudioNodeWithListener>
{
    HRESULT __stdcall put_Listener(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Listener(*reinterpret_cast<Windows::Media::Audio::AudioNodeListener const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Listener(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioNodeListener>(this->shim().Listener());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioStateMonitor> : produce_base<D, Windows::Media::Audio::IAudioStateMonitor>
{
    HRESULT __stdcall add_SoundLevelChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SoundLevelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::AudioStateMonitor, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SoundLevelChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SoundLevelChanged(*reinterpret_cast<event_token const*>(&token));
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
};

template <typename D>
struct produce<D, Windows::Media::Audio::IAudioStateMonitorStatics> : produce_base<D, Windows::Media::Audio::IAudioStateMonitorStatics>
{
    HRESULT __stdcall CreateForRenderMonitoring(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForRenderMonitoring());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForRenderMonitoringWithCategory(Windows::Media::Render::AudioRenderCategory category, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForRenderMonitoring(*reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForRenderMonitoringWithCategoryAndDeviceRole(Windows::Media::Render::AudioRenderCategory category, Windows::Media::Devices::AudioDeviceRole role, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForRenderMonitoring(*reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&category), *reinterpret_cast<Windows::Media::Devices::AudioDeviceRole const*>(&role)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForRenderMonitoringWithCategoryAndDeviceId(Windows::Media::Render::AudioRenderCategory category, HSTRING deviceId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForRenderMonitoringWithCategoryAndDeviceId(*reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&category), *reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForCaptureMonitoring(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForCaptureMonitoring());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForCaptureMonitoringWithCategory(Windows::Media::Capture::MediaCategory category, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForCaptureMonitoring(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForCaptureMonitoringWithCategoryAndDeviceRole(Windows::Media::Capture::MediaCategory category, Windows::Media::Devices::AudioDeviceRole role, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForCaptureMonitoring(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::Devices::AudioDeviceRole const*>(&role)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForCaptureMonitoringWithCategoryAndDeviceId(Windows::Media::Capture::MediaCategory category, HSTRING deviceId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Audio::AudioStateMonitor>(this->shim().CreateForCaptureMonitoringWithCategoryAndDeviceId(*reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ICreateAudioDeviceInputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioDeviceInputNodeResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Audio::AudioDeviceNodeCreationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioDeviceNodeCreationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceInputNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioDeviceInputNode>(this->shim().DeviceInputNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Audio::AudioDeviceNodeCreationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioDeviceNodeCreationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceOutputNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioDeviceOutputNode>(this->shim().DeviceOutputNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ICreateAudioFileInputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioFileInputNodeResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Audio::AudioFileNodeCreationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioFileNodeCreationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FileInputNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioFileInputNode>(this->shim().FileInputNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ICreateAudioFileOutputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateAudioFileOutputNodeResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Audio::AudioFileNodeCreationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioFileNodeCreationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FileOutputNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioFileOutputNode>(this->shim().FileOutputNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ICreateAudioGraphResult> : produce_base<D, Windows::Media::Audio::ICreateAudioGraphResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Audio::AudioGraphCreationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioGraphCreationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Graph(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::AudioGraph>(this->shim().Graph());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult> : produce_base<D, Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Audio::MediaSourceAudioInputNodeCreationStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::MediaSourceAudioInputNodeCreationStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Node(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::MediaSourceAudioInputNode>(this->shim().Node());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IEchoEffectDefinition> : produce_base<D, Windows::Media::Audio::IEchoEffectDefinition>
{
    HRESULT __stdcall put_WetDryMix(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetDryMix(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WetDryMix(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().WetDryMix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Feedback(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Feedback(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Feedback(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Feedback());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Delay(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Delay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Delay(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IEchoEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::IEchoEffectDefinitionFactory>
{
    HRESULT __stdcall Create(void* audioGraph, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::EchoEffectDefinition>(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IEqualizerBand> : produce_base<D, Windows::Media::Audio::IEqualizerBand>
{
    HRESULT __stdcall get_Bandwidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Bandwidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Bandwidth(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bandwidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrequencyCenter(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().FrequencyCenter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FrequencyCenter(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrequencyCenter(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Gain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Gain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Gain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IEqualizerEffectDefinition> : produce_base<D, Windows::Media::Audio::IEqualizerEffectDefinition>
{
    HRESULT __stdcall get_Bands(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Audio::EqualizerBand>>(this->shim().Bands());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IEqualizerEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::IEqualizerEffectDefinitionFactory>
{
    HRESULT __stdcall Create(void* audioGraph, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::EqualizerEffectDefinition>(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs> : produce_base<D, Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs>
{
    HRESULT __stdcall get_RequiredSamples(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RequiredSamples());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ILimiterEffectDefinition> : produce_base<D, Windows::Media::Audio::ILimiterEffectDefinition>
{
    HRESULT __stdcall put_Release(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Release(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Release(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Release());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Loudness(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Loudness(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Loudness(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Loudness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::ILimiterEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::ILimiterEffectDefinitionFactory>
{
    HRESULT __stdcall Create(void* audioGraph, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::LimiterEffectDefinition>(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IMediaSourceAudioInputNode> : produce_base<D, Windows::Media::Audio::IMediaSourceAudioInputNode>
{
    HRESULT __stdcall put_PlaybackSpeedFactor(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaybackSpeedFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaybackSpeedFactor(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().PlaybackSpeedFactor());
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

    HRESULT __stdcall Seek(Windows::Foundation::TimeSpan position) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seek(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&position));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().EndTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LoopCount(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<int32_t>>(this->shim().LoopCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LoopCount(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoopCount(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
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

    HRESULT __stdcall get_MediaSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Core::MediaSource>(this->shim().MediaSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MediaSourceCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MediaSourceCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Audio::MediaSourceAudioInputNode, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MediaSourceCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MediaSourceCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IReverbEffectDefinition> : produce_base<D, Windows::Media::Audio::IReverbEffectDefinition>
{
    HRESULT __stdcall put_WetDryMix(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetDryMix(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WetDryMix(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().WetDryMix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReflectionsDelay(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReflectionsDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReflectionsDelay(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ReflectionsDelay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReverbDelay(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReverbDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReverbDelay(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().ReverbDelay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RearDelay(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RearDelay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RearDelay(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().RearDelay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PositionLeft(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionLeft(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PositionLeft(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().PositionLeft());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PositionRight(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionRight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PositionRight(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().PositionRight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PositionMatrixLeft(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionMatrixLeft(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PositionMatrixLeft(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().PositionMatrixLeft());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PositionMatrixRight(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PositionMatrixRight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PositionMatrixRight(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().PositionMatrixRight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EarlyDiffusion(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EarlyDiffusion(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EarlyDiffusion(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().EarlyDiffusion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LateDiffusion(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LateDiffusion(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LateDiffusion(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().LateDiffusion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LowEQGain(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LowEQGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LowEQGain(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().LowEQGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LowEQCutoff(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LowEQCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LowEQCutoff(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().LowEQCutoff());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HighEQGain(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighEQGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HighEQGain(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().HighEQGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HighEQCutoff(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighEQCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HighEQCutoff(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().HighEQCutoff());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoomFilterFreq(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomFilterFreq(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoomFilterFreq(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RoomFilterFreq());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoomFilterMain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomFilterMain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoomFilterMain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RoomFilterMain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoomFilterHF(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomFilterHF(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoomFilterHF(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RoomFilterHF());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReflectionsGain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReflectionsGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReflectionsGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ReflectionsGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReverbGain(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReverbGain(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReverbGain(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ReverbGain());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DecayTime(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DecayTime(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DecayTime(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DecayTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Density(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Density(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Density(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Density());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoomSize(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoomSize(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoomSize(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RoomSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisableLateField(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableLateField(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisableLateField(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DisableLateField());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Audio::IReverbEffectDefinitionFactory> : produce_base<D, Windows::Media::Audio::IReverbEffectDefinitionFactory>
{
    HRESULT __stdcall Create(void* audioGraph, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Audio::ReverbEffectDefinition>(this->shim().Create(*reinterpret_cast<Windows::Media::Audio::AudioGraph const*>(&audioGraph)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Audio {

inline Windows::Foundation::IAsyncOperation<Windows::Media::Audio::CreateAudioGraphResult> AudioGraph::CreateAsync(Windows::Media::Audio::AudioGraphSettings const& settings)
{
    return get_activation_factory<AudioGraph, Windows::Media::Audio::IAudioGraphStatics>().CreateAsync(settings);
}

inline AudioGraphSettings::AudioGraphSettings(Windows::Media::Render::AudioRenderCategory const& audioRenderCategory) :
    AudioGraphSettings(get_activation_factory<AudioGraphSettings, Windows::Media::Audio::IAudioGraphSettingsFactory>().Create(audioRenderCategory))
{}

inline AudioNodeEmitter::AudioNodeEmitter() :
    AudioNodeEmitter(get_activation_factory<AudioNodeEmitter>().ActivateInstance<AudioNodeEmitter>())
{}

inline AudioNodeEmitter::AudioNodeEmitter(Windows::Media::Audio::AudioNodeEmitterShape const& shape, Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, Windows::Media::Audio::AudioNodeEmitterSettings const& settings) :
    AudioNodeEmitter(get_activation_factory<AudioNodeEmitter, Windows::Media::Audio::IAudioNodeEmitterFactory>().CreateAudioNodeEmitter(shape, decayModel, settings))
{}

inline Windows::Media::Audio::AudioNodeEmitterDecayModel AudioNodeEmitterDecayModel::CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance)
{
    return get_activation_factory<AudioNodeEmitterDecayModel, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>().CreateNatural(minGain, maxGain, unityGainDistance, cutoffDistance);
}

inline Windows::Media::Audio::AudioNodeEmitterDecayModel AudioNodeEmitterDecayModel::CreateCustom(double minGain, double maxGain)
{
    return get_activation_factory<AudioNodeEmitterDecayModel, Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics>().CreateCustom(minGain, maxGain);
}

inline Windows::Media::Audio::AudioNodeEmitterShape AudioNodeEmitterShape::CreateCone(double innerAngle, double outerAngle, double outerAngleGain)
{
    return get_activation_factory<AudioNodeEmitterShape, Windows::Media::Audio::IAudioNodeEmitterShapeStatics>().CreateCone(innerAngle, outerAngle, outerAngleGain);
}

inline Windows::Media::Audio::AudioNodeEmitterShape AudioNodeEmitterShape::CreateOmnidirectional()
{
    return get_activation_factory<AudioNodeEmitterShape, Windows::Media::Audio::IAudioNodeEmitterShapeStatics>().CreateOmnidirectional();
}

inline AudioNodeListener::AudioNodeListener() :
    AudioNodeListener(get_activation_factory<AudioNodeListener>().ActivateInstance<AudioNodeListener>())
{}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForRenderMonitoring()
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForRenderMonitoring();
}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category)
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForRenderMonitoring(category);
}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForRenderMonitoring(Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role)
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForRenderMonitoring(category, role);
}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForRenderMonitoringWithCategoryAndDeviceId(Windows::Media::Render::AudioRenderCategory const& category, param::hstring const& deviceId)
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForRenderMonitoringWithCategoryAndDeviceId(category, deviceId);
}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForCaptureMonitoring()
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForCaptureMonitoring();
}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category)
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForCaptureMonitoring(category);
}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForCaptureMonitoring(Windows::Media::Capture::MediaCategory const& category, Windows::Media::Devices::AudioDeviceRole const& role)
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForCaptureMonitoring(category, role);
}

inline Windows::Media::Audio::AudioStateMonitor AudioStateMonitor::CreateForCaptureMonitoringWithCategoryAndDeviceId(Windows::Media::Capture::MediaCategory const& category, param::hstring const& deviceId)
{
    return get_activation_factory<AudioStateMonitor, Windows::Media::Audio::IAudioStateMonitorStatics>().CreateForCaptureMonitoringWithCategoryAndDeviceId(category, deviceId);
}

inline EchoEffectDefinition::EchoEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    EchoEffectDefinition(get_activation_factory<EchoEffectDefinition, Windows::Media::Audio::IEchoEffectDefinitionFactory>().Create(audioGraph))
{}

inline EqualizerEffectDefinition::EqualizerEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    EqualizerEffectDefinition(get_activation_factory<EqualizerEffectDefinition, Windows::Media::Audio::IEqualizerEffectDefinitionFactory>().Create(audioGraph))
{}

inline LimiterEffectDefinition::LimiterEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    LimiterEffectDefinition(get_activation_factory<LimiterEffectDefinition, Windows::Media::Audio::ILimiterEffectDefinitionFactory>().Create(audioGraph))
{}

inline ReverbEffectDefinition::ReverbEffectDefinition(Windows::Media::Audio::AudioGraph const& audioGraph) :
    ReverbEffectDefinition(get_activation_factory<ReverbEffectDefinition, Windows::Media::Audio::IReverbEffectDefinitionFactory>().Create(audioGraph))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Audio::IAudioDeviceInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioDeviceInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioDeviceOutputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioDeviceOutputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioFileInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioFileInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioFileOutputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioFileOutputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioFrameInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioFrameInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioFrameOutputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioFrameOutputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraph> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraph> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraph2> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraph2> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraph3> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraph3> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphConnection> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraphConnection> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphSettings> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraphSettings> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphSettings2> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraphSettings2> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphSettingsFactory> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraphSettingsFactory> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphStatics> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraphStatics> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioInputNode2> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioInputNode2> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitter> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitter> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitter2> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitter2> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterFactory> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitterFactory> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterShape> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitterShape> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeEmitterShapeStatics> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeEmitterShapeStatics> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeListener> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeListener> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioNodeWithListener> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioNodeWithListener> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioStateMonitor> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioStateMonitor> {};
template<> struct hash<winrt::Windows::Media::Audio::IAudioStateMonitorStatics> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IAudioStateMonitorStatics> {};
template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::ICreateAudioGraphResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ICreateAudioGraphResult> {};
template<> struct hash<winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::IEchoEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IEchoEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Audio::IEchoEffectDefinitionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IEchoEffectDefinitionFactory> {};
template<> struct hash<winrt::Windows::Media::Audio::IEqualizerBand> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IEqualizerBand> {};
template<> struct hash<winrt::Windows::Media::Audio::IEqualizerEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IEqualizerEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Audio::IEqualizerEffectDefinitionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IEqualizerEffectDefinitionFactory> {};
template<> struct hash<winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Audio::ILimiterEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ILimiterEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Audio::ILimiterEffectDefinitionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ILimiterEffectDefinitionFactory> {};
template<> struct hash<winrt::Windows::Media::Audio::IMediaSourceAudioInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IMediaSourceAudioInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::IReverbEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IReverbEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Audio::IReverbEffectDefinitionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Audio::IReverbEffectDefinitionFactory> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioDeviceInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioDeviceInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioDeviceOutputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioDeviceOutputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioFileInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioFileInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioFileOutputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioFileOutputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioFrameCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioFrameCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioFrameInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioFrameInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioFrameOutputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioFrameOutputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioGraph> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioGraph> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioGraphBatchUpdater> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioGraphBatchUpdater> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioGraphConnection> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioGraphConnection> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioGraphSettings> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioGraphSettings> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitter> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioNodeEmitter> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterConeProperties> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioNodeEmitterConeProperties> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioNodeEmitterNaturalDecayModelProperties> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioNodeEmitterShape> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioNodeEmitterShape> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioNodeListener> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioNodeListener> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioStateMonitor> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioStateMonitor> {};
template<> struct hash<winrt::Windows::Media::Audio::AudioSubmixNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::AudioSubmixNode> {};
template<> struct hash<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::CreateAudioDeviceInputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::CreateAudioFileInputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::CreateAudioFileInputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::CreateAudioFileOutputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::CreateAudioFileOutputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::CreateAudioGraphResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::CreateAudioGraphResult> {};
template<> struct hash<winrt::Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult> : winrt::impl::hash_base<winrt::Windows::Media::Audio::CreateMediaSourceAudioInputNodeResult> {};
template<> struct hash<winrt::Windows::Media::Audio::EchoEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::EchoEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Audio::EqualizerBand> : winrt::impl::hash_base<winrt::Windows::Media::Audio::EqualizerBand> {};
template<> struct hash<winrt::Windows::Media::Audio::EqualizerEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::EqualizerEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Audio::LimiterEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::LimiterEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Audio::MediaSourceAudioInputNode> : winrt::impl::hash_base<winrt::Windows::Media::Audio::MediaSourceAudioInputNode> {};
template<> struct hash<winrt::Windows::Media::Audio::ReverbEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Audio::ReverbEffectDefinition> {};

}

WINRT_WARNING_POP
