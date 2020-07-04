// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IAmbientLight<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAmbientLight)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IAmbientLight<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAmbientLight)->put_Color(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IAmbientLight2<D>::Intensity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAmbientLight2)->get_Intensity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IAmbientLight2<D>::Intensity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAmbientLight2)->put_Intensity(value));
}

template <typename D> float consume_Windows_UI_Composition_IAnimationController<D>::PlaybackRate() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->get_PlaybackRate(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IAnimationController<D>::PlaybackRate(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->put_PlaybackRate(value));
}

template <typename D> float consume_Windows_UI_Composition_IAnimationController<D>::Progress() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->get_Progress(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IAnimationController<D>::Progress(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->put_Progress(value));
}

template <typename D> Windows::UI::Composition::AnimationControllerProgressBehavior consume_Windows_UI_Composition_IAnimationController<D>::ProgressBehavior() const
{
    Windows::UI::Composition::AnimationControllerProgressBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->get_ProgressBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IAnimationController<D>::ProgressBehavior(Windows::UI::Composition::AnimationControllerProgressBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->put_ProgressBehavior(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IAnimationController<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->Pause());
}

template <typename D> void consume_Windows_UI_Composition_IAnimationController<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationController)->Resume());
}

template <typename D> float consume_Windows_UI_Composition_IAnimationControllerStatics<D>::MaxPlaybackRate() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationControllerStatics)->get_MaxPlaybackRate(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_IAnimationControllerStatics<D>::MinPlaybackRate() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IAnimationControllerStatics)->get_MinPlaybackRate(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_IBounceScalarNaturalMotionAnimation<D>::Acceleration() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceScalarNaturalMotionAnimation)->get_Acceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IBounceScalarNaturalMotionAnimation<D>::Acceleration(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceScalarNaturalMotionAnimation)->put_Acceleration(value));
}

template <typename D> float consume_Windows_UI_Composition_IBounceScalarNaturalMotionAnimation<D>::Restitution() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceScalarNaturalMotionAnimation)->get_Restitution(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IBounceScalarNaturalMotionAnimation<D>::Restitution(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceScalarNaturalMotionAnimation)->put_Restitution(value));
}

template <typename D> float consume_Windows_UI_Composition_IBounceVector2NaturalMotionAnimation<D>::Acceleration() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector2NaturalMotionAnimation)->get_Acceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IBounceVector2NaturalMotionAnimation<D>::Acceleration(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector2NaturalMotionAnimation)->put_Acceleration(value));
}

template <typename D> float consume_Windows_UI_Composition_IBounceVector2NaturalMotionAnimation<D>::Restitution() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector2NaturalMotionAnimation)->get_Restitution(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IBounceVector2NaturalMotionAnimation<D>::Restitution(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector2NaturalMotionAnimation)->put_Restitution(value));
}

template <typename D> float consume_Windows_UI_Composition_IBounceVector3NaturalMotionAnimation<D>::Acceleration() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector3NaturalMotionAnimation)->get_Acceleration(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IBounceVector3NaturalMotionAnimation<D>::Acceleration(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector3NaturalMotionAnimation)->put_Acceleration(value));
}

template <typename D> float consume_Windows_UI_Composition_IBounceVector3NaturalMotionAnimation<D>::Restitution() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector3NaturalMotionAnimation)->get_Restitution(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IBounceVector3NaturalMotionAnimation<D>::Restitution(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IBounceVector3NaturalMotionAnimation)->put_Restitution(value));
}

