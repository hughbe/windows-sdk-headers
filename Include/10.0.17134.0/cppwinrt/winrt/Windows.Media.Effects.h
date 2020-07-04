// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Editing.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Media.Playback.2.h"
#include "winrt/impl/Windows.Media.Render.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.Media.Effects.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::AudioCaptureEffectsChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioCaptureEffectsManager)->add_AudioCaptureEffectsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Effects::IAudioCaptureEffectsManager> consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::AudioCaptureEffectsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Effects::IAudioCaptureEffectsManager>(this, &abi_t<Windows::Media::Effects::IAudioCaptureEffectsManager>::remove_AudioCaptureEffectsChanged, AudioCaptureEffectsChanged(handler));
}

template <typename D> void consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::AudioCaptureEffectsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioCaptureEffectsManager)->remove_AudioCaptureEffectsChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> consume_Windows_Media_Effects_IAudioCaptureEffectsManager<D>::GetAudioCaptureEffects() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> effects{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioCaptureEffectsManager)->GetAudioCaptureEffects(put_abi(effects)));
    return effects;
}

template <typename D> Windows::Media::Effects::AudioEffectType consume_Windows_Media_Effects_IAudioEffect<D>::AudioEffectType() const
{
    Windows::Media::Effects::AudioEffectType value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffect)->get_AudioEffectType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Effects_IAudioEffectDefinition<D>::ActivatableClassId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinition)->get_ActivatableClassId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Effects_IAudioEffectDefinition<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinition)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioEffectDefinition consume_Windows_Media_Effects_IAudioEffectDefinitionFactory<D>::Create(param::hstring const& activatableClassId) const
{
    Windows::Media::Effects::AudioEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinitionFactory)->Create(get_abi(activatableClassId), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioEffectDefinition consume_Windows_Media_Effects_IAudioEffectDefinitionFactory<D>::CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const
{
    Windows::Media::Effects::AudioEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectDefinitionFactory)->CreateWithProperties(get_abi(activatableClassId), get_abi(props), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioRenderEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category) const
{
    Windows::Media::Effects::AudioRenderEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioRenderEffectsManager(get_abi(deviceId), get_abi(category), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioRenderEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::AudioProcessing const& mode) const
{
    Windows::Media::Effects::AudioRenderEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioRenderEffectsManagerWithMode(get_abi(deviceId), get_abi(category), get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioCaptureEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category) const
{
    Windows::Media::Effects::AudioCaptureEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioCaptureEffectsManager(get_abi(deviceId), get_abi(category), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::AudioCaptureEffectsManager consume_Windows_Media_Effects_IAudioEffectsManagerStatics<D>::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category, Windows::Media::AudioProcessing const& mode) const
{
    Windows::Media::Effects::AudioCaptureEffectsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioEffectsManagerStatics)->CreateAudioCaptureEffectsManagerWithMode(get_abi(deviceId), get_abi(category), get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::AudioRenderEffectsChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager)->add_AudioRenderEffectsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Effects::IAudioRenderEffectsManager> consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::AudioRenderEffectsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Effects::IAudioRenderEffectsManager>(this, &abi_t<Windows::Media::Effects::IAudioRenderEffectsManager>::remove_AudioRenderEffectsChanged, AudioRenderEffectsChanged(handler));
}

template <typename D> void consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::AudioRenderEffectsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager)->remove_AudioRenderEffectsChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> consume_Windows_Media_Effects_IAudioRenderEffectsManager<D>::GetAudioRenderEffects() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect> effects{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager)->GetAudioRenderEffects(put_abi(effects)));
    return effects;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamWithContentType consume_Windows_Media_Effects_IAudioRenderEffectsManager2<D>::EffectsProviderThumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager2)->get_EffectsProviderThumbnail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Effects_IAudioRenderEffectsManager2<D>::EffectsProviderSettingsLabel() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager2)->get_EffectsProviderSettingsLabel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IAudioRenderEffectsManager2<D>::ShowSettingsUI() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IAudioRenderEffectsManager2)->ShowSettingsUI());
}

