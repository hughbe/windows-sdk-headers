﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.2.h"
#include "winrt/Windows.UI.Input.h"

namespace winrt::impl {

template <typename D> Windows::UI::Color consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::PenTipShape consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::PenTip() const
{
    Windows::UI::Input::Inking::PenTipShape value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->get_PenTip(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::PenTip(Windows::UI::Input::Inking::PenTipShape const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->put_PenTip(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::Size(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->put_Size(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::IgnorePressure() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->get_IgnorePressure(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::IgnorePressure(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->put_IgnorePressure(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::FitToCurve() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->get_FitToCurve(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes<D>::FitToCurve(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes)->put_FitToCurve(value));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Input_Inking_IInkDrawingAttributes2<D>::PenTipTransform() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes2)->get_PenTipTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes2<D>::PenTipTransform(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes2)->put_PenTipTransform(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkDrawingAttributes2<D>::DrawAsHighlighter() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes2)->get_DrawAsHighlighter(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes2<D>::DrawAsHighlighter(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes2)->put_DrawAsHighlighter(value));
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributesKind consume_Windows_UI_Input_Inking_IInkDrawingAttributes3<D>::Kind() const
{
    Windows::UI::Input::Inking::InkDrawingAttributesKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes3)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties consume_Windows_UI_Input_Inking_IInkDrawingAttributes3<D>::PencilProperties() const
{
    Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes3)->get_PencilProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkDrawingAttributes4<D>::IgnoreTilt() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes4)->get_IgnoreTilt(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributes4<D>::IgnoreTilt(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes4)->put_IgnoreTilt(value));
}

template <typename D> Windows::UI::Input::Inking::InkModelerAttributes consume_Windows_UI_Input_Inking_IInkDrawingAttributes5<D>::ModelerAttributes() const
{
    Windows::UI::Input::Inking::InkModelerAttributes value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributes5)->get_ModelerAttributes(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties<D>::Opacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties<D>::Opacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties)->put_Opacity(value));
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributes consume_Windows_UI_Input_Inking_IInkDrawingAttributesStatics<D>::CreateForPencil() const
{
    Windows::UI::Input::Inking::InkDrawingAttributes result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkDrawingAttributesStatics)->CreateForPencil(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkInputConfiguration<D>::IsPrimaryBarrelButtonInputEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputConfiguration)->get_IsPrimaryBarrelButtonInputEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkInputConfiguration<D>::IsPrimaryBarrelButtonInputEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputConfiguration)->put_IsPrimaryBarrelButtonInputEnabled(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkInputConfiguration<D>::IsEraserInputEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputConfiguration)->get_IsEraserInputEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkInputConfiguration<D>::IsEraserInputEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputConfiguration)->put_IsEraserInputEnabled(value));
}

template <typename D> Windows::UI::Input::Inking::InkInputProcessingMode consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration<D>::Mode() const
{
    Windows::UI::Input::Inking::InkInputProcessingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputProcessingConfiguration)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration<D>::Mode(Windows::UI::Input::Inking::InkInputProcessingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputProcessingConfiguration)->put_Mode(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::InkInputRightDragAction consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration<D>::RightDragAction() const
{
    Windows::UI::Input::Inking::InkInputRightDragAction value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputProcessingConfiguration)->get_RightDragAction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkInputProcessingConfiguration<D>::RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkInputProcessingConfiguration)->put_RightDragAction(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::InkManipulationMode consume_Windows_UI_Input_Inking_IInkManager<D>::Mode() const
{
    Windows::UI::Input::Inking::InkManipulationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkManager)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkManager<D>::Mode(Windows::UI::Input::Inking::InkManipulationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkManager)->put_Mode(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkManager<D>::ProcessPointerDown(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkManager)->ProcessPointerDown(get_abi(pointerPoint)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Input_Inking_IInkManager<D>::ProcessPointerUpdate(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    Windows::Foundation::IInspectable updateInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkManager)->ProcessPointerUpdate(get_abi(pointerPoint), put_abi(updateInformation)));
    return updateInformation;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkManager<D>::ProcessPointerUp(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    Windows::Foundation::Rect updateRectangle{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkManager)->ProcessPointerUp(get_abi(pointerPoint), put_abi(updateRectangle)));
    return updateRectangle;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkManager<D>::SetDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkManager)->SetDefaultDrawingAttributes(get_abi(drawingAttributes)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> consume_Windows_UI_Input_Inking_IInkManager<D>::RecognizeAsync(Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> recognitionResults{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkManager)->RecognizeAsync2(get_abi(recognitionTarget), put_abi(recognitionResults)));
    return recognitionResults;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Input_Inking_IInkModelerAttributes<D>::PredictionTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkModelerAttributes)->get_PredictionTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkModelerAttributes<D>::PredictionTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkModelerAttributes)->put_PredictionTime(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkModelerAttributes<D>::ScalingFactor() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkModelerAttributes)->get_ScalingFactor(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkModelerAttributes<D>::ScalingFactor(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkModelerAttributes)->put_ScalingFactor(value));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_Inking_IInkPoint<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPoint)->get_Position(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkPoint<D>::Pressure() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPoint)->get_Pressure(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkPoint2<D>::TiltX() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPoint2)->get_TiltX(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkPoint2<D>::TiltY() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPoint2)->get_TiltY(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_UI_Input_Inking_IInkPoint2<D>::Timestamp() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPoint2)->get_Timestamp(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkPoint consume_Windows_UI_Input_Inking_IInkPointFactory<D>::CreateInkPoint(Windows::Foundation::Point const& position, float pressure) const
{
    Windows::UI::Input::Inking::InkPoint result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPointFactory)->CreateInkPoint(get_abi(position), pressure, put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::Inking::InkPoint consume_Windows_UI_Input_Inking_IInkPointFactory2<D>::CreateInkPointWithTiltAndTimestamp(Windows::Foundation::Point const& position, float pressure, float tiltX, float tiltY, uint64_t timestamp) const
{
    Windows::UI::Input::Inking::InkPoint result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPointFactory2)->CreateInkPointWithTiltAndTimestamp(get_abi(position), pressure, tiltX, tiltY, timestamp, put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenter<D>::IsInputEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->get_IsInputEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter<D>::IsInputEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->put_IsInputEnabled(value));
}

template <typename D> Windows::UI::Core::CoreInputDeviceTypes consume_Windows_UI_Input_Inking_IInkPresenter<D>::InputDeviceTypes() const
{
    Windows::UI::Core::CoreInputDeviceTypes value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->get_InputDeviceTypes(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter<D>::InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->put_InputDeviceTypes(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::InkUnprocessedInput consume_Windows_UI_Input_Inking_IInkPresenter<D>::UnprocessedInput() const
{
    Windows::UI::Input::Inking::InkUnprocessedInput value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->get_UnprocessedInput(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkStrokeInput consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokeInput() const
{
    Windows::UI::Input::Inking::InkStrokeInput value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->get_StrokeInput(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkInputProcessingConfiguration consume_Windows_UI_Input_Inking_IInkPresenter<D>::InputProcessingConfiguration() const
{
    Windows::UI::Input::Inking::InkInputProcessingConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->get_InputProcessingConfiguration(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::InkStrokeContainer consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokeContainer() const
{
    Windows::UI::Input::Inking::InkStrokeContainer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->get_StrokeContainer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokeContainer(Windows::UI::Input::Inking::InkStrokeContainer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->put_StrokeContainer(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributes consume_Windows_UI_Input_Inking_IInkPresenter<D>::CopyDefaultDrawingAttributes() const
{
    Windows::UI::Input::Inking::InkDrawingAttributes value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->CopyDefaultDrawingAttributes(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter<D>::UpdateDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->UpdateDefaultDrawingAttributes(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::InkSynchronizer consume_Windows_UI_Input_Inking_IInkPresenter<D>::ActivateCustomDrying() const
{
    Windows::UI::Input::Inking::InkSynchronizer inkSynchronizer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->ActivateCustomDrying(put_abi(inkSynchronizer)));
    return inkSynchronizer;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter<D>::SetPredefinedConfiguration(Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->SetPredefinedConfiguration(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokesCollected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->add_StrokesCollected(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkPresenter> consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokesCollected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkPresenter>(this, &abi_t<Windows::UI::Input::Inking::IInkPresenter>::remove_StrokesCollected, StrokesCollected(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokesCollected(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->remove_StrokesCollected(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokesErased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->add_StrokesErased(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkPresenter> consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokesErased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkPresenter>(this, &abi_t<Windows::UI::Input::Inking::IInkPresenter>::remove_StrokesErased, StrokesErased(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter<D>::StrokesErased(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter)->remove_StrokesErased(get_abi(cookie)));
}

template <typename D> Windows::UI::Input::Inking::InkHighContrastAdjustment consume_Windows_UI_Input_Inking_IInkPresenter2<D>::HighContrastAdjustment() const
{
    Windows::UI::Input::Inking::InkHighContrastAdjustment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter2)->get_HighContrastAdjustment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenter2<D>::HighContrastAdjustment(Windows::UI::Input::Inking::InkHighContrastAdjustment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter2)->put_HighContrastAdjustment(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::InkInputConfiguration consume_Windows_UI_Input_Inking_IInkPresenter3<D>::InputConfiguration() const
{
    Windows::UI::Input::Inking::InkInputConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenter3)->get_InputConfiguration(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::AreTickMarksVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->get_AreTickMarksVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::AreTickMarksVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->put_AreTickMarksVisible(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::AreRaysVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->get_AreRaysVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::AreRaysVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->put_AreRaysVisible(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::IsCenterMarkerVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->get_IsCenterMarkerVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::IsCenterMarkerVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->put_IsCenterMarkerVisible(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::IsAngleReadoutVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->get_IsAngleReadoutVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::IsAngleReadoutVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->put_IsAngleReadoutVisible(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::IsResizable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->get_IsResizable(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::IsResizable(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->put_IsResizable(value));
}

template <typename D> double consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::Radius() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->get_Radius(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::Radius(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->put_Radius(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::AccentColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->get_AccentColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterProtractor<D>::AccentColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractor)->put_AccentColor(get_abi(value)));
}

template <typename D> Windows::UI::Input::Inking::InkPresenterProtractor consume_Windows_UI_Input_Inking_IInkPresenterProtractorFactory<D>::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const
{
    Windows::UI::Input::Inking::InkPresenterProtractor inkPresenterProtractor{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterProtractorFactory)->Create(get_abi(inkPresenter), put_abi(inkPresenterProtractor)));
    return inkPresenterProtractor;
}

template <typename D> double consume_Windows_UI_Input_Inking_IInkPresenterRuler<D>::Length() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler)->get_Length(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterRuler<D>::Length(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler)->put_Length(value));
}

template <typename D> double consume_Windows_UI_Input_Inking_IInkPresenterRuler<D>::Width() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler)->get_Width(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterRuler<D>::Width(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler)->put_Width(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterRuler2<D>::AreTickMarksVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler2)->get_AreTickMarksVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterRuler2<D>::AreTickMarksVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler2)->put_AreTickMarksVisible(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterRuler2<D>::IsCompassVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler2)->get_IsCompassVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterRuler2<D>::IsCompassVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRuler2)->put_IsCompassVisible(value));
}

template <typename D> Windows::UI::Input::Inking::InkPresenterRuler consume_Windows_UI_Input_Inking_IInkPresenterRulerFactory<D>::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const
{
    Windows::UI::Input::Inking::InkPresenterRuler inkPresenterRuler{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterRulerFactory)->Create(get_abi(inkPresenter), put_abi(inkPresenterRuler)));
    return inkPresenterRuler;
}

template <typename D> Windows::UI::Input::Inking::InkPresenterStencilKind consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::Kind() const
{
    Windows::UI::Input::Inking::InkPresenterStencilKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::IsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->get_IsVisible(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::IsVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->put_IsVisible(value));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::ForegroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->get_ForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::ForegroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->put_ForegroundColor(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::Transform() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->get_Transform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkPresenterStencil<D>::Transform(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkPresenterStencil)->put_Transform(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkRecognitionResult<D>::BoundingRect() const
{
    Windows::Foundation::Rect boundingRect{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkRecognitionResult)->get_BoundingRect(put_abi(boundingRect)));
    return boundingRect;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_UI_Input_Inking_IInkRecognitionResult<D>::GetTextCandidates() const
{
    Windows::Foundation::Collections::IVectorView<hstring> textCandidates{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkRecognitionResult)->GetTextCandidates(put_abi(textCandidates)));
    return textCandidates;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> consume_Windows_UI_Input_Inking_IInkRecognitionResult<D>::GetStrokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> strokes{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkRecognitionResult)->GetStrokes(put_abi(strokes)));
    return strokes;
}

template <typename D> hstring consume_Windows_UI_Input_Inking_IInkRecognizer<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkRecognizer)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkRecognizerContainer<D>::SetDefaultRecognizer(Windows::UI::Input::Inking::InkRecognizer const& recognizer) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkRecognizerContainer)->SetDefaultRecognizer(get_abi(recognizer)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> consume_Windows_UI_Input_Inking_IInkRecognizerContainer<D>::RecognizeAsync(Windows::UI::Input::Inking::InkStrokeContainer const& strokeCollection, Windows::UI::Input::Inking::InkRecognitionTarget const& recognitionTarget) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>> recognitionResults{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkRecognizerContainer)->RecognizeAsync(get_abi(strokeCollection), get_abi(recognitionTarget), put_abi(recognitionResults)));
    return recognitionResults;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognizer> consume_Windows_UI_Input_Inking_IInkRecognizerContainer<D>::GetRecognizers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognizer> recognizerView{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkRecognizerContainer)->GetRecognizers(put_abi(recognizerView)));
    return recognizerView;
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributes consume_Windows_UI_Input_Inking_IInkStroke<D>::DrawingAttributes() const
{
    Windows::UI::Input::Inking::InkDrawingAttributes value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->get_DrawingAttributes(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStroke<D>::DrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->put_DrawingAttributes(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkStroke<D>::BoundingRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->get_BoundingRect(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkStroke<D>::Selected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->get_Selected(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStroke<D>::Selected(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->put_Selected(value));
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkStroke<D>::Recognized() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->get_Recognized(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStrokeRenderingSegment> consume_Windows_UI_Input_Inking_IInkStroke<D>::GetRenderingSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStrokeRenderingSegment> renderingSegments{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->GetRenderingSegments(put_abi(renderingSegments)));
    return renderingSegments;
}

template <typename D> Windows::UI::Input::Inking::InkStroke consume_Windows_UI_Input_Inking_IInkStroke<D>::Clone() const
{
    Windows::UI::Input::Inking::InkStroke clonedStroke{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke)->Clone(put_abi(clonedStroke)));
    return clonedStroke;
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Input_Inking_IInkStroke2<D>::PointTransform() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke2)->get_PointTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStroke2<D>::PointTransform(Windows::Foundation::Numerics::float3x2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke2)->put_PointTransform(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkPoint> consume_Windows_UI_Input_Inking_IInkStroke2<D>::GetInkPoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkPoint> inkPoints{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke2)->GetInkPoints(put_abi(inkPoints)));
    return inkPoints;
}

template <typename D> uint32_t consume_Windows_UI_Input_Inking_IInkStroke3<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke3)->get_Id(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_UI_Input_Inking_IInkStroke3<D>::StrokeStartedTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke3)->get_StrokeStartedTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStroke3<D>::StrokeStartedTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke3)->put_StrokeStartedTime(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_UI_Input_Inking_IInkStroke3<D>::StrokeDuration() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke3)->get_StrokeDuration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStroke3<D>::StrokeDuration(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStroke3)->put_StrokeDuration(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>::BeginStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeBuilder)->BeginStroke(get_abi(pointerPoint)));
}

template <typename D> Windows::UI::Input::PointerPoint consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>::AppendToStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    Windows::UI::Input::PointerPoint previousPointerPoint{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeBuilder)->AppendToStroke(get_abi(pointerPoint), put_abi(previousPointerPoint)));
    return previousPointerPoint;
}

template <typename D> Windows::UI::Input::Inking::InkStroke consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>::EndStroke(Windows::UI::Input::PointerPoint const& pointerPoint) const
{
    Windows::UI::Input::Inking::InkStroke stroke{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeBuilder)->EndStroke(get_abi(pointerPoint), put_abi(stroke)));
    return stroke;
}

template <typename D> Windows::UI::Input::Inking::InkStroke consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>::CreateStroke(param::iterable<Windows::Foundation::Point> const& points) const
{
    Windows::UI::Input::Inking::InkStroke stroke{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeBuilder)->CreateStroke(get_abi(points), put_abi(stroke)));
    return stroke;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeBuilder<D>::SetDefaultDrawingAttributes(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeBuilder)->SetDefaultDrawingAttributes(get_abi(drawingAttributes)));
}

template <typename D> Windows::UI::Input::Inking::InkStroke consume_Windows_UI_Input_Inking_IInkStrokeBuilder2<D>::CreateStrokeFromInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints, Windows::Foundation::Numerics::float3x2 const& transform) const
{
    Windows::UI::Input::Inking::InkStroke result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeBuilder2)->CreateStrokeFromInkPoints(get_abi(inkPoints), get_abi(transform), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::Inking::InkStroke consume_Windows_UI_Input_Inking_IInkStrokeBuilder3<D>::CreateStrokeFromInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints, Windows::Foundation::Numerics::float3x2 const& transform, optional<Windows::Foundation::DateTime> const& strokeStartedTime, optional<Windows::Foundation::TimeSpan> const& strokeDuration) const
{
    Windows::UI::Input::Inking::InkStroke result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeBuilder3)->CreateStrokeFromInkPoints(get_abi(inkPoints), get_abi(transform), get_abi(strokeStartedTime), get_abi(strokeDuration), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::BoundingRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->get_BoundingRect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::AddStroke(Windows::UI::Input::Inking::InkStroke const& stroke) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->AddStroke(get_abi(stroke)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::DeleteSelected() const
{
    Windows::Foundation::Rect invalidatedRect{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->DeleteSelected(put_abi(invalidatedRect)));
    return invalidatedRect;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::MoveSelected(Windows::Foundation::Point const& translation) const
{
    Windows::Foundation::Rect invalidatedRectangle{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->MoveSelected(get_abi(translation), put_abi(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::SelectWithPolyLine(param::iterable<Windows::Foundation::Point> const& polyline) const
{
    Windows::Foundation::Rect invalidatedRectangle{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->SelectWithPolyLine(get_abi(polyline), put_abi(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::SelectWithLine(Windows::Foundation::Point const& from, Windows::Foundation::Point const& to) const
{
    Windows::Foundation::Rect invalidatedRectangle{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->SelectWithLine(get_abi(from), get_abi(to), put_abi(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::CopySelectedToClipboard() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->CopySelectedToClipboard());
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::PasteFromClipboard(Windows::Foundation::Point const& position) const
{
    Windows::Foundation::Rect invalidatedRectangle{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->PasteFromClipboard(get_abi(position), put_abi(invalidatedRectangle)));
    return invalidatedRectangle;
}

template <typename D> bool consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::CanPasteFromClipboard() const
{
    bool canPaste{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->CanPasteFromClipboard(&canPaste));
    return canPaste;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<uint64_t> consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::LoadAsync(Windows::Storage::Streams::IInputStream const& inputStream) const
{
    Windows::Foundation::IAsyncActionWithProgress<uint64_t> loadAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->LoadAsync(get_abi(inputStream), put_abi(loadAction)));
    return loadAction;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::SaveAsync(Windows::Storage::Streams::IOutputStream const& outputStream) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> outputStreamOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->SaveAsync(get_abi(outputStream), put_abi(outputStreamOperation)));
    return outputStreamOperation;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::UpdateRecognitionResults(param::vector_view<Windows::UI::Input::Inking::InkRecognitionResult> const& recognitionResults) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->UpdateRecognitionResults(get_abi(recognitionResults)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::GetStrokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> strokeView{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->GetStrokes(put_abi(strokeView)));
    return strokeView;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> consume_Windows_UI_Input_Inking_IInkStrokeContainer<D>::GetRecognitionResults() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> recognitionResults{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer)->GetRecognitionResults(put_abi(recognitionResults)));
    return recognitionResults;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeContainer2<D>::AddStrokes(param::iterable<Windows::UI::Input::Inking::InkStroke> const& strokes) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer2)->AddStrokes(get_abi(strokes)));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeContainer2<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer2)->Clear());
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> consume_Windows_UI_Input_Inking_IInkStrokeContainer3<D>::SaveAsync(Windows::Storage::Streams::IOutputStream const& outputStream, Windows::UI::Input::Inking::InkPersistenceFormat const& inkPersistenceFormat) const
{
    Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t> outputStreamOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer3)->SaveWithFormatAsync(get_abi(outputStream), get_abi(inkPersistenceFormat), put_abi(outputStreamOperation)));
    return outputStreamOperation;
}

template <typename D> Windows::UI::Input::Inking::InkStroke consume_Windows_UI_Input_Inking_IInkStrokeContainer3<D>::GetStrokeById(uint32_t id) const
{
    Windows::UI::Input::Inking::InkStroke stroke{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeContainer3)->GetStrokeById(id, put_abi(stroke)));
    return stroke;
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->add_StrokeStarted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkStrokeInput> consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkStrokeInput>(this, &abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeStarted, StrokeStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeStarted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->remove_StrokeStarted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->add_StrokeContinued(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkStrokeInput> consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeContinued(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkStrokeInput>(this, &abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeContinued, StrokeContinued(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeContinued(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->remove_StrokeContinued(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->add_StrokeEnded(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkStrokeInput> consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkStrokeInput>(this, &abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeEnded, StrokeEnded(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeEnded(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->remove_StrokeEnded(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->add_StrokeCanceled(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkStrokeInput> consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkStrokeInput>(this, &abi_t<Windows::UI::Input::Inking::IInkStrokeInput>::remove_StrokeCanceled, StrokeCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::StrokeCanceled(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->remove_StrokeCanceled(get_abi(cookie)));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter consume_Windows_UI_Input_Inking_IInkStrokeInput<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeInput)->get_InkPresenter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>::Position() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeRenderingSegment)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>::BezierControlPoint1() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeRenderingSegment)->get_BezierControlPoint1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>::BezierControlPoint2() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeRenderingSegment)->get_BezierControlPoint2(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>::Pressure() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeRenderingSegment)->get_Pressure(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>::TiltX() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeRenderingSegment)->get_TiltX(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>::TiltY() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeRenderingSegment)->get_TiltY(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Input_Inking_IInkStrokeRenderingSegment<D>::Twist() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokeRenderingSegment)->get_Twist(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> consume_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs<D>::Strokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs)->get_Strokes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> consume_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs<D>::Strokes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkStrokesErasedEventArgs)->get_Strokes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> consume_Windows_UI_Input_Inking_IInkSynchronizer<D>::BeginDry() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke> inkStrokes{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkSynchronizer)->BeginDry(put_abi(inkStrokes)));
    return inkStrokes;
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkSynchronizer<D>::EndDry() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkSynchronizer)->EndDry());
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->add_PointerEntered(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput> consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkUnprocessedInput>(this, &abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerEntered, PointerEntered(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerEntered(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->remove_PointerEntered(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerHovered(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->add_PointerHovered(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput> consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerHovered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkUnprocessedInput>(this, &abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerHovered, PointerHovered(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerHovered(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->remove_PointerHovered(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->add_PointerExited(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput> consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkUnprocessedInput>(this, &abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerExited, PointerExited(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerExited(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->remove_PointerExited(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->add_PointerPressed(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput> consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkUnprocessedInput>(this, &abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerPressed, PointerPressed(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerPressed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->remove_PointerPressed(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerMoved(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->add_PointerMoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput> consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkUnprocessedInput>(this, &abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerMoved, PointerMoved(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerMoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->remove_PointerMoved(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->add_PointerReleased(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput> consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkUnprocessedInput>(this, &abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerReleased, PointerReleased(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerReleased(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->remove_PointerReleased(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->add_PointerLost(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::IInkUnprocessedInput> consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::IInkUnprocessedInput>(this, &abi_t<Windows::UI::Input::Inking::IInkUnprocessedInput>::remove_PointerLost, PointerLost(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::PointerLost(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->remove_PointerLost(get_abi(cookie)));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter consume_Windows_UI_Input_Inking_IInkUnprocessedInput<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::IInkUnprocessedInput)->get_InkPresenter(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes>
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

    HRESULT __stdcall get_PenTip(Windows::UI::Input::Inking::PenTipShape* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::PenTipShape>(this->shim().PenTip());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PenTip(Windows::UI::Input::Inking::PenTipShape value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PenTip(*reinterpret_cast<Windows::UI::Input::Inking::PenTipShape const*>(&value));
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

    HRESULT __stdcall put_Size(Windows::Foundation::Size value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(*reinterpret_cast<Windows::Foundation::Size const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IgnorePressure(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IgnorePressure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IgnorePressure(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IgnorePressure(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FitToCurve(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().FitToCurve());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FitToCurve(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FitToCurve(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes2> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes2>
{
    HRESULT __stdcall get_PenTipTransform(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().PenTipTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PenTipTransform(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PenTipTransform(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DrawAsHighlighter(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DrawAsHighlighter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DrawAsHighlighter(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawAsHighlighter(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes3> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes3>
{
    HRESULT __stdcall get_Kind(Windows::UI::Input::Inking::InkDrawingAttributesKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkDrawingAttributesKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PencilProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties>(this->shim().PencilProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes4> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes4>
{
    HRESULT __stdcall get_IgnoreTilt(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IgnoreTilt());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IgnoreTilt(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IgnoreTilt(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributes5> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributes5>
{
    HRESULT __stdcall get_ModelerAttributes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkModelerAttributes>(this->shim().ModelerAttributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties>
{
    HRESULT __stdcall get_Opacity(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Opacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Opacity(double value) noexcept final
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
struct produce<D, Windows::UI::Input::Inking::IInkDrawingAttributesStatics> : produce_base<D, Windows::UI::Input::Inking::IInkDrawingAttributesStatics>
{
    HRESULT __stdcall CreateForPencil(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::InkDrawingAttributes>(this->shim().CreateForPencil());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkInputConfiguration> : produce_base<D, Windows::UI::Input::Inking::IInkInputConfiguration>
{
    HRESULT __stdcall get_IsPrimaryBarrelButtonInputEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrimaryBarrelButtonInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPrimaryBarrelButtonInputEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPrimaryBarrelButtonInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsEraserInputEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsEraserInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsEraserInputEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsEraserInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkInputProcessingConfiguration> : produce_base<D, Windows::UI::Input::Inking::IInkInputProcessingConfiguration>
{
    HRESULT __stdcall get_Mode(Windows::UI::Input::Inking::InkInputProcessingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkInputProcessingMode>(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::UI::Input::Inking::InkInputProcessingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::UI::Input::Inking::InkInputProcessingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkInputRightDragAction>(this->shim().RightDragAction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RightDragAction(Windows::UI::Input::Inking::InkInputRightDragAction value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightDragAction(*reinterpret_cast<Windows::UI::Input::Inking::InkInputRightDragAction const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkManager> : produce_base<D, Windows::UI::Input::Inking::IInkManager>
{
    HRESULT __stdcall get_Mode(Windows::UI::Input::Inking::InkManipulationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkManipulationMode>(this->shim().Mode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Mode(Windows::UI::Input::Inking::InkManipulationMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Mode(*reinterpret_cast<Windows::UI::Input::Inking::InkManipulationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessPointerDown(void* pointerPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessPointerDown(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessPointerUpdate(void* pointerPoint, void** updateInformation) noexcept final
    {
        try
        {
            *updateInformation = nullptr;
            typename D::abi_guard guard(this->shim());
            *updateInformation = detach_from<Windows::Foundation::IInspectable>(this->shim().ProcessPointerUpdate(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessPointerUp(void* pointerPoint, Windows::Foundation::Rect* updateRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *updateRectangle = detach_from<Windows::Foundation::Rect>(this->shim().ProcessPointerUp(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDefaultDrawingAttributes(void* drawingAttributes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultDrawingAttributes(*reinterpret_cast<Windows::UI::Input::Inking::InkDrawingAttributes const*>(&drawingAttributes));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RecognizeAsync2(Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget, void** recognitionResults) noexcept final
    {
        try
        {
            *recognitionResults = nullptr;
            typename D::abi_guard guard(this->shim());
            *recognitionResults = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>>>(this->shim().RecognizeAsync(*reinterpret_cast<Windows::UI::Input::Inking::InkRecognitionTarget const*>(&recognitionTarget)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkModelerAttributes> : produce_base<D, Windows::UI::Input::Inking::IInkModelerAttributes>
{
    HRESULT __stdcall get_PredictionTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().PredictionTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PredictionTime(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PredictionTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScalingFactor(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().ScalingFactor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScalingFactor(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScalingFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPoint> : produce_base<D, Windows::UI::Input::Inking::IInkPoint>
{
    HRESULT __stdcall get_Position(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPoint2> : produce_base<D, Windows::UI::Input::Inking::IInkPoint2>
{
    HRESULT __stdcall get_TiltX(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TiltX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TiltY(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TiltY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPointFactory> : produce_base<D, Windows::UI::Input::Inking::IInkPointFactory>
{
    HRESULT __stdcall CreateInkPoint(Windows::Foundation::Point position, float pressure, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::InkPoint>(this->shim().CreateInkPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&position), pressure));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPointFactory2> : produce_base<D, Windows::UI::Input::Inking::IInkPointFactory2>
{
    HRESULT __stdcall CreateInkPointWithTiltAndTimestamp(Windows::Foundation::Point position, float pressure, float tiltX, float tiltY, uint64_t timestamp, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::InkPoint>(this->shim().CreateInkPointWithTiltAndTimestamp(*reinterpret_cast<Windows::Foundation::Point const*>(&position), pressure, tiltX, tiltY, timestamp));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenter> : produce_base<D, Windows::UI::Input::Inking::IInkPresenter>
{
    HRESULT __stdcall get_IsInputEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsInputEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsInputEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInputEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreInputDeviceTypes>(this->shim().InputDeviceTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InputDeviceTypes(Windows::UI::Core::CoreInputDeviceTypes value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputDeviceTypes(*reinterpret_cast<Windows::UI::Core::CoreInputDeviceTypes const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UnprocessedInput(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkUnprocessedInput>(this->shim().UnprocessedInput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeInput(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkStrokeInput>(this->shim().StrokeInput());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputProcessingConfiguration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkInputProcessingConfiguration>(this->shim().InputProcessingConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeContainer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkStrokeContainer>(this->shim().StrokeContainer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeContainer(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeContainer(*reinterpret_cast<Windows::UI::Input::Inking::InkStrokeContainer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyDefaultDrawingAttributes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkDrawingAttributes>(this->shim().CopyDefaultDrawingAttributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateDefaultDrawingAttributes(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateDefaultDrawingAttributes(*reinterpret_cast<Windows::UI::Input::Inking::InkDrawingAttributes const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ActivateCustomDrying(void** inkSynchronizer) noexcept final
    {
        try
        {
            *inkSynchronizer = nullptr;
            typename D::abi_guard guard(this->shim());
            *inkSynchronizer = detach_from<Windows::UI::Input::Inking::InkSynchronizer>(this->shim().ActivateCustomDrying());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPredefinedConfiguration(Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPredefinedConfiguration(*reinterpret_cast<Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StrokesCollected(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StrokesCollected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokesCollected(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokesCollected(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StrokesErased(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StrokesErased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkPresenter, Windows::UI::Input::Inking::InkStrokesErasedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokesErased(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokesErased(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenter2> : produce_base<D, Windows::UI::Input::Inking::IInkPresenter2>
{
    HRESULT __stdcall get_HighContrastAdjustment(Windows::UI::Input::Inking::InkHighContrastAdjustment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkHighContrastAdjustment>(this->shim().HighContrastAdjustment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HighContrastAdjustment(Windows::UI::Input::Inking::InkHighContrastAdjustment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HighContrastAdjustment(*reinterpret_cast<Windows::UI::Input::Inking::InkHighContrastAdjustment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenter3> : produce_base<D, Windows::UI::Input::Inking::IInkPresenter3>
{
    HRESULT __stdcall get_InputConfiguration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkInputConfiguration>(this->shim().InputConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterProtractor> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterProtractor>
{
    HRESULT __stdcall get_AreTickMarksVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreTickMarksVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AreTickMarksVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AreTickMarksVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AreRaysVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreRaysVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AreRaysVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AreRaysVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCenterMarkerVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCenterMarkerVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCenterMarkerVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCenterMarkerVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAngleReadoutVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAngleReadoutVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsAngleReadoutVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAngleReadoutVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsResizable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsResizable());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsResizable(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsResizable(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Radius(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Radius());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Radius(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Radius(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AccentColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().AccentColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AccentColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccentColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterProtractorFactory> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterProtractorFactory>
{
    HRESULT __stdcall Create(void* inkPresenter, void** inkPresenterProtractor) noexcept final
    {
        try
        {
            *inkPresenterProtractor = nullptr;
            typename D::abi_guard guard(this->shim());
            *inkPresenterProtractor = detach_from<Windows::UI::Input::Inking::InkPresenterProtractor>(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Inking::InkPresenter const*>(&inkPresenter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterRuler> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterRuler>
{
    HRESULT __stdcall get_Length(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Length(double value) noexcept final
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

    HRESULT __stdcall get_Width(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Width(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterRuler2> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterRuler2>
{
    HRESULT __stdcall get_AreTickMarksVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreTickMarksVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AreTickMarksVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AreTickMarksVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCompassVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCompassVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCompassVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCompassVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterRulerFactory> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterRulerFactory>
{
    HRESULT __stdcall Create(void* inkPresenter, void** inkPresenterRuler) noexcept final
    {
        try
        {
            *inkPresenterRuler = nullptr;
            typename D::abi_guard guard(this->shim());
            *inkPresenterRuler = detach_from<Windows::UI::Input::Inking::InkPresenterRuler>(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Inking::InkPresenter const*>(&inkPresenter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkPresenterStencil> : produce_base<D, Windows::UI::Input::Inking::IInkPresenterStencil>
{
    HRESULT __stdcall get_Kind(Windows::UI::Input::Inking::InkPresenterStencilKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkPresenterStencilKind>(this->shim().Kind());
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

    HRESULT __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Transform(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().Transform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Transform(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkRecognitionResult> : produce_base<D, Windows::UI::Input::Inking::IInkRecognitionResult>
{
    HRESULT __stdcall get_BoundingRect(Windows::Foundation::Rect* boundingRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *boundingRect = detach_from<Windows::Foundation::Rect>(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTextCandidates(void** textCandidates) noexcept final
    {
        try
        {
            *textCandidates = nullptr;
            typename D::abi_guard guard(this->shim());
            *textCandidates = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().GetTextCandidates());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetStrokes(void** strokes) noexcept final
    {
        try
        {
            *strokes = nullptr;
            typename D::abi_guard guard(this->shim());
            *strokes = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>>(this->shim().GetStrokes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkRecognizer> : produce_base<D, Windows::UI::Input::Inking::IInkRecognizer>
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
struct produce<D, Windows::UI::Input::Inking::IInkRecognizerContainer> : produce_base<D, Windows::UI::Input::Inking::IInkRecognizerContainer>
{
    HRESULT __stdcall SetDefaultRecognizer(void* recognizer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultRecognizer(*reinterpret_cast<Windows::UI::Input::Inking::InkRecognizer const*>(&recognizer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RecognizeAsync(void* strokeCollection, Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget, void** recognitionResults) noexcept final
    {
        try
        {
            *recognitionResults = nullptr;
            typename D::abi_guard guard(this->shim());
            *recognitionResults = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>>>(this->shim().RecognizeAsync(*reinterpret_cast<Windows::UI::Input::Inking::InkStrokeContainer const*>(&strokeCollection), *reinterpret_cast<Windows::UI::Input::Inking::InkRecognitionTarget const*>(&recognitionTarget)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRecognizers(void** recognizerView) noexcept final
    {
        try
        {
            *recognizerView = nullptr;
            typename D::abi_guard guard(this->shim());
            *recognizerView = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognizer>>(this->shim().GetRecognizers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStroke> : produce_base<D, Windows::UI::Input::Inking::IInkStroke>
{
    HRESULT __stdcall get_DrawingAttributes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkDrawingAttributes>(this->shim().DrawingAttributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DrawingAttributes(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DrawingAttributes(*reinterpret_cast<Windows::UI::Input::Inking::InkDrawingAttributes const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Selected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Selected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Selected(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Selected(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Recognized(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Recognized());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRenderingSegments(void** renderingSegments) noexcept final
    {
        try
        {
            *renderingSegments = nullptr;
            typename D::abi_guard guard(this->shim());
            *renderingSegments = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStrokeRenderingSegment>>(this->shim().GetRenderingSegments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Clone(void** clonedStroke) noexcept final
    {
        try
        {
            *clonedStroke = nullptr;
            typename D::abi_guard guard(this->shim());
            *clonedStroke = detach_from<Windows::UI::Input::Inking::InkStroke>(this->shim().Clone());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStroke2> : produce_base<D, Windows::UI::Input::Inking::IInkStroke2>
{
    HRESULT __stdcall get_PointTransform(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().PointTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointTransform(Windows::Foundation::Numerics::float3x2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointTransform(*reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetInkPoints(void** inkPoints) noexcept final
    {
        try
        {
            *inkPoints = nullptr;
            typename D::abi_guard guard(this->shim());
            *inkPoints = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkPoint>>(this->shim().GetInkPoints());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStroke3> : produce_base<D, Windows::UI::Input::Inking::IInkStroke3>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeStartedTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().StrokeStartedTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeStartedTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeStartedTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDuration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().StrokeDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDuration(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDuration(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeBuilder> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeBuilder>
{
    HRESULT __stdcall BeginStroke(void* pointerPoint) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginStroke(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AppendToStroke(void* pointerPoint, void** previousPointerPoint) noexcept final
    {
        try
        {
            *previousPointerPoint = nullptr;
            typename D::abi_guard guard(this->shim());
            *previousPointerPoint = detach_from<Windows::UI::Input::PointerPoint>(this->shim().AppendToStroke(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EndStroke(void* pointerPoint, void** stroke) noexcept final
    {
        try
        {
            *stroke = nullptr;
            typename D::abi_guard guard(this->shim());
            *stroke = detach_from<Windows::UI::Input::Inking::InkStroke>(this->shim().EndStroke(*reinterpret_cast<Windows::UI::Input::PointerPoint const*>(&pointerPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateStroke(void* points, void** stroke) noexcept final
    {
        try
        {
            *stroke = nullptr;
            typename D::abi_guard guard(this->shim());
            *stroke = detach_from<Windows::UI::Input::Inking::InkStroke>(this->shim().CreateStroke(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> const*>(&points)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDefaultDrawingAttributes(void* drawingAttributes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultDrawingAttributes(*reinterpret_cast<Windows::UI::Input::Inking::InkDrawingAttributes const*>(&drawingAttributes));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeBuilder2> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeBuilder2>
{
    HRESULT __stdcall CreateStrokeFromInkPoints(void* inkPoints, Windows::Foundation::Numerics::float3x2 transform, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::InkStroke>(this->shim().CreateStrokeFromInkPoints(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkPoint> const*>(&inkPoints), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeBuilder3> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeBuilder3>
{
    HRESULT __stdcall CreateStrokeFromInkPoints(void* inkPoints, Windows::Foundation::Numerics::float3x2 transform, void* strokeStartedTime, void* strokeDuration, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::InkStroke>(this->shim().CreateStrokeFromInkPoints(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkPoint> const*>(&inkPoints), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&transform), *reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&strokeStartedTime), *reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&strokeDuration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeContainer> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeContainer>
{
    HRESULT __stdcall get_BoundingRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddStroke(void* stroke) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddStroke(*reinterpret_cast<Windows::UI::Input::Inking::InkStroke const*>(&stroke));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteSelected(Windows::Foundation::Rect* invalidatedRect) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *invalidatedRect = detach_from<Windows::Foundation::Rect>(this->shim().DeleteSelected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MoveSelected(Windows::Foundation::Point translation, Windows::Foundation::Rect* invalidatedRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *invalidatedRectangle = detach_from<Windows::Foundation::Rect>(this->shim().MoveSelected(*reinterpret_cast<Windows::Foundation::Point const*>(&translation)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SelectWithPolyLine(void* polyline, Windows::Foundation::Rect* invalidatedRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *invalidatedRectangle = detach_from<Windows::Foundation::Rect>(this->shim().SelectWithPolyLine(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> const*>(&polyline)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SelectWithLine(Windows::Foundation::Point from, Windows::Foundation::Point to, Windows::Foundation::Rect* invalidatedRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *invalidatedRectangle = detach_from<Windows::Foundation::Rect>(this->shim().SelectWithLine(*reinterpret_cast<Windows::Foundation::Point const*>(&from), *reinterpret_cast<Windows::Foundation::Point const*>(&to)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopySelectedToClipboard() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopySelectedToClipboard();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PasteFromClipboard(Windows::Foundation::Point position, Windows::Foundation::Rect* invalidatedRectangle) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *invalidatedRectangle = detach_from<Windows::Foundation::Rect>(this->shim().PasteFromClipboard(*reinterpret_cast<Windows::Foundation::Point const*>(&position)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CanPasteFromClipboard(bool* canPaste) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canPaste = detach_from<bool>(this->shim().CanPasteFromClipboard());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LoadAsync(void* inputStream, void** loadAction) noexcept final
    {
        try
        {
            *loadAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *loadAction = detach_from<Windows::Foundation::IAsyncActionWithProgress<uint64_t>>(this->shim().LoadAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&inputStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(void* outputStream, void** outputStreamOperation) noexcept final
    {
        try
        {
            *outputStreamOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *outputStreamOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t>>(this->shim().SaveAsync(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&outputStream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateRecognitionResults(void* recognitionResults) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateRecognitionResults(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult> const*>(&recognitionResults));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetStrokes(void** strokeView) noexcept final
    {
        try
        {
            *strokeView = nullptr;
            typename D::abi_guard guard(this->shim());
            *strokeView = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>>(this->shim().GetStrokes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRecognitionResults(void** recognitionResults) noexcept final
    {
        try
        {
            *recognitionResults = nullptr;
            typename D::abi_guard guard(this->shim());
            *recognitionResults = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkRecognitionResult>>(this->shim().GetRecognitionResults());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeContainer2> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeContainer2>
{
    HRESULT __stdcall AddStrokes(void* strokes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddStrokes(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkStroke> const*>(&strokes));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeContainer3> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeContainer3>
{
    HRESULT __stdcall SaveWithFormatAsync(void* outputStream, Windows::UI::Input::Inking::InkPersistenceFormat inkPersistenceFormat, void** outputStreamOperation) noexcept final
    {
        try
        {
            *outputStreamOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *outputStreamOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<uint32_t, uint32_t>>(this->shim().SaveAsync(*reinterpret_cast<Windows::Storage::Streams::IOutputStream const*>(&outputStream), *reinterpret_cast<Windows::UI::Input::Inking::InkPersistenceFormat const*>(&inkPersistenceFormat)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetStrokeById(uint32_t id, void** stroke) noexcept final
    {
        try
        {
            *stroke = nullptr;
            typename D::abi_guard guard(this->shim());
            *stroke = detach_from<Windows::UI::Input::Inking::InkStroke>(this->shim().GetStrokeById(id));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeInput> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeInput>
{
    HRESULT __stdcall add_StrokeStarted(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StrokeStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeStarted(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeStarted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StrokeContinued(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StrokeContinued(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeContinued(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeContinued(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StrokeEnded(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StrokeEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeEnded(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeEnded(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StrokeCanceled(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().StrokeCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkStrokeInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StrokeCanceled(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeCanceled(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkPresenter>(this->shim().InkPresenter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokeRenderingSegment> : produce_base<D, Windows::UI::Input::Inking::IInkStrokeRenderingSegment>
{
    HRESULT __stdcall get_Position(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BezierControlPoint1(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().BezierControlPoint1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BezierControlPoint2(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().BezierControlPoint2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TiltX(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TiltX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TiltY(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().TiltY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Twist(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().Twist());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs> : produce_base<D, Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs>
{
    HRESULT __stdcall get_Strokes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>>(this->shim().Strokes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkStrokesErasedEventArgs> : produce_base<D, Windows::UI::Input::Inking::IInkStrokesErasedEventArgs>
{
    HRESULT __stdcall get_Strokes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>>(this->shim().Strokes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkSynchronizer> : produce_base<D, Windows::UI::Input::Inking::IInkSynchronizer>
{
    HRESULT __stdcall BeginDry(void** inkStrokes) noexcept final
    {
        try
        {
            *inkStrokes = nullptr;
            typename D::abi_guard guard(this->shim());
            *inkStrokes = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Inking::InkStroke>>(this->shim().BeginDry());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EndDry() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndDry();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::IInkUnprocessedInput> : produce_base<D, Windows::UI::Input::Inking::IInkUnprocessedInput>
{
    HRESULT __stdcall add_PointerEntered(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerEntered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntered(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerEntered(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerHovered(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerHovered(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerHovered(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerHovered(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExited(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExited(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerExited(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressed(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerPressed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoved(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerMoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoved(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerMoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleased(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerReleased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleased(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerReleased(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerLost(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::InkUnprocessedInput, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerLost(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerLost(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkPresenter>(this->shim().InkPresenter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking {

inline InkDrawingAttributes::InkDrawingAttributes() :
    InkDrawingAttributes(get_activation_factory<InkDrawingAttributes>().ActivateInstance<InkDrawingAttributes>())
{}

inline Windows::UI::Input::Inking::InkDrawingAttributes InkDrawingAttributes::CreateForPencil()
{
    return get_activation_factory<InkDrawingAttributes, Windows::UI::Input::Inking::IInkDrawingAttributesStatics>().CreateForPencil();
}

inline InkManager::InkManager() :
    InkManager(get_activation_factory<InkManager>().ActivateInstance<InkManager>())
{}

inline InkPoint::InkPoint(Windows::Foundation::Point const& position, float pressure) :
    InkPoint(get_activation_factory<InkPoint, Windows::UI::Input::Inking::IInkPointFactory>().CreateInkPoint(position, pressure))
{}

inline InkPoint::InkPoint(Windows::Foundation::Point const& position, float pressure, float tiltX, float tiltY, uint64_t timestamp) :
    InkPoint(get_activation_factory<InkPoint, Windows::UI::Input::Inking::IInkPointFactory2>().CreateInkPointWithTiltAndTimestamp(position, pressure, tiltX, tiltY, timestamp))
{}

inline InkPresenterProtractor::InkPresenterProtractor(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) :
    InkPresenterProtractor(get_activation_factory<InkPresenterProtractor, Windows::UI::Input::Inking::IInkPresenterProtractorFactory>().Create(inkPresenter))
{}

inline InkPresenterRuler::InkPresenterRuler(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) :
    InkPresenterRuler(get_activation_factory<InkPresenterRuler, Windows::UI::Input::Inking::IInkPresenterRulerFactory>().Create(inkPresenter))
{}

inline InkRecognizerContainer::InkRecognizerContainer() :
    InkRecognizerContainer(get_activation_factory<InkRecognizerContainer>().ActivateInstance<InkRecognizerContainer>())
{}

inline InkStrokeBuilder::InkStrokeBuilder() :
    InkStrokeBuilder(get_activation_factory<InkStrokeBuilder>().ActivateInstance<InkStrokeBuilder>())
{}

inline InkStrokeContainer::InkStrokeContainer() :
    InkStrokeContainer(get_activation_factory<InkStrokeContainer>().ActivateInstance<InkStrokeContainer>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes3> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes4> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes4> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes5> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkDrawingAttributes5> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesStatics> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkDrawingAttributesStatics> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkInputConfiguration> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkInputConfiguration> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkInputProcessingConfiguration> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkManager> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkManager> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkModelerAttributes> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkModelerAttributes> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPoint> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPoint> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPoint2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPoint2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPointFactory> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPointFactory> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPointFactory2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPointFactory2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenter> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenter> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenter2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenter2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenter3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenter3> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenterProtractor> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenterProtractor> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenterProtractorFactory> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenterProtractorFactory> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenterRuler> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenterRuler> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenterRuler2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenterRuler2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenterRulerFactory> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkPresenterStencil> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkPresenterStencil> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkRecognitionResult> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkRecognitionResult> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkRecognizer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkRecognizer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkRecognizerContainer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStroke> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStroke> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStroke2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStroke2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStroke3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStroke3> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeBuilder3> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeContainer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeContainer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeContainer2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeContainer2> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeContainer3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeContainer3> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeInput> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeInput> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokeRenderingSegment> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkSynchronizer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkSynchronizer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::IInkUnprocessedInput> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkDrawingAttributes> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkDrawingAttributes> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkDrawingAttributesPencilProperties> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkInputConfiguration> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkInputConfiguration> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkInputProcessingConfiguration> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkInputProcessingConfiguration> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkManager> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkManager> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkModelerAttributes> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkModelerAttributes> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkPoint> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkPoint> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkPresenter> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkPresenter> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkPresenterProtractor> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkPresenterProtractor> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkPresenterRuler> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkPresenterRuler> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkRecognitionResult> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkRecognitionResult> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkRecognizer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkRecognizer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkRecognizerContainer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkRecognizerContainer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkStroke> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkStroke> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkStrokeBuilder> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkStrokeBuilder> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkStrokeContainer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkStrokeContainer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkStrokeInput> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkStrokeInput> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkStrokeRenderingSegment> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkStrokeRenderingSegment> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkStrokesErasedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkSynchronizer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkSynchronizer> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::InkUnprocessedInput> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::InkUnprocessedInput> {};

}

WINRT_WARNING_POP