template <typename D> Windows::UI::Composition::CompositionColorSpace consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InterpolationColorSpace() const
{
    Windows::UI::Composition::CompositionColorSpace value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->get_InterpolationColorSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->put_InterpolationColorSpace(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IColorKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IColorKeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::ClearAllParameters() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->ClearAllParameters());
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::ClearParameter(param::hstring const& key) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->ClearParameter(get_abi(key)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetColorParameter(param::hstring const& key, Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetColorParameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetMatrix3x2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetMatrix3x2Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetMatrix4x4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetMatrix4x4Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetQuaternionParameter(param::hstring const& key, Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetQuaternionParameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetReferenceParameter(param::hstring const& key, Windows::UI::Composition::CompositionObject const& compositionObject) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetReferenceParameter(get_abi(key), get_abi(compositionObject)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetScalarParameter(param::hstring const& key, float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetScalarParameter(get_abi(key), value));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetVector2Parameter(param::hstring const& key, Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetVector2Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetVector3Parameter(param::hstring const& key, Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetVector3Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation<D>::SetVector4Parameter(param::hstring const& key, Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation)->SetVector4Parameter(get_abi(key), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation2<D>::SetBooleanParameter(param::hstring const& key, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation2)->SetBooleanParameter(get_abi(key), value));
}

template <typename D> hstring consume_Windows_UI_Composition_ICompositionAnimation2<D>::Target() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation2)->get_Target(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimation2<D>::Target(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation2)->put_Target(get_abi(value)));
}

template <typename D> Windows::UI::Composition::InitialValueExpressionCollection consume_Windows_UI_Composition_ICompositionAnimation3<D>::InitialValueExpressions() const
{
    Windows::UI::Composition::InitialValueExpressionCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimation3)->get_InitialValueExpressions(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::Count() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->get_Count(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::Add(Windows::UI::Composition::CompositionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->Add(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::Remove(Windows::UI::Composition::CompositionAnimation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->Remove(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionAnimationGroup<D>::RemoveAll() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionAnimationGroup)->RemoveAll());
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCapabilities<D>::AreEffectsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->AreEffectsSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCapabilities<D>::AreEffectsFast() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->AreEffectsFast(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionCapabilities<D>::Changed(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->add_Changed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionCapabilities> consume_Windows_UI_Composition_ICompositionCapabilities<D>::Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionCapabilities>(this, &abi_t<Windows::UI::Composition::ICompositionCapabilities>::remove_Changed, Changed(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionCapabilities<D>::Changed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilities)->remove_Changed(get_abi(token)));
}

template <typename D> Windows::UI::Composition::CompositionCapabilities consume_Windows_UI_Composition_ICompositionCapabilitiesStatics<D>::GetForCurrentView() const
{
    Windows::UI::Composition::CompositionCapabilities current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCapabilitiesStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_AnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_AnchorPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::CenterPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionClip2<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::Scale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Composition_ICompositionClip2<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionClip2<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionClip2)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_ICompositionColorBrush<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorBrush)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionColorBrush<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorBrush)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_ICompositionColorGradientStop<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorGradientStop)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionColorGradientStop<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorGradientStop)->put_Color(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionColorGradientStop<D>::Offset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorGradientStop)->get_Offset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionColorGradientStop<D>::Offset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionColorGradientStop)->put_Offset(value));
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCommitBatch<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->get_IsActive(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionCommitBatch<D>::IsEnded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->get_IsEnded(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionCommitBatch<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->add_Completed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionCommitBatch> consume_Windows_UI_Composition_ICompositionCommitBatch<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionCommitBatch>(this, &abi_t<Windows::UI::Composition::ICompositionCommitBatch>::remove_Completed, Completed(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionCommitBatch<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionCommitBatch)->remove_Completed(get_abi(token)));
}

template <typename D> Windows::UI::Composition::CompositionShapeCollection consume_Windows_UI_Composition_ICompositionContainerShape<D>::Shapes() const
{
    Windows::UI::Composition::CompositionShapeCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionContainerShape)->get_Shapes(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::DirectXAlphaMode consume_Windows_UI_Composition_ICompositionDrawingSurface<D>::AlphaMode() const
{
    Windows::Graphics::DirectX::DirectXAlphaMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface)->get_AlphaMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Windows_UI_Composition_ICompositionDrawingSurface<D>::PixelFormat() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface)->get_PixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Composition_ICompositionDrawingSurface<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface)->get_Size(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::SizeInt32 consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::SizeInt32() const
{
    Windows::Graphics::SizeInt32 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->get_SizeInt32(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::Resize(Windows::Graphics::SizeInt32 const& sizePixels) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->Resize(get_abi(sizePixels)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::Scroll(Windows::Graphics::PointInt32 const& offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->Scroll(get_abi(offset)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::Scroll(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& scrollRect) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->ScrollRect(get_abi(offset), get_abi(scrollRect)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->ScrollWithClip(get_abi(offset), get_abi(clipRect)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionDrawingSurface2<D>::ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect, Windows::Graphics::RectInt32 const& scrollRect) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionDrawingSurface2)->ScrollRectWithClip(get_abi(offset), get_abi(clipRect), get_abi(scrollRect)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionEffectBrush<D>::GetSourceParameter(param::hstring const& name) const
{
    Windows::UI::Composition::CompositionBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectBrush)->GetSourceParameter(get_abi(name), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionEffectBrush<D>::SetSourceParameter(param::hstring const& name, Windows::UI::Composition::CompositionBrush const& source) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectBrush)->SetSourceParameter(get_abi(name), get_abi(source)));
}

template <typename D> Windows::UI::Composition::CompositionEffectBrush consume_Windows_UI_Composition_ICompositionEffectFactory<D>::CreateBrush() const
{
    Windows::UI::Composition::CompositionEffectBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectFactory)->CreateBrush(put_abi(result)));
    return result;
}

template <typename D> HRESULT consume_Windows_UI_Composition_ICompositionEffectFactory<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectFactory)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactoryLoadStatus consume_Windows_UI_Composition_ICompositionEffectFactory<D>::LoadStatus() const
{
    Windows::UI::Composition::CompositionEffectFactoryLoadStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectFactory)->get_LoadStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Composition_ICompositionEffectSourceParameter<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectSourceParameter)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionEffectSourceParameter consume_Windows_UI_Composition_ICompositionEffectSourceParameterFactory<D>::Create(param::hstring const& name) const
{
    Windows::UI::Composition::CompositionEffectSourceParameter instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEffectSourceParameterFactory)->Create(get_abi(name), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionEllipseGeometry<D>::Center() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEllipseGeometry)->get_Center(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionEllipseGeometry<D>::Center(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEllipseGeometry)->put_Center(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionEllipseGeometry<D>::Radius() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEllipseGeometry)->get_Radius(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionEllipseGeometry<D>::Radius(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionEllipseGeometry)->put_Radius(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionGeometry<D>::TrimEnd() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGeometry)->get_TrimEnd(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGeometry<D>::TrimEnd(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGeometry)->put_TrimEnd(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionGeometry<D>::TrimOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGeometry)->get_TrimOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGeometry<D>::TrimOffset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGeometry)->put_TrimOffset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionGeometry<D>::TrimStart() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGeometry)->get_TrimStart(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGeometry<D>::TrimStart(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGeometry)->put_TrimStart(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionGradientBrush<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_AnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_AnchorPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionGradientBrush<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::CenterPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionColorGradientStopCollection consume_Windows_UI_Composition_ICompositionGradientBrush<D>::ColorStops() const
{
    Windows::UI::Composition::CompositionColorGradientStopCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_ColorStops(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionGradientExtendMode consume_Windows_UI_Composition_ICompositionGradientBrush<D>::ExtendMode() const
{
    Windows::UI::Composition::CompositionGradientExtendMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_ExtendMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_ExtendMode(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionColorSpace consume_Windows_UI_Composition_ICompositionGradientBrush<D>::InterpolationSpace() const
{
    Windows::UI::Composition::CompositionColorSpace value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_InterpolationSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::InterpolationSpace(Windows::UI::Composition::CompositionColorSpace const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_InterpolationSpace(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionGradientBrush<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionGradientBrush<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionGradientBrush<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionGradientBrush<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::Scale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Composition_ICompositionGradientBrush<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGradientBrush<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGradientBrush)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionDrawingSurface consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::CreateDrawingSurface(Windows::Foundation::Size const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const
{
    Windows::UI::Composition::CompositionDrawingSurface result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice)->CreateDrawingSurface(get_abi(sizePixels), get_abi(pixelFormat), get_abi(alphaMode), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice)->add_RenderingDeviceReplaced(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionGraphicsDevice> consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionGraphicsDevice>(this, &abi_t<Windows::UI::Composition::ICompositionGraphicsDevice>::remove_RenderingDeviceReplaced, RenderingDeviceReplaced(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionGraphicsDevice<D>::RenderingDeviceReplaced(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice)->remove_RenderingDeviceReplaced(get_abi(token)));
}

template <typename D> Windows::UI::Composition::CompositionDrawingSurface consume_Windows_UI_Composition_ICompositionGraphicsDevice2<D>::CreateDrawingSurface2(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const
{
    Windows::UI::Composition::CompositionDrawingSurface result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice2)->CreateDrawingSurface2(get_abi(sizePixels), get_abi(pixelFormat), get_abi(alphaMode), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionVirtualDrawingSurface consume_Windows_UI_Composition_ICompositionGraphicsDevice2<D>::CreateVirtualDrawingSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode) const
{
    Windows::UI::Composition::CompositionVirtualDrawingSurface result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionGraphicsDevice2)->CreateVirtualDrawingSurface(get_abi(sizePixels), get_abi(pixelFormat), get_abi(alphaMode), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::VisualUnorderedCollection consume_Windows_UI_Composition_ICompositionLight<D>::Targets() const
{
    Windows::UI::Composition::VisualUnorderedCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLight)->get_Targets(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::VisualUnorderedCollection consume_Windows_UI_Composition_ICompositionLight2<D>::ExclusionsFromTargets() const
{
    Windows::UI::Composition::VisualUnorderedCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLight2)->get_ExclusionsFromTargets(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionLight3<D>::IsEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLight3)->get_IsEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionLight3<D>::IsEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLight3)->put_IsEnabled(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionLineGeometry<D>::Start() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLineGeometry)->get_Start(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionLineGeometry<D>::Start(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLineGeometry)->put_Start(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionLineGeometry<D>::End() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLineGeometry)->get_End(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionLineGeometry<D>::End(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLineGeometry)->put_End(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionLinearGradientBrush<D>::EndPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLinearGradientBrush)->get_EndPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionLinearGradientBrush<D>::EndPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLinearGradientBrush)->put_EndPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionLinearGradientBrush<D>::StartPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLinearGradientBrush)->get_StartPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionLinearGradientBrush<D>::StartPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionLinearGradientBrush)->put_StartPoint(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Mask() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->get_Mask(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Mask(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->put_Mask(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Source() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionMaskBrush<D>::Source(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionMaskBrush)->put_Source(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_BottomInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_BottomInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_BottomInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::BottomInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_BottomInsetScale(value));
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::IsCenterHollow() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_IsCenterHollow(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::IsCenterHollow(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_IsCenterHollow(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_LeftInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_LeftInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_LeftInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::LeftInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_LeftInsetScale(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_RightInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_RightInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_RightInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::RightInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_RightInsetScale(value));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::Source() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_Source(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::Source(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_Source(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_TopInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_TopInset(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInsetScale() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->get_TopInsetScale(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::TopInsetScale(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->put_TopInsetScale(value));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsets(float inset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsets(inset));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsets(float left, float top, float right, float bottom) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsetsWithValues(left, top, right, bottom));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsetScales(float scale) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsetScales(scale));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionNineGridBrush<D>::SetInsetScales(float left, float top, float right, float bottom) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionNineGridBrush)->SetInsetScalesWithValues(left, top, right, bottom));
}

template <typename D> Windows::UI::Composition::Compositor consume_Windows_UI_Composition_ICompositionObject<D>::Compositor() const
{
    Windows::UI::Composition::Compositor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->get_Compositor(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CoreDispatcher consume_Windows_UI_Composition_ICompositionObject<D>::Dispatcher() const
{
    Windows::UI::Core::CoreDispatcher value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->get_Dispatcher(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Composition_ICompositionObject<D>::Properties() const
{
    Windows::UI::Composition::CompositionPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject<D>::StartAnimation(param::hstring const& propertyName, Windows::UI::Composition::CompositionAnimation const& animation) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->StartAnimation(get_abi(propertyName), get_abi(animation)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject<D>::StopAnimation(param::hstring const& propertyName) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject)->StopAnimation(get_abi(propertyName)));
}

template <typename D> hstring consume_Windows_UI_Composition_ICompositionObject2<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::Comment(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->put_Comment(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ImplicitAnimationCollection consume_Windows_UI_Composition_ICompositionObject2<D>::ImplicitAnimations() const
{
    Windows::UI::Composition::ImplicitAnimationCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->get_ImplicitAnimations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::ImplicitAnimations(Windows::UI::Composition::ImplicitAnimationCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->put_ImplicitAnimations(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::StartAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->StartAnimationGroup(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionObject2<D>::StopAnimationGroup(Windows::UI::Composition::ICompositionAnimationBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject2)->StopAnimationGroup(get_abi(value)));
}

template <typename D> Windows::System::DispatcherQueue consume_Windows_UI_Composition_ICompositionObject3<D>::DispatcherQueue() const
{
    Windows::System::DispatcherQueue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject3)->get_DispatcherQueue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::AnimationController consume_Windows_UI_Composition_ICompositionObject4<D>::TryGetAnimationController(param::hstring const& propertyName) const
{
    Windows::UI::Composition::AnimationController animationController{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionObject4)->TryGetAnimationController(get_abi(propertyName), put_abi(animationController)));
    return animationController;
}

template <typename D> Windows::UI::Composition::CompositionPath consume_Windows_UI_Composition_ICompositionPathFactory<D>::Create(Windows::Graphics::IGeometrySource2D const& source) const
{
    Windows::UI::Composition::CompositionPath result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPathFactory)->Create(get_abi(source), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionPath consume_Windows_UI_Composition_ICompositionPathGeometry<D>::Path() const
{
    Windows::UI::Composition::CompositionPath value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPathGeometry)->get_Path(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPathGeometry<D>::Path(Windows::UI::Composition::CompositionPath const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPathGeometry)->put_Path(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertColor(param::hstring const& propertyName, Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertColor(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertMatrix3x2(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertMatrix4x4(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertQuaternion(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertScalar(param::hstring const& propertyName, float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertScalar(get_abi(propertyName), value));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertVector2(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertVector3(get_abi(propertyName), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet<D>::InsertVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->InsertVector4(get_abi(propertyName), get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetColor(param::hstring const& propertyName, Windows::UI::Color& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetColor(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetMatrix3x2(param::hstring const& propertyName, Windows::Foundation::Numerics::float3x2& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetMatrix3x2(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetMatrix4x4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4x4& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetMatrix4x4(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetQuaternion(param::hstring const& propertyName, Windows::Foundation::Numerics::quaternion& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetQuaternion(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetScalar(param::hstring const& propertyName, float& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetScalar(get_abi(propertyName), &value, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetVector2(param::hstring const& propertyName, Windows::Foundation::Numerics::float2& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetVector2(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetVector3(param::hstring const& propertyName, Windows::Foundation::Numerics::float3& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetVector3(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet<D>::TryGetVector4(param::hstring const& propertyName, Windows::Foundation::Numerics::float4& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet)->TryGetVector4(get_abi(propertyName), put_abi(value), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionPropertySet2<D>::InsertBoolean(param::hstring const& propertyName, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet2)->InsertBoolean(get_abi(propertyName), value));
}

template <typename D> Windows::UI::Composition::CompositionGetValueStatus consume_Windows_UI_Composition_ICompositionPropertySet2<D>::TryGetBoolean(param::hstring const& propertyName, bool& value) const
{
    Windows::UI::Composition::CompositionGetValueStatus result{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionPropertySet2)->TryGetBoolean(get_abi(propertyName), &value, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionRectangleGeometry<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRectangleGeometry)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionRectangleGeometry<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRectangleGeometry)->put_Offset(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionRectangleGeometry<D>::Size() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRectangleGeometry)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionRectangleGeometry<D>::Size(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRectangleGeometry)->put_Size(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry<D>::CornerRadius() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRoundedRectangleGeometry)->get_CornerRadius(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry<D>::CornerRadius(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRoundedRectangleGeometry)->put_CornerRadius(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRoundedRectangleGeometry)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRoundedRectangleGeometry)->put_Offset(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry<D>::Size() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRoundedRectangleGeometry)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionRoundedRectangleGeometry<D>::Size(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionRoundedRectangleGeometry)->put_Size(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionScopedBatch<D>::IsActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->get_IsActive(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionScopedBatch<D>::IsEnded() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->get_IsEnded(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::End() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->End());
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->Resume());
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Suspend() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->Suspend());
}

template <typename D> event_token consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->add_Completed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::ICompositionScopedBatch> consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::ICompositionScopedBatch>(this, &abi_t<Windows::UI::Composition::ICompositionScopedBatch>::remove_Completed, Completed(handler));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionScopedBatch<D>::Completed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionScopedBatch)->remove_Completed(get_abi(token)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionShape<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionShape<D>::CenterPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionShape<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionShape<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionShape<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionShape<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionShape<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionShape<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionShape<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionShape<D>::Scale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Composition_ICompositionShape<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionShape<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionShape)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionSpriteShape<D>::FillBrush() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_FillBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::FillBrush(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_FillBrush(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionGeometry consume_Windows_UI_Composition_ICompositionSpriteShape<D>::Geometry() const
{
    Windows::UI::Composition::CompositionGeometry value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_Geometry(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::Geometry(Windows::UI::Composition::CompositionGeometry const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_Geometry(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Composition_ICompositionSpriteShape<D>::IsStrokeNonScaling() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_IsStrokeNonScaling(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::IsStrokeNonScaling(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_IsStrokeNonScaling(value));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeBrush() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeBrush(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeBrush(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionStrokeDashArray consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeDashArray() const
{
    Windows::UI::Composition::CompositionStrokeDashArray value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeDashArray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionStrokeCap consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeDashCap() const
{
    Windows::UI::Composition::CompositionStrokeCap value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeDashCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeDashCap(Windows::UI::Composition::CompositionStrokeCap const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeDashCap(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeDashOffset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeDashOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeDashOffset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeDashOffset(value));
}

template <typename D> Windows::UI::Composition::CompositionStrokeCap consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeEndCap() const
{
    Windows::UI::Composition::CompositionStrokeCap value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeEndCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeEndCap(Windows::UI::Composition::CompositionStrokeCap const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeEndCap(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionStrokeLineJoin consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeLineJoin() const
{
    Windows::UI::Composition::CompositionStrokeLineJoin value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeLineJoin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeLineJoin(Windows::UI::Composition::CompositionStrokeLineJoin const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeLineJoin(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeMiterLimit() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeMiterLimit(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeMiterLimit(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeMiterLimit(value));
}

template <typename D> Windows::UI::Composition::CompositionStrokeCap consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeStartCap() const
{
    Windows::UI::Composition::CompositionStrokeCap value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeStartCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeStartCap(Windows::UI::Composition::CompositionStrokeCap const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeStartCap(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeThickness() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->get_StrokeThickness(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSpriteShape<D>::StrokeThickness(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSpriteShape)->put_StrokeThickness(value));
}

template <typename D> Windows::UI::Composition::CompositionBitmapInterpolationMode consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::BitmapInterpolationMode() const
{
    Windows::UI::Composition::CompositionBitmapInterpolationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_BitmapInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_BitmapInterpolationMode(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::HorizontalAlignmentRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_HorizontalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::HorizontalAlignmentRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_HorizontalAlignmentRatio(value));
}

template <typename D> Windows::UI::Composition::CompositionStretch consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Stretch() const
{
    Windows::UI::Composition::CompositionStretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_Stretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Stretch(Windows::UI::Composition::CompositionStretch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_Stretch(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ICompositionSurface consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Surface() const
{
    Windows::UI::Composition::ICompositionSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_Surface(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::Surface(Windows::UI::Composition::ICompositionSurface const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_Surface(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::VerticalAlignmentRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->get_VerticalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush<D>::VerticalAlignmentRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush)->put_VerticalAlignmentRatio(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_AnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_AnchorPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::CenterPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Scale() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::Scale(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionSurfaceBrush2<D>::TransformMatrix(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionSurfaceBrush2)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_ICompositionTarget<D>::Root() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionTarget)->get_Root(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionTarget<D>::Root(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionTarget)->put_Root(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionViewBox<D>::HorizontalAlignmentRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->get_HorizontalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionViewBox<D>::HorizontalAlignmentRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->put_HorizontalAlignmentRatio(value));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionViewBox<D>::Offset() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionViewBox<D>::Offset(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->put_Offset(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICompositionViewBox<D>::Size() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionViewBox<D>::Size(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->put_Size(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionStretch consume_Windows_UI_Composition_ICompositionViewBox<D>::Stretch() const
{
    Windows::UI::Composition::CompositionStretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->get_Stretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionViewBox<D>::Stretch(Windows::UI::Composition::CompositionStretch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->put_Stretch(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositionViewBox<D>::VerticalAlignmentRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->get_VerticalAlignmentRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositionViewBox<D>::VerticalAlignmentRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionViewBox)->put_VerticalAlignmentRatio(value));
}

template <typename D> void consume_Windows_UI_Composition_ICompositionVirtualDrawingSurface<D>::Trim(array_view<Windows::Graphics::RectInt32 const> rects) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositionVirtualDrawingSurface)->Trim(rects.size(), get_abi(rects)));
}

template <typename D> Windows::UI::Composition::ColorKeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateColorKeyFrameAnimation() const
{
    Windows::UI::Composition::ColorKeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateColorKeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorBrush consume_Windows_UI_Composition_ICompositor<D>::CreateColorBrush() const
{
    Windows::UI::Composition::CompositionColorBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateColorBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorBrush consume_Windows_UI_Composition_ICompositor<D>::CreateColorBrush(Windows::UI::Color const& color) const
{
    Windows::UI::Composition::CompositionColorBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateColorBrushWithColor(get_abi(color), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ContainerVisual consume_Windows_UI_Composition_ICompositor<D>::CreateContainerVisual() const
{
    Windows::UI::Composition::ContainerVisual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateContainerVisual(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CubicBezierEasingFunction consume_Windows_UI_Composition_ICompositor<D>::CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2) const
{
    Windows::UI::Composition::CubicBezierEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateCubicBezierEasingFunction(get_abi(controlPoint1), get_abi(controlPoint2), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactory consume_Windows_UI_Composition_ICompositor<D>::CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect) const
{
    Windows::UI::Composition::CompositionEffectFactory result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateEffectFactory(get_abi(graphicsEffect), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionEffectFactory consume_Windows_UI_Composition_ICompositor<D>::CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect, param::iterable<hstring> const& animatableProperties) const
{
    Windows::UI::Composition::CompositionEffectFactory result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateEffectFactoryWithProperties(get_abi(graphicsEffect), get_abi(animatableProperties), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateExpressionAnimation() const
{
    Windows::UI::Composition::ExpressionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateExpressionAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ExpressionAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateExpressionAnimation(param::hstring const& expression) const
{
    Windows::UI::Composition::ExpressionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateExpressionAnimationWithExpression(get_abi(expression), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::InsetClip consume_Windows_UI_Composition_ICompositor<D>::CreateInsetClip() const
{
    Windows::UI::Composition::InsetClip result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateInsetClip(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::InsetClip consume_Windows_UI_Composition_ICompositor<D>::CreateInsetClip(float leftInset, float topInset, float rightInset, float bottomInset) const
{
    Windows::UI::Composition::InsetClip result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateInsetClipWithInsets(leftInset, topInset, rightInset, bottomInset, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::LinearEasingFunction consume_Windows_UI_Composition_ICompositor<D>::CreateLinearEasingFunction() const
{
    Windows::UI::Composition::LinearEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateLinearEasingFunction(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionPropertySet consume_Windows_UI_Composition_ICompositor<D>::CreatePropertySet() const
{
    Windows::UI::Composition::CompositionPropertySet result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreatePropertySet(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::QuaternionKeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateQuaternionKeyFrameAnimation() const
{
    Windows::UI::Composition::QuaternionKeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateQuaternionKeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ScalarKeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateScalarKeyFrameAnimation() const
{
    Windows::UI::Composition::ScalarKeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateScalarKeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionScopedBatch consume_Windows_UI_Composition_ICompositor<D>::CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const
{
    Windows::UI::Composition::CompositionScopedBatch result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateScopedBatch(get_abi(batchType), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpriteVisual consume_Windows_UI_Composition_ICompositor<D>::CreateSpriteVisual() const
{
    Windows::UI::Composition::SpriteVisual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateSpriteVisual(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSurfaceBrush consume_Windows_UI_Composition_ICompositor<D>::CreateSurfaceBrush() const
{
    Windows::UI::Composition::CompositionSurfaceBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateSurfaceBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSurfaceBrush consume_Windows_UI_Composition_ICompositor<D>::CreateSurfaceBrush(Windows::UI::Composition::ICompositionSurface const& surface) const
{
    Windows::UI::Composition::CompositionSurfaceBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateSurfaceBrushWithSurface(get_abi(surface), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionTarget consume_Windows_UI_Composition_ICompositor<D>::CreateTargetForCurrentView() const
{
    Windows::UI::Composition::CompositionTarget result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateTargetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector2KeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateVector2KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector2KeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateVector2KeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector3KeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateVector3KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector3KeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateVector3KeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::Vector4KeyFrameAnimation consume_Windows_UI_Composition_ICompositor<D>::CreateVector4KeyFrameAnimation() const
{
    Windows::UI::Composition::Vector4KeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->CreateVector4KeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionCommitBatch consume_Windows_UI_Composition_ICompositor<D>::GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType) const
{
    Windows::UI::Composition::CompositionCommitBatch result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor)->GetCommitBatch(get_abi(batchType), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::AmbientLight consume_Windows_UI_Composition_ICompositor2<D>::CreateAmbientLight() const
{
    Windows::UI::Composition::AmbientLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateAmbientLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionAnimationGroup consume_Windows_UI_Composition_ICompositor2<D>::CreateAnimationGroup() const
{
    Windows::UI::Composition::CompositionAnimationGroup result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateAnimationGroup(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionBackdropBrush consume_Windows_UI_Composition_ICompositor2<D>::CreateBackdropBrush() const
{
    Windows::UI::Composition::CompositionBackdropBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateBackdropBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::DistantLight consume_Windows_UI_Composition_ICompositor2<D>::CreateDistantLight() const
{
    Windows::UI::Composition::DistantLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateDistantLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::DropShadow consume_Windows_UI_Composition_ICompositor2<D>::CreateDropShadow() const
{
    Windows::UI::Composition::DropShadow result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateDropShadow(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ImplicitAnimationCollection consume_Windows_UI_Composition_ICompositor2<D>::CreateImplicitAnimationCollection() const
{
    Windows::UI::Composition::ImplicitAnimationCollection result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateImplicitAnimationCollection(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::LayerVisual consume_Windows_UI_Composition_ICompositor2<D>::CreateLayerVisual() const
{
    Windows::UI::Composition::LayerVisual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateLayerVisual(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionMaskBrush consume_Windows_UI_Composition_ICompositor2<D>::CreateMaskBrush() const
{
    Windows::UI::Composition::CompositionMaskBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateMaskBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionNineGridBrush consume_Windows_UI_Composition_ICompositor2<D>::CreateNineGridBrush() const
{
    Windows::UI::Composition::CompositionNineGridBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateNineGridBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::PointLight consume_Windows_UI_Composition_ICompositor2<D>::CreatePointLight() const
{
    Windows::UI::Composition::PointLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreatePointLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpotLight consume_Windows_UI_Composition_ICompositor2<D>::CreateSpotLight() const
{
    Windows::UI::Composition::SpotLight result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateSpotLight(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::StepEasingFunction consume_Windows_UI_Composition_ICompositor2<D>::CreateStepEasingFunction() const
{
    Windows::UI::Composition::StepEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateStepEasingFunction(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::StepEasingFunction consume_Windows_UI_Composition_ICompositor2<D>::CreateStepEasingFunction(int32_t stepCount) const
{
    Windows::UI::Composition::StepEasingFunction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor2)->CreateStepEasingFunctionWithStepCount(stepCount, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionBackdropBrush consume_Windows_UI_Composition_ICompositor3<D>::CreateHostBackdropBrush() const
{
    Windows::UI::Composition::CompositionBackdropBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor3)->CreateHostBackdropBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorGradientStop consume_Windows_UI_Composition_ICompositor4<D>::CreateColorGradientStop() const
{
    Windows::UI::Composition::CompositionColorGradientStop result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor4)->CreateColorGradientStop(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionColorGradientStop consume_Windows_UI_Composition_ICompositor4<D>::CreateColorGradientStop(float offset, Windows::UI::Color const& color) const
{
    Windows::UI::Composition::CompositionColorGradientStop result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor4)->CreateColorGradientStopWithOffsetAndColor(offset, get_abi(color), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionLinearGradientBrush consume_Windows_UI_Composition_ICompositor4<D>::CreateLinearGradientBrush() const
{
    Windows::UI::Composition::CompositionLinearGradientBrush result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor4)->CreateLinearGradientBrush(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpringScalarNaturalMotionAnimation consume_Windows_UI_Composition_ICompositor4<D>::CreateSpringScalarAnimation() const
{
    Windows::UI::Composition::SpringScalarNaturalMotionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor4)->CreateSpringScalarAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpringVector2NaturalMotionAnimation consume_Windows_UI_Composition_ICompositor4<D>::CreateSpringVector2Animation() const
{
    Windows::UI::Composition::SpringVector2NaturalMotionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor4)->CreateSpringVector2Animation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::SpringVector3NaturalMotionAnimation consume_Windows_UI_Composition_ICompositor4<D>::CreateSpringVector3Animation() const
{
    Windows::UI::Composition::SpringVector3NaturalMotionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor4)->CreateSpringVector3Animation(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_UI_Composition_ICompositor5<D>::Comment() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->get_Comment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositor5<D>::Comment(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->put_Comment(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ICompositor5<D>::GlobalPlaybackRate() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->get_GlobalPlaybackRate(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ICompositor5<D>::GlobalPlaybackRate(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->put_GlobalPlaybackRate(value));
}

template <typename D> Windows::UI::Composition::BounceScalarNaturalMotionAnimation consume_Windows_UI_Composition_ICompositor5<D>::CreateBounceScalarAnimation() const
{
    Windows::UI::Composition::BounceScalarNaturalMotionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateBounceScalarAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::BounceVector2NaturalMotionAnimation consume_Windows_UI_Composition_ICompositor5<D>::CreateBounceVector2Animation() const
{
    Windows::UI::Composition::BounceVector2NaturalMotionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateBounceVector2Animation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::BounceVector3NaturalMotionAnimation consume_Windows_UI_Composition_ICompositor5<D>::CreateBounceVector3Animation() const
{
    Windows::UI::Composition::BounceVector3NaturalMotionAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateBounceVector3Animation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionContainerShape consume_Windows_UI_Composition_ICompositor5<D>::CreateContainerShape() const
{
    Windows::UI::Composition::CompositionContainerShape result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateContainerShape(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionEllipseGeometry consume_Windows_UI_Composition_ICompositor5<D>::CreateEllipseGeometry() const
{
    Windows::UI::Composition::CompositionEllipseGeometry result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateEllipseGeometry(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionLineGeometry consume_Windows_UI_Composition_ICompositor5<D>::CreateLineGeometry() const
{
    Windows::UI::Composition::CompositionLineGeometry result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateLineGeometry(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionPathGeometry consume_Windows_UI_Composition_ICompositor5<D>::CreatePathGeometry() const
{
    Windows::UI::Composition::CompositionPathGeometry result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreatePathGeometry(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionPathGeometry consume_Windows_UI_Composition_ICompositor5<D>::CreatePathGeometry(Windows::UI::Composition::CompositionPath const& path) const
{
    Windows::UI::Composition::CompositionPathGeometry result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreatePathGeometryWithPath(get_abi(path), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::PathKeyFrameAnimation consume_Windows_UI_Composition_ICompositor5<D>::CreatePathKeyFrameAnimation() const
{
    Windows::UI::Composition::PathKeyFrameAnimation result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreatePathKeyFrameAnimation(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionRectangleGeometry consume_Windows_UI_Composition_ICompositor5<D>::CreateRectangleGeometry() const
{
    Windows::UI::Composition::CompositionRectangleGeometry result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateRectangleGeometry(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionRoundedRectangleGeometry consume_Windows_UI_Composition_ICompositor5<D>::CreateRoundedRectangleGeometry() const
{
    Windows::UI::Composition::CompositionRoundedRectangleGeometry result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateRoundedRectangleGeometry(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::ShapeVisual consume_Windows_UI_Composition_ICompositor5<D>::CreateShapeVisual() const
{
    Windows::UI::Composition::ShapeVisual result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateShapeVisual(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSpriteShape consume_Windows_UI_Composition_ICompositor5<D>::CreateSpriteShape() const
{
    Windows::UI::Composition::CompositionSpriteShape result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateSpriteShape(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionSpriteShape consume_Windows_UI_Composition_ICompositor5<D>::CreateSpriteShape(Windows::UI::Composition::CompositionGeometry const& geometry) const
{
    Windows::UI::Composition::CompositionSpriteShape result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateSpriteShapeWithGeometry(get_abi(geometry), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Composition::CompositionViewBox consume_Windows_UI_Composition_ICompositor5<D>::CreateViewBox() const
{
    Windows::UI::Composition::CompositionViewBox result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->CreateViewBox(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Composition_ICompositor5<D>::RequestCommitAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositor5)->RequestCommitAsync(put_abi(action)));
    return action;
}

template <typename D> float consume_Windows_UI_Composition_ICompositorStatics<D>::MaxGlobalPlaybackRate() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositorStatics)->get_MaxGlobalPlaybackRate(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_ICompositorStatics<D>::MinGlobalPlaybackRate() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICompositorStatics)->get_MinGlobalPlaybackRate(&value));
    return value;
}

template <typename D> Windows::UI::Composition::VisualCollection consume_Windows_UI_Composition_IContainerVisual<D>::Children() const
{
    Windows::UI::Composition::VisualCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IContainerVisual)->get_Children(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICubicBezierEasingFunction<D>::ControlPoint1() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICubicBezierEasingFunction)->get_ControlPoint1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_ICubicBezierEasingFunction<D>::ControlPoint2() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ICubicBezierEasingFunction)->get_ControlPoint2(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IDistantLight<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDistantLight<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_IDistantLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->get_CoordinateSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDistantLight<D>::CoordinateSpace(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->put_CoordinateSpace(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IDistantLight<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDistantLight<D>::Direction(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight)->put_Direction(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IDistantLight2<D>::Intensity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight2)->get_Intensity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDistantLight2<D>::Intensity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDistantLight2)->put_Intensity(value));
}

template <typename D> float consume_Windows_UI_Composition_IDropShadow<D>::BlurRadius() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_BlurRadius(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::BlurRadius(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_BlurRadius(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IDropShadow<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_IDropShadow<D>::Mask() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Mask(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Mask(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Mask(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IDropShadow<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IDropShadow<D>::Opacity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow<D>::Opacity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow)->put_Opacity(value));
}

template <typename D> Windows::UI::Composition::CompositionDropShadowSourcePolicy consume_Windows_UI_Composition_IDropShadow2<D>::SourcePolicy() const
{
    Windows::UI::Composition::CompositionDropShadowSourcePolicy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow2)->get_SourcePolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IDropShadow2<D>::SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IDropShadow2)->put_SourcePolicy(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Composition_IExpressionAnimation<D>::Expression() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IExpressionAnimation)->get_Expression(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IExpressionAnimation<D>::Expression(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IExpressionAnimation)->put_Expression(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::BottomInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_BottomInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::BottomInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_BottomInset(value));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::LeftInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_LeftInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::LeftInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_LeftInset(value));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::RightInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_RightInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::RightInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_RightInset(value));
}

template <typename D> float consume_Windows_UI_Composition_IInsetClip<D>::TopInset() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->get_TopInset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IInsetClip<D>::TopInset(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IInsetClip)->put_TopInset(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_IKeyFrameAnimation<D>::DelayTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_DelayTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::DelayTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_DelayTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_IKeyFrameAnimation<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::Duration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_Duration(get_abi(value)));
}

template <typename D> Windows::UI::Composition::AnimationIterationBehavior consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationBehavior() const
{
    Windows::UI::Composition::AnimationIterationBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_IterationBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_IterationBehavior(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_IterationCount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::IterationCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_IterationCount(value));
}

template <typename D> int32_t consume_Windows_UI_Composition_IKeyFrameAnimation<D>::KeyFrameCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_KeyFrameCount(&value));
    return value;
}

template <typename D> Windows::UI::Composition::AnimationStopBehavior consume_Windows_UI_Composition_IKeyFrameAnimation<D>::StopBehavior() const
{
    Windows::UI::Composition::AnimationStopBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->get_StopBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->put_StopBehavior(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->InsertExpressionKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation<D>::InsertExpressionKeyFrame(float normalizedProgressKey, param::hstring const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation)->InsertExpressionKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::UI::Composition::AnimationDirection consume_Windows_UI_Composition_IKeyFrameAnimation2<D>::Direction() const
{
    Windows::UI::Composition::AnimationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation2)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation2<D>::Direction(Windows::UI::Composition::AnimationDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation2)->put_Direction(get_abi(value)));
}

template <typename D> Windows::UI::Composition::AnimationDelayBehavior consume_Windows_UI_Composition_IKeyFrameAnimation3<D>::DelayBehavior() const
{
    Windows::UI::Composition::AnimationDelayBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation3)->get_DelayBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IKeyFrameAnimation3<D>::DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IKeyFrameAnimation3)->put_DelayBehavior(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionEffectBrush consume_Windows_UI_Composition_ILayerVisual<D>::Effect() const
{
    Windows::UI::Composition::CompositionEffectBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ILayerVisual)->get_Effect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ILayerVisual<D>::Effect(Windows::UI::Composition::CompositionEffectBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ILayerVisual)->put_Effect(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionShadow consume_Windows_UI_Composition_ILayerVisual2<D>::Shadow() const
{
    Windows::UI::Composition::CompositionShadow value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ILayerVisual2)->get_Shadow(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ILayerVisual2<D>::Shadow(Windows::UI::Composition::CompositionShadow const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ILayerVisual2)->put_Shadow(get_abi(value)));
}

template <typename D> Windows::UI::Composition::AnimationDelayBehavior consume_Windows_UI_Composition_INaturalMotionAnimation<D>::DelayBehavior() const
{
    Windows::UI::Composition::AnimationDelayBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::INaturalMotionAnimation)->get_DelayBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_INaturalMotionAnimation<D>::DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::INaturalMotionAnimation)->put_DelayBehavior(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_INaturalMotionAnimation<D>::DelayTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::INaturalMotionAnimation)->get_DelayTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_INaturalMotionAnimation<D>::DelayTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::INaturalMotionAnimation)->put_DelayTime(get_abi(value)));
}

template <typename D> Windows::UI::Composition::AnimationStopBehavior consume_Windows_UI_Composition_INaturalMotionAnimation<D>::StopBehavior() const
{
    Windows::UI::Composition::AnimationStopBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::INaturalMotionAnimation)->get_StopBehavior(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_INaturalMotionAnimation<D>::StopBehavior(Windows::UI::Composition::AnimationStopBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::INaturalMotionAnimation)->put_StopBehavior(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IPathKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Composition::CompositionPath const& path) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPathKeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(path)));
}

template <typename D> void consume_Windows_UI_Composition_IPathKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Composition::CompositionPath const& path, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPathKeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(path), get_abi(easingFunction)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_IPointLight<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_Color(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight<D>::ConstantAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_ConstantAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::ConstantAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_ConstantAttenuation(value));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_IPointLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_CoordinateSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::CoordinateSpace(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_CoordinateSpace(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight<D>::LinearAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_LinearAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::LinearAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_LinearAttenuation(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IPointLight<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight<D>::QuadraticAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->get_QuadraticAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight<D>::QuadraticAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight)->put_QuadraticAttenuation(value));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight2<D>::Intensity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight2)->get_Intensity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight2<D>::Intensity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight2)->put_Intensity(value));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight3<D>::MinAttenuationCutoff() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight3)->get_MinAttenuationCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight3<D>::MinAttenuationCutoff(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight3)->put_MinAttenuationCutoff(value));
}

template <typename D> float consume_Windows_UI_Composition_IPointLight3<D>::MaxAttenuationCutoff() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight3)->get_MaxAttenuationCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IPointLight3<D>::MaxAttenuationCutoff(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IPointLight3)->put_MaxAttenuationCutoff(value));
}

template <typename D> void consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IQuaternionKeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IQuaternionKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IQuaternionKeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::UI::Composition::CompositionGraphicsDevice consume_Windows_UI_Composition_IRenderingDeviceReplacedEventArgs<D>::GraphicsDevice() const
{
    Windows::UI::Composition::CompositionGraphicsDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IRenderingDeviceReplacedEventArgs)->get_GraphicsDevice(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IScalarKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarKeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, value));
}

template <typename D> void consume_Windows_UI_Composition_IScalarKeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, float value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarKeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, value, get_abi(easingFunction)));
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>::FinalValue() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarNaturalMotionAnimation)->get_FinalValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>::FinalValue(optional<float> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarNaturalMotionAnimation)->put_FinalValue(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<float> consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>::InitialValue() const
{
    Windows::Foundation::IReference<float> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarNaturalMotionAnimation)->get_InitialValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>::InitialValue(optional<float> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarNaturalMotionAnimation)->put_InitialValue(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>::InitialVelocity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarNaturalMotionAnimation)->get_InitialVelocity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IScalarNaturalMotionAnimation<D>::InitialVelocity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IScalarNaturalMotionAnimation)->put_InitialVelocity(value));
}

template <typename D> Windows::UI::Composition::CompositionShapeCollection consume_Windows_UI_Composition_IShapeVisual<D>::Shapes() const
{
    Windows::UI::Composition::CompositionShapeCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IShapeVisual)->get_Shapes(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionViewBox consume_Windows_UI_Composition_IShapeVisual<D>::ViewBox() const
{
    Windows::UI::Composition::CompositionViewBox value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IShapeVisual)->get_ViewBox(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IShapeVisual<D>::ViewBox(Windows::UI::Composition::CompositionViewBox const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IShapeVisual)->put_ViewBox(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::ConstantAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_ConstantAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::ConstantAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_ConstantAttenuation(value));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_ISpotLight<D>::CoordinateSpace() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_CoordinateSpace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::CoordinateSpace(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_CoordinateSpace(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_ISpotLight<D>::Direction() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::Direction(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_Direction(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_InnerConeAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_InnerConeAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_InnerConeAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::InnerConeAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_InnerConeAngleInDegrees(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_ISpotLight<D>::InnerConeColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_InnerConeColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::InnerConeColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_InnerConeColor(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::LinearAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_LinearAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::LinearAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_LinearAttenuation(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_ISpotLight<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_OuterConeAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_OuterConeAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_OuterConeAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::OuterConeAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_OuterConeAngleInDegrees(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Composition_ISpotLight<D>::OuterConeColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_OuterConeColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::OuterConeColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_OuterConeColor(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight<D>::QuadraticAttenuation() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->get_QuadraticAttenuation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight<D>::QuadraticAttenuation(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight)->put_QuadraticAttenuation(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight2<D>::InnerConeIntensity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight2)->get_InnerConeIntensity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight2<D>::InnerConeIntensity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight2)->put_InnerConeIntensity(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight2<D>::OuterConeIntensity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight2)->get_OuterConeIntensity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight2<D>::OuterConeIntensity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight2)->put_OuterConeIntensity(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight3<D>::MinAttenuationCutoff() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight3)->get_MinAttenuationCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight3<D>::MinAttenuationCutoff(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight3)->put_MinAttenuationCutoff(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpotLight3<D>::MaxAttenuationCutoff() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight3)->get_MaxAttenuationCutoff(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpotLight3<D>::MaxAttenuationCutoff(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpotLight3)->put_MaxAttenuationCutoff(value));
}

template <typename D> float consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<D>::DampingRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringScalarNaturalMotionAnimation)->get_DampingRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<D>::DampingRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringScalarNaturalMotionAnimation)->put_DampingRatio(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<D>::Period() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringScalarNaturalMotionAnimation)->get_Period(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<D>::Period(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringScalarNaturalMotionAnimation)->put_Period(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation<D>::DampingRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector2NaturalMotionAnimation)->get_DampingRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation<D>::DampingRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector2NaturalMotionAnimation)->put_DampingRatio(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation<D>::Period() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector2NaturalMotionAnimation)->get_Period(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpringVector2NaturalMotionAnimation<D>::Period(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector2NaturalMotionAnimation)->put_Period(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation<D>::DampingRatio() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector3NaturalMotionAnimation)->get_DampingRatio(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation<D>::DampingRatio(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector3NaturalMotionAnimation)->put_DampingRatio(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation<D>::Period() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector3NaturalMotionAnimation)->get_Period(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpringVector3NaturalMotionAnimation<D>::Period(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpringVector3NaturalMotionAnimation)->put_Period(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Composition_ISpriteVisual<D>::Brush() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual)->get_Brush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpriteVisual<D>::Brush(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual)->put_Brush(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionShadow consume_Windows_UI_Composition_ISpriteVisual2<D>::Shadow() const
{
    Windows::UI::Composition::CompositionShadow value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual2)->get_Shadow(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_ISpriteVisual2<D>::Shadow(Windows::UI::Composition::CompositionShadow const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::ISpriteVisual2)->put_Shadow(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Composition_IStepEasingFunction<D>::FinalStep() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_FinalStep(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::FinalStep(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_FinalStep(value));
}

template <typename D> int32_t consume_Windows_UI_Composition_IStepEasingFunction<D>::InitialStep() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_InitialStep(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::InitialStep(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_InitialStep(value));
}

template <typename D> bool consume_Windows_UI_Composition_IStepEasingFunction<D>::IsFinalStepSingleFrame() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_IsFinalStepSingleFrame(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::IsFinalStepSingleFrame(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_IsFinalStepSingleFrame(value));
}

template <typename D> bool consume_Windows_UI_Composition_IStepEasingFunction<D>::IsInitialStepSingleFrame() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_IsInitialStepSingleFrame(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::IsInitialStepSingleFrame(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_IsInitialStepSingleFrame(value));
}

template <typename D> int32_t consume_Windows_UI_Composition_IStepEasingFunction<D>::StepCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->get_StepCount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IStepEasingFunction<D>::StepCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IStepEasingFunction)->put_StepCount(value));
}

template <typename D> void consume_Windows_UI_Composition_IVector2KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2KeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector2KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2KeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>::FinalValue() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2NaturalMotionAnimation)->get_FinalValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>::FinalValue(optional<Windows::Foundation::Numerics::float2> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2NaturalMotionAnimation)->put_FinalValue(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>::InitialValue() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2NaturalMotionAnimation)->get_InitialValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>::InitialValue(optional<Windows::Foundation::Numerics::float2> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2NaturalMotionAnimation)->put_InitialValue(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>::InitialVelocity() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2NaturalMotionAnimation)->get_InitialVelocity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVector2NaturalMotionAnimation<D>::InitialVelocity(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector2NaturalMotionAnimation)->put_InitialVelocity(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector3KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3KeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector3KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3KeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>::FinalValue() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3NaturalMotionAnimation)->get_FinalValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>::FinalValue(optional<Windows::Foundation::Numerics::float3> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3NaturalMotionAnimation)->put_FinalValue(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>::InitialValue() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3NaturalMotionAnimation)->get_InitialValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>::InitialValue(optional<Windows::Foundation::Numerics::float3> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3NaturalMotionAnimation)->put_InitialValue(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>::InitialVelocity() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3NaturalMotionAnimation)->get_InitialVelocity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVector3NaturalMotionAnimation<D>::InitialVelocity(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector3NaturalMotionAnimation)->put_InitialVelocity(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector4KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector4KeyFrameAnimation)->InsertKeyFrame(normalizedProgressKey, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Composition_IVector4KeyFrameAnimation<D>::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value, Windows::UI::Composition::CompositionEasingFunction const& easingFunction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVector4KeyFrameAnimation)->InsertKeyFrameWithEasingFunction(normalizedProgressKey, get_abi(value), get_abi(easingFunction)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_IVisual<D>::AnchorPoint() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_AnchorPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::AnchorPoint(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_AnchorPoint(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBackfaceVisibility consume_Windows_UI_Composition_IVisual<D>::BackfaceVisibility() const
{
    Windows::UI::Composition::CompositionBackfaceVisibility value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_BackfaceVisibility(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_BackfaceVisibility(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionBorderMode consume_Windows_UI_Composition_IVisual<D>::BorderMode() const
{
    Windows::UI::Composition::CompositionBorderMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_BorderMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::BorderMode(Windows::UI::Composition::CompositionBorderMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_BorderMode(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::CenterPoint() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_CenterPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::CenterPoint(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_CenterPoint(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionClip consume_Windows_UI_Composition_IVisual<D>::Clip() const
{
    Windows::UI::Composition::CompositionClip value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Clip(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Clip(Windows::UI::Composition::CompositionClip const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Clip(get_abi(value)));
}

template <typename D> Windows::UI::Composition::CompositionCompositeMode consume_Windows_UI_Composition_IVisual<D>::CompositeMode() const
{
    Windows::UI::Composition::CompositionCompositeMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_CompositeMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::CompositeMode(Windows::UI::Composition::CompositionCompositeMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_CompositeMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Composition_IVisual<D>::IsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_IsVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::IsVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_IsVisible(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::Offset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Offset(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Offset(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Offset(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_IVisual<D>::Opacity() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Opacity(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Opacity(value));
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_UI_Composition_IVisual<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Orientation(Windows::Foundation::Numerics::quaternion const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Orientation(get_abi(value)));
}

template <typename D> Windows::UI::Composition::ContainerVisual consume_Windows_UI_Composition_IVisual<D>::Parent() const
{
    Windows::UI::Composition::ContainerVisual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Composition_IVisual<D>::RotationAngle() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::RotationAngle(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_RotationAngle(value));
}

template <typename D> float consume_Windows_UI_Composition_IVisual<D>::RotationAngleInDegrees() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_RotationAngleInDegrees(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::RotationAngleInDegrees(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_RotationAngleInDegrees(value));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::RotationAxis() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_RotationAxis(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::RotationAxis(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_RotationAxis(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual<D>::Scale() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Scale(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Scale(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Scale(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_IVisual<D>::Size() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::Size(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_Size(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4x4 consume_Windows_UI_Composition_IVisual<D>::TransformMatrix() const
{
    Windows::Foundation::Numerics::float4x4 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->get_TransformMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual<D>::TransformMatrix(Windows::Foundation::Numerics::float4x4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual)->put_TransformMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Composition::Visual consume_Windows_UI_Composition_IVisual2<D>::ParentForTransform() const
{
    Windows::UI::Composition::Visual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->get_ParentForTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual2<D>::ParentForTransform(Windows::UI::Composition::Visual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->put_ParentForTransform(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Composition_IVisual2<D>::RelativeOffsetAdjustment() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->get_RelativeOffsetAdjustment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual2<D>::RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->put_RelativeOffsetAdjustment(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float2 consume_Windows_UI_Composition_IVisual2<D>::RelativeSizeAdjustment() const
{
    Windows::Foundation::Numerics::float2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->get_RelativeSizeAdjustment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisual2<D>::RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisual2)->put_RelativeSizeAdjustment(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Composition_IVisualCollection<D>::Count() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->get_Count(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertAbove(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertAbove(get_abi(newChild), get_abi(sibling)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertAtBottom(Windows::UI::Composition::Visual const& newChild) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertAtBottom(get_abi(newChild)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertAtTop(Windows::UI::Composition::Visual const& newChild) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertAtTop(get_abi(newChild)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::InsertBelow(Windows::UI::Composition::Visual const& newChild, Windows::UI::Composition::Visual const& sibling) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->InsertBelow(get_abi(newChild), get_abi(sibling)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::Remove(Windows::UI::Composition::Visual const& child) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->Remove(get_abi(child)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualCollection<D>::RemoveAll() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualCollection)->RemoveAll());
}

template <typename D> int32_t consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::Count() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->get_Count(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::Add(Windows::UI::Composition::Visual const& newVisual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->Add(get_abi(newVisual)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::Remove(Windows::UI::Composition::Visual const& visual) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->Remove(get_abi(visual)));
}

template <typename D> void consume_Windows_UI_Composition_IVisualUnorderedCollection<D>::RemoveAll() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::IVisualUnorderedCollection)->RemoveAll());
}

template <typename D>
struct produce<D, Windows::UI::Composition::IAmbientLight> : produce_base<D, Windows::UI::Composition::IAmbientLight>
{
    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IAmbientLight2> : produce_base<D, Windows::UI::Composition::IAmbientLight2>
{
    HRESULT __stdcall get_Intensity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Intensity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Intensity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Intensity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IAnimationController> : produce_base<D, Windows::UI::Composition::IAnimationController>
{
    HRESULT __stdcall get_PlaybackRate(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().PlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaybackRate(float value) noexcept final
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

    HRESULT __stdcall get_Progress(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Progress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Progress(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Progress(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProgressBehavior(Windows::UI::Composition::AnimationControllerProgressBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::AnimationControllerProgressBehavior>(this->shim().ProgressBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProgressBehavior(Windows::UI::Composition::AnimationControllerProgressBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationControllerProgressBehavior const*>(&value));
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
};

template <typename D>
struct produce<D, Windows::UI::Composition::IAnimationControllerStatics> : produce_base<D, Windows::UI::Composition::IAnimationControllerStatics>
{
    HRESULT __stdcall get_MaxPlaybackRate(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinPlaybackRate(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IBounceScalarNaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::IBounceScalarNaturalMotionAnimation>
{
    HRESULT __stdcall get_Acceleration(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Acceleration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Acceleration(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Acceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Restitution(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Restitution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Restitution(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Restitution(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IBounceVector2NaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::IBounceVector2NaturalMotionAnimation>
{
    HRESULT __stdcall get_Acceleration(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Acceleration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Acceleration(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Acceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Restitution(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Restitution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Restitution(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Restitution(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IBounceVector3NaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::IBounceVector3NaturalMotionAnimation>
{
    HRESULT __stdcall get_Acceleration(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Acceleration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Acceleration(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Acceleration(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Restitution(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Restitution());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Restitution(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Restitution(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IColorKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IColorKeyFrameAnimation>
{
    HRESULT __stdcall get_InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionColorSpace>(this->shim().InterpolationColorSpace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationColorSpace(*reinterpret_cast<Windows::UI::Composition::CompositionColorSpace const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, struct struct_Windows_UI_Color value, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::UI::Color const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimation> : produce_base<D, Windows::UI::Composition::ICompositionAnimation>
{
    HRESULT __stdcall ClearAllParameters() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAllParameters();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ClearParameter(HSTRING key) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearParameter(*reinterpret_cast<hstring const*>(&key));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetColorParameter(HSTRING key, struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetColorParameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetMatrix3x2Parameter(HSTRING key, Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMatrix3x2Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetMatrix4x4Parameter(HSTRING key, Windows::Foundation::Numerics::float4x4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMatrix4x4Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetQuaternionParameter(HSTRING key, Windows::Foundation::Numerics::quaternion value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetQuaternionParameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetReferenceParameter(HSTRING key, void* compositionObject) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetReferenceParameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::UI::Composition::CompositionObject const*>(&compositionObject));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetScalarParameter(HSTRING key, float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetScalarParameter(*reinterpret_cast<hstring const*>(&key), value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetVector2Parameter(HSTRING key, Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVector2Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetVector3Parameter(HSTRING key, Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVector3Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetVector4Parameter(HSTRING key, Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVector4Parameter(*reinterpret_cast<hstring const*>(&key), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimation2> : produce_base<D, Windows::UI::Composition::ICompositionAnimation2>
{
    HRESULT __stdcall SetBooleanParameter(HSTRING key, bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBooleanParameter(*reinterpret_cast<hstring const*>(&key), value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Target(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Target(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Target(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimation3> : produce_base<D, Windows::UI::Composition::ICompositionAnimation3>
{
    HRESULT __stdcall get_InitialValueExpressions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::InitialValueExpressionCollection>(this->shim().InitialValueExpressions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationBase> : produce_base<D, Windows::UI::Composition::ICompositionAnimationBase>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationFactory> : produce_base<D, Windows::UI::Composition::ICompositionAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionAnimationGroup> : produce_base<D, Windows::UI::Composition::ICompositionAnimationGroup>
{
    HRESULT __stdcall get_Count(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Add(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Remove(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAll() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBackdropBrush> : produce_base<D, Windows::UI::Composition::ICompositionBackdropBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBatchCompletedEventArgs> : produce_base<D, Windows::UI::Composition::ICompositionBatchCompletedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBrush> : produce_base<D, Windows::UI::Composition::ICompositionBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionBrushFactory> : produce_base<D, Windows::UI::Composition::ICompositionBrushFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionCapabilities> : produce_base<D, Windows::UI::Composition::ICompositionCapabilities>
{
    HRESULT __stdcall AreEffectsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreEffectsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AreEffectsFast(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreEffectsFast());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Changed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Changed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Changed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Changed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionCapabilitiesStatics> : produce_base<D, Windows::UI::Composition::ICompositionCapabilitiesStatics>
{
    HRESULT __stdcall GetForCurrentView(void** current) noexcept final
    {
        try
        {
            *current = nullptr;
            typename D::abi_guard guard(this->shim());
            *current = detach_from<Windows::UI::Composition::CompositionCapabilities>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClip> : produce_base<D, Windows::UI::Composition::ICompositionClip>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClip2> : produce_base<D, Windows::UI::Composition::ICompositionClip2>
{
    HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnchorPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionClipFactory> : produce_base<D, Windows::UI::Composition::ICompositionClipFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionColorBrush> : produce_base<D, Windows::UI::Composition::ICompositionColorBrush>
{
    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionColorGradientStop> : produce_base<D, Windows::UI::Composition::ICompositionColorGradientStop>
{
    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionColorGradientStopCollection> : produce_base<D, Windows::UI::Composition::ICompositionColorGradientStopCollection>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionCommitBatch> : produce_base<D, Windows::UI::Composition::ICompositionCommitBatch>
{
    HRESULT __stdcall get_IsActive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnded(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnded());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionContainerShape> : produce_base<D, Windows::UI::Composition::ICompositionContainerShape>
{
    HRESULT __stdcall get_Shapes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionShapeCollection>(this->shim().Shapes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionDrawingSurface> : produce_base<D, Windows::UI::Composition::ICompositionDrawingSurface>
{
    HRESULT __stdcall get_AlphaMode(Windows::Graphics::DirectX::DirectXAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::DirectXAlphaMode>(this->shim().AlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PixelFormat(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::DirectXPixelFormat>(this->shim().PixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionDrawingSurface2> : produce_base<D, Windows::UI::Composition::ICompositionDrawingSurface2>
{
    HRESULT __stdcall get_SizeInt32(struct struct_Windows_Graphics_SizeInt32* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::SizeInt32>(this->shim().SizeInt32());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Resize(struct struct_Windows_Graphics_SizeInt32 sizePixels) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resize(*reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&sizePixels));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Scroll(struct struct_Windows_Graphics_PointInt32 offset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scroll(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ScrollRect(struct struct_Windows_Graphics_PointInt32 offset, struct struct_Windows_Graphics_RectInt32 scrollRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scroll(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&scrollRect));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ScrollWithClip(struct struct_Windows_Graphics_PointInt32 offset, struct struct_Windows_Graphics_RectInt32 clipRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollWithClip(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&clipRect));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ScrollRectWithClip(struct struct_Windows_Graphics_PointInt32 offset, struct struct_Windows_Graphics_RectInt32 clipRect, struct struct_Windows_Graphics_RectInt32 scrollRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollWithClip(*reinterpret_cast<Windows::Graphics::PointInt32 const*>(&offset), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&clipRect), *reinterpret_cast<Windows::Graphics::RectInt32 const*>(&scrollRect));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionDrawingSurfaceFactory> : produce_base<D, Windows::UI::Composition::ICompositionDrawingSurfaceFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEasingFunction> : produce_base<D, Windows::UI::Composition::ICompositionEasingFunction>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEasingFunctionFactory> : produce_base<D, Windows::UI::Composition::ICompositionEasingFunctionFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectBrush> : produce_base<D, Windows::UI::Composition::ICompositionEffectBrush>
{
    HRESULT __stdcall GetSourceParameter(HSTRING name, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().GetSourceParameter(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetSourceParameter(HSTRING name, void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSourceParameter(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectFactory> : produce_base<D, Windows::UI::Composition::ICompositionEffectFactory>
{
    HRESULT __stdcall CreateBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionEffectBrush>(this->shim().CreateBrush());
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

    HRESULT __stdcall get_LoadStatus(Windows::UI::Composition::CompositionEffectFactoryLoadStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionEffectFactoryLoadStatus>(this->shim().LoadStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectSourceParameter> : produce_base<D, Windows::UI::Composition::ICompositionEffectSourceParameter>
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
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEffectSourceParameterFactory> : produce_base<D, Windows::UI::Composition::ICompositionEffectSourceParameterFactory>
{
    HRESULT __stdcall Create(HSTRING name, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Composition::CompositionEffectSourceParameter>(this->shim().Create(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionEllipseGeometry> : produce_base<D, Windows::UI::Composition::ICompositionEllipseGeometry>
{
    HRESULT __stdcall get_Center(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Center(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Center(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Radius(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Radius());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Radius(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Radius(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGeometry> : produce_base<D, Windows::UI::Composition::ICompositionGeometry>
{
    HRESULT __stdcall get_TrimEnd(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TrimEnd());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TrimEnd(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimEnd(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrimOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TrimOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TrimOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrimStart(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TrimStart());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TrimStart(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimStart(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGeometryFactory> : produce_base<D, Windows::UI::Composition::ICompositionGeometryFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGradientBrush> : produce_base<D, Windows::UI::Composition::ICompositionGradientBrush>
{
    HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnchorPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ColorStops(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionColorGradientStopCollection>(this->shim().ColorStops());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionGradientExtendMode>(this->shim().ExtendMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExtendMode(*reinterpret_cast<Windows::UI::Composition::CompositionGradientExtendMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InterpolationSpace(Windows::UI::Composition::CompositionColorSpace* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionColorSpace>(this->shim().InterpolationSpace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationSpace(Windows::UI::Composition::CompositionColorSpace value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationSpace(*reinterpret_cast<Windows::UI::Composition::CompositionColorSpace const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGradientBrushFactory> : produce_base<D, Windows::UI::Composition::ICompositionGradientBrushFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGraphicsDevice> : produce_base<D, Windows::UI::Composition::ICompositionGraphicsDevice>
{
    HRESULT __stdcall CreateDrawingSurface(Windows::Foundation::Size sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionDrawingSurface>(this->shim().CreateDrawingSurface(*reinterpret_cast<Windows::Foundation::Size const*>(&sizePixels), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::DirectX::DirectXAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RenderingDeviceReplaced(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RenderingDeviceReplaced(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Composition::CompositionGraphicsDevice, Windows::UI::Composition::RenderingDeviceReplacedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RenderingDeviceReplaced(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RenderingDeviceReplaced(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionGraphicsDevice2> : produce_base<D, Windows::UI::Composition::ICompositionGraphicsDevice2>
{
    HRESULT __stdcall CreateDrawingSurface2(struct struct_Windows_Graphics_SizeInt32 sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionDrawingSurface>(this->shim().CreateDrawingSurface2(*reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&sizePixels), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::DirectX::DirectXAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateVirtualDrawingSurface(struct struct_Windows_Graphics_SizeInt32 sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode alphaMode, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionVirtualDrawingSurface>(this->shim().CreateVirtualDrawingSurface(*reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&sizePixels), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::DirectX::DirectXAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionLight> : produce_base<D, Windows::UI::Composition::ICompositionLight>
{
    HRESULT __stdcall get_Targets(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::VisualUnorderedCollection>(this->shim().Targets());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionLight2> : produce_base<D, Windows::UI::Composition::ICompositionLight2>
{
    HRESULT __stdcall get_ExclusionsFromTargets(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::VisualUnorderedCollection>(this->shim().ExclusionsFromTargets());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionLight3> : produce_base<D, Windows::UI::Composition::ICompositionLight3>
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
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionLightFactory> : produce_base<D, Windows::UI::Composition::ICompositionLightFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionLineGeometry> : produce_base<D, Windows::UI::Composition::ICompositionLineGeometry>
{
    HRESULT __stdcall get_Start(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Start());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Start(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_End(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().End());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_End(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().End(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionLinearGradientBrush> : produce_base<D, Windows::UI::Composition::ICompositionLinearGradientBrush>
{
    HRESULT __stdcall get_EndPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().EndPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().StartPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionMaskBrush> : produce_base<D, Windows::UI::Composition::ICompositionMaskBrush>
{
    HRESULT __stdcall get_Mask(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().Mask());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mask(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mask(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
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
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Source(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionNineGridBrush> : produce_base<D, Windows::UI::Composition::ICompositionNineGridBrush>
{
    HRESULT __stdcall get_BottomInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().BottomInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BottomInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BottomInsetScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().BottomInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInsetScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BottomInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCenterHollow(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCenterHollow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCenterHollow(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCenterHollow(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LeftInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInsetScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LeftInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInsetScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RightInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RightInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightInsetScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RightInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RightInsetScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightInsetScale(value);
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
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Source(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Source(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TopInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TopInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TopInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TopInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TopInsetScale(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TopInsetScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TopInsetScale(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TopInsetScale(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetInsets(float inset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsets(inset);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetInsetsWithValues(float left, float top, float right, float bottom) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsets(left, top, right, bottom);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetInsetScales(float scale) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsetScales(scale);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetInsetScalesWithValues(float left, float top, float right, float bottom) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetInsetScales(left, top, right, bottom);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject> : produce_base<D, Windows::UI::Composition::ICompositionObject>
{
    HRESULT __stdcall get_Compositor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Compositor>(this->shim().Compositor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Dispatcher(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreDispatcher>(this->shim().Dispatcher());
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
            *value = detach_from<Windows::UI::Composition::CompositionPropertySet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartAnimation(HSTRING propertyName, void* animation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAnimation(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::UI::Composition::CompositionAnimation const*>(&animation));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopAnimation(HSTRING propertyName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAnimation(*reinterpret_cast<hstring const*>(&propertyName));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject2> : produce_base<D, Windows::UI::Composition::ICompositionObject2>
{
    HRESULT __stdcall get_Comment(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Comment(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Comment(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ImplicitAnimations(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ImplicitAnimationCollection>(this->shim().ImplicitAnimations());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ImplicitAnimations(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImplicitAnimations(*reinterpret_cast<Windows::UI::Composition::ImplicitAnimationCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartAnimationGroup(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartAnimationGroup(*reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopAnimationGroup(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopAnimationGroup(*reinterpret_cast<Windows::UI::Composition::ICompositionAnimationBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject3> : produce_base<D, Windows::UI::Composition::ICompositionObject3>
{
    HRESULT __stdcall get_DispatcherQueue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::DispatcherQueue>(this->shim().DispatcherQueue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObject4> : produce_base<D, Windows::UI::Composition::ICompositionObject4>
{
    HRESULT __stdcall TryGetAnimationController(HSTRING propertyName, void** animationController) noexcept final
    {
        try
        {
            *animationController = nullptr;
            typename D::abi_guard guard(this->shim());
            *animationController = detach_from<Windows::UI::Composition::AnimationController>(this->shim().TryGetAnimationController(*reinterpret_cast<hstring const*>(&propertyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionObjectFactory> : produce_base<D, Windows::UI::Composition::ICompositionObjectFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPath> : produce_base<D, Windows::UI::Composition::ICompositionPath>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPathFactory> : produce_base<D, Windows::UI::Composition::ICompositionPathFactory>
{
    HRESULT __stdcall Create(void* source, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionPath>(this->shim().Create(*reinterpret_cast<Windows::Graphics::IGeometrySource2D const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPathGeometry> : produce_base<D, Windows::UI::Composition::ICompositionPathGeometry>
{
    HRESULT __stdcall get_Path(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionPath>(this->shim().Path());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Path(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::UI::Composition::CompositionPath const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPropertySet> : produce_base<D, Windows::UI::Composition::ICompositionPropertySet>
{
    HRESULT __stdcall InsertColor(HSTRING propertyName, struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertColor(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertMatrix3x2(HSTRING propertyName, Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertMatrix3x2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertMatrix4x4(HSTRING propertyName, Windows::Foundation::Numerics::float4x4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertMatrix4x4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertQuaternion(HSTRING propertyName, Windows::Foundation::Numerics::quaternion value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertQuaternion(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertScalar(HSTRING propertyName, float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertScalar(*reinterpret_cast<hstring const*>(&propertyName), value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertVector2(HSTRING propertyName, Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertVector2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertVector3(HSTRING propertyName, Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertVector3(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertVector4(HSTRING propertyName, Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertVector4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetColor(HSTRING propertyName, struct struct_Windows_UI_Color* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetColor(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::UI::Color*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetMatrix3x2(HSTRING propertyName, Windows::Foundation::Numerics::float3x2* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetMatrix3x2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3x2*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetMatrix4x4(HSTRING propertyName, Windows::Foundation::Numerics::float4x4* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetMatrix4x4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetQuaternion(HSTRING propertyName, Windows::Foundation::Numerics::quaternion* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetQuaternion(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::quaternion*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetScalar(HSTRING propertyName, float* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetScalar(*reinterpret_cast<hstring const*>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetVector2(HSTRING propertyName, Windows::Foundation::Numerics::float2* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetVector2(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float2*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetVector3(HSTRING propertyName, Windows::Foundation::Numerics::float3* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetVector3(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float3*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetVector4(HSTRING propertyName, Windows::Foundation::Numerics::float4* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetVector4(*reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<Windows::Foundation::Numerics::float4*>(value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionPropertySet2> : produce_base<D, Windows::UI::Composition::ICompositionPropertySet2>
{
    HRESULT __stdcall InsertBoolean(HSTRING propertyName, bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertBoolean(*reinterpret_cast<hstring const*>(&propertyName), value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetBoolean(HSTRING propertyName, bool* value, Windows::UI::Composition::CompositionGetValueStatus* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionGetValueStatus>(this->shim().TryGetBoolean(*reinterpret_cast<hstring const*>(&propertyName), *value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionRectangleGeometry> : produce_base<D, Windows::UI::Composition::ICompositionRectangleGeometry>
{
    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionRoundedRectangleGeometry> : produce_base<D, Windows::UI::Composition::ICompositionRoundedRectangleGeometry>
{
    HRESULT __stdcall get_CornerRadius(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().CornerRadius());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CornerRadius(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CornerRadius(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionScopedBatch> : produce_base<D, Windows::UI::Composition::ICompositionScopedBatch>
{
    HRESULT __stdcall get_IsActive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsActive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEnded(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEnded());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall End() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().End();
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

    HRESULT __stdcall Suspend() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Suspend();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Completed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Completed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, Windows::UI::Composition::CompositionBatchCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Completed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Completed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShadow> : produce_base<D, Windows::UI::Composition::ICompositionShadow>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShadowFactory> : produce_base<D, Windows::UI::Composition::ICompositionShadowFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShape> : produce_base<D, Windows::UI::Composition::ICompositionShape>
{
    HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionShapeFactory> : produce_base<D, Windows::UI::Composition::ICompositionShapeFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSpriteShape> : produce_base<D, Windows::UI::Composition::ICompositionSpriteShape>
{
    HRESULT __stdcall get_FillBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().FillBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FillBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillBrush(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Geometry(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionGeometry>(this->shim().Geometry());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Geometry(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Geometry(*reinterpret_cast<Windows::UI::Composition::CompositionGeometry const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsStrokeNonScaling(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStrokeNonScaling());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsStrokeNonScaling(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsStrokeNonScaling(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().StrokeBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeBrush(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashArray(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionStrokeDashArray>(this->shim().StrokeDashArray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashCap(Windows::UI::Composition::CompositionStrokeCap* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionStrokeCap>(this->shim().StrokeDashCap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashCap(Windows::UI::Composition::CompositionStrokeCap value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashCap(*reinterpret_cast<Windows::UI::Composition::CompositionStrokeCap const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashOffset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().StrokeDashOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashOffset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeEndCap(Windows::UI::Composition::CompositionStrokeCap* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionStrokeCap>(this->shim().StrokeEndCap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeEndCap(Windows::UI::Composition::CompositionStrokeCap value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeEndCap(*reinterpret_cast<Windows::UI::Composition::CompositionStrokeCap const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeLineJoin(Windows::UI::Composition::CompositionStrokeLineJoin* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionStrokeLineJoin>(this->shim().StrokeLineJoin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeLineJoin(Windows::UI::Composition::CompositionStrokeLineJoin value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeLineJoin(*reinterpret_cast<Windows::UI::Composition::CompositionStrokeLineJoin const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeMiterLimit(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().StrokeMiterLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeMiterLimit(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeMiterLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeStartCap(Windows::UI::Composition::CompositionStrokeCap* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionStrokeCap>(this->shim().StrokeStartCap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeStartCap(Windows::UI::Composition::CompositionStrokeCap value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeStartCap(*reinterpret_cast<Windows::UI::Composition::CompositionStrokeCap const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThickness(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().StrokeThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeThickness(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeThickness(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurface> : produce_base<D, Windows::UI::Composition::ICompositionSurface>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurfaceBrush> : produce_base<D, Windows::UI::Composition::ICompositionSurfaceBrush>
{
    HRESULT __stdcall get_BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBitmapInterpolationMode>(this->shim().BitmapInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapInterpolationMode(*reinterpret_cast<Windows::UI::Composition::CompositionBitmapInterpolationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalAlignmentRatio(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().HorizontalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignmentRatio(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Stretch(Windows::UI::Composition::CompositionStretch* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionStretch>(this->shim().Stretch());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Stretch(Windows::UI::Composition::CompositionStretch value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stretch(*reinterpret_cast<Windows::UI::Composition::CompositionStretch const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Surface(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ICompositionSurface>(this->shim().Surface());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Surface(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Surface(*reinterpret_cast<Windows::UI::Composition::ICompositionSurface const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentRatio(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().VerticalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignmentRatio(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionSurfaceBrush2> : produce_base<D, Windows::UI::Composition::ICompositionSurfaceBrush2>
{
    HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnchorPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionTarget> : produce_base<D, Windows::UI::Composition::ICompositionTarget>
{
    HRESULT __stdcall get_Root(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Visual>(this->shim().Root());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Root(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Root(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionTargetFactory> : produce_base<D, Windows::UI::Composition::ICompositionTargetFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionViewBox> : produce_base<D, Windows::UI::Composition::ICompositionViewBox>
{
    HRESULT __stdcall get_HorizontalAlignmentRatio(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().HorizontalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalAlignmentRatio(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Stretch(Windows::UI::Composition::CompositionStretch* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionStretch>(this->shim().Stretch());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Stretch(Windows::UI::Composition::CompositionStretch value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stretch(*reinterpret_cast<Windows::UI::Composition::CompositionStretch const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalAlignmentRatio(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().VerticalAlignmentRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalAlignmentRatio(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalAlignmentRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionVirtualDrawingSurface> : produce_base<D, Windows::UI::Composition::ICompositionVirtualDrawingSurface>
{
    HRESULT __stdcall Trim(uint32_t __rectsSize, struct struct_Windows_Graphics_RectInt32* rects) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Trim(array_view<Windows::Graphics::RectInt32 const>(reinterpret_cast<Windows::Graphics::RectInt32 const *>(rects), reinterpret_cast<Windows::Graphics::RectInt32 const *>(rects) + __rectsSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory> : produce_base<D, Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositor> : produce_base<D, Windows::UI::Composition::ICompositor>
{
    HRESULT __stdcall CreateColorKeyFrameAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::ColorKeyFrameAnimation>(this->shim().CreateColorKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateColorBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionColorBrush>(this->shim().CreateColorBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateColorBrushWithColor(struct struct_Windows_UI_Color color, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionColorBrush>(this->shim().CreateColorBrush(*reinterpret_cast<Windows::UI::Color const*>(&color)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateContainerVisual(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::ContainerVisual>(this->shim().CreateContainerVisual());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 controlPoint1, Windows::Foundation::Numerics::float2 controlPoint2, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CubicBezierEasingFunction>(this->shim().CreateCubicBezierEasingFunction(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint1), *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&controlPoint2)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEffectFactory(void* graphicsEffect, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionEffectFactory>(this->shim().CreateEffectFactory(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffect const*>(&graphicsEffect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEffectFactoryWithProperties(void* graphicsEffect, void* animatableProperties, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionEffectFactory>(this->shim().CreateEffectFactory(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffect const*>(&graphicsEffect), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&animatableProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateExpressionAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().CreateExpressionAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateExpressionAnimationWithExpression(HSTRING expression, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::ExpressionAnimation>(this->shim().CreateExpressionAnimation(*reinterpret_cast<hstring const*>(&expression)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInsetClip(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::InsetClip>(this->shim().CreateInsetClip());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInsetClipWithInsets(float leftInset, float topInset, float rightInset, float bottomInset, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::InsetClip>(this->shim().CreateInsetClip(leftInset, topInset, rightInset, bottomInset));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateLinearEasingFunction(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::LinearEasingFunction>(this->shim().CreateLinearEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreatePropertySet(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionPropertySet>(this->shim().CreatePropertySet());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateQuaternionKeyFrameAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::QuaternionKeyFrameAnimation>(this->shim().CreateQuaternionKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateScalarKeyFrameAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::ScalarKeyFrameAnimation>(this->shim().CreateScalarKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes batchType, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionScopedBatch>(this->shim().CreateScopedBatch(*reinterpret_cast<Windows::UI::Composition::CompositionBatchTypes const*>(&batchType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteVisual(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::SpriteVisual>(this->shim().CreateSpriteVisual());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSurfaceBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionSurfaceBrush>(this->shim().CreateSurfaceBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSurfaceBrushWithSurface(void* surface, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionSurfaceBrush>(this->shim().CreateSurfaceBrush(*reinterpret_cast<Windows::UI::Composition::ICompositionSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateTargetForCurrentView(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionTarget>(this->shim().CreateTargetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateVector2KeyFrameAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Vector2KeyFrameAnimation>(this->shim().CreateVector2KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateVector3KeyFrameAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Vector3KeyFrameAnimation>(this->shim().CreateVector3KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateVector4KeyFrameAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Vector4KeyFrameAnimation>(this->shim().CreateVector4KeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes batchType, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionCommitBatch>(this->shim().GetCommitBatch(*reinterpret_cast<Windows::UI::Composition::CompositionBatchTypes const*>(&batchType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositor2> : produce_base<D, Windows::UI::Composition::ICompositor2>
{
    HRESULT __stdcall CreateAmbientLight(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::AmbientLight>(this->shim().CreateAmbientLight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAnimationGroup(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionAnimationGroup>(this->shim().CreateAnimationGroup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateBackdropBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionBackdropBrush>(this->shim().CreateBackdropBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDistantLight(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::DistantLight>(this->shim().CreateDistantLight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateDropShadow(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::DropShadow>(this->shim().CreateDropShadow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateImplicitAnimationCollection(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::ImplicitAnimationCollection>(this->shim().CreateImplicitAnimationCollection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateLayerVisual(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::LayerVisual>(this->shim().CreateLayerVisual());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateMaskBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionMaskBrush>(this->shim().CreateMaskBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateNineGridBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionNineGridBrush>(this->shim().CreateNineGridBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreatePointLight(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::PointLight>(this->shim().CreatePointLight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSpotLight(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::SpotLight>(this->shim().CreateSpotLight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateStepEasingFunction(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::StepEasingFunction>(this->shim().CreateStepEasingFunction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateStepEasingFunctionWithStepCount(int32_t stepCount, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::StepEasingFunction>(this->shim().CreateStepEasingFunction(stepCount));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositor3> : produce_base<D, Windows::UI::Composition::ICompositor3>
{
    HRESULT __stdcall CreateHostBackdropBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionBackdropBrush>(this->shim().CreateHostBackdropBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositor4> : produce_base<D, Windows::UI::Composition::ICompositor4>
{
    HRESULT __stdcall CreateColorGradientStop(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionColorGradientStop>(this->shim().CreateColorGradientStop());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateColorGradientStopWithOffsetAndColor(float offset, struct struct_Windows_UI_Color color, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionColorGradientStop>(this->shim().CreateColorGradientStop(offset, *reinterpret_cast<Windows::UI::Color const*>(&color)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateLinearGradientBrush(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionLinearGradientBrush>(this->shim().CreateLinearGradientBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSpringScalarAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::SpringScalarNaturalMotionAnimation>(this->shim().CreateSpringScalarAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSpringVector2Animation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::SpringVector2NaturalMotionAnimation>(this->shim().CreateSpringVector2Animation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSpringVector3Animation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::SpringVector3NaturalMotionAnimation>(this->shim().CreateSpringVector3Animation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositor5> : produce_base<D, Windows::UI::Composition::ICompositor5>
{
    HRESULT __stdcall get_Comment(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Comment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Comment(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Comment(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GlobalPlaybackRate(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().GlobalPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GlobalPlaybackRate(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GlobalPlaybackRate(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateBounceScalarAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::BounceScalarNaturalMotionAnimation>(this->shim().CreateBounceScalarAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateBounceVector2Animation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::BounceVector2NaturalMotionAnimation>(this->shim().CreateBounceVector2Animation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateBounceVector3Animation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::BounceVector3NaturalMotionAnimation>(this->shim().CreateBounceVector3Animation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateContainerShape(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionContainerShape>(this->shim().CreateContainerShape());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEllipseGeometry(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionEllipseGeometry>(this->shim().CreateEllipseGeometry());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateLineGeometry(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionLineGeometry>(this->shim().CreateLineGeometry());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreatePathGeometry(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionPathGeometry>(this->shim().CreatePathGeometry());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreatePathGeometryWithPath(void* path, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionPathGeometry>(this->shim().CreatePathGeometry(*reinterpret_cast<Windows::UI::Composition::CompositionPath const*>(&path)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreatePathKeyFrameAnimation(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::PathKeyFrameAnimation>(this->shim().CreatePathKeyFrameAnimation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateRectangleGeometry(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionRectangleGeometry>(this->shim().CreateRectangleGeometry());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateRoundedRectangleGeometry(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionRoundedRectangleGeometry>(this->shim().CreateRoundedRectangleGeometry());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateShapeVisual(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::ShapeVisual>(this->shim().CreateShapeVisual());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteShape(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionSpriteShape>(this->shim().CreateSpriteShape());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSpriteShapeWithGeometry(void* geometry, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionSpriteShape>(this->shim().CreateSpriteShape(*reinterpret_cast<Windows::UI::Composition::CompositionGeometry const*>(&geometry)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateViewBox(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::CompositionViewBox>(this->shim().CreateViewBox());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCommitAsync(void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RequestCommitAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ICompositorStatics> : produce_base<D, Windows::UI::Composition::ICompositorStatics>
{
    HRESULT __stdcall get_MaxGlobalPlaybackRate(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxGlobalPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinGlobalPlaybackRate(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinGlobalPlaybackRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IContainerVisual> : produce_base<D, Windows::UI::Composition::IContainerVisual>
{
    HRESULT __stdcall get_Children(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::VisualCollection>(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IContainerVisualFactory> : produce_base<D, Windows::UI::Composition::IContainerVisualFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ICubicBezierEasingFunction> : produce_base<D, Windows::UI::Composition::ICubicBezierEasingFunction>
{
    HRESULT __stdcall get_ControlPoint1(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().ControlPoint1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ControlPoint2(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().ControlPoint2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDistantLight> : produce_base<D, Windows::UI::Composition::IDistantLight>
{
    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Visual>(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CoordinateSpace(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
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
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDistantLight2> : produce_base<D, Windows::UI::Composition::IDistantLight2>
{
    HRESULT __stdcall get_Intensity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Intensity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Intensity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Intensity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDropShadow> : produce_base<D, Windows::UI::Composition::IDropShadow>
{
    HRESULT __stdcall get_BlurRadius(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().BlurRadius());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BlurRadius(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BlurRadius(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Mask(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().Mask());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mask(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mask(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IDropShadow2> : produce_base<D, Windows::UI::Composition::IDropShadow2>
{
    HRESULT __stdcall get_SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionDropShadowSourcePolicy>(this->shim().SourcePolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourcePolicy(*reinterpret_cast<Windows::UI::Composition::CompositionDropShadowSourcePolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IExpressionAnimation> : produce_base<D, Windows::UI::Composition::IExpressionAnimation>
{
    HRESULT __stdcall get_Expression(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Expression());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Expression(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Expression(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IImplicitAnimationCollection> : produce_base<D, Windows::UI::Composition::IImplicitAnimationCollection>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IInsetClip> : produce_base<D, Windows::UI::Composition::IInsetClip>
{
    HRESULT __stdcall get_BottomInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().BottomInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BottomInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BottomInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LeftInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LeftInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LeftInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RightInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RightInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TopInset(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TopInset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TopInset(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TopInset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation>
{
    HRESULT __stdcall get_DelayTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DelayTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DelayTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DelayTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
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

    HRESULT __stdcall get_IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::AnimationIterationBehavior>(this->shim().IterationBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IterationBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationIterationBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IterationCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().IterationCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IterationCount(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IterationCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyFrameCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().KeyFrameCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StopBehavior(Windows::UI::Composition::AnimationStopBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::AnimationStopBehavior>(this->shim().StopBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StopBehavior(Windows::UI::Composition::AnimationStopBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationStopBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertExpressionKeyFrame(float normalizedProgressKey, HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertExpressionKeyFrame(normalizedProgressKey, *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertExpressionKeyFrameWithEasingFunction(float normalizedProgressKey, HSTRING value, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertExpressionKeyFrame(normalizedProgressKey, *reinterpret_cast<hstring const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation2> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation2>
{
    HRESULT __stdcall get_Direction(Windows::UI::Composition::AnimationDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::AnimationDirection>(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(Windows::UI::Composition::AnimationDirection value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Windows::UI::Composition::AnimationDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimation3> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimation3>
{
    HRESULT __stdcall get_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::AnimationDelayBehavior>(this->shim().DelayBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DelayBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationDelayBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IKeyFrameAnimationFactory> : produce_base<D, Windows::UI::Composition::IKeyFrameAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::ILayerVisual> : produce_base<D, Windows::UI::Composition::ILayerVisual>
{
    HRESULT __stdcall get_Effect(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionEffectBrush>(this->shim().Effect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Effect(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Effect(*reinterpret_cast<Windows::UI::Composition::CompositionEffectBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ILayerVisual2> : produce_base<D, Windows::UI::Composition::ILayerVisual2>
{
    HRESULT __stdcall get_Shadow(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionShadow>(this->shim().Shadow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Shadow(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shadow(*reinterpret_cast<Windows::UI::Composition::CompositionShadow const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ILinearEasingFunction> : produce_base<D, Windows::UI::Composition::ILinearEasingFunction>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::INaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::INaturalMotionAnimation>
{
    HRESULT __stdcall get_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::AnimationDelayBehavior>(this->shim().DelayBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DelayBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationDelayBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DelayTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().DelayTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DelayTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DelayTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StopBehavior(Windows::UI::Composition::AnimationStopBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::AnimationStopBehavior>(this->shim().StopBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StopBehavior(Windows::UI::Composition::AnimationStopBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopBehavior(*reinterpret_cast<Windows::UI::Composition::AnimationStopBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::INaturalMotionAnimationFactory> : produce_base<D, Windows::UI::Composition::INaturalMotionAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IPathKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IPathKeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, void* path) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::UI::Composition::CompositionPath const*>(&path));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, void* path, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::UI::Composition::CompositionPath const*>(&path), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IPointLight> : produce_base<D, Windows::UI::Composition::IPointLight>
{
    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Color());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Color(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Color(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConstantAttenuation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().ConstantAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ConstantAttenuation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConstantAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Visual>(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CoordinateSpace(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LinearAttenuation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LinearAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LinearAttenuation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LinearAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_QuadraticAttenuation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().QuadraticAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_QuadraticAttenuation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuadraticAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IPointLight2> : produce_base<D, Windows::UI::Composition::IPointLight2>
{
    HRESULT __stdcall get_Intensity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Intensity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Intensity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Intensity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IPointLight3> : produce_base<D, Windows::UI::Composition::IPointLight3>
{
    HRESULT __stdcall get_MinAttenuationCutoff(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinAttenuationCutoff());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinAttenuationCutoff(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinAttenuationCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAttenuationCutoff(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxAttenuationCutoff());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAttenuationCutoff(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxAttenuationCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IQuaternionKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IQuaternionKeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion value, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> : produce_base<D, Windows::UI::Composition::IRenderingDeviceReplacedEventArgs>
{
    HRESULT __stdcall get_GraphicsDevice(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionGraphicsDevice>(this->shim().GraphicsDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IScalarKeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IScalarKeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, float value, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, value, *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IScalarNaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::IScalarNaturalMotionAnimation>
{
    HRESULT __stdcall get_FinalValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().FinalValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FinalValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FinalValue(*reinterpret_cast<Windows::Foundation::IReference<float> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<float>>(this->shim().InitialValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialValue(*reinterpret_cast<Windows::Foundation::IReference<float> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialVelocity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().InitialVelocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialVelocity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialVelocity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IScalarNaturalMotionAnimationFactory> : produce_base<D, Windows::UI::Composition::IScalarNaturalMotionAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IShapeVisual> : produce_base<D, Windows::UI::Composition::IShapeVisual>
{
    HRESULT __stdcall get_Shapes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionShapeCollection>(this->shim().Shapes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewBox(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionViewBox>(this->shim().ViewBox());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ViewBox(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewBox(*reinterpret_cast<Windows::UI::Composition::CompositionViewBox const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpotLight> : produce_base<D, Windows::UI::Composition::ISpotLight>
{
    HRESULT __stdcall get_ConstantAttenuation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().ConstantAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ConstantAttenuation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConstantAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSpace(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Visual>(this->shim().CoordinateSpace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CoordinateSpace(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CoordinateSpace(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
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

    HRESULT __stdcall get_InnerConeAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().InnerConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InnerConeAngleInDegrees(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().InnerConeAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeAngleInDegrees(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerConeAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InnerConeColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().InnerConeColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerConeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LinearAttenuation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LinearAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LinearAttenuation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LinearAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().OuterConeAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuterConeAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeAngleInDegrees(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().OuterConeAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeAngleInDegrees(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuterConeAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().OuterConeColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuterConeColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_QuadraticAttenuation(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().QuadraticAttenuation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_QuadraticAttenuation(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().QuadraticAttenuation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpotLight2> : produce_base<D, Windows::UI::Composition::ISpotLight2>
{
    HRESULT __stdcall get_InnerConeIntensity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().InnerConeIntensity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InnerConeIntensity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InnerConeIntensity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OuterConeIntensity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().OuterConeIntensity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OuterConeIntensity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OuterConeIntensity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpotLight3> : produce_base<D, Windows::UI::Composition::ISpotLight3>
{
    HRESULT __stdcall get_MinAttenuationCutoff(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinAttenuationCutoff());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinAttenuationCutoff(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinAttenuationCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAttenuationCutoff(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxAttenuationCutoff());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxAttenuationCutoff(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxAttenuationCutoff(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpringScalarNaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>
{
    HRESULT __stdcall get_DampingRatio(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DampingRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DampingRatio(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DampingRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Period(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Period());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Period(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Period(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpringVector2NaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::ISpringVector2NaturalMotionAnimation>
{
    HRESULT __stdcall get_DampingRatio(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DampingRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DampingRatio(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DampingRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Period(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Period());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Period(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Period(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpringVector3NaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::ISpringVector3NaturalMotionAnimation>
{
    HRESULT __stdcall get_DampingRatio(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DampingRatio());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DampingRatio(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DampingRatio(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Period(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Period());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Period(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Period(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpriteVisual> : produce_base<D, Windows::UI::Composition::ISpriteVisual>
{
    HRESULT __stdcall get_Brush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().Brush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Brush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Brush(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::ISpriteVisual2> : produce_base<D, Windows::UI::Composition::ISpriteVisual2>
{
    HRESULT __stdcall get_Shadow(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionShadow>(this->shim().Shadow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Shadow(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shadow(*reinterpret_cast<Windows::UI::Composition::CompositionShadow const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IStepEasingFunction> : produce_base<D, Windows::UI::Composition::IStepEasingFunction>
{
    HRESULT __stdcall get_FinalStep(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().FinalStep());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FinalStep(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FinalStep(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialStep(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().InitialStep());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialStep(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialStep(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsFinalStepSingleFrame(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFinalStepSingleFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsFinalStepSingleFrame(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFinalStepSingleFrame(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsInitialStepSingleFrame(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInitialStepSingleFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsInitialStepSingleFrame(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInitialStepSingleFrame(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StepCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().StepCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StepCount(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StepCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector2KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector2KeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float2 value, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector2NaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::IVector2NaturalMotionAnimation>
{
    HRESULT __stdcall get_FinalValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float2>>(this->shim().FinalValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FinalValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FinalValue(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float2>>(this->shim().InitialValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialValue(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialVelocity(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().InitialVelocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialVelocity(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector2NaturalMotionAnimationFactory> : produce_base<D, Windows::UI::Composition::IVector2NaturalMotionAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector3KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector3KeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float3 value, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector3NaturalMotionAnimation> : produce_base<D, Windows::UI::Composition::IVector3NaturalMotionAnimation>
{
    HRESULT __stdcall get_FinalValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().FinalValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FinalValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FinalValue(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().InitialValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialValue(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialVelocity(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().InitialVelocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InitialVelocity(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialVelocity(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector3NaturalMotionAnimationFactory> : produce_base<D, Windows::UI::Composition::IVector3NaturalMotionAnimationFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IVector4KeyFrameAnimation> : produce_base<D, Windows::UI::Composition::IVector4KeyFrameAnimation>
{
    HRESULT __stdcall InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertKeyFrameWithEasingFunction(float normalizedProgressKey, Windows::Foundation::Numerics::float4 value, void* easingFunction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertKeyFrame(normalizedProgressKey, *reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value), *reinterpret_cast<Windows::UI::Composition::CompositionEasingFunction const*>(&easingFunction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisual> : produce_base<D, Windows::UI::Composition::IVisual>
{
    HRESULT __stdcall get_AnchorPoint(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().AnchorPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AnchorPoint(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AnchorPoint(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBackfaceVisibility>(this->shim().BackfaceVisibility());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackfaceVisibility(*reinterpret_cast<Windows::UI::Composition::CompositionBackfaceVisibility const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BorderMode(Windows::UI::Composition::CompositionBorderMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBorderMode>(this->shim().BorderMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BorderMode(Windows::UI::Composition::CompositionBorderMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BorderMode(*reinterpret_cast<Windows::UI::Composition::CompositionBorderMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterPoint(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().CenterPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterPoint(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterPoint(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Clip(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionClip>(this->shim().Clip());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Clip(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clip(*reinterpret_cast<Windows::UI::Composition::CompositionClip const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompositeMode(Windows::UI::Composition::CompositionCompositeMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionCompositeMode>(this->shim().CompositeMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CompositeMode(Windows::UI::Composition::CompositionCompositeMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositeMode(*reinterpret_cast<Windows::UI::Composition::CompositionCompositeMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Offset(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Opacity(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opacity(value);
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

    HRESULT __stdcall get_Parent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ContainerVisual>(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngle(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleInDegrees(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RotationAngleInDegrees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngleInDegrees(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAngleInDegrees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAxis(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().RotationAxis());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAxis(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationAxis(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Size(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransformMatrix(Windows::Foundation::Numerics::float4x4* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float4x4>(this->shim().TransformMatrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransformMatrix(Windows::Foundation::Numerics::float4x4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransformMatrix(*reinterpret_cast<Windows::Foundation::Numerics::float4x4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisual2> : produce_base<D, Windows::UI::Composition::IVisual2>
{
    HRESULT __stdcall get_ParentForTransform(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Visual>(this->shim().ParentForTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ParentForTransform(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParentForTransform(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().RelativeOffsetAdjustment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeOffsetAdjustment(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeSizeAdjustment(Windows::Foundation::Numerics::float2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float2>(this->shim().RelativeSizeAdjustment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeSizeAdjustment(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualCollection> : produce_base<D, Windows::UI::Composition::IVisualCollection>
{
    HRESULT __stdcall get_Count(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertAbove(void* newChild, void* sibling) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAbove(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild), *reinterpret_cast<Windows::UI::Composition::Visual const*>(&sibling));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertAtBottom(void* newChild) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAtBottom(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertAtTop(void* newChild) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAtTop(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertBelow(void* newChild, void* sibling) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertBelow(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newChild), *reinterpret_cast<Windows::UI::Composition::Visual const*>(&sibling));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Remove(void* child) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&child));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAll() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualFactory> : produce_base<D, Windows::UI::Composition::IVisualFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Composition::IVisualUnorderedCollection> : produce_base<D, Windows::UI::Composition::IVisualUnorderedCollection>
{
    HRESULT __stdcall get_Count(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Count());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Add(void* newVisual) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Add(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&newVisual));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Remove(void* visual) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Remove(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&visual));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAll() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAll();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

inline float AnimationController::MaxPlaybackRate()
{
    return get_activation_factory<AnimationController, Windows::UI::Composition::IAnimationControllerStatics>().MaxPlaybackRate();
}

inline float AnimationController::MinPlaybackRate()
{
    return get_activation_factory<AnimationController, Windows::UI::Composition::IAnimationControllerStatics>().MinPlaybackRate();
}

inline Windows::UI::Composition::CompositionCapabilities CompositionCapabilities::GetForCurrentView()
{
    return get_activation_factory<CompositionCapabilities, Windows::UI::Composition::ICompositionCapabilitiesStatics>().GetForCurrentView();
}

inline CompositionEffectSourceParameter::CompositionEffectSourceParameter(param::hstring const& name) :
    CompositionEffectSourceParameter(get_activation_factory<CompositionEffectSourceParameter, Windows::UI::Composition::ICompositionEffectSourceParameterFactory>().Create(name))
{}

inline CompositionPath::CompositionPath(Windows::Graphics::IGeometrySource2D const& source) :
    CompositionPath(get_activation_factory<CompositionPath, Windows::UI::Composition::ICompositionPathFactory>().Create(source))
{}

inline Compositor::Compositor() :
    Compositor(get_activation_factory<Compositor>().ActivateInstance<Compositor>())
{}

inline float Compositor::MaxGlobalPlaybackRate()
{
    return get_activation_factory<Compositor, Windows::UI::Composition::ICompositorStatics>().MaxGlobalPlaybackRate();
}

inline float Compositor::MinGlobalPlaybackRate()
{
    return get_activation_factory<Compositor, Windows::UI::Composition::ICompositorStatics>().MinGlobalPlaybackRate();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Composition::IAmbientLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IAmbientLight> {};
template<> struct hash<winrt::Windows::UI::Composition::IAmbientLight2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IAmbientLight2> {};
template<> struct hash<winrt::Windows::UI::Composition::IAnimationController> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IAnimationController> {};
template<> struct hash<winrt::Windows::UI::Composition::IAnimationControllerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IAnimationControllerStatics> {};
template<> struct hash<winrt::Windows::UI::Composition::IBounceScalarNaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IBounceScalarNaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IBounceVector2NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IBounceVector2NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IBounceVector3NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IBounceVector3NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IColorKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IColorKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimation2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionAnimation2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimation3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionAnimation3> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimationBase> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionAnimationBase> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimationFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionAnimationFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionAnimationGroup> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionAnimationGroup> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionBackdropBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionBackdropBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionBatchCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionBatchCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionCapabilities> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionCapabilities> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionCapabilitiesStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionCapabilitiesStatics> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionClip> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionClip> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionClip2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionClip2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionClipFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionClipFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionColorBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionColorBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionColorGradientStop> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionColorGradientStop> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionColorGradientStopCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionColorGradientStopCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionCommitBatch> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionCommitBatch> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionContainerShape> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionContainerShape> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionDrawingSurface> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionDrawingSurface> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionDrawingSurface2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionDrawingSurface2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionDrawingSurfaceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionDrawingSurfaceFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionEasingFunctionFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionEasingFunctionFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionEffectBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionEffectFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectSourceParameter> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionEffectSourceParameter> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionEffectSourceParameterFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionEffectSourceParameterFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionEllipseGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionEllipseGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionGeometryFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionGeometryFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionGradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionGradientBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionGradientBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionGradientBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionGraphicsDevice> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionGraphicsDevice> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionGraphicsDevice2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionGraphicsDevice2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionLight> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionLight2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionLight2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionLight3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionLight3> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionLightFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionLightFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionLineGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionLineGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionLinearGradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionLinearGradientBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionMaskBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionMaskBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionNineGridBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionNineGridBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionObject> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionObject> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionObject2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionObject2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionObject3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionObject3> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionObject4> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionObject4> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionObjectFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionObjectFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionPath> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionPath> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionPathFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionPathFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionPathGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionPathGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionPropertySet> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionPropertySet> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionPropertySet2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionPropertySet2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionRectangleGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionRectangleGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionRoundedRectangleGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionRoundedRectangleGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionScopedBatch> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionScopedBatch> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionShadow> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionShadow> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionShadowFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionShadowFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionShape> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionShape> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionShapeFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionShapeFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionSpriteShape> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionSpriteShape> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionSurface> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionSurface> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionSurfaceBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionSurfaceBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionSurfaceBrush2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionSurfaceBrush2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionTarget> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionTarget> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionTargetFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionTargetFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionViewBox> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionViewBox> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurface> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurface> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositionVirtualDrawingSurfaceFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositor> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositor> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositor2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositor2> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositor3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositor3> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositor4> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositor4> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositor5> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositor5> {};
template<> struct hash<winrt::Windows::UI::Composition::ICompositorStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICompositorStatics> {};
template<> struct hash<winrt::Windows::UI::Composition::IContainerVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IContainerVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::IContainerVisualFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IContainerVisualFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ICubicBezierEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ICubicBezierEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::IDistantLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IDistantLight> {};
template<> struct hash<winrt::Windows::UI::Composition::IDistantLight2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IDistantLight2> {};
template<> struct hash<winrt::Windows::UI::Composition::IDropShadow> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IDropShadow> {};
template<> struct hash<winrt::Windows::UI::Composition::IDropShadow2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IDropShadow2> {};
template<> struct hash<winrt::Windows::UI::Composition::IExpressionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IExpressionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IImplicitAnimationCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IImplicitAnimationCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::IInsetClip> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IInsetClip> {};
template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimation2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IKeyFrameAnimation2> {};
template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimation3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IKeyFrameAnimation3> {};
template<> struct hash<winrt::Windows::UI::Composition::IKeyFrameAnimationFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IKeyFrameAnimationFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::ILayerVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ILayerVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::ILayerVisual2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ILayerVisual2> {};
template<> struct hash<winrt::Windows::UI::Composition::ILinearEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ILinearEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::INaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::INaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::INaturalMotionAnimationFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::INaturalMotionAnimationFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::IPathKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IPathKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IPointLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IPointLight> {};
template<> struct hash<winrt::Windows::UI::Composition::IPointLight2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IPointLight2> {};
template<> struct hash<winrt::Windows::UI::Composition::IPointLight3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IPointLight3> {};
template<> struct hash<winrt::Windows::UI::Composition::IQuaternionKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IQuaternionKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IRenderingDeviceReplacedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IScalarNaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IScalarNaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IScalarNaturalMotionAnimationFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IScalarNaturalMotionAnimationFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::IShapeVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IShapeVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpotLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpotLight> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpotLight2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpotLight2> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpotLight3> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpotLight3> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpringScalarNaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpringScalarNaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpringVector2NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpringVector2NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpringVector3NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpringVector3NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpriteVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpriteVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::ISpriteVisual2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ISpriteVisual2> {};
template<> struct hash<winrt::Windows::UI::Composition::IStepEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IStepEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::IVector2KeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVector2KeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IVector2NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVector2NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IVector2NaturalMotionAnimationFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVector2NaturalMotionAnimationFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::IVector3KeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVector3KeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IVector3NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVector3NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IVector3NaturalMotionAnimationFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVector3NaturalMotionAnimationFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::IVector4KeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVector4KeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::IVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::IVisual2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVisual2> {};
template<> struct hash<winrt::Windows::UI::Composition::IVisualCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVisualCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::IVisualFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVisualFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::IVisualUnorderedCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::IVisualUnorderedCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::AmbientLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::AmbientLight> {};
template<> struct hash<winrt::Windows::UI::Composition::AnimationController> : winrt::impl::hash_base<winrt::Windows::UI::Composition::AnimationController> {};
template<> struct hash<winrt::Windows::UI::Composition::BounceScalarNaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::BounceScalarNaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::BounceVector2NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::BounceVector2NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::BounceVector3NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::BounceVector3NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ColorKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ColorKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionAnimationGroup> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionAnimationGroup> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionBackdropBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionBackdropBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionCapabilities> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionCapabilities> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionClip> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionClip> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionColorBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionColorBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionColorGradientStop> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionColorGradientStop> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionColorGradientStopCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionColorGradientStopCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionCommitBatch> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionCommitBatch> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionContainerShape> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionContainerShape> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionDrawingSurface> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionDrawingSurface> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionEffectBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionEffectBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionEffectFactory> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionEffectFactory> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionEffectSourceParameter> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionEffectSourceParameter> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionEllipseGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionEllipseGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionGradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionGradientBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionGraphicsDevice> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionGraphicsDevice> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionLight> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionLineGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionLineGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionLinearGradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionLinearGradientBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionMaskBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionMaskBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionNineGridBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionNineGridBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionObject> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionObject> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionPath> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionPath> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionPathGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionPathGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionPropertySet> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionPropertySet> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionRectangleGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionRectangleGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionRoundedRectangleGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionRoundedRectangleGeometry> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionScopedBatch> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionScopedBatch> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionShadow> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionShadow> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionShape> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionShape> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionShapeCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionShapeCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionSpriteShape> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionSpriteShape> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionStrokeDashArray> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionStrokeDashArray> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionSurfaceBrush> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionSurfaceBrush> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionTarget> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionTarget> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionViewBox> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionViewBox> {};
template<> struct hash<winrt::Windows::UI::Composition::CompositionVirtualDrawingSurface> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CompositionVirtualDrawingSurface> {};
template<> struct hash<winrt::Windows::UI::Composition::Compositor> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Compositor> {};
template<> struct hash<winrt::Windows::UI::Composition::ContainerVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ContainerVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::CubicBezierEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::CubicBezierEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::DistantLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::DistantLight> {};
template<> struct hash<winrt::Windows::UI::Composition::DropShadow> : winrt::impl::hash_base<winrt::Windows::UI::Composition::DropShadow> {};
template<> struct hash<winrt::Windows::UI::Composition::ExpressionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ExpressionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ImplicitAnimationCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ImplicitAnimationCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::InitialValueExpressionCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::InitialValueExpressionCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::InsetClip> : winrt::impl::hash_base<winrt::Windows::UI::Composition::InsetClip> {};
template<> struct hash<winrt::Windows::UI::Composition::KeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::KeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::LayerVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::LayerVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::LinearEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::LinearEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::PathKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::PathKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::PointLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::PointLight> {};
template<> struct hash<winrt::Windows::UI::Composition::QuaternionKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::QuaternionKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::RenderingDeviceReplacedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Composition::RenderingDeviceReplacedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ScalarNaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ScalarNaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::ShapeVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::ShapeVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::SpotLight> : winrt::impl::hash_base<winrt::Windows::UI::Composition::SpotLight> {};
template<> struct hash<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::SpringVector2NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::SpringVector2NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::SpringVector3NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::SpringVector3NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::SpriteVisual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::SpriteVisual> {};
template<> struct hash<winrt::Windows::UI::Composition::StepEasingFunction> : winrt::impl::hash_base<winrt::Windows::UI::Composition::StepEasingFunction> {};
template<> struct hash<winrt::Windows::UI::Composition::Vector2KeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Vector2KeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::Vector2NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Vector2NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::Vector3KeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Vector3KeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::Vector3NaturalMotionAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Vector3NaturalMotionAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::Vector4KeyFrameAnimation> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Vector4KeyFrameAnimation> {};
template<> struct hash<winrt::Windows::UI::Composition::Visual> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Visual> {};
template<> struct hash<winrt::Windows::UI::Composition::VisualCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::VisualCollection> {};
template<> struct hash<winrt::Windows::UI::Composition::VisualUnorderedCollection> : winrt::impl::hash_base<winrt::Windows::UI::Composition::VisualUnorderedCollection> {};

}

WINRT_WARNING_POP