template <typename D> bool consume_Windows_Media_Effects_IBasicAudioEffect<D>::UseInputFrameForOutput() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->get_UseInputFrameForOutput(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::AudioEncodingProperties> consume_Windows_Media_Effects_IBasicAudioEffect<D>::SupportedEncodingProperties() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::AudioEncodingProperties> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->get_SupportedEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::SetEncodingProperties(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->SetEncodingProperties(get_abi(encodingProperties)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::ProcessFrame(Windows::Media::Effects::ProcessAudioFrameContext const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->ProcessFrame(get_abi(context)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->Close(get_abi(reason)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicAudioEffect<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicAudioEffect)->DiscardQueuedFrames());
}

template <typename D> bool consume_Windows_Media_Effects_IBasicVideoEffect<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_IsReadOnly(&value));
    return value;
}

template <typename D> Windows::Media::Effects::MediaMemoryTypes consume_Windows_Media_Effects_IBasicVideoEffect<D>::SupportedMemoryTypes() const
{
    Windows::Media::Effects::MediaMemoryTypes value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_SupportedMemoryTypes(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Effects_IBasicVideoEffect<D>::TimeIndependent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_TimeIndependent(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::VideoEncodingProperties> consume_Windows_Media_Effects_IBasicVideoEffect<D>::SupportedEncodingProperties() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::VideoEncodingProperties> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->get_SupportedEncodingProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::SetEncodingProperties(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->SetEncodingProperties(get_abi(encodingProperties), get_abi(device)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::ProcessFrame(Windows::Media::Effects::ProcessVideoFrameContext const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->ProcessFrame(get_abi(context)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->Close(get_abi(reason)));
}

template <typename D> void consume_Windows_Media_Effects_IBasicVideoEffect<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IBasicVideoEffect)->DiscardQueuedFrames());
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::SurfacesToOverlay() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->get_SurfacesToOverlay(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::BackgroundFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->get_BackgroundFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::OutputFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->get_OutputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Editing::MediaOverlay consume_Windows_Media_Effects_ICompositeVideoFrameContext<D>::GetOverlayForSurface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surfaceToOverlay) const
{
    Windows::Media::Editing::MediaOverlay value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::ICompositeVideoFrameContext)->GetOverlayForSurface(get_abi(surfaceToOverlay), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Effects_IProcessAudioFrameContext<D>::InputFrame() const
{
    Windows::Media::AudioFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessAudioFrameContext)->get_InputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::AudioFrame consume_Windows_Media_Effects_IProcessAudioFrameContext<D>::OutputFrame() const
{
    Windows::Media::AudioFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessAudioFrameContext)->get_OutputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_IProcessVideoFrameContext<D>::InputFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessVideoFrameContext)->get_InputFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Effects_IProcessVideoFrameContext<D>::OutputFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IProcessVideoFrameContext)->get_OutputFrame(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Effects_IVideoCompositor<D>::TimeIndependent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->get_TimeIndependent(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::SetEncodingProperties(Windows::Media::MediaProperties::VideoEncodingProperties const& backgroundProperties, Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->SetEncodingProperties(get_abi(backgroundProperties), get_abi(device)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::CompositeFrame(Windows::Media::Effects::CompositeVideoFrameContext const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->CompositeFrame(get_abi(context)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::Close(Windows::Media::Effects::MediaEffectClosedReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->Close(get_abi(reason)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoCompositor<D>::DiscardQueuedFrames() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositor)->DiscardQueuedFrames());
}

template <typename D> hstring consume_Windows_Media_Effects_IVideoCompositorDefinition<D>::ActivatableClassId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinition)->get_ActivatableClassId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Effects_IVideoCompositorDefinition<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinition)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoCompositorDefinition consume_Windows_Media_Effects_IVideoCompositorDefinitionFactory<D>::Create(param::hstring const& activatableClassId) const
{
    Windows::Media::Effects::VideoCompositorDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinitionFactory)->Create(get_abi(activatableClassId), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoCompositorDefinition consume_Windows_Media_Effects_IVideoCompositorDefinitionFactory<D>::CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const
{
    Windows::Media::Effects::VideoCompositorDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoCompositorDefinitionFactory)->CreateWithProperties(get_abi(activatableClassId), get_abi(props), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Effects_IVideoEffectDefinition<D>::ActivatableClassId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinition)->get_ActivatableClassId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Effects_IVideoEffectDefinition<D>::Properties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinition)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoEffectDefinition consume_Windows_Media_Effects_IVideoEffectDefinitionFactory<D>::Create(param::hstring const& activatableClassId) const
{
    Windows::Media::Effects::VideoEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinitionFactory)->Create(get_abi(activatableClassId), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoEffectDefinition consume_Windows_Media_Effects_IVideoEffectDefinitionFactory<D>::CreateWithProperties(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) const
{
    Windows::Media::Effects::VideoEffectDefinition value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoEffectDefinitionFactory)->CreateWithProperties(get_abi(activatableClassId), get_abi(props), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::PaddingColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_PaddingColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::PaddingColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_PaddingColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::OutputSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_OutputSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::OutputSize(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_OutputSize(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::CropRectangle() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_CropRectangle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::CropRectangle(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_CropRectangle(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::MediaRotation consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Rotation() const
{
    Windows::Media::MediaProperties::MediaRotation value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_Rotation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Rotation(Windows::Media::MediaProperties::MediaRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_Rotation(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::MediaMirroringOptions consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Mirror() const
{
    Windows::Media::MediaProperties::MediaMirroringOptions value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_Mirror(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::Mirror(Windows::Media::MediaProperties::MediaMirroringOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_Mirror(get_abi(value)));
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::ProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->put_ProcessingAlgorithm(get_abi(value)));
}

template <typename D> Windows::Media::Transcoding::MediaVideoProcessingAlgorithm consume_Windows_Media_Effects_IVideoTransformEffectDefinition<D>::ProcessingAlgorithm() const
{
    Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition)->get_ProcessingAlgorithm(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Effects::VideoTransformSphericalProjection consume_Windows_Media_Effects_IVideoTransformEffectDefinition2<D>::SphericalProjection() const
{
    Windows::Media::Effects::VideoTransformSphericalProjection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformEffectDefinition2)->get_SphericalProjection(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->put_IsEnabled(value));
}

template <typename D> Windows::Media::MediaProperties::SphericalVideoFrameFormat consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::FrameFormat() const
{
    Windows::Media::MediaProperties::SphericalVideoFrameFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->get_FrameFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->put_FrameFormat(get_abi(value)));
}

template <typename D> Windows::Media::Playback::SphericalVideoProjectionMode consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::ProjectionMode() const
{
    Windows::Media::Playback::SphericalVideoProjectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->get_ProjectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->put_ProjectionMode(get_abi(value)));
}

template <typename D> double consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::HorizontalFieldOfViewInDegrees() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->get_HorizontalFieldOfViewInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::HorizontalFieldOfViewInDegrees(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->put_HorizontalFieldOfViewInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::ViewOrientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->get_ViewOrientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Effects_IVideoTransformSphericalProjection<D>::ViewOrientation(Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Effects::IVideoTransformSphericalProjection)->put_ViewOrientation(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioCaptureEffectsManager> : produce_base<D, Windows::Media::Effects::IAudioCaptureEffectsManager>
{
    HRESULT __stdcall add_AudioCaptureEffectsChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AudioCaptureEffectsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioCaptureEffectsManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioCaptureEffectsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioCaptureEffectsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAudioCaptureEffects(void** effects) noexcept final
    {
        try
        {
            *effects = nullptr;
            typename D::abi_guard guard(this->shim());
            *effects = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect>>(this->shim().GetAudioCaptureEffects());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioEffect> : produce_base<D, Windows::Media::Effects::IAudioEffect>
{
    HRESULT __stdcall get_AudioEffectType(Windows::Media::Effects::AudioEffectType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::AudioEffectType>(this->shim().AudioEffectType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioEffectDefinition> : produce_base<D, Windows::Media::Effects::IAudioEffectDefinition>
{
    HRESULT __stdcall get_ActivatableClassId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActivatableClassId());
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
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioEffectDefinitionFactory> : produce_base<D, Windows::Media::Effects::IAudioEffectDefinitionFactory>
{
    HRESULT __stdcall Create(HSTRING activatableClassId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::AudioEffectDefinition>(this->shim().Create(*reinterpret_cast<hstring const*>(&activatableClassId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProperties(HSTRING activatableClassId, void* props, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::AudioEffectDefinition>(this->shim().CreateWithProperties(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&props)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioEffectsManagerStatics> : produce_base<D, Windows::Media::Effects::IAudioEffectsManagerStatics>
{
    HRESULT __stdcall CreateAudioRenderEffectsManager(HSTRING deviceId, Windows::Media::Render::AudioRenderCategory category, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::AudioRenderEffectsManager>(this->shim().CreateAudioRenderEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAudioRenderEffectsManagerWithMode(HSTRING deviceId, Windows::Media::Render::AudioRenderCategory category, Windows::Media::AudioProcessing mode, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::AudioRenderEffectsManager>(this->shim().CreateAudioRenderEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Render::AudioRenderCategory const*>(&category), *reinterpret_cast<Windows::Media::AudioProcessing const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAudioCaptureEffectsManager(HSTRING deviceId, Windows::Media::Capture::MediaCategory category, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::AudioCaptureEffectsManager>(this->shim().CreateAudioCaptureEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAudioCaptureEffectsManagerWithMode(HSTRING deviceId, Windows::Media::Capture::MediaCategory category, Windows::Media::AudioProcessing mode, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::AudioCaptureEffectsManager>(this->shim().CreateAudioCaptureEffectsManager(*reinterpret_cast<hstring const*>(&deviceId), *reinterpret_cast<Windows::Media::Capture::MediaCategory const*>(&category), *reinterpret_cast<Windows::Media::AudioProcessing const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioRenderEffectsManager> : produce_base<D, Windows::Media::Effects::IAudioRenderEffectsManager>
{
    HRESULT __stdcall add_AudioRenderEffectsChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AudioRenderEffectsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Effects::AudioRenderEffectsManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AudioRenderEffectsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AudioRenderEffectsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAudioRenderEffects(void** effects) noexcept final
    {
        try
        {
            *effects = nullptr;
            typename D::abi_guard guard(this->shim());
            *effects = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::Effects::AudioEffect>>(this->shim().GetAudioRenderEffects());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IAudioRenderEffectsManager2> : produce_base<D, Windows::Media::Effects::IAudioRenderEffectsManager2>
{
    HRESULT __stdcall get_EffectsProviderThumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamWithContentType>(this->shim().EffectsProviderThumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EffectsProviderSettingsLabel(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EffectsProviderSettingsLabel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowSettingsUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowSettingsUI();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IBasicAudioEffect> : produce_base<D, Windows::Media::Effects::IBasicAudioEffect>
{
    HRESULT __stdcall get_UseInputFrameForOutput(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UseInputFrameForOutput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedEncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::AudioEncodingProperties>>(this->shim().SupportedEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingProperties(void* encodingProperties) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&encodingProperties));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessFrame(void* context) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessFrame(*reinterpret_cast<Windows::Media::Effects::ProcessAudioFrameContext const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Close(Windows::Media::Effects::MediaEffectClosedReason reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(*reinterpret_cast<Windows::Media::Effects::MediaEffectClosedReason const*>(&reason));
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
};

template <typename D>
struct produce<D, Windows::Media::Effects::IBasicVideoEffect> : produce_base<D, Windows::Media::Effects::IBasicVideoEffect>
{
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

    HRESULT __stdcall get_SupportedMemoryTypes(Windows::Media::Effects::MediaMemoryTypes* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::MediaMemoryTypes>(this->shim().SupportedMemoryTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimeIndependent(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().TimeIndependent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedEncodingProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Media::MediaProperties::VideoEncodingProperties>>(this->shim().SupportedEncodingProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingProperties(void* encodingProperties, void* device) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingProperties const*>(&encodingProperties), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessFrame(void* context) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessFrame(*reinterpret_cast<Windows::Media::Effects::ProcessVideoFrameContext const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Close(Windows::Media::Effects::MediaEffectClosedReason reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(*reinterpret_cast<Windows::Media::Effects::MediaEffectClosedReason const*>(&reason));
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
};

template <typename D>
struct produce<D, Windows::Media::Effects::ICompositeVideoFrameContext> : produce_base<D, Windows::Media::Effects::ICompositeVideoFrameContext>
{
    HRESULT __stdcall get_SurfacesToOverlay(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>>(this->shim().SurfacesToOverlay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().BackgroundFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().OutputFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetOverlayForSurface(void* surfaceToOverlay, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Editing::MediaOverlay>(this->shim().GetOverlayForSurface(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surfaceToOverlay)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IProcessAudioFrameContext> : produce_base<D, Windows::Media::Effects::IProcessAudioFrameContext>
{
    HRESULT __stdcall get_InputFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioFrame>(this->shim().InputFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::AudioFrame>(this->shim().OutputFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IProcessVideoFrameContext> : produce_base<D, Windows::Media::Effects::IProcessVideoFrameContext>
{
    HRESULT __stdcall get_InputFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().InputFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().OutputFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoCompositor> : produce_base<D, Windows::Media::Effects::IVideoCompositor>
{
    HRESULT __stdcall get_TimeIndependent(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().TimeIndependent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetEncodingProperties(void* backgroundProperties, void* device) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEncodingProperties(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingProperties const*>(&backgroundProperties), *reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CompositeFrame(void* context) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositeFrame(*reinterpret_cast<Windows::Media::Effects::CompositeVideoFrameContext const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Close(Windows::Media::Effects::MediaEffectClosedReason reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close(*reinterpret_cast<Windows::Media::Effects::MediaEffectClosedReason const*>(&reason));
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
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoCompositorDefinition> : produce_base<D, Windows::Media::Effects::IVideoCompositorDefinition>
{
    HRESULT __stdcall get_ActivatableClassId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActivatableClassId());
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
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoCompositorDefinitionFactory> : produce_base<D, Windows::Media::Effects::IVideoCompositorDefinitionFactory>
{
    HRESULT __stdcall Create(HSTRING activatableClassId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::VideoCompositorDefinition>(this->shim().Create(*reinterpret_cast<hstring const*>(&activatableClassId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProperties(HSTRING activatableClassId, void* props, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::VideoCompositorDefinition>(this->shim().CreateWithProperties(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&props)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoEffectDefinition> : produce_base<D, Windows::Media::Effects::IVideoEffectDefinition>
{
    HRESULT __stdcall get_ActivatableClassId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActivatableClassId());
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
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoEffectDefinitionFactory> : produce_base<D, Windows::Media::Effects::IVideoEffectDefinitionFactory>
{
    HRESULT __stdcall Create(HSTRING activatableClassId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::VideoEffectDefinition>(this->shim().Create(*reinterpret_cast<hstring const*>(&activatableClassId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProperties(HSTRING activatableClassId, void* props, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::VideoEffectDefinition>(this->shim().CreateWithProperties(*reinterpret_cast<hstring const*>(&activatableClassId), *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&props)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoTransformEffectDefinition> : produce_base<D, Windows::Media::Effects::IVideoTransformEffectDefinition>
{
    HRESULT __stdcall get_PaddingColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PaddingColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PaddingColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PaddingColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutputSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().OutputSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OutputSize(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OutputSize(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CropRectangle(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().CropRectangle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CropRectangle(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CropRectangle(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(Windows::Media::MediaProperties::MediaRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaRotation>(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Rotation(Windows::Media::MediaProperties::MediaRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotation(*reinterpret_cast<Windows::Media::MediaProperties::MediaRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Mirror(Windows::Media::MediaProperties::MediaMirroringOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::MediaMirroringOptions>(this->shim().Mirror());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mirror(Windows::Media::MediaProperties::MediaMirroringOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mirror(*reinterpret_cast<Windows::Media::MediaProperties::MediaMirroringOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessingAlgorithm(*reinterpret_cast<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm>(this->shim().ProcessingAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoTransformEffectDefinition2> : produce_base<D, Windows::Media::Effects::IVideoTransformEffectDefinition2>
{
    HRESULT __stdcall get_SphericalProjection(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Effects::VideoTransformSphericalProjection>(this->shim().SphericalProjection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Effects::IVideoTransformSphericalProjection> : produce_base<D, Windows::Media::Effects::IVideoTransformSphericalProjection>
{
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

    HRESULT __stdcall get_FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::MediaProperties::SphericalVideoFrameFormat>(this->shim().FrameFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FrameFormat(Windows::Media::MediaProperties::SphericalVideoFrameFormat value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameFormat(*reinterpret_cast<Windows::Media::MediaProperties::SphericalVideoFrameFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::SphericalVideoProjectionMode>(this->shim().ProjectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProjectionMode(Windows::Media::Playback::SphericalVideoProjectionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProjectionMode(*reinterpret_cast<Windows::Media::Playback::SphericalVideoProjectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalFieldOfViewInDegrees(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalFieldOfViewInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalFieldOfViewInDegrees(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalFieldOfViewInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewOrientation(Windows::Foundation::Numerics::quaternion* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::quaternion>(this->shim().ViewOrientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ViewOrientation(Windows::Foundation::Numerics::quaternion value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewOrientation(*reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

inline AudioEffectDefinition::AudioEffectDefinition(param::hstring const& activatableClassId) :
    AudioEffectDefinition(get_activation_factory<AudioEffectDefinition, Windows::Media::Effects::IAudioEffectDefinitionFactory>().Create(activatableClassId))
{}

inline AudioEffectDefinition::AudioEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) :
    AudioEffectDefinition(get_activation_factory<AudioEffectDefinition, Windows::Media::Effects::IAudioEffectDefinitionFactory>().CreateWithProperties(activatableClassId, props))
{}

inline Windows::Media::Effects::AudioRenderEffectsManager AudioEffectsManager::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioRenderEffectsManager(deviceId, category);
}

inline Windows::Media::Effects::AudioRenderEffectsManager AudioEffectsManager::CreateAudioRenderEffectsManager(param::hstring const& deviceId, Windows::Media::Render::AudioRenderCategory const& category, Windows::Media::AudioProcessing const& mode)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioRenderEffectsManager(deviceId, category, mode);
}

inline Windows::Media::Effects::AudioCaptureEffectsManager AudioEffectsManager::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioCaptureEffectsManager(deviceId, category);
}

inline Windows::Media::Effects::AudioCaptureEffectsManager AudioEffectsManager::CreateAudioCaptureEffectsManager(param::hstring const& deviceId, Windows::Media::Capture::MediaCategory const& category, Windows::Media::AudioProcessing const& mode)
{
    return get_activation_factory<AudioEffectsManager, Windows::Media::Effects::IAudioEffectsManagerStatics>().CreateAudioCaptureEffectsManager(deviceId, category, mode);
}

inline VideoCompositorDefinition::VideoCompositorDefinition(param::hstring const& activatableClassId) :
    VideoCompositorDefinition(get_activation_factory<VideoCompositorDefinition, Windows::Media::Effects::IVideoCompositorDefinitionFactory>().Create(activatableClassId))
{}

inline VideoCompositorDefinition::VideoCompositorDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) :
    VideoCompositorDefinition(get_activation_factory<VideoCompositorDefinition, Windows::Media::Effects::IVideoCompositorDefinitionFactory>().CreateWithProperties(activatableClassId, props))
{}

inline VideoEffectDefinition::VideoEffectDefinition(param::hstring const& activatableClassId) :
    VideoEffectDefinition(get_activation_factory<VideoEffectDefinition, Windows::Media::Effects::IVideoEffectDefinitionFactory>().Create(activatableClassId))
{}

inline VideoEffectDefinition::VideoEffectDefinition(param::hstring const& activatableClassId, Windows::Foundation::Collections::IPropertySet const& props) :
    VideoEffectDefinition(get_activation_factory<VideoEffectDefinition, Windows::Media::Effects::IVideoEffectDefinitionFactory>().CreateWithProperties(activatableClassId, props))
{}

inline VideoTransformEffectDefinition::VideoTransformEffectDefinition() :
    VideoTransformEffectDefinition(get_activation_factory<VideoTransformEffectDefinition>().ActivateInstance<VideoTransformEffectDefinition>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Effects::IAudioCaptureEffectsManager> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IAudioCaptureEffectsManager> {};
template<> struct hash<winrt::Windows::Media::Effects::IAudioEffect> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IAudioEffect> {};
template<> struct hash<winrt::Windows::Media::Effects::IAudioEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IAudioEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::IAudioEffectDefinitionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IAudioEffectDefinitionFactory> {};
template<> struct hash<winrt::Windows::Media::Effects::IAudioEffectsManagerStatics> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IAudioEffectsManagerStatics> {};
template<> struct hash<winrt::Windows::Media::Effects::IAudioRenderEffectsManager> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IAudioRenderEffectsManager> {};
template<> struct hash<winrt::Windows::Media::Effects::IAudioRenderEffectsManager2> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IAudioRenderEffectsManager2> {};
template<> struct hash<winrt::Windows::Media::Effects::IBasicAudioEffect> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IBasicAudioEffect> {};
template<> struct hash<winrt::Windows::Media::Effects::IBasicVideoEffect> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IBasicVideoEffect> {};
template<> struct hash<winrt::Windows::Media::Effects::ICompositeVideoFrameContext> : winrt::impl::hash_base<winrt::Windows::Media::Effects::ICompositeVideoFrameContext> {};
template<> struct hash<winrt::Windows::Media::Effects::IProcessAudioFrameContext> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IProcessAudioFrameContext> {};
template<> struct hash<winrt::Windows::Media::Effects::IProcessVideoFrameContext> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IProcessVideoFrameContext> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoCompositor> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoCompositor> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoCompositorDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoCompositorDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoCompositorDefinitionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoCompositorDefinitionFactory> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoEffectDefinitionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoEffectDefinitionFactory> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoTransformEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoTransformEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoTransformEffectDefinition2> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoTransformEffectDefinition2> {};
template<> struct hash<winrt::Windows::Media::Effects::IVideoTransformSphericalProjection> : winrt::impl::hash_base<winrt::Windows::Media::Effects::IVideoTransformSphericalProjection> {};
template<> struct hash<winrt::Windows::Media::Effects::AudioCaptureEffectsManager> : winrt::impl::hash_base<winrt::Windows::Media::Effects::AudioCaptureEffectsManager> {};
template<> struct hash<winrt::Windows::Media::Effects::AudioEffect> : winrt::impl::hash_base<winrt::Windows::Media::Effects::AudioEffect> {};
template<> struct hash<winrt::Windows::Media::Effects::AudioEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::AudioEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::AudioEffectsManager> : winrt::impl::hash_base<winrt::Windows::Media::Effects::AudioEffectsManager> {};
template<> struct hash<winrt::Windows::Media::Effects::AudioRenderEffectsManager> : winrt::impl::hash_base<winrt::Windows::Media::Effects::AudioRenderEffectsManager> {};
template<> struct hash<winrt::Windows::Media::Effects::CompositeVideoFrameContext> : winrt::impl::hash_base<winrt::Windows::Media::Effects::CompositeVideoFrameContext> {};
template<> struct hash<winrt::Windows::Media::Effects::ProcessAudioFrameContext> : winrt::impl::hash_base<winrt::Windows::Media::Effects::ProcessAudioFrameContext> {};
template<> struct hash<winrt::Windows::Media::Effects::ProcessVideoFrameContext> : winrt::impl::hash_base<winrt::Windows::Media::Effects::ProcessVideoFrameContext> {};
template<> struct hash<winrt::Windows::Media::Effects::VideoCompositorDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::VideoCompositorDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::VideoEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::VideoEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::VideoTransformEffectDefinition> : winrt::impl::hash_base<winrt::Windows::Media::Effects::VideoTransformEffectDefinition> {};
template<> struct hash<winrt::Windows::Media::Effects::VideoTransformSphericalProjection> : winrt::impl::hash_base<winrt::Windows::Media::Effects::VideoTransformSphericalProjection> {};

}

WINRT_WARNING_POP
