// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Playback.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::Media::AcrylicBackgroundSource consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::BackgroundSource() const
{
    Windows::UI::Xaml::Media::AcrylicBackgroundSource value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->get_BackgroundSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::BackgroundSource(Windows::UI::Xaml::Media::AcrylicBackgroundSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->put_BackgroundSource(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintColor() const
{
    Windows::UI::Color result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->get_TintColor(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->put_TintColor(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintOpacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->get_TintOpacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintOpacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->put_TintOpacity(value));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintTransitionDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->get_TintTransitionDuration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::TintTransitionDuration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->put_TintTransitionDuration(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::AlwaysUseFallback() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->get_AlwaysUseFallback(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IAcrylicBrush<D>::AlwaysUseFallback(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrush)->put_AlwaysUseFallback(value));
}

template <typename D> Windows::UI::Xaml::Media::AcrylicBrush consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::AcrylicBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrushFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::BackgroundSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_BackgroundSourceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::TintColorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_TintColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::TintOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_TintOpacityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::TintTransitionDurationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_TintTransitionDurationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IAcrylicBrushStatics<D>::AlwaysUseFallbackProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IAcrylicBrushStatics)->get_AlwaysUseFallbackProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IArcSegment<D>::Point() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->get_Point(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IArcSegment<D>::Point(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->put_Point(get_abi(value)));
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_Media_IArcSegment<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->get_Size(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IArcSegment<D>::Size(Windows::Foundation::Size const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->put_Size(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IArcSegment<D>::RotationAngle() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->get_RotationAngle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IArcSegment<D>::RotationAngle(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->put_RotationAngle(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IArcSegment<D>::IsLargeArc() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->get_IsLargeArc(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IArcSegment<D>::IsLargeArc(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->put_IsLargeArc(value));
}

template <typename D> Windows::UI::Xaml::Media::SweepDirection consume_Windows_UI_Xaml_Media_IArcSegment<D>::SweepDirection() const
{
    Windows::UI::Xaml::Media::SweepDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->get_SweepDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IArcSegment<D>::SweepDirection(Windows::UI::Xaml::Media::SweepDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegment)->put_SweepDirection(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::PointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegmentStatics)->get_PointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::SizeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegmentStatics)->get_SizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::RotationAngleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegmentStatics)->get_RotationAngleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::IsLargeArcProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegmentStatics)->get_IsLargeArcProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IArcSegmentStatics<D>::SweepDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IArcSegmentStatics)->get_SweepDirectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point1() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegment)->get_Point1(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point1(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegment)->put_Point1(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point2() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegment)->get_Point2(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point2(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegment)->put_Point2(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point3() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegment)->get_Point3(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IBezierSegment<D>::Point3(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegment)->put_Point3(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>::Point1Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegmentStatics)->get_Point1Property(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>::Point2Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegmentStatics)->get_Point2Property(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IBezierSegmentStatics<D>::Point3Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBezierSegmentStatics)->get_Point3Property(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_IBrush<D>::Opacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrush)->get_Opacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IBrush<D>::Opacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrush)->put_Opacity(value));
}

template <typename D> Windows::UI::Xaml::Media::Transform consume_Windows_UI_Xaml_Media_IBrush<D>::Transform() const
{
    Windows::UI::Xaml::Media::Transform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrush)->get_Transform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IBrush<D>::Transform(Windows::UI::Xaml::Media::Transform const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrush)->put_Transform(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Transform consume_Windows_UI_Xaml_Media_IBrush<D>::RelativeTransform() const
{
    Windows::UI::Xaml::Media::Transform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrush)->get_RelativeTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IBrush<D>::RelativeTransform(Windows::UI::Xaml::Media::Transform const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrush)->put_RelativeTransform(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Media_IBrushFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Brush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrushFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IBrushStatics<D>::OpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrushStatics)->get_OpacityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IBrushStatics<D>::TransformProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrushStatics)->get_TransformProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IBrushStatics<D>::RelativeTransformProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IBrushStatics)->get_RelativeTransformProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::CacheMode consume_Windows_UI_Xaml_Media_ICacheModeFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::CacheMode instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICacheModeFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_CenterX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_CenterX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_CenterY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::CenterY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_CenterY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_ScaleX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_ScaleX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_ScaleY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::ScaleY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_ScaleY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_SkewX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_SkewX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_SkewY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::SkewY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_SkewY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::Rotation() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_Rotation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::Rotation(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_Rotation(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_TranslateX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_TranslateX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->get_TranslateY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositeTransform<D>::TranslateY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransform)->put_TranslateY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::CenterXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_CenterXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::CenterYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_CenterYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::ScaleXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_ScaleXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::ScaleYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_ScaleYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::SkewXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_SkewXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::SkewYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_SkewYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::RotationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_RotationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::TranslateXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_TranslateXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ICompositeTransformStatics<D>::TranslateYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositeTransformStatics)->get_TranslateYProperty(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::Rendering(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositionTargetStatics)->add_Rendering(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics> consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::Rendering(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::ICompositionTargetStatics>(this, &abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_Rendering, Rendering(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::Rendering(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositionTargetStatics)->remove_Rendering(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::SurfaceContentsLost(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositionTargetStatics)->add_SurfaceContentsLost(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics> consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::SurfaceContentsLost(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::ICompositionTargetStatics>(this, &abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_SurfaceContentsLost, SurfaceContentsLost(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositionTargetStatics<D>::SurfaceContentsLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositionTargetStatics)->remove_SurfaceContentsLost(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>::Rendered(Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositionTargetStatics3)->add_Rendered(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics3> consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>::Rendered(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::ICompositionTargetStatics3>(this, &abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics3>::remove_Rendered, Rendered(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_ICompositionTargetStatics3<D>::Rendered(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ICompositionTargetStatics3)->remove_Rendered(get_abi(token)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::Center() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometry)->get_Center(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::Center(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometry)->put_Center(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometry)->get_RadiusX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometry)->put_RadiusX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometry)->get_RadiusY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IEllipseGeometry<D>::RadiusY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometry)->put_RadiusY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>::CenterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometryStatics)->get_CenterProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>::RadiusXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometryStatics)->get_RadiusXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IEllipseGeometryStatics<D>::RadiusYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IEllipseGeometryStatics)->get_RadiusYProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_IFontFamily<D>::Source() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IFontFamily)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::FontFamily consume_Windows_UI_Xaml_Media_IFontFamilyFactory<D>::CreateInstanceWithName(param::hstring const& familyName, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::FontFamily instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IFontFamilyFactory)->CreateInstanceWithName(get_abi(familyName), get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::FontFamily consume_Windows_UI_Xaml_Media_IFontFamilyStatics2<D>::XamlAutoFontFamily() const
{
    Windows::UI::Xaml::Media::FontFamily value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IFontFamilyStatics2)->get_XamlAutoFontFamily(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::GeneralTransform consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::Inverse() const
{
    Windows::UI::Xaml::Media::GeneralTransform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransform)->get_Inverse(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::TransformPoint(Windows::Foundation::Point const& point) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransform)->TransformPoint(get_abi(point), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::TryTransform(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransform)->TryTransform(get_abi(inPoint), put_abi(outPoint), &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Media_IGeneralTransform<D>::TransformBounds(Windows::Foundation::Rect const& rect) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransform)->TransformBounds(get_abi(rect), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::GeneralTransform consume_Windows_UI_Xaml_Media_IGeneralTransformFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::GeneralTransform instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransformFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::GeneralTransform consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>::InverseCore() const
{
    Windows::UI::Xaml::Media::GeneralTransform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransformOverrides)->get_InverseCore(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>::TryTransformCore(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransformOverrides)->TryTransformCore(get_abi(inPoint), put_abi(outPoint), &returnValue));
    return returnValue;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Media_IGeneralTransformOverrides<D>::TransformBoundsCore(Windows::Foundation::Rect const& rect) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeneralTransformOverrides)->TransformBoundsCore(get_abi(rect), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Transform consume_Windows_UI_Xaml_Media_IGeometry<D>::Transform() const
{
    Windows::UI::Xaml::Media::Transform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometry)->get_Transform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGeometry<D>::Transform(Windows::UI::Xaml::Media::Transform const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometry)->put_Transform(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Media_IGeometry<D>::Bounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometry)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::FillRule consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::FillRule() const
{
    Windows::UI::Xaml::Media::FillRule value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryGroup)->get_FillRule(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::FillRule(Windows::UI::Xaml::Media::FillRule const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryGroup)->put_FillRule(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::GeometryCollection consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::Children() const
{
    Windows::UI::Xaml::Media::GeometryCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryGroup)->get_Children(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGeometryGroup<D>::Children(Windows::UI::Xaml::Media::GeometryCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryGroup)->put_Children(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGeometryGroupStatics<D>::FillRuleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryGroupStatics)->get_FillRuleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGeometryGroupStatics<D>::ChildrenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryGroupStatics)->get_ChildrenProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Geometry consume_Windows_UI_Xaml_Media_IGeometryStatics<D>::Empty() const
{
    Windows::UI::Xaml::Media::Geometry value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryStatics)->get_Empty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_IGeometryStatics<D>::StandardFlatteningTolerance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryStatics)->get_StandardFlatteningTolerance(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGeometryStatics<D>::TransformProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGeometryStatics)->get_TransformProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::GradientSpreadMethod consume_Windows_UI_Xaml_Media_IGradientBrush<D>::SpreadMethod() const
{
    Windows::UI::Xaml::Media::GradientSpreadMethod value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->get_SpreadMethod(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGradientBrush<D>::SpreadMethod(Windows::UI::Xaml::Media::GradientSpreadMethod const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->put_SpreadMethod(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::BrushMappingMode consume_Windows_UI_Xaml_Media_IGradientBrush<D>::MappingMode() const
{
    Windows::UI::Xaml::Media::BrushMappingMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->get_MappingMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGradientBrush<D>::MappingMode(Windows::UI::Xaml::Media::BrushMappingMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->put_MappingMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::ColorInterpolationMode consume_Windows_UI_Xaml_Media_IGradientBrush<D>::ColorInterpolationMode() const
{
    Windows::UI::Xaml::Media::ColorInterpolationMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->get_ColorInterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGradientBrush<D>::ColorInterpolationMode(Windows::UI::Xaml::Media::ColorInterpolationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->put_ColorInterpolationMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::GradientStopCollection consume_Windows_UI_Xaml_Media_IGradientBrush<D>::GradientStops() const
{
    Windows::UI::Xaml::Media::GradientStopCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->get_GradientStops(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGradientBrush<D>::GradientStops(Windows::UI::Xaml::Media::GradientStopCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrush)->put_GradientStops(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::GradientBrush consume_Windows_UI_Xaml_Media_IGradientBrushFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::GradientBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrushFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::SpreadMethodProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrushStatics)->get_SpreadMethodProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::MappingModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrushStatics)->get_MappingModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::ColorInterpolationModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrushStatics)->get_ColorInterpolationModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGradientBrushStatics<D>::GradientStopsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientBrushStatics)->get_GradientStopsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Media_IGradientStop<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientStop)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGradientStop<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientStop)->put_Color(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IGradientStop<D>::Offset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientStop)->get_Offset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IGradientStop<D>::Offset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientStop)->put_Offset(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGradientStopStatics<D>::ColorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientStopStatics)->get_ColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IGradientStopStatics<D>::OffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IGradientStopStatics)->get_OffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::ImageSource consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageSource() const
{
    Windows::UI::Xaml::Media::ImageSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IImageBrush)->get_ImageSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageSource(Windows::UI::Xaml::Media::ImageSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IImageBrush)->put_ImageSource(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageFailed(Windows::UI::Xaml::ExceptionRoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IImageBrush)->add_ImageFailed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::IImageBrush> consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageFailed(auto_revoke_t, Windows::UI::Xaml::ExceptionRoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::IImageBrush>(this, &abi_t<Windows::UI::Xaml::Media::IImageBrush>::remove_ImageFailed, ImageFailed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageFailed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IImageBrush)->remove_ImageFailed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageOpened(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IImageBrush)->add_ImageOpened(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::IImageBrush> consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageOpened(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::IImageBrush>(this, &abi_t<Windows::UI::Xaml::Media::IImageBrush>::remove_ImageOpened, ImageOpened(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_IImageBrush<D>::ImageOpened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IImageBrush)->remove_ImageOpened(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IImageBrushStatics<D>::ImageSourceProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IImageBrushStatics)->get_ImageSourceProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_ILineGeometry<D>::StartPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineGeometry)->get_StartPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ILineGeometry<D>::StartPoint(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineGeometry)->put_StartPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_ILineGeometry<D>::EndPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineGeometry)->get_EndPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ILineGeometry<D>::EndPoint(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineGeometry)->put_EndPoint(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ILineGeometryStatics<D>::StartPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineGeometryStatics)->get_StartPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ILineGeometryStatics<D>::EndPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineGeometryStatics)->get_EndPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_ILineSegment<D>::Point() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineSegment)->get_Point(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ILineSegment<D>::Point(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineSegment)->put_Point(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ILineSegmentStatics<D>::PointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILineSegmentStatics)->get_PointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::StartPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILinearGradientBrush)->get_StartPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::StartPoint(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILinearGradientBrush)->put_StartPoint(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::EndPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILinearGradientBrush)->get_EndPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ILinearGradientBrush<D>::EndPoint(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILinearGradientBrush)->put_EndPoint(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::LinearGradientBrush consume_Windows_UI_Xaml_Media_ILinearGradientBrushFactory<D>::CreateInstanceWithGradientStopCollectionAndAngle(Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle) const
{
    Windows::UI::Xaml::Media::LinearGradientBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILinearGradientBrushFactory)->CreateInstanceWithGradientStopCollectionAndAngle(get_abi(gradientStopCollection), angle, put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics<D>::StartPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILinearGradientBrushStatics)->get_StartPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ILinearGradientBrushStatics<D>::EndPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILinearGradientBrushStatics)->get_EndPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus consume_Windows_UI_Xaml_Media_ILoadedImageSourceLoadCompletedEventArgs<D>::Status() const
{
    Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::DecodedPhysicalSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurface)->get_DecodedPhysicalSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::DecodedSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurface)->get_DecodedSize(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::NaturalSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurface)->get_NaturalSize(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::LoadCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::LoadedImageSurface, Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurface)->add_LoadCompleted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Media::ILoadedImageSurface> consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::LoadCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::LoadedImageSurface, Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Media::ILoadedImageSurface>(this, &abi_t<Windows::UI::Xaml::Media::ILoadedImageSurface>::remove_LoadCompleted, LoadCompleted(value));
}

template <typename D> void consume_Windows_UI_Xaml_Media_ILoadedImageSurface<D>::LoadCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurface)->remove_LoadCompleted(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Media::LoadedImageSurface consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromUri(Windows::Foundation::Uri const& uri, Windows::Foundation::Size const& desiredMaxSize) const
{
    Windows::UI::Xaml::Media::LoadedImageSurface returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromUriWithSize(get_abi(uri), get_abi(desiredMaxSize), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::LoadedImageSurface consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromUri(Windows::Foundation::Uri const& uri) const
{
    Windows::UI::Xaml::Media::LoadedImageSurface returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromUri(get_abi(uri), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::LoadedImageSurface consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Foundation::Size const& desiredMaxSize) const
{
    Windows::UI::Xaml::Media::LoadedImageSurface returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromStreamWithSize(get_abi(stream), get_abi(desiredMaxSize), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::LoadedImageSurface consume_Windows_UI_Xaml_Media_ILoadedImageSurfaceStatics<D>::StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::UI::Xaml::Media::LoadedImageSurface returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics)->StartLoadFromStream(get_abi(stream), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D consume_Windows_UI_Xaml_Media_IMatrix3DProjection<D>::ProjectionMatrix() const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrix3DProjection)->get_ProjectionMatrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IMatrix3DProjection<D>::ProjectionMatrix(Windows::UI::Xaml::Media::Media3D::Matrix3D const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrix3DProjection)->put_ProjectionMatrix(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IMatrix3DProjectionStatics<D>::ProjectionMatrixProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrix3DProjectionStatics)->get_ProjectionMatrixProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Matrix consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::Identity() const
{
    Windows::UI::Xaml::Media::Matrix value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrixHelperStatics)->get_Identity(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Matrix consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY) const
{
    Windows::UI::Xaml::Media::Matrix returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrixHelperStatics)->FromElements(m11, m12, m21, m22, offsetX, offsetY, put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::GetIsIdentity(Windows::UI::Xaml::Media::Matrix const& target) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrixHelperStatics)->GetIsIdentity(get_abi(target), &value));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IMatrixHelperStatics<D>::Transform(Windows::UI::Xaml::Media::Matrix const& target, Windows::Foundation::Point const& point) const
{
    Windows::Foundation::Point returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrixHelperStatics)->Transform(get_abi(target), get_abi(point), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Matrix consume_Windows_UI_Xaml_Media_IMatrixTransform<D>::Matrix() const
{
    Windows::UI::Xaml::Media::Matrix value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrixTransform)->get_Matrix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IMatrixTransform<D>::Matrix(Windows::UI::Xaml::Media::Matrix const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrixTransform)->put_Matrix(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IMatrixTransformStatics<D>::MatrixProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMatrixTransformStatics)->get_MatrixProperty(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs<D>::SetThumbnailImage(Windows::Storage::Streams::IInputStream const& source) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs)->SetThumbnailImage(get_abi(source)));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Xaml_Media_IMediaTransportControlsThumbnailRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs)->GetDeferral(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Media::Playback::FailedMediaStreamKind consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs<D>::StreamKind() const
{
    Windows::Media::Playback::FailedMediaStreamKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs)->get_StreamKind(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_UI_Xaml_Media_IPartialMediaFailureDetectedEventArgs2<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::PathSegmentCollection consume_Windows_UI_Xaml_Media_IPathFigure<D>::Segments() const
{
    Windows::UI::Xaml::Media::PathSegmentCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->get_Segments(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPathFigure<D>::Segments(Windows::UI::Xaml::Media::PathSegmentCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->put_Segments(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IPathFigure<D>::StartPoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->get_StartPoint(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPathFigure<D>::StartPoint(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->put_StartPoint(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsClosed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->get_IsClosed(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsClosed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->put_IsClosed(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsFilled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->get_IsFilled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPathFigure<D>::IsFilled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigure)->put_IsFilled(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::SegmentsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigureStatics)->get_SegmentsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::StartPointProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigureStatics)->get_StartPointProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::IsClosedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigureStatics)->get_IsClosedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPathFigureStatics<D>::IsFilledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathFigureStatics)->get_IsFilledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::FillRule consume_Windows_UI_Xaml_Media_IPathGeometry<D>::FillRule() const
{
    Windows::UI::Xaml::Media::FillRule value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathGeometry)->get_FillRule(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPathGeometry<D>::FillRule(Windows::UI::Xaml::Media::FillRule const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathGeometry)->put_FillRule(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::PathFigureCollection consume_Windows_UI_Xaml_Media_IPathGeometry<D>::Figures() const
{
    Windows::UI::Xaml::Media::PathFigureCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathGeometry)->get_Figures(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPathGeometry<D>::Figures(Windows::UI::Xaml::Media::PathFigureCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathGeometry)->put_Figures(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPathGeometryStatics<D>::FillRuleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathGeometryStatics)->get_FillRuleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPathGeometryStatics<D>::FiguresProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPathGeometryStatics)->get_FiguresProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_LocalOffsetX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_LocalOffsetX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_LocalOffsetY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_LocalOffsetY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_LocalOffsetZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::LocalOffsetZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_LocalOffsetZ(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_RotationX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_RotationX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_RotationY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_RotationY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_RotationZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::RotationZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_RotationZ(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_CenterOfRotationX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_CenterOfRotationX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_CenterOfRotationY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_CenterOfRotationY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_CenterOfRotationZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::CenterOfRotationZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_CenterOfRotationZ(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_GlobalOffsetX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_GlobalOffsetX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_GlobalOffsetY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_GlobalOffsetY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetZ() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_GlobalOffsetZ(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::GlobalOffsetZ(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->put_GlobalOffsetZ(value));
}

template <typename D> Windows::UI::Xaml::Media::Media3D::Matrix3D consume_Windows_UI_Xaml_Media_IPlaneProjection<D>::ProjectionMatrix() const
{
    Windows::UI::Xaml::Media::Media3D::Matrix3D value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjection)->get_ProjectionMatrix(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::LocalOffsetXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_LocalOffsetXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::LocalOffsetYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_LocalOffsetYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::LocalOffsetZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_LocalOffsetZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::RotationXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_RotationXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::RotationYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_RotationYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::RotationZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_RotationZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::CenterOfRotationXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_CenterOfRotationXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::CenterOfRotationYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_CenterOfRotationYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::CenterOfRotationZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_CenterOfRotationZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::GlobalOffsetXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_GlobalOffsetXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::GlobalOffsetYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_GlobalOffsetYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::GlobalOffsetZProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_GlobalOffsetZProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPlaneProjectionStatics<D>::ProjectionMatrixProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPlaneProjectionStatics)->get_ProjectionMatrixProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::PointCollection consume_Windows_UI_Xaml_Media_IPolyBezierSegment<D>::Points() const
{
    Windows::UI::Xaml::Media::PointCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyBezierSegment)->get_Points(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPolyBezierSegment<D>::Points(Windows::UI::Xaml::Media::PointCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyBezierSegment)->put_Points(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPolyBezierSegmentStatics<D>::PointsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyBezierSegmentStatics)->get_PointsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::PointCollection consume_Windows_UI_Xaml_Media_IPolyLineSegment<D>::Points() const
{
    Windows::UI::Xaml::Media::PointCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyLineSegment)->get_Points(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPolyLineSegment<D>::Points(Windows::UI::Xaml::Media::PointCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyLineSegment)->put_Points(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPolyLineSegmentStatics<D>::PointsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyLineSegmentStatics)->get_PointsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::PointCollection consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment<D>::Points() const
{
    Windows::UI::Xaml::Media::PointCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment)->get_Points(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegment<D>::Points(Windows::UI::Xaml::Media::PointCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment)->put_Points(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IPolyQuadraticBezierSegmentStatics<D>::PointsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics)->get_PointsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Projection consume_Windows_UI_Xaml_Media_IProjectionFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::Projection instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IProjectionFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point1() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IQuadraticBezierSegment)->get_Point1(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point1(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IQuadraticBezierSegment)->put_Point1(get_abi(value)));
}

template <typename D> Windows::Foundation::Point consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point2() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IQuadraticBezierSegment)->get_Point2(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IQuadraticBezierSegment<D>::Point2(Windows::Foundation::Point const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IQuadraticBezierSegment)->put_Point2(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics<D>::Point1Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics)->get_Point1Property(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IQuadraticBezierSegmentStatics<D>::Point2Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics)->get_Point2Property(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Media_IRectangleGeometry<D>::Rect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRectangleGeometry)->get_Rect(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRectangleGeometry<D>::Rect(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRectangleGeometry)->put_Rect(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRectangleGeometryStatics<D>::RectProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRectangleGeometryStatics)->get_RectProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Xaml_Media_IRenderedEventArgs<D>::FrameDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRenderedEventArgs)->get_FrameDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Xaml_Media_IRenderingEventArgs<D>::RenderingTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRenderingEventArgs)->get_RenderingTime(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::RevealBackgroundBrush consume_Windows_UI_Xaml_Media_IRevealBackgroundBrushFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::RevealBackgroundBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Media::RevealBorderBrush consume_Windows_UI_Xaml_Media_IRevealBorderBrushFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::RevealBorderBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBorderBrushFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Media_IRevealBrush<D>::Color() const
{
    Windows::UI::Color result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrush)->get_Color(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRevealBrush<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrush)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::ApplicationTheme consume_Windows_UI_Xaml_Media_IRevealBrush<D>::TargetTheme() const
{
    Windows::UI::Xaml::ApplicationTheme value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrush)->get_TargetTheme(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRevealBrush<D>::TargetTheme(Windows::UI::Xaml::ApplicationTheme const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrush)->put_TargetTheme(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Media_IRevealBrush<D>::AlwaysUseFallback() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrush)->get_AlwaysUseFallback(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRevealBrush<D>::AlwaysUseFallback(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrush)->put_AlwaysUseFallback(value));
}

template <typename D> Windows::UI::Xaml::Media::RevealBrush consume_Windows_UI_Xaml_Media_IRevealBrushFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::RevealBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrushFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::ColorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrushStatics)->get_ColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::TargetThemeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrushStatics)->get_TargetThemeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::AlwaysUseFallbackProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrushStatics)->get_AlwaysUseFallbackProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::StateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrushStatics)->get_StateProperty(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::SetState(Windows::UI::Xaml::UIElement const& element, Windows::UI::Xaml::Media::RevealBrushState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrushStatics)->SetState(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::RevealBrushState consume_Windows_UI_Xaml_Media_IRevealBrushStatics<D>::GetState(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::UI::Xaml::Media::RevealBrushState result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRevealBrushStatics)->GetState(get_abi(element), put_abi(result)));
    return result;
}

template <typename D> double consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransform)->get_CenterX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransform)->put_CenterX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransform)->get_CenterY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRotateTransform<D>::CenterY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransform)->put_CenterY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IRotateTransform<D>::Angle() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransform)->get_Angle(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IRotateTransform<D>::Angle(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransform)->put_Angle(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>::CenterXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransformStatics)->get_CenterXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>::CenterYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransformStatics)->get_CenterYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IRotateTransformStatics<D>::AngleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IRotateTransformStatics)->get_AngleProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->get_CenterX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->put_CenterX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->get_CenterY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IScaleTransform<D>::CenterY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->put_CenterY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->get_ScaleX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->put_ScaleX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->get_ScaleY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IScaleTransform<D>::ScaleY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransform)->put_ScaleY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::CenterXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransformStatics)->get_CenterXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::CenterYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransformStatics)->get_CenterYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::ScaleXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransformStatics)->get_ScaleXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IScaleTransformStatics<D>::ScaleYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IScaleTransformStatics)->get_ScaleYProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->get_CenterX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->put_CenterX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->get_CenterY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ISkewTransform<D>::CenterY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->put_CenterY(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->get_AngleX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->put_AngleX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->get_AngleY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ISkewTransform<D>::AngleY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransform)->put_AngleY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::CenterXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransformStatics)->get_CenterXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::CenterYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransformStatics)->get_CenterYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::AngleXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransformStatics)->get_AngleXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ISkewTransformStatics<D>::AngleYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISkewTransformStatics)->get_AngleYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Media_ISolidColorBrush<D>::Color() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISolidColorBrush)->get_Color(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ISolidColorBrush<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISolidColorBrush)->put_Color(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::SolidColorBrush consume_Windows_UI_Xaml_Media_ISolidColorBrushFactory<D>::CreateInstanceWithColor(Windows::UI::Color const& color) const
{
    Windows::UI::Xaml::Media::SolidColorBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISolidColorBrushFactory)->CreateInstanceWithColor(get_abi(color), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ISolidColorBrushStatics<D>::ColorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ISolidColorBrushStatics)->get_ColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::AlignmentX consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentX() const
{
    Windows::UI::Xaml::Media::AlignmentX value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrush)->get_AlignmentX(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentX(Windows::UI::Xaml::Media::AlignmentX const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrush)->put_AlignmentX(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::AlignmentY consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentY() const
{
    Windows::UI::Xaml::Media::AlignmentY value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrush)->get_AlignmentY(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITileBrush<D>::AlignmentY(Windows::UI::Xaml::Media::AlignmentY const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrush)->put_AlignmentY(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Stretch consume_Windows_UI_Xaml_Media_ITileBrush<D>::Stretch() const
{
    Windows::UI::Xaml::Media::Stretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrush)->get_Stretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITileBrush<D>::Stretch(Windows::UI::Xaml::Media::Stretch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrush)->put_Stretch(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::TileBrush consume_Windows_UI_Xaml_Media_ITileBrushFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::TileBrush instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrushFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>::AlignmentXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrushStatics)->get_AlignmentXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>::AlignmentYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrushStatics)->get_AlignmentYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITileBrushStatics<D>::StretchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITileBrushStatics)->get_StretchProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Time() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarker)->get_Time(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Time(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarker)->put_Time(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Type() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarker)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Type(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarker)->put_Type(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarker)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITimelineMarker<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarker)->put_Text(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::TimelineMarker consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs<D>::Marker() const
{
    Windows::UI::Xaml::Media::TimelineMarker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs)->get_Marker(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITimelineMarkerRoutedEventArgs<D>::Marker(Windows::UI::Xaml::Media::TimelineMarker const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs)->put_Marker(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>::TimeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarkerStatics)->get_TimeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>::TypeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarkerStatics)->get_TypeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITimelineMarkerStatics<D>::TextProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITimelineMarkerStatics)->get_TextProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::TransformCollection consume_Windows_UI_Xaml_Media_ITransformGroup<D>::Children() const
{
    Windows::UI::Xaml::Media::TransformCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITransformGroup)->get_Children(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITransformGroup<D>::Children(Windows::UI::Xaml::Media::TransformCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITransformGroup)->put_Children(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Matrix consume_Windows_UI_Xaml_Media_ITransformGroup<D>::Value() const
{
    Windows::UI::Xaml::Media::Matrix value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITransformGroup)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITransformGroupStatics<D>::ChildrenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITransformGroupStatics)->get_ChildrenProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::X() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITranslateTransform)->get_X(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::X(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITranslateTransform)->put_X(value));
}

template <typename D> double consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::Y() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITranslateTransform)->get_Y(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_ITranslateTransform<D>::Y(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITranslateTransform)->put_Y(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITranslateTransformStatics<D>::XProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITranslateTransformStatics)->get_XProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_ITranslateTransformStatics<D>::YProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::ITranslateTransformStatics)->get_YProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree) const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> elements{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindElementsInHostCoordinatesPoint(get_abi(intersectingPoint), get_abi(subtree), put_abi(elements)));
    return elements;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree) const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> elements{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindElementsInHostCoordinatesRect(get_abi(intersectingRect), get_abi(subtree), put_abi(elements)));
    return elements;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> elements{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindAllElementsInHostCoordinatesPoint(get_abi(intersectingPoint), get_abi(subtree), includeAllElements, put_abi(elements)));
    return elements;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements) const
{
    Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> elements{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->FindAllElementsInHostCoordinatesRect(get_abi(intersectingRect), get_abi(subtree), includeAllElements, put_abi(elements)));
    return elements;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::GetChild(Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex) const
{
    Windows::UI::Xaml::DependencyObject child{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->GetChild(get_abi(reference), childIndex, put_abi(child)));
    return child;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::GetChildrenCount(Windows::UI::Xaml::DependencyObject const& reference) const
{
    int32_t count{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->GetChildrenCount(get_abi(reference), &count));
    return count;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::GetParent(Windows::UI::Xaml::DependencyObject const& reference) const
{
    Windows::UI::Xaml::DependencyObject parent{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->GetParent(get_abi(reference), put_abi(parent)));
    return parent;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics<D>::DisconnectChildrenRecursive(Windows::UI::Xaml::UIElement const& element) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics)->DisconnectChildrenRecursive(get_abi(element)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Primitives::Popup> consume_Windows_UI_Xaml_Media_IVisualTreeHelperStatics2<D>::GetOpenPopups(Windows::UI::Xaml::Window const& window) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Primitives::Popup> popups{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IVisualTreeHelperStatics2)->GetOpenPopups(get_abi(window), put_abi(popups)));
    return popups;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase<D>::FallbackColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBase)->get_FallbackColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBase<D>::FallbackColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBase)->put_FallbackColor(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::XamlCompositionBrushBase consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::XamlCompositionBrushBase instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides<D>::OnConnected() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides)->OnConnected());
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseOverrides<D>::OnDisconnected() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides)->OnDisconnected());
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected<D>::CompositionBrush() const
{
    Windows::UI::Composition::CompositionBrush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected)->get_CompositionBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseProtected<D>::CompositionBrush(Windows::UI::Composition::CompositionBrush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected)->put_CompositionBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Media_IXamlCompositionBrushBaseStatics<D>::FallbackColorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics)->get_FallbackColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::XamlLight consume_Windows_UI_Xaml_Media_IXamlLightFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Media::XamlLight instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>::GetId() const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightOverrides)->GetId(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>::OnConnected(Windows::UI::Xaml::UIElement const& newElement) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightOverrides)->OnConnected(get_abi(newElement)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlLightOverrides<D>::OnDisconnected(Windows::UI::Xaml::UIElement const& oldElement) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightOverrides)->OnDisconnected(get_abi(oldElement)));
}

template <typename D> Windows::UI::Composition::CompositionLight consume_Windows_UI_Xaml_Media_IXamlLightProtected<D>::CompositionLight() const
{
    Windows::UI::Composition::CompositionLight value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightProtected)->get_CompositionLight(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlLightProtected<D>::CompositionLight(Windows::UI::Composition::CompositionLight const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightProtected)->put_CompositionLight(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::AddTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightStatics)->AddTargetElement(get_abi(lightId), get_abi(element)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::RemoveTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightStatics)->RemoveTargetElement(get_abi(lightId), get_abi(element)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::AddTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightStatics)->AddTargetBrush(get_abi(lightId), get_abi(brush)));
}

template <typename D> void consume_Windows_UI_Xaml_Media_IXamlLightStatics<D>::RemoveTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Media::IXamlLightStatics)->RemoveTargetBrush(get_abi(lightId), get_abi(brush)));
}

template <> struct delegate<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Media::RateChangedRoutedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Media::RateChangedRoutedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs const*>(&e));
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
struct produce<D, Windows::UI::Xaml::Media::IAcrylicBrush> : produce_base<D, Windows::UI::Xaml::Media::IAcrylicBrush>
{
    HRESULT __stdcall get_BackgroundSource(Windows::UI::Xaml::Media::AcrylicBackgroundSource* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::AcrylicBackgroundSource>(this->shim().BackgroundSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundSource(Windows::UI::Xaml::Media::AcrylicBackgroundSource value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundSource(*reinterpret_cast<Windows::UI::Xaml::Media::AcrylicBackgroundSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TintColor(struct struct_Windows_UI_Color* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Color>(this->shim().TintColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TintColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TintOpacity(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TintOpacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TintOpacity(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TintTransitionDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TintTransitionDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TintTransitionDuration(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TintTransitionDuration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysUseFallback(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().AlwaysUseFallback());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysUseFallback(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysUseFallback(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IAcrylicBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::IAcrylicBrushFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::AcrylicBrush>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IAcrylicBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::IAcrylicBrushStatics>
{
    HRESULT __stdcall get_BackgroundSourceProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().BackgroundSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TintColorProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TintColorProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TintOpacityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TintOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TintTransitionDurationProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TintTransitionDurationProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysUseFallbackProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AlwaysUseFallbackProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IArcSegment> : produce_base<D, Windows::UI::Xaml::Media::IArcSegment>
{
    HRESULT __stdcall get_Point(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Point());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Point(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
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

    HRESULT __stdcall get_RotationAngle(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationAngle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationAngle(double value) noexcept final
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

    HRESULT __stdcall get_IsLargeArc(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLargeArc());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsLargeArc(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLargeArc(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SweepDirection(Windows::UI::Xaml::Media::SweepDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::SweepDirection>(this->shim().SweepDirection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SweepDirection(Windows::UI::Xaml::Media::SweepDirection value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SweepDirection(*reinterpret_cast<Windows::UI::Xaml::Media::SweepDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IArcSegmentStatics> : produce_base<D, Windows::UI::Xaml::Media::IArcSegmentStatics>
{
    HRESULT __stdcall get_PointProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SizeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SizeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationAngleProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RotationAngleProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLargeArcProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsLargeArcProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SweepDirectionProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SweepDirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IBezierSegment> : produce_base<D, Windows::UI::Xaml::Media::IBezierSegment>
{
    HRESULT __stdcall get_Point1(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Point1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Point1(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point1(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Point2(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Point2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Point2(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point2(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Point3(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Point3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Point3(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point3(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IBezierSegmentStatics> : produce_base<D, Windows::UI::Xaml::Media::IBezierSegmentStatics>
{
    HRESULT __stdcall get_Point1Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Point1Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Point2Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Point2Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Point3Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Point3Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IBitmapCache> : produce_base<D, Windows::UI::Xaml::Media::IBitmapCache>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IBrush> : produce_base<D, Windows::UI::Xaml::Media::IBrush>
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

    HRESULT __stdcall get_Transform(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Transform>(this->shim().Transform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Transform(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform(*reinterpret_cast<Windows::UI::Xaml::Media::Transform const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTransform(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Transform>(this->shim().RelativeTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RelativeTransform(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RelativeTransform(*reinterpret_cast<Windows::UI::Xaml::Media::Transform const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::IBrushFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::IBrushStatics>
{
    HRESULT __stdcall get_OpacityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().OpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransformProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TransformProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RelativeTransformProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RelativeTransformProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ICacheMode> : produce_base<D, Windows::UI::Xaml::Media::ICacheMode>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ICacheModeFactory> : produce_base<D, Windows::UI::Xaml::Media::ICacheModeFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::CacheMode>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ICompositeTransform> : produce_base<D, Windows::UI::Xaml::Media::ICompositeTransform>
{
    HRESULT __stdcall get_CenterX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SkewX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SkewX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SkewX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SkewX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SkewY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SkewY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SkewY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SkewY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Rotation(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TranslateX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TranslateX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslateX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TranslateY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TranslateY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TranslateY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ICompositeTransformStatics> : produce_base<D, Windows::UI::Xaml::Media::ICompositeTransformStatics>
{
    HRESULT __stdcall get_CenterXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SkewXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SkewXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SkewYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SkewYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RotationProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TranslateXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TranslateYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TranslateYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ICompositionTarget> : produce_base<D, Windows::UI::Xaml::Media::ICompositionTarget>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ICompositionTargetStatics> : produce_base<D, Windows::UI::Xaml::Media::ICompositionTargetStatics>
{
    HRESULT __stdcall add_Rendering(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Rendering(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Rendering(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rendering(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SurfaceContentsLost(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SurfaceContentsLost(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SurfaceContentsLost(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SurfaceContentsLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ICompositionTargetStatics3> : produce_base<D, Windows::UI::Xaml::Media::ICompositionTargetStatics3>
{
    HRESULT __stdcall add_Rendered(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Rendered(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Rendered(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rendered(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IEllipseGeometry> : produce_base<D, Windows::UI::Xaml::Media::IEllipseGeometry>
{
    HRESULT __stdcall get_Center(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Center());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Center(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Center(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RadiusX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RadiusX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RadiusX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RadiusY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RadiusY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RadiusY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IEllipseGeometryStatics> : produce_base<D, Windows::UI::Xaml::Media::IEllipseGeometryStatics>
{
    HRESULT __stdcall get_CenterProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RadiusXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RadiusYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RadiusYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IFontFamily> : produce_base<D, Windows::UI::Xaml::Media::IFontFamily>
{
    HRESULT __stdcall get_Source(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IFontFamilyFactory> : produce_base<D, Windows::UI::Xaml::Media::IFontFamilyFactory>
{
    HRESULT __stdcall CreateInstanceWithName(HSTRING familyName, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::FontFamily>(this->shim().CreateInstanceWithName(*reinterpret_cast<hstring const*>(&familyName), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IFontFamilyStatics2> : produce_base<D, Windows::UI::Xaml::Media::IFontFamilyStatics2>
{
    HRESULT __stdcall get_XamlAutoFontFamily(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::FontFamily>(this->shim().XamlAutoFontFamily());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeneralTransform> : produce_base<D, Windows::UI::Xaml::Media::IGeneralTransform>
{
    HRESULT __stdcall get_Inverse(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::GeneralTransform>(this->shim().Inverse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransformPoint(Windows::Foundation::Point point, Windows::Foundation::Point* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Point>(this->shim().TransformPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryTransform(Windows::Foundation::Point inPoint, Windows::Foundation::Point* outPoint, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryTransform(*reinterpret_cast<Windows::Foundation::Point const*>(&inPoint), *reinterpret_cast<Windows::Foundation::Point*>(outPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransformBounds(Windows::Foundation::Rect rect, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().TransformBounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeneralTransformFactory> : produce_base<D, Windows::UI::Xaml::Media::IGeneralTransformFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::GeneralTransform>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeneralTransformOverrides> : produce_base<D, Windows::UI::Xaml::Media::IGeneralTransformOverrides>
{
    HRESULT __stdcall get_InverseCore(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::GeneralTransform>(this->shim().InverseCore());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryTransformCore(Windows::Foundation::Point inPoint, Windows::Foundation::Point* outPoint, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().TryTransformCore(*reinterpret_cast<Windows::Foundation::Point const*>(&inPoint), *reinterpret_cast<Windows::Foundation::Point*>(outPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TransformBoundsCore(Windows::Foundation::Rect rect, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().TransformBoundsCore(*reinterpret_cast<Windows::Foundation::Rect const*>(&rect)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeometry> : produce_base<D, Windows::UI::Xaml::Media::IGeometry>
{
    HRESULT __stdcall get_Transform(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Transform>(this->shim().Transform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Transform(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Transform(*reinterpret_cast<Windows::UI::Xaml::Media::Transform const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeometryFactory> : produce_base<D, Windows::UI::Xaml::Media::IGeometryFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeometryGroup> : produce_base<D, Windows::UI::Xaml::Media::IGeometryGroup>
{
    HRESULT __stdcall get_FillRule(Windows::UI::Xaml::Media::FillRule* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::FillRule>(this->shim().FillRule());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FillRule(Windows::UI::Xaml::Media::FillRule value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRule(*reinterpret_cast<Windows::UI::Xaml::Media::FillRule const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Children(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::GeometryCollection>(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Children(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Children(*reinterpret_cast<Windows::UI::Xaml::Media::GeometryCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeometryGroupStatics> : produce_base<D, Windows::UI::Xaml::Media::IGeometryGroupStatics>
{
    HRESULT __stdcall get_FillRuleProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FillRuleProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChildrenProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ChildrenProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGeometryStatics> : produce_base<D, Windows::UI::Xaml::Media::IGeometryStatics>
{
    HRESULT __stdcall get_Empty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Geometry>(this->shim().Empty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StandardFlatteningTolerance(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().StandardFlatteningTolerance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransformProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TransformProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGradientBrush> : produce_base<D, Windows::UI::Xaml::Media::IGradientBrush>
{
    HRESULT __stdcall get_SpreadMethod(Windows::UI::Xaml::Media::GradientSpreadMethod* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::GradientSpreadMethod>(this->shim().SpreadMethod());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpreadMethod(Windows::UI::Xaml::Media::GradientSpreadMethod value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpreadMethod(*reinterpret_cast<Windows::UI::Xaml::Media::GradientSpreadMethod const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MappingMode(Windows::UI::Xaml::Media::BrushMappingMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::BrushMappingMode>(this->shim().MappingMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MappingMode(Windows::UI::Xaml::Media::BrushMappingMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MappingMode(*reinterpret_cast<Windows::UI::Xaml::Media::BrushMappingMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ColorInterpolationMode(Windows::UI::Xaml::Media::ColorInterpolationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::ColorInterpolationMode>(this->shim().ColorInterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ColorInterpolationMode(Windows::UI::Xaml::Media::ColorInterpolationMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorInterpolationMode(*reinterpret_cast<Windows::UI::Xaml::Media::ColorInterpolationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GradientStops(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::GradientStopCollection>(this->shim().GradientStops());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GradientStops(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GradientStops(*reinterpret_cast<Windows::UI::Xaml::Media::GradientStopCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGradientBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::IGradientBrushFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::GradientBrush>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGradientBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::IGradientBrushStatics>
{
    HRESULT __stdcall get_SpreadMethodProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SpreadMethodProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MappingModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MappingModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ColorInterpolationModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ColorInterpolationModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GradientStopsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().GradientStopsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IGradientStop> : produce_base<D, Windows::UI::Xaml::Media::IGradientStop>
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

    HRESULT __stdcall get_Offset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Offset(double value) noexcept final
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
struct produce<D, Windows::UI::Xaml::Media::IGradientStopStatics> : produce_base<D, Windows::UI::Xaml::Media::IGradientStopStatics>
{
    HRESULT __stdcall get_ColorProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ColorProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().OffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IImageBrush> : produce_base<D, Windows::UI::Xaml::Media::IImageBrush>
{
    HRESULT __stdcall get_ImageSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::ImageSource>(this->shim().ImageSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ImageSource(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageSource(*reinterpret_cast<Windows::UI::Xaml::Media::ImageSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ImageFailed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ImageFailed(*reinterpret_cast<Windows::UI::Xaml::ExceptionRoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ImageFailed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageFailed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ImageOpened(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ImageOpened(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ImageOpened(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageOpened(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IImageBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::IImageBrushStatics>
{
    HRESULT __stdcall get_ImageSourceProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ImageSourceProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IImageSource> : produce_base<D, Windows::UI::Xaml::Media::IImageSource>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IImageSourceFactory> : produce_base<D, Windows::UI::Xaml::Media::IImageSourceFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILineGeometry> : produce_base<D, Windows::UI::Xaml::Media::ILineGeometry>
{
    HRESULT __stdcall get_StartPoint(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().StartPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartPoint(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndPoint(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().EndPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndPoint(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILineGeometryStatics> : produce_base<D, Windows::UI::Xaml::Media::ILineGeometryStatics>
{
    HRESULT __stdcall get_StartPointProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StartPointProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndPointProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().EndPointProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILineSegment> : produce_base<D, Windows::UI::Xaml::Media::ILineSegment>
{
    HRESULT __stdcall get_Point(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Point());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Point(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILineSegmentStatics> : produce_base<D, Windows::UI::Xaml::Media::ILineSegmentStatics>
{
    HRESULT __stdcall get_PointProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILinearGradientBrush> : produce_base<D, Windows::UI::Xaml::Media::ILinearGradientBrush>
{
    HRESULT __stdcall get_StartPoint(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().StartPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartPoint(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndPoint(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().EndPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EndPoint(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILinearGradientBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::ILinearGradientBrushFactory>
{
    HRESULT __stdcall CreateInstanceWithGradientStopCollectionAndAngle(void* gradientStopCollection, double angle, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::Media::LinearGradientBrush>(this->shim().CreateInstanceWithGradientStopCollectionAndAngle(*reinterpret_cast<Windows::UI::Xaml::Media::GradientStopCollection const*>(&gradientStopCollection), angle));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILinearGradientBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::ILinearGradientBrushStatics>
{
    HRESULT __stdcall get_StartPointProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StartPointProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EndPointProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().EndPointProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs>
{
    HRESULT __stdcall get_Status(Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::LoadedImageSourceLoadStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILoadedImageSurface> : produce_base<D, Windows::UI::Xaml::Media::ILoadedImageSurface>
{
    HRESULT __stdcall get_DecodedPhysicalSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().DecodedPhysicalSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DecodedSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().DecodedSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NaturalSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().NaturalSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LoadCompleted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LoadCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Media::LoadedImageSurface, Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LoadCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics> : produce_base<D, Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>
{
    HRESULT __stdcall StartLoadFromUriWithSize(void* uri, Windows::Foundation::Size desiredMaxSize, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Size const*>(&desiredMaxSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartLoadFromUri(void* uri, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartLoadFromStreamWithSize(void* stream, Windows::Foundation::Size desiredMaxSize, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromStream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Windows::Foundation::Size const*>(&desiredMaxSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartLoadFromStream(void* stream, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Media::LoadedImageSurface>(this->shim().StartLoadFromStream(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IMatrix3DProjection> : produce_base<D, Windows::UI::Xaml::Media::IMatrix3DProjection>
{
    HRESULT __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Media3D::Matrix3D>(this->shim().ProjectionMatrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProjectionMatrix(*reinterpret_cast<Windows::UI::Xaml::Media::Media3D::Matrix3D const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IMatrix3DProjectionStatics> : produce_base<D, Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>
{
    HRESULT __stdcall get_ProjectionMatrixProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ProjectionMatrixProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IMatrixHelper> : produce_base<D, Windows::UI::Xaml::Media::IMatrixHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IMatrixHelperStatics> : produce_base<D, Windows::UI::Xaml::Media::IMatrixHelperStatics>
{
    HRESULT __stdcall get_Identity(struct struct_Windows_UI_Xaml_Media_Matrix* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Matrix>(this->shim().Identity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY, struct struct_Windows_UI_Xaml_Media_Matrix* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Media::Matrix>(this->shim().FromElements(m11, m12, m21, m22, offsetX, offsetY));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIsIdentity(struct struct_Windows_UI_Xaml_Media_Matrix target, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().GetIsIdentity(*reinterpret_cast<Windows::UI::Xaml::Media::Matrix const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Transform(struct struct_Windows_UI_Xaml_Media_Matrix target, Windows::Foundation::Point point, Windows::Foundation::Point* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Point>(this->shim().Transform(*reinterpret_cast<Windows::UI::Xaml::Media::Matrix const*>(&target), *reinterpret_cast<Windows::Foundation::Point const*>(&point)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IMatrixTransform> : produce_base<D, Windows::UI::Xaml::Media::IMatrixTransform>
{
    HRESULT __stdcall get_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Matrix>(this->shim().Matrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Matrix(struct struct_Windows_UI_Xaml_Media_Matrix value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Matrix(*reinterpret_cast<Windows::UI::Xaml::Media::Matrix const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IMatrixTransformStatics> : produce_base<D, Windows::UI::Xaml::Media::IMatrixTransformStatics>
{
    HRESULT __stdcall get_MatrixProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MatrixProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs>
{
    HRESULT __stdcall SetThumbnailImage(void* source) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetThumbnailImage(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&source));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs>
{
    HRESULT __stdcall get_StreamKind(Windows::Media::Playback::FailedMediaStreamKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Playback::FailedMediaStreamKind>(this->shim().StreamKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2> : produce_base<D, Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2>
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
struct produce<D, Windows::UI::Xaml::Media::IPathFigure> : produce_base<D, Windows::UI::Xaml::Media::IPathFigure>
{
    HRESULT __stdcall get_Segments(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PathSegmentCollection>(this->shim().Segments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Segments(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Segments(*reinterpret_cast<Windows::UI::Xaml::Media::PathSegmentCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartPoint(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().StartPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartPoint(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsClosed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsClosed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsClosed(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsClosed(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsFilled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFilled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsFilled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFilled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPathFigureStatics> : produce_base<D, Windows::UI::Xaml::Media::IPathFigureStatics>
{
    HRESULT __stdcall get_SegmentsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SegmentsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartPointProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StartPointProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsClosedProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsClosedProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsFilledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsFilledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPathGeometry> : produce_base<D, Windows::UI::Xaml::Media::IPathGeometry>
{
    HRESULT __stdcall get_FillRule(Windows::UI::Xaml::Media::FillRule* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::FillRule>(this->shim().FillRule());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FillRule(Windows::UI::Xaml::Media::FillRule value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FillRule(*reinterpret_cast<Windows::UI::Xaml::Media::FillRule const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Figures(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PathFigureCollection>(this->shim().Figures());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Figures(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Figures(*reinterpret_cast<Windows::UI::Xaml::Media::PathFigureCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPathGeometryStatics> : produce_base<D, Windows::UI::Xaml::Media::IPathGeometryStatics>
{
    HRESULT __stdcall get_FillRuleProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FillRuleProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FiguresProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FiguresProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPathSegment> : produce_base<D, Windows::UI::Xaml::Media::IPathSegment>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPathSegmentFactory> : produce_base<D, Windows::UI::Xaml::Media::IPathSegmentFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPlaneProjection> : produce_base<D, Windows::UI::Xaml::Media::IPlaneProjection>
{
    HRESULT __stdcall get_LocalOffsetX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LocalOffsetX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LocalOffsetX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalOffsetX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalOffsetY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LocalOffsetY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LocalOffsetY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalOffsetY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalOffsetZ(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LocalOffsetZ());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LocalOffsetZ(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalOffsetZ(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationZ(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RotationZ());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RotationZ(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RotationZ(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterOfRotationX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterOfRotationX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterOfRotationX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterOfRotationX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterOfRotationY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterOfRotationY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterOfRotationY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterOfRotationY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterOfRotationZ(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterOfRotationZ());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterOfRotationZ(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterOfRotationZ(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GlobalOffsetX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().GlobalOffsetX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GlobalOffsetX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GlobalOffsetX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GlobalOffsetY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().GlobalOffsetY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GlobalOffsetY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GlobalOffsetY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GlobalOffsetZ(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().GlobalOffsetZ());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GlobalOffsetZ(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GlobalOffsetZ(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionMatrix(struct struct_Windows_UI_Xaml_Media_Media3D_Matrix3D* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Media3D::Matrix3D>(this->shim().ProjectionMatrix());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPlaneProjectionStatics> : produce_base<D, Windows::UI::Xaml::Media::IPlaneProjectionStatics>
{
    HRESULT __stdcall get_LocalOffsetXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocalOffsetXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalOffsetYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocalOffsetYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalOffsetZProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LocalOffsetZProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RotationXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RotationYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RotationZProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RotationZProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterOfRotationXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterOfRotationXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterOfRotationYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterOfRotationYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterOfRotationZProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterOfRotationZProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GlobalOffsetXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().GlobalOffsetXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GlobalOffsetYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().GlobalOffsetYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GlobalOffsetZProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().GlobalOffsetZProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionMatrixProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ProjectionMatrixProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPolyBezierSegment> : produce_base<D, Windows::UI::Xaml::Media::IPolyBezierSegment>
{
    HRESULT __stdcall get_Points(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PointCollection>(this->shim().Points());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Points(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Points(*reinterpret_cast<Windows::UI::Xaml::Media::PointCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPolyBezierSegmentStatics> : produce_base<D, Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>
{
    HRESULT __stdcall get_PointsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPolyLineSegment> : produce_base<D, Windows::UI::Xaml::Media::IPolyLineSegment>
{
    HRESULT __stdcall get_Points(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PointCollection>(this->shim().Points());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Points(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Points(*reinterpret_cast<Windows::UI::Xaml::Media::PointCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPolyLineSegmentStatics> : produce_base<D, Windows::UI::Xaml::Media::IPolyLineSegmentStatics>
{
    HRESULT __stdcall get_PointsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment> : produce_base<D, Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment>
{
    HRESULT __stdcall get_Points(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PointCollection>(this->shim().Points());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Points(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Points(*reinterpret_cast<Windows::UI::Xaml::Media::PointCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics> : produce_base<D, Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>
{
    HRESULT __stdcall get_PointsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IProjection> : produce_base<D, Windows::UI::Xaml::Media::IProjection>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IProjectionFactory> : produce_base<D, Windows::UI::Xaml::Media::IProjectionFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::Projection>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IQuadraticBezierSegment> : produce_base<D, Windows::UI::Xaml::Media::IQuadraticBezierSegment>
{
    HRESULT __stdcall get_Point1(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Point1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Point1(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point1(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Point2(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().Point2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Point2(Windows::Foundation::Point value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Point2(*reinterpret_cast<Windows::Foundation::Point const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics> : produce_base<D, Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>
{
    HRESULT __stdcall get_Point1Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Point1Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Point2Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Point2Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRectangleGeometry> : produce_base<D, Windows::UI::Xaml::Media::IRectangleGeometry>
{
    HRESULT __stdcall get_Rect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Rect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Rect(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rect(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRectangleGeometryStatics> : produce_base<D, Windows::UI::Xaml::Media::IRectangleGeometryStatics>
{
    HRESULT __stdcall get_RectProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RectProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRenderedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::IRenderedEventArgs>
{
    HRESULT __stdcall get_FrameDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().FrameDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRenderingEventArgs> : produce_base<D, Windows::UI::Xaml::Media::IRenderingEventArgs>
{
    HRESULT __stdcall get_RenderingTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RenderingTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRevealBackgroundBrush> : produce_base<D, Windows::UI::Xaml::Media::IRevealBackgroundBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::RevealBackgroundBrush>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRevealBorderBrush> : produce_base<D, Windows::UI::Xaml::Media::IRevealBorderBrush>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRevealBorderBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::IRevealBorderBrushFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::RevealBorderBrush>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRevealBrush> : produce_base<D, Windows::UI::Xaml::Media::IRevealBrush>
{
    HRESULT __stdcall get_Color(struct struct_Windows_UI_Color* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Color>(this->shim().Color());
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

    HRESULT __stdcall get_TargetTheme(Windows::UI::Xaml::ApplicationTheme* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ApplicationTheme>(this->shim().TargetTheme());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetTheme(Windows::UI::Xaml::ApplicationTheme value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetTheme(*reinterpret_cast<Windows::UI::Xaml::ApplicationTheme const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysUseFallback(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().AlwaysUseFallback());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysUseFallback(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysUseFallback(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRevealBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::IRevealBrushFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::RevealBrush>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRevealBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::IRevealBrushStatics>
{
    HRESULT __stdcall get_ColorProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ColorProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetThemeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TargetThemeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysUseFallbackProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AlwaysUseFallbackProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StateProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StateProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetState(void* element, Windows::UI::Xaml::Media::RevealBrushState value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetState(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Media::RevealBrushState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetState(void* element, Windows::UI::Xaml::Media::RevealBrushState* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Media::RevealBrushState>(this->shim().GetState(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRotateTransform> : produce_base<D, Windows::UI::Xaml::Media::IRotateTransform>
{
    HRESULT __stdcall get_CenterX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Angle(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Angle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Angle(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Angle(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IRotateTransformStatics> : produce_base<D, Windows::UI::Xaml::Media::IRotateTransformStatics>
{
    HRESULT __stdcall get_CenterXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AngleProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AngleProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IScaleTransform> : produce_base<D, Windows::UI::Xaml::Media::IScaleTransform>
{
    HRESULT __stdcall get_CenterX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ScaleY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScaleY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaleY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IScaleTransformStatics> : produce_base<D, Windows::UI::Xaml::Media::IScaleTransformStatics>
{
    HRESULT __stdcall get_CenterXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ScaleYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ISkewTransform> : produce_base<D, Windows::UI::Xaml::Media::ISkewTransform>
{
    HRESULT __stdcall get_CenterX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CenterY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CenterY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CenterY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AngleX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().AngleX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AngleX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AngleX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AngleY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().AngleY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AngleY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AngleY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ISkewTransformStatics> : produce_base<D, Windows::UI::Xaml::Media::ISkewTransformStatics>
{
    HRESULT __stdcall get_CenterXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CenterYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CenterYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AngleXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AngleXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AngleYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AngleYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ISolidColorBrush> : produce_base<D, Windows::UI::Xaml::Media::ISolidColorBrush>
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
struct produce<D, Windows::UI::Xaml::Media::ISolidColorBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::ISolidColorBrushFactory>
{
    HRESULT __stdcall CreateInstanceWithColor(struct struct_Windows_UI_Color color, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Xaml::Media::SolidColorBrush>(this->shim().CreateInstanceWithColor(*reinterpret_cast<Windows::UI::Color const*>(&color)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ISolidColorBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::ISolidColorBrushStatics>
{
    HRESULT __stdcall get_ColorProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ColorProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITileBrush> : produce_base<D, Windows::UI::Xaml::Media::ITileBrush>
{
    HRESULT __stdcall get_AlignmentX(Windows::UI::Xaml::Media::AlignmentX* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::AlignmentX>(this->shim().AlignmentX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlignmentX(Windows::UI::Xaml::Media::AlignmentX value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlignmentX(*reinterpret_cast<Windows::UI::Xaml::Media::AlignmentX const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlignmentY(Windows::UI::Xaml::Media::AlignmentY* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::AlignmentY>(this->shim().AlignmentY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlignmentY(Windows::UI::Xaml::Media::AlignmentY value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlignmentY(*reinterpret_cast<Windows::UI::Xaml::Media::AlignmentY const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Stretch(Windows::UI::Xaml::Media::Stretch* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Stretch>(this->shim().Stretch());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Stretch(Windows::UI::Xaml::Media::Stretch value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stretch(*reinterpret_cast<Windows::UI::Xaml::Media::Stretch const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITileBrushFactory> : produce_base<D, Windows::UI::Xaml::Media::ITileBrushFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::TileBrush>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITileBrushStatics> : produce_base<D, Windows::UI::Xaml::Media::ITileBrushStatics>
{
    HRESULT __stdcall get_AlignmentXProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AlignmentXProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlignmentYProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AlignmentYProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StretchProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StretchProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITimelineMarker> : produce_base<D, Windows::UI::Xaml::Media::ITimelineMarker>
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

    HRESULT __stdcall put_Time(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Time(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall put_Type(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<hstring const*>(&value));
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs> : produce_base<D, Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs>
{
    HRESULT __stdcall get_Marker(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::TimelineMarker>(this->shim().Marker());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Marker(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Marker(*reinterpret_cast<Windows::UI::Xaml::Media::TimelineMarker const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITimelineMarkerStatics> : produce_base<D, Windows::UI::Xaml::Media::ITimelineMarkerStatics>
{
    HRESULT __stdcall get_TimeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TimeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TypeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TypeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TextProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TextProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITransform> : produce_base<D, Windows::UI::Xaml::Media::ITransform>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITransformFactory> : produce_base<D, Windows::UI::Xaml::Media::ITransformFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITransformGroup> : produce_base<D, Windows::UI::Xaml::Media::ITransformGroup>
{
    HRESULT __stdcall get_Children(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::TransformCollection>(this->shim().Children());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Children(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Children(*reinterpret_cast<Windows::UI::Xaml::Media::TransformCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(struct struct_Windows_UI_Xaml_Media_Matrix* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Matrix>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITransformGroupStatics> : produce_base<D, Windows::UI::Xaml::Media::ITransformGroupStatics>
{
    HRESULT __stdcall get_ChildrenProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ChildrenProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITranslateTransform> : produce_base<D, Windows::UI::Xaml::Media::ITranslateTransform>
{
    HRESULT __stdcall get_X(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().X());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_X(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().X(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Y(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Y());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Y(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Y(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::ITranslateTransformStatics> : produce_base<D, Windows::UI::Xaml::Media::ITranslateTransformStatics>
{
    HRESULT __stdcall get_XProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().XProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_YProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().YProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IVisualTreeHelper> : produce_base<D, Windows::UI::Xaml::Media::IVisualTreeHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IVisualTreeHelperStatics> : produce_base<D, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>
{
    HRESULT __stdcall FindElementsInHostCoordinatesPoint(Windows::Foundation::Point intersectingPoint, void* subtree, void** elements) noexcept final
    {
        try
        {
            *elements = nullptr;
            typename D::abi_guard guard(this->shim());
            *elements = detach_from<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<Windows::Foundation::Point const*>(&intersectingPoint), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&subtree)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindElementsInHostCoordinatesRect(Windows::Foundation::Rect intersectingRect, void* subtree, void** elements) noexcept final
    {
        try
        {
            *elements = nullptr;
            typename D::abi_guard guard(this->shim());
            *elements = detach_from<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<Windows::Foundation::Rect const*>(&intersectingRect), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&subtree)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllElementsInHostCoordinatesPoint(Windows::Foundation::Point intersectingPoint, void* subtree, bool includeAllElements, void** elements) noexcept final
    {
        try
        {
            *elements = nullptr;
            typename D::abi_guard guard(this->shim());
            *elements = detach_from<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<Windows::Foundation::Point const*>(&intersectingPoint), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&subtree), includeAllElements));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllElementsInHostCoordinatesRect(Windows::Foundation::Rect intersectingRect, void* subtree, bool includeAllElements, void** elements) noexcept final
    {
        try
        {
            *elements = nullptr;
            typename D::abi_guard guard(this->shim());
            *elements = detach_from<Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement>>(this->shim().FindElementsInHostCoordinates(*reinterpret_cast<Windows::Foundation::Rect const*>(&intersectingRect), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&subtree), includeAllElements));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetChild(void* reference, int32_t childIndex, void** child) noexcept final
    {
        try
        {
            *child = nullptr;
            typename D::abi_guard guard(this->shim());
            *child = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().GetChild(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&reference), childIndex));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetChildrenCount(void* reference, int32_t* count) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *count = detach_from<int32_t>(this->shim().GetChildrenCount(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&reference)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetParent(void* reference, void** parent) noexcept final
    {
        try
        {
            *parent = nullptr;
            typename D::abi_guard guard(this->shim());
            *parent = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().GetParent(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&reference)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DisconnectChildrenRecursive(void* element) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisconnectChildrenRecursive(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IVisualTreeHelperStatics2> : produce_base<D, Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>
{
    HRESULT __stdcall GetOpenPopups(void* window, void** popups) noexcept final
    {
        try
        {
            *popups = nullptr;
            typename D::abi_guard guard(this->shim());
            *popups = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Primitives::Popup>>(this->shim().GetOpenPopups(*reinterpret_cast<Windows::UI::Xaml::Window const*>(&window)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBase> : produce_base<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBase>
{
    HRESULT __stdcall get_FallbackColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().FallbackColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FallbackColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory> : produce_base<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::XamlCompositionBrushBase>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides> : produce_base<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
{
    HRESULT __stdcall OnConnected() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnConnected();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnDisconnected() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnDisconnected();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected> : produce_base<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>
{
    HRESULT __stdcall get_CompositionBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().CompositionBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CompositionBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionBrush(*reinterpret_cast<Windows::UI::Composition::CompositionBrush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics> : produce_base<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>
{
    HRESULT __stdcall get_FallbackColorProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FallbackColorProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlLight> : produce_base<D, Windows::UI::Xaml::Media::IXamlLight>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlLightFactory> : produce_base<D, Windows::UI::Xaml::Media::IXamlLightFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Media::XamlLight>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlLightOverrides> : produce_base<D, Windows::UI::Xaml::Media::IXamlLightOverrides>
{
    HRESULT __stdcall GetId(HSTRING* returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<hstring>(this->shim().GetId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnConnected(void* newElement) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnConnected(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&newElement));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnDisconnected(void* oldElement) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnDisconnected(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&oldElement));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlLightProtected> : produce_base<D, Windows::UI::Xaml::Media::IXamlLightProtected>
{
    HRESULT __stdcall get_CompositionLight(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::CompositionLight>(this->shim().CompositionLight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CompositionLight(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionLight(*reinterpret_cast<Windows::UI::Composition::CompositionLight const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Media::IXamlLightStatics> : produce_base<D, Windows::UI::Xaml::Media::IXamlLightStatics>
{
    HRESULT __stdcall AddTargetElement(HSTRING lightId, void* element) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTargetElement(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveTargetElement(HSTRING lightId, void* element) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveTargetElement(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddTargetBrush(HSTRING lightId, void* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTargetBrush(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveTargetBrush(HSTRING lightId, void* brush) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveTargetBrush(*reinterpret_cast<hstring const*>(&lightId), *reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&brush));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Media::IGeneralTransformOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Media::IGeneralTransformOverrides>
{
    Windows::UI::Xaml::Media::GeneralTransform InverseCore()
    {
        Windows::UI::Xaml::Media::IGeneralTransformOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.InverseCore();
        }
        return this->shim().InverseCore();
    }
    bool TryTransformCore(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint)
    {
        Windows::UI::Xaml::Media::IGeneralTransformOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.TryTransformCore(inPoint, outPoint);
        }
        return this->shim().TryTransformCore(inPoint, outPoint);
    }
    Windows::Foundation::Rect TransformBoundsCore(Windows::Foundation::Rect const& rect)
    {
        Windows::UI::Xaml::Media::IGeneralTransformOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.TransformBoundsCore(rect);
        }
        return this->shim().TransformBoundsCore(rect);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides>
{
    void OnConnected()
    {
        Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnConnected();
        }
        return this->shim().OnConnected();
    }
    void OnDisconnected()
    {
        Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnDisconnected();
        }
        return this->shim().OnDisconnected();
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Media::IXamlLightOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Media::IXamlLightOverrides>
{
    hstring GetId()
    {
        Windows::UI::Xaml::Media::IXamlLightOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.GetId();
        }
        return this->shim().GetId();
    }
    void OnConnected(Windows::UI::Xaml::UIElement const& newElement)
    {
        Windows::UI::Xaml::Media::IXamlLightOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnConnected(newElement);
        }
        return this->shim().OnConnected(newElement);
    }
    void OnDisconnected(Windows::UI::Xaml::UIElement const& oldElement)
    {
        Windows::UI::Xaml::Media::IXamlLightOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnDisconnected(oldElement);
        }
        return this->shim().OnDisconnected(oldElement);
    }
};
}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media {

inline AcrylicBrush::AcrylicBrush()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrushFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty AcrylicBrush::BackgroundSourceProperty()
{
    return get_activation_factory<AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrushStatics>().BackgroundSourceProperty();
}

inline Windows::UI::Xaml::DependencyProperty AcrylicBrush::TintColorProperty()
{
    return get_activation_factory<AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrushStatics>().TintColorProperty();
}

inline Windows::UI::Xaml::DependencyProperty AcrylicBrush::TintOpacityProperty()
{
    return get_activation_factory<AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrushStatics>().TintOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty AcrylicBrush::TintTransitionDurationProperty()
{
    return get_activation_factory<AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrushStatics>().TintTransitionDurationProperty();
}

inline Windows::UI::Xaml::DependencyProperty AcrylicBrush::AlwaysUseFallbackProperty()
{
    return get_activation_factory<AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrushStatics>().AlwaysUseFallbackProperty();
}

inline ArcSegment::ArcSegment() :
    ArcSegment(get_activation_factory<ArcSegment>().ActivateInstance<ArcSegment>())
{}

inline Windows::UI::Xaml::DependencyProperty ArcSegment::PointProperty()
{
    return get_activation_factory<ArcSegment, Windows::UI::Xaml::Media::IArcSegmentStatics>().PointProperty();
}

inline Windows::UI::Xaml::DependencyProperty ArcSegment::SizeProperty()
{
    return get_activation_factory<ArcSegment, Windows::UI::Xaml::Media::IArcSegmentStatics>().SizeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ArcSegment::RotationAngleProperty()
{
    return get_activation_factory<ArcSegment, Windows::UI::Xaml::Media::IArcSegmentStatics>().RotationAngleProperty();
}

inline Windows::UI::Xaml::DependencyProperty ArcSegment::IsLargeArcProperty()
{
    return get_activation_factory<ArcSegment, Windows::UI::Xaml::Media::IArcSegmentStatics>().IsLargeArcProperty();
}

inline Windows::UI::Xaml::DependencyProperty ArcSegment::SweepDirectionProperty()
{
    return get_activation_factory<ArcSegment, Windows::UI::Xaml::Media::IArcSegmentStatics>().SweepDirectionProperty();
}

inline BezierSegment::BezierSegment() :
    BezierSegment(get_activation_factory<BezierSegment>().ActivateInstance<BezierSegment>())
{}

inline Windows::UI::Xaml::DependencyProperty BezierSegment::Point1Property()
{
    return get_activation_factory<BezierSegment, Windows::UI::Xaml::Media::IBezierSegmentStatics>().Point1Property();
}

inline Windows::UI::Xaml::DependencyProperty BezierSegment::Point2Property()
{
    return get_activation_factory<BezierSegment, Windows::UI::Xaml::Media::IBezierSegmentStatics>().Point2Property();
}

inline Windows::UI::Xaml::DependencyProperty BezierSegment::Point3Property()
{
    return get_activation_factory<BezierSegment, Windows::UI::Xaml::Media::IBezierSegmentStatics>().Point3Property();
}

inline BitmapCache::BitmapCache() :
    BitmapCache(get_activation_factory<BitmapCache>().ActivateInstance<BitmapCache>())
{}

inline Windows::UI::Xaml::DependencyProperty Brush::OpacityProperty()
{
    return get_activation_factory<Brush, Windows::UI::Xaml::Media::IBrushStatics>().OpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty Brush::TransformProperty()
{
    return get_activation_factory<Brush, Windows::UI::Xaml::Media::IBrushStatics>().TransformProperty();
}

inline Windows::UI::Xaml::DependencyProperty Brush::RelativeTransformProperty()
{
    return get_activation_factory<Brush, Windows::UI::Xaml::Media::IBrushStatics>().RelativeTransformProperty();
}

inline BrushCollection::BrushCollection() :
    BrushCollection(get_activation_factory<BrushCollection>().ActivateInstance<BrushCollection>())
{}

inline CompositeTransform::CompositeTransform() :
    CompositeTransform(get_activation_factory<CompositeTransform>().ActivateInstance<CompositeTransform>())
{}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::CenterXProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().CenterXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::CenterYProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().CenterYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::ScaleXProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().ScaleXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::ScaleYProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().ScaleYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::SkewXProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().SkewXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::SkewYProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().SkewYProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::RotationProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().RotationProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::TranslateXProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().TranslateXProperty();
}

inline Windows::UI::Xaml::DependencyProperty CompositeTransform::TranslateYProperty()
{
    return get_activation_factory<CompositeTransform, Windows::UI::Xaml::Media::ICompositeTransformStatics>().TranslateYProperty();
}

inline event_token CompositionTarget::Rendering(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value)
{
    return get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics>().Rendering(value);
}

inline factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics> CompositionTarget::Rendering(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value)
{
    auto factory = get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics>();
    return { factory, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_Rendering, factory.Rendering(value) };
}

inline void CompositionTarget::Rendering(event_token const& token)
{
    get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics>().Rendering(token);
}

inline event_token CompositionTarget::SurfaceContentsLost(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value)
{
    return get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics>().SurfaceContentsLost(value);
}

inline factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics> CompositionTarget::SurfaceContentsLost(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value)
{
    auto factory = get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics>();
    return { factory, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics>::remove_SurfaceContentsLost, factory.SurfaceContentsLost(value) };
}

inline void CompositionTarget::SurfaceContentsLost(event_token const& token)
{
    get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics>().SurfaceContentsLost(token);
}

inline event_token CompositionTarget::Rendered(Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& value)
{
    return get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics3>().Rendered(value);
}

inline factory_event_revoker<Windows::UI::Xaml::Media::ICompositionTargetStatics3> CompositionTarget::Rendered(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Xaml::Media::RenderedEventArgs> const& value)
{
    auto factory = get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics3>();
    return { factory, &impl::abi_t<Windows::UI::Xaml::Media::ICompositionTargetStatics3>::remove_Rendered, factory.Rendered(value) };
}

inline void CompositionTarget::Rendered(event_token const& token)
{
    get_activation_factory<CompositionTarget, Windows::UI::Xaml::Media::ICompositionTargetStatics3>().Rendered(token);
}

inline DoubleCollection::DoubleCollection() :
    DoubleCollection(get_activation_factory<DoubleCollection>().ActivateInstance<DoubleCollection>())
{}

inline EllipseGeometry::EllipseGeometry() :
    EllipseGeometry(get_activation_factory<EllipseGeometry>().ActivateInstance<EllipseGeometry>())
{}

inline Windows::UI::Xaml::DependencyProperty EllipseGeometry::CenterProperty()
{
    return get_activation_factory<EllipseGeometry, Windows::UI::Xaml::Media::IEllipseGeometryStatics>().CenterProperty();
}

inline Windows::UI::Xaml::DependencyProperty EllipseGeometry::RadiusXProperty()
{
    return get_activation_factory<EllipseGeometry, Windows::UI::Xaml::Media::IEllipseGeometryStatics>().RadiusXProperty();
}

inline Windows::UI::Xaml::DependencyProperty EllipseGeometry::RadiusYProperty()
{
    return get_activation_factory<EllipseGeometry, Windows::UI::Xaml::Media::IEllipseGeometryStatics>().RadiusYProperty();
}

inline FontFamily::FontFamily(param::hstring const& familyName)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<FontFamily, Windows::UI::Xaml::Media::IFontFamilyFactory>().CreateInstanceWithName(familyName, outer, inner);
}

inline Windows::UI::Xaml::Media::FontFamily FontFamily::XamlAutoFontFamily()
{
    return get_activation_factory<FontFamily, Windows::UI::Xaml::Media::IFontFamilyStatics2>().XamlAutoFontFamily();
}

inline Windows::UI::Xaml::Media::Geometry Geometry::Empty()
{
    return get_activation_factory<Geometry, Windows::UI::Xaml::Media::IGeometryStatics>().Empty();
}

inline double Geometry::StandardFlatteningTolerance()
{
    return get_activation_factory<Geometry, Windows::UI::Xaml::Media::IGeometryStatics>().StandardFlatteningTolerance();
}

inline Windows::UI::Xaml::DependencyProperty Geometry::TransformProperty()
{
    return get_activation_factory<Geometry, Windows::UI::Xaml::Media::IGeometryStatics>().TransformProperty();
}

inline GeometryCollection::GeometryCollection() :
    GeometryCollection(get_activation_factory<GeometryCollection>().ActivateInstance<GeometryCollection>())
{}

inline GeometryGroup::GeometryGroup() :
    GeometryGroup(get_activation_factory<GeometryGroup>().ActivateInstance<GeometryGroup>())
{}

inline Windows::UI::Xaml::DependencyProperty GeometryGroup::FillRuleProperty()
{
    return get_activation_factory<GeometryGroup, Windows::UI::Xaml::Media::IGeometryGroupStatics>().FillRuleProperty();
}

inline Windows::UI::Xaml::DependencyProperty GeometryGroup::ChildrenProperty()
{
    return get_activation_factory<GeometryGroup, Windows::UI::Xaml::Media::IGeometryGroupStatics>().ChildrenProperty();
}

inline Windows::UI::Xaml::DependencyProperty GradientBrush::SpreadMethodProperty()
{
    return get_activation_factory<GradientBrush, Windows::UI::Xaml::Media::IGradientBrushStatics>().SpreadMethodProperty();
}

inline Windows::UI::Xaml::DependencyProperty GradientBrush::MappingModeProperty()
{
    return get_activation_factory<GradientBrush, Windows::UI::Xaml::Media::IGradientBrushStatics>().MappingModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty GradientBrush::ColorInterpolationModeProperty()
{
    return get_activation_factory<GradientBrush, Windows::UI::Xaml::Media::IGradientBrushStatics>().ColorInterpolationModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty GradientBrush::GradientStopsProperty()
{
    return get_activation_factory<GradientBrush, Windows::UI::Xaml::Media::IGradientBrushStatics>().GradientStopsProperty();
}

inline GradientStop::GradientStop() :
    GradientStop(get_activation_factory<GradientStop>().ActivateInstance<GradientStop>())
{}

inline Windows::UI::Xaml::DependencyProperty GradientStop::ColorProperty()
{
    return get_activation_factory<GradientStop, Windows::UI::Xaml::Media::IGradientStopStatics>().ColorProperty();
}

inline Windows::UI::Xaml::DependencyProperty GradientStop::OffsetProperty()
{
    return get_activation_factory<GradientStop, Windows::UI::Xaml::Media::IGradientStopStatics>().OffsetProperty();
}

inline GradientStopCollection::GradientStopCollection() :
    GradientStopCollection(get_activation_factory<GradientStopCollection>().ActivateInstance<GradientStopCollection>())
{}

inline ImageBrush::ImageBrush() :
    ImageBrush(get_activation_factory<ImageBrush>().ActivateInstance<ImageBrush>())
{}

inline Windows::UI::Xaml::DependencyProperty ImageBrush::ImageSourceProperty()
{
    return get_activation_factory<ImageBrush, Windows::UI::Xaml::Media::IImageBrushStatics>().ImageSourceProperty();
}

inline LineGeometry::LineGeometry() :
    LineGeometry(get_activation_factory<LineGeometry>().ActivateInstance<LineGeometry>())
{}

inline Windows::UI::Xaml::DependencyProperty LineGeometry::StartPointProperty()
{
    return get_activation_factory<LineGeometry, Windows::UI::Xaml::Media::ILineGeometryStatics>().StartPointProperty();
}

inline Windows::UI::Xaml::DependencyProperty LineGeometry::EndPointProperty()
{
    return get_activation_factory<LineGeometry, Windows::UI::Xaml::Media::ILineGeometryStatics>().EndPointProperty();
}

inline LineSegment::LineSegment() :
    LineSegment(get_activation_factory<LineSegment>().ActivateInstance<LineSegment>())
{}

inline Windows::UI::Xaml::DependencyProperty LineSegment::PointProperty()
{
    return get_activation_factory<LineSegment, Windows::UI::Xaml::Media::ILineSegmentStatics>().PointProperty();
}

inline LinearGradientBrush::LinearGradientBrush() :
    LinearGradientBrush(get_activation_factory<LinearGradientBrush>().ActivateInstance<LinearGradientBrush>())
{}

inline LinearGradientBrush::LinearGradientBrush(Windows::UI::Xaml::Media::GradientStopCollection const& gradientStopCollection, double angle) :
    LinearGradientBrush(get_activation_factory<LinearGradientBrush, Windows::UI::Xaml::Media::ILinearGradientBrushFactory>().CreateInstanceWithGradientStopCollectionAndAngle(gradientStopCollection, angle))
{}

inline Windows::UI::Xaml::DependencyProperty LinearGradientBrush::StartPointProperty()
{
    return get_activation_factory<LinearGradientBrush, Windows::UI::Xaml::Media::ILinearGradientBrushStatics>().StartPointProperty();
}

inline Windows::UI::Xaml::DependencyProperty LinearGradientBrush::EndPointProperty()
{
    return get_activation_factory<LinearGradientBrush, Windows::UI::Xaml::Media::ILinearGradientBrushStatics>().EndPointProperty();
}

inline Windows::UI::Xaml::Media::LoadedImageSurface LoadedImageSurface::StartLoadFromUri(Windows::Foundation::Uri const& uri, Windows::Foundation::Size const& desiredMaxSize)
{
    return get_activation_factory<LoadedImageSurface, Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>().StartLoadFromUri(uri, desiredMaxSize);
}

inline Windows::UI::Xaml::Media::LoadedImageSurface LoadedImageSurface::StartLoadFromUri(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<LoadedImageSurface, Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>().StartLoadFromUri(uri);
}

inline Windows::UI::Xaml::Media::LoadedImageSurface LoadedImageSurface::StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Foundation::Size const& desiredMaxSize)
{
    return get_activation_factory<LoadedImageSurface, Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>().StartLoadFromStream(stream, desiredMaxSize);
}

inline Windows::UI::Xaml::Media::LoadedImageSurface LoadedImageSurface::StartLoadFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<LoadedImageSurface, Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics>().StartLoadFromStream(stream);
}

inline Matrix3DProjection::Matrix3DProjection() :
    Matrix3DProjection(get_activation_factory<Matrix3DProjection>().ActivateInstance<Matrix3DProjection>())
{}

inline Windows::UI::Xaml::DependencyProperty Matrix3DProjection::ProjectionMatrixProperty()
{
    return get_activation_factory<Matrix3DProjection, Windows::UI::Xaml::Media::IMatrix3DProjectionStatics>().ProjectionMatrixProperty();
}

inline Windows::UI::Xaml::Media::Matrix MatrixHelper::Identity()
{
    return get_activation_factory<MatrixHelper, Windows::UI::Xaml::Media::IMatrixHelperStatics>().Identity();
}

inline Windows::UI::Xaml::Media::Matrix MatrixHelper::FromElements(double m11, double m12, double m21, double m22, double offsetX, double offsetY)
{
    return get_activation_factory<MatrixHelper, Windows::UI::Xaml::Media::IMatrixHelperStatics>().FromElements(m11, m12, m21, m22, offsetX, offsetY);
}

inline bool MatrixHelper::GetIsIdentity(Windows::UI::Xaml::Media::Matrix const& target)
{
    return get_activation_factory<MatrixHelper, Windows::UI::Xaml::Media::IMatrixHelperStatics>().GetIsIdentity(target);
}

inline Windows::Foundation::Point MatrixHelper::Transform(Windows::UI::Xaml::Media::Matrix const& target, Windows::Foundation::Point const& point)
{
    return get_activation_factory<MatrixHelper, Windows::UI::Xaml::Media::IMatrixHelperStatics>().Transform(target, point);
}

inline MatrixTransform::MatrixTransform() :
    MatrixTransform(get_activation_factory<MatrixTransform>().ActivateInstance<MatrixTransform>())
{}

inline Windows::UI::Xaml::DependencyProperty MatrixTransform::MatrixProperty()
{
    return get_activation_factory<MatrixTransform, Windows::UI::Xaml::Media::IMatrixTransformStatics>().MatrixProperty();
}

inline PartialMediaFailureDetectedEventArgs::PartialMediaFailureDetectedEventArgs() :
    PartialMediaFailureDetectedEventArgs(get_activation_factory<PartialMediaFailureDetectedEventArgs>().ActivateInstance<PartialMediaFailureDetectedEventArgs>())
{}

inline PathFigure::PathFigure() :
    PathFigure(get_activation_factory<PathFigure>().ActivateInstance<PathFigure>())
{}

inline Windows::UI::Xaml::DependencyProperty PathFigure::SegmentsProperty()
{
    return get_activation_factory<PathFigure, Windows::UI::Xaml::Media::IPathFigureStatics>().SegmentsProperty();
}

inline Windows::UI::Xaml::DependencyProperty PathFigure::StartPointProperty()
{
    return get_activation_factory<PathFigure, Windows::UI::Xaml::Media::IPathFigureStatics>().StartPointProperty();
}

inline Windows::UI::Xaml::DependencyProperty PathFigure::IsClosedProperty()
{
    return get_activation_factory<PathFigure, Windows::UI::Xaml::Media::IPathFigureStatics>().IsClosedProperty();
}

inline Windows::UI::Xaml::DependencyProperty PathFigure::IsFilledProperty()
{
    return get_activation_factory<PathFigure, Windows::UI::Xaml::Media::IPathFigureStatics>().IsFilledProperty();
}

inline PathFigureCollection::PathFigureCollection() :
    PathFigureCollection(get_activation_factory<PathFigureCollection>().ActivateInstance<PathFigureCollection>())
{}

inline PathGeometry::PathGeometry() :
    PathGeometry(get_activation_factory<PathGeometry>().ActivateInstance<PathGeometry>())
{}

inline Windows::UI::Xaml::DependencyProperty PathGeometry::FillRuleProperty()
{
    return get_activation_factory<PathGeometry, Windows::UI::Xaml::Media::IPathGeometryStatics>().FillRuleProperty();
}

inline Windows::UI::Xaml::DependencyProperty PathGeometry::FiguresProperty()
{
    return get_activation_factory<PathGeometry, Windows::UI::Xaml::Media::IPathGeometryStatics>().FiguresProperty();
}

inline PathSegmentCollection::PathSegmentCollection() :
    PathSegmentCollection(get_activation_factory<PathSegmentCollection>().ActivateInstance<PathSegmentCollection>())
{}

inline PlaneProjection::PlaneProjection() :
    PlaneProjection(get_activation_factory<PlaneProjection>().ActivateInstance<PlaneProjection>())
{}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::LocalOffsetXProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().LocalOffsetXProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::LocalOffsetYProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().LocalOffsetYProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::LocalOffsetZProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().LocalOffsetZProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::RotationXProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().RotationXProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::RotationYProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().RotationYProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::RotationZProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().RotationZProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::CenterOfRotationXProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().CenterOfRotationXProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::CenterOfRotationYProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().CenterOfRotationYProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::CenterOfRotationZProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().CenterOfRotationZProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::GlobalOffsetXProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().GlobalOffsetXProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::GlobalOffsetYProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().GlobalOffsetYProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::GlobalOffsetZProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().GlobalOffsetZProperty();
}

inline Windows::UI::Xaml::DependencyProperty PlaneProjection::ProjectionMatrixProperty()
{
    return get_activation_factory<PlaneProjection, Windows::UI::Xaml::Media::IPlaneProjectionStatics>().ProjectionMatrixProperty();
}

inline PointCollection::PointCollection() :
    PointCollection(get_activation_factory<PointCollection>().ActivateInstance<PointCollection>())
{}

inline PolyBezierSegment::PolyBezierSegment() :
    PolyBezierSegment(get_activation_factory<PolyBezierSegment>().ActivateInstance<PolyBezierSegment>())
{}

inline Windows::UI::Xaml::DependencyProperty PolyBezierSegment::PointsProperty()
{
    return get_activation_factory<PolyBezierSegment, Windows::UI::Xaml::Media::IPolyBezierSegmentStatics>().PointsProperty();
}

inline PolyLineSegment::PolyLineSegment() :
    PolyLineSegment(get_activation_factory<PolyLineSegment>().ActivateInstance<PolyLineSegment>())
{}

inline Windows::UI::Xaml::DependencyProperty PolyLineSegment::PointsProperty()
{
    return get_activation_factory<PolyLineSegment, Windows::UI::Xaml::Media::IPolyLineSegmentStatics>().PointsProperty();
}

inline PolyQuadraticBezierSegment::PolyQuadraticBezierSegment() :
    PolyQuadraticBezierSegment(get_activation_factory<PolyQuadraticBezierSegment>().ActivateInstance<PolyQuadraticBezierSegment>())
{}

inline Windows::UI::Xaml::DependencyProperty PolyQuadraticBezierSegment::PointsProperty()
{
    return get_activation_factory<PolyQuadraticBezierSegment, Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics>().PointsProperty();
}

inline QuadraticBezierSegment::QuadraticBezierSegment() :
    QuadraticBezierSegment(get_activation_factory<QuadraticBezierSegment>().ActivateInstance<QuadraticBezierSegment>())
{}

inline Windows::UI::Xaml::DependencyProperty QuadraticBezierSegment::Point1Property()
{
    return get_activation_factory<QuadraticBezierSegment, Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>().Point1Property();
}

inline Windows::UI::Xaml::DependencyProperty QuadraticBezierSegment::Point2Property()
{
    return get_activation_factory<QuadraticBezierSegment, Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics>().Point2Property();
}

inline RateChangedRoutedEventArgs::RateChangedRoutedEventArgs() :
    RateChangedRoutedEventArgs(get_activation_factory<RateChangedRoutedEventArgs>().ActivateInstance<RateChangedRoutedEventArgs>())
{}

inline RectangleGeometry::RectangleGeometry() :
    RectangleGeometry(get_activation_factory<RectangleGeometry>().ActivateInstance<RectangleGeometry>())
{}

inline Windows::UI::Xaml::DependencyProperty RectangleGeometry::RectProperty()
{
    return get_activation_factory<RectangleGeometry, Windows::UI::Xaml::Media::IRectangleGeometryStatics>().RectProperty();
}

inline RevealBackgroundBrush::RevealBackgroundBrush()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<RevealBackgroundBrush, Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>().CreateInstance(outer, inner);
}

inline RevealBorderBrush::RevealBorderBrush()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<RevealBorderBrush, Windows::UI::Xaml::Media::IRevealBorderBrushFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty RevealBrush::ColorProperty()
{
    return get_activation_factory<RevealBrush, Windows::UI::Xaml::Media::IRevealBrushStatics>().ColorProperty();
}

inline Windows::UI::Xaml::DependencyProperty RevealBrush::TargetThemeProperty()
{
    return get_activation_factory<RevealBrush, Windows::UI::Xaml::Media::IRevealBrushStatics>().TargetThemeProperty();
}

inline Windows::UI::Xaml::DependencyProperty RevealBrush::AlwaysUseFallbackProperty()
{
    return get_activation_factory<RevealBrush, Windows::UI::Xaml::Media::IRevealBrushStatics>().AlwaysUseFallbackProperty();
}

inline Windows::UI::Xaml::DependencyProperty RevealBrush::StateProperty()
{
    return get_activation_factory<RevealBrush, Windows::UI::Xaml::Media::IRevealBrushStatics>().StateProperty();
}

inline void RevealBrush::SetState(Windows::UI::Xaml::UIElement const& element, Windows::UI::Xaml::Media::RevealBrushState const& value)
{
    get_activation_factory<RevealBrush, Windows::UI::Xaml::Media::IRevealBrushStatics>().SetState(element, value);
}

inline Windows::UI::Xaml::Media::RevealBrushState RevealBrush::GetState(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<RevealBrush, Windows::UI::Xaml::Media::IRevealBrushStatics>().GetState(element);
}

inline RotateTransform::RotateTransform() :
    RotateTransform(get_activation_factory<RotateTransform>().ActivateInstance<RotateTransform>())
{}

inline Windows::UI::Xaml::DependencyProperty RotateTransform::CenterXProperty()
{
    return get_activation_factory<RotateTransform, Windows::UI::Xaml::Media::IRotateTransformStatics>().CenterXProperty();
}

inline Windows::UI::Xaml::DependencyProperty RotateTransform::CenterYProperty()
{
    return get_activation_factory<RotateTransform, Windows::UI::Xaml::Media::IRotateTransformStatics>().CenterYProperty();
}

inline Windows::UI::Xaml::DependencyProperty RotateTransform::AngleProperty()
{
    return get_activation_factory<RotateTransform, Windows::UI::Xaml::Media::IRotateTransformStatics>().AngleProperty();
}

inline ScaleTransform::ScaleTransform() :
    ScaleTransform(get_activation_factory<ScaleTransform>().ActivateInstance<ScaleTransform>())
{}

inline Windows::UI::Xaml::DependencyProperty ScaleTransform::CenterXProperty()
{
    return get_activation_factory<ScaleTransform, Windows::UI::Xaml::Media::IScaleTransformStatics>().CenterXProperty();
}

inline Windows::UI::Xaml::DependencyProperty ScaleTransform::CenterYProperty()
{
    return get_activation_factory<ScaleTransform, Windows::UI::Xaml::Media::IScaleTransformStatics>().CenterYProperty();
}

inline Windows::UI::Xaml::DependencyProperty ScaleTransform::ScaleXProperty()
{
    return get_activation_factory<ScaleTransform, Windows::UI::Xaml::Media::IScaleTransformStatics>().ScaleXProperty();
}

inline Windows::UI::Xaml::DependencyProperty ScaleTransform::ScaleYProperty()
{
    return get_activation_factory<ScaleTransform, Windows::UI::Xaml::Media::IScaleTransformStatics>().ScaleYProperty();
}

inline SkewTransform::SkewTransform() :
    SkewTransform(get_activation_factory<SkewTransform>().ActivateInstance<SkewTransform>())
{}

inline Windows::UI::Xaml::DependencyProperty SkewTransform::CenterXProperty()
{
    return get_activation_factory<SkewTransform, Windows::UI::Xaml::Media::ISkewTransformStatics>().CenterXProperty();
}

inline Windows::UI::Xaml::DependencyProperty SkewTransform::CenterYProperty()
{
    return get_activation_factory<SkewTransform, Windows::UI::Xaml::Media::ISkewTransformStatics>().CenterYProperty();
}

inline Windows::UI::Xaml::DependencyProperty SkewTransform::AngleXProperty()
{
    return get_activation_factory<SkewTransform, Windows::UI::Xaml::Media::ISkewTransformStatics>().AngleXProperty();
}

inline Windows::UI::Xaml::DependencyProperty SkewTransform::AngleYProperty()
{
    return get_activation_factory<SkewTransform, Windows::UI::Xaml::Media::ISkewTransformStatics>().AngleYProperty();
}

inline SolidColorBrush::SolidColorBrush() :
    SolidColorBrush(get_activation_factory<SolidColorBrush>().ActivateInstance<SolidColorBrush>())
{}

inline SolidColorBrush::SolidColorBrush(Windows::UI::Color const& color) :
    SolidColorBrush(get_activation_factory<SolidColorBrush, Windows::UI::Xaml::Media::ISolidColorBrushFactory>().CreateInstanceWithColor(color))
{}

inline Windows::UI::Xaml::DependencyProperty SolidColorBrush::ColorProperty()
{
    return get_activation_factory<SolidColorBrush, Windows::UI::Xaml::Media::ISolidColorBrushStatics>().ColorProperty();
}

inline Windows::UI::Xaml::DependencyProperty TileBrush::AlignmentXProperty()
{
    return get_activation_factory<TileBrush, Windows::UI::Xaml::Media::ITileBrushStatics>().AlignmentXProperty();
}

inline Windows::UI::Xaml::DependencyProperty TileBrush::AlignmentYProperty()
{
    return get_activation_factory<TileBrush, Windows::UI::Xaml::Media::ITileBrushStatics>().AlignmentYProperty();
}

inline Windows::UI::Xaml::DependencyProperty TileBrush::StretchProperty()
{
    return get_activation_factory<TileBrush, Windows::UI::Xaml::Media::ITileBrushStatics>().StretchProperty();
}

inline TimelineMarker::TimelineMarker() :
    TimelineMarker(get_activation_factory<TimelineMarker>().ActivateInstance<TimelineMarker>())
{}

inline Windows::UI::Xaml::DependencyProperty TimelineMarker::TimeProperty()
{
    return get_activation_factory<TimelineMarker, Windows::UI::Xaml::Media::ITimelineMarkerStatics>().TimeProperty();
}

inline Windows::UI::Xaml::DependencyProperty TimelineMarker::TypeProperty()
{
    return get_activation_factory<TimelineMarker, Windows::UI::Xaml::Media::ITimelineMarkerStatics>().TypeProperty();
}

inline Windows::UI::Xaml::DependencyProperty TimelineMarker::TextProperty()
{
    return get_activation_factory<TimelineMarker, Windows::UI::Xaml::Media::ITimelineMarkerStatics>().TextProperty();
}

inline TimelineMarkerCollection::TimelineMarkerCollection() :
    TimelineMarkerCollection(get_activation_factory<TimelineMarkerCollection>().ActivateInstance<TimelineMarkerCollection>())
{}

inline TimelineMarkerRoutedEventArgs::TimelineMarkerRoutedEventArgs() :
    TimelineMarkerRoutedEventArgs(get_activation_factory<TimelineMarkerRoutedEventArgs>().ActivateInstance<TimelineMarkerRoutedEventArgs>())
{}

inline TransformCollection::TransformCollection() :
    TransformCollection(get_activation_factory<TransformCollection>().ActivateInstance<TransformCollection>())
{}

inline TransformGroup::TransformGroup() :
    TransformGroup(get_activation_factory<TransformGroup>().ActivateInstance<TransformGroup>())
{}

inline Windows::UI::Xaml::DependencyProperty TransformGroup::ChildrenProperty()
{
    return get_activation_factory<TransformGroup, Windows::UI::Xaml::Media::ITransformGroupStatics>().ChildrenProperty();
}

inline TranslateTransform::TranslateTransform() :
    TranslateTransform(get_activation_factory<TranslateTransform>().ActivateInstance<TranslateTransform>())
{}

inline Windows::UI::Xaml::DependencyProperty TranslateTransform::XProperty()
{
    return get_activation_factory<TranslateTransform, Windows::UI::Xaml::Media::ITranslateTransformStatics>().XProperty();
}

inline Windows::UI::Xaml::DependencyProperty TranslateTransform::YProperty()
{
    return get_activation_factory<TranslateTransform, Windows::UI::Xaml::Media::ITranslateTransformStatics>().YProperty();
}

inline Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> VisualTreeHelper::FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().FindElementsInHostCoordinates(intersectingPoint, subtree);
}

inline Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> VisualTreeHelper::FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().FindElementsInHostCoordinates(intersectingRect, subtree);
}

inline Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> VisualTreeHelper::FindElementsInHostCoordinates(Windows::Foundation::Point const& intersectingPoint, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().FindElementsInHostCoordinates(intersectingPoint, subtree, includeAllElements);
}

inline Windows::Foundation::Collections::IIterable<Windows::UI::Xaml::UIElement> VisualTreeHelper::FindElementsInHostCoordinates(Windows::Foundation::Rect const& intersectingRect, Windows::UI::Xaml::UIElement const& subtree, bool includeAllElements)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().FindElementsInHostCoordinates(intersectingRect, subtree, includeAllElements);
}

inline Windows::UI::Xaml::DependencyObject VisualTreeHelper::GetChild(Windows::UI::Xaml::DependencyObject const& reference, int32_t childIndex)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().GetChild(reference, childIndex);
}

inline int32_t VisualTreeHelper::GetChildrenCount(Windows::UI::Xaml::DependencyObject const& reference)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().GetChildrenCount(reference);
}

inline Windows::UI::Xaml::DependencyObject VisualTreeHelper::GetParent(Windows::UI::Xaml::DependencyObject const& reference)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().GetParent(reference);
}

inline void VisualTreeHelper::DisconnectChildrenRecursive(Windows::UI::Xaml::UIElement const& element)
{
    get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics>().DisconnectChildrenRecursive(element);
}

inline Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Primitives::Popup> VisualTreeHelper::GetOpenPopups(Windows::UI::Xaml::Window const& window)
{
    return get_activation_factory<VisualTreeHelper, Windows::UI::Xaml::Media::IVisualTreeHelperStatics2>().GetOpenPopups(window);
}

inline Windows::UI::Xaml::DependencyProperty XamlCompositionBrushBase::FallbackColorProperty()
{
    return get_activation_factory<XamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics>().FallbackColorProperty();
}

inline XamlLight::XamlLight()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<XamlLight, Windows::UI::Xaml::Media::IXamlLightFactory>().CreateInstance(outer, inner);
}

inline void XamlLight::AddTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element)
{
    get_activation_factory<XamlLight, Windows::UI::Xaml::Media::IXamlLightStatics>().AddTargetElement(lightId, element);
}

inline void XamlLight::RemoveTargetElement(param::hstring const& lightId, Windows::UI::Xaml::UIElement const& element)
{
    get_activation_factory<XamlLight, Windows::UI::Xaml::Media::IXamlLightStatics>().RemoveTargetElement(lightId, element);
}

inline void XamlLight::AddTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush)
{
    get_activation_factory<XamlLight, Windows::UI::Xaml::Media::IXamlLightStatics>().AddTargetBrush(lightId, brush);
}

inline void XamlLight::RemoveTargetBrush(param::hstring const& lightId, Windows::UI::Xaml::Media::Brush const& brush)
{
    get_activation_factory<XamlLight, Windows::UI::Xaml::Media::IXamlLightStatics>().RemoveTargetBrush(lightId, brush);
}

template <typename L> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(L handler) :
    RateChangedRoutedEventHandler(impl::make_delegate<RateChangedRoutedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(F* handler) :
    RateChangedRoutedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> RateChangedRoutedEventHandler::RateChangedRoutedEventHandler(O* object, M method) :
    RateChangedRoutedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void RateChangedRoutedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::RateChangedRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<RateChangedRoutedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(L handler) :
    TimelineMarkerRoutedEventHandler(impl::make_delegate<TimelineMarkerRoutedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(F* handler) :
    TimelineMarkerRoutedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> TimelineMarkerRoutedEventHandler::TimelineMarkerRoutedEventHandler(O* object, M method) :
    TimelineMarkerRoutedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void TimelineMarkerRoutedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<TimelineMarkerRoutedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D> Windows::UI::Xaml::Media::GeneralTransform IGeneralTransformOverridesT<D>::InverseCore() const
{
    return shim().template try_as<IGeneralTransformOverrides>().InverseCore();
}

template <typename D> bool IGeneralTransformOverridesT<D>::TryTransformCore(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const
{
    return shim().template try_as<IGeneralTransformOverrides>().TryTransformCore(inPoint, outPoint);
}

template <typename D> Windows::Foundation::Rect IGeneralTransformOverridesT<D>::TransformBoundsCore(Windows::Foundation::Rect const& rect) const
{
    return shim().template try_as<IGeneralTransformOverrides>().TransformBoundsCore(rect);
}

template <typename D> void IXamlCompositionBrushBaseOverridesT<D>::OnConnected() const
{
    return shim().template try_as<IXamlCompositionBrushBaseOverrides>().OnConnected();
}

template <typename D> void IXamlCompositionBrushBaseOverridesT<D>::OnDisconnected() const
{
    return shim().template try_as<IXamlCompositionBrushBaseOverrides>().OnDisconnected();
}

template <typename D> hstring IXamlLightOverridesT<D>::GetId() const
{
    return shim().template try_as<IXamlLightOverrides>().GetId();
}

template <typename D> void IXamlLightOverridesT<D>::OnConnected(Windows::UI::Xaml::UIElement const& newElement) const
{
    return shim().template try_as<IXamlLightOverrides>().OnConnected(newElement);
}

template <typename D> void IXamlLightOverridesT<D>::OnDisconnected(Windows::UI::Xaml::UIElement const& oldElement) const
{
    return shim().template try_as<IXamlLightOverrides>().OnDisconnected(oldElement);
}

template <typename D, typename... Interfaces>
struct AcrylicBrushT :
    implements<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IAcrylicBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>,
    Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>
{
    using composable = AcrylicBrush;

protected:
    AcrylicBrushT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::AcrylicBrush, Windows::UI::Xaml::Media::IAcrylicBrushFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct BrushT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = Brush;

protected:
    BrushT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Brush, Windows::UI::Xaml::Media::IBrushFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct CacheModeT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::ICacheMode, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = CacheMode;

protected:
    CacheModeT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::CacheMode, Windows::UI::Xaml::Media::ICacheModeFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct FontFamilyT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IFontFamily>
{
    using composable = FontFamily;

protected:
    FontFamilyT(param::hstring const& familyName)
    {
        get_activation_factory<Windows::UI::Xaml::Media::FontFamily, Windows::UI::Xaml::Media::IFontFamilyFactory>().CreateInstanceWithName(familyName, *this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct GeneralTransformT :
    implements<D, Windows::UI::Xaml::Media::IGeneralTransformOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IGeneralTransform, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Media::IGeneralTransformOverridesT<D>
{
    using composable = GeneralTransform;

protected:
    GeneralTransformT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::GeneralTransform, Windows::UI::Xaml::Media::IGeneralTransformFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct GradientBrushT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IGradientBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush>
{
    using composable = GradientBrush;

protected:
    GradientBrushT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::GradientBrush, Windows::UI::Xaml::Media::IGradientBrushFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ProjectionT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IProjection, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = Projection;

protected:
    ProjectionT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::Projection, Windows::UI::Xaml::Media::IProjectionFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct RevealBackgroundBrushT :
    implements<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IRevealBackgroundBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IRevealBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>,
    Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>
{
    using composable = RevealBackgroundBrush;

protected:
    RevealBackgroundBrushT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::RevealBackgroundBrush, Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct RevealBorderBrushT :
    implements<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IRevealBorderBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IRevealBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>,
    Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>
{
    using composable = RevealBorderBrush;

protected:
    RevealBorderBrushT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::RevealBorderBrush, Windows::UI::Xaml::Media::IRevealBorderBrushFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct RevealBrushT :
    implements<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IRevealBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>,
    Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>
{
    using composable = RevealBrush;

protected:
    RevealBrushT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::RevealBrush, Windows::UI::Xaml::Media::IRevealBrushFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct TileBrushT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::ITileBrush, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush>
{
    using composable = TileBrush;

protected:
    TileBrushT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::TileBrush, Windows::UI::Xaml::Media::ITileBrushFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct XamlCompositionBrushBaseT :
    implements<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IXamlCompositionBrushBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IBrush, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected>,
    Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverridesT<D>
{
    using composable = XamlCompositionBrushBase;

protected:
    XamlCompositionBrushBaseT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::XamlCompositionBrushBase, Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct XamlLightT :
    implements<D, Windows::UI::Xaml::Media::IXamlLightOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Media::IXamlLight, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::Media::IXamlLightProtected>,
    Windows::UI::Xaml::Media::IXamlLightOverridesT<D>
{
    using composable = XamlLight;

protected:
    XamlLightT()
    {
        get_activation_factory<Windows::UI::Xaml::Media::XamlLight, Windows::UI::Xaml::Media::IXamlLightFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IAcrylicBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IAcrylicBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IArcSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IArcSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IArcSegmentStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IArcSegmentStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IBezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IBezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IBezierSegmentStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IBitmapCache> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IBitmapCache> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ICacheMode> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ICacheMode> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ICacheModeFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ICacheModeFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositeTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ICompositeTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ICompositeTransformStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositionTarget> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ICompositionTarget> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IEllipseGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IEllipseGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IEllipseGeometryStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IFontFamily> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IFontFamily> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IFontFamilyFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IFontFamilyFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IFontFamilyStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IFontFamilyStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeneralTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeneralTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeneralTransformFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeneralTransformFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeneralTransformOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeometryFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryGroup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeometryGroup> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryGroupStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeometryGroupStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGeometryStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGeometryStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGradientBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGradientBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGradientBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientStop> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGradientStop> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IGradientStopStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IGradientStopStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IImageBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IImageBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IImageSource> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IImageSourceFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IImageSourceFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILineGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineGeometryStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILineGeometryStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILineSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILineSegmentStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILineSegmentStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILinearGradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILinearGradientBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILinearGradientBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILinearGradientBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILinearGradientBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILinearGradientBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILoadedImageSourceLoadCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILoadedImageSurface> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILoadedImageSurface> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ILoadedImageSurfaceStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrix3DProjection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IMatrix3DProjection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrix3DProjectionStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IMatrix3DProjectionStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IMatrixHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IMatrixHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IMatrixTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IMatrixTransformStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IMatrixTransformStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IMediaTransportControlsThumbnailRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPartialMediaFailureDetectedEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathFigure> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPathFigure> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathFigureStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPathFigureStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPathGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathGeometryStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPathGeometryStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPathSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPathSegmentFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPathSegmentFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPlaneProjection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPlaneProjection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPlaneProjectionStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyBezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPolyBezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyBezierSegmentStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPolyBezierSegmentStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyLineSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPolyLineSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyLineSegmentStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPolyLineSegmentStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IPolyQuadraticBezierSegmentStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IProjection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IProjection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IProjectionFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IProjectionFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IQuadraticBezierSegmentStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRateChangedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRectangleGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRectangleGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRectangleGeometryStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRectangleGeometryStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRenderedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRenderedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRenderingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRenderingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRevealBackgroundBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBorderBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRevealBorderBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBorderBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRevealBorderBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRevealBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRevealBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRevealBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRevealBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRotateTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRotateTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IRotateTransformStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IRotateTransformStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IScaleTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IScaleTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IScaleTransformStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IScaleTransformStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ISkewTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ISkewTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ISkewTransformStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ISkewTransformStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ISolidColorBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ISolidColorBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ISolidColorBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ISolidColorBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ISolidColorBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITileBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITileBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITileBrushFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITileBrushFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITileBrushStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITileBrushStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITimelineMarker> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITimelineMarker> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITimelineMarkerRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITimelineMarkerStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransformFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITransformFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransformGroup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITransformGroup> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITransformGroupStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITransformGroupStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITranslateTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITranslateTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ITranslateTransformStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ITranslateTransformStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IVisualTreeHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IVisualTreeHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IVisualTreeHelperStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseProtected> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlCompositionBrushBaseStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLight> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlLight> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlLightFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlLightOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightProtected> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlLightProtected> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::IXamlLightStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::IXamlLightStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::AcrylicBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::AcrylicBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ArcSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ArcSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::BezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::BezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::BitmapCache> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::BitmapCache> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::Brush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::Brush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::BrushCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::BrushCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::CacheMode> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::CacheMode> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::CompositeTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::CompositeTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::CompositionTarget> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::CompositionTarget> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::DoubleCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::DoubleCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::EllipseGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::EllipseGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::FontFamily> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::FontFamily> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::GeneralTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::GeneralTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::Geometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::Geometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::GeometryCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::GeometryCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::GeometryGroup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::GeometryGroup> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::GradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::GradientBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::GradientStop> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::GradientStop> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::GradientStopCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::GradientStopCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ImageBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ImageBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ImageSource> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ImageSource> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::LineGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::LineGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::LineSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::LineSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::LinearGradientBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::LinearGradientBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::LoadedImageSourceLoadCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::LoadedImageSurface> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::LoadedImageSurface> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::Matrix3DProjection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::Matrix3DProjection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::MatrixHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::MatrixHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::MatrixTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::MatrixTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::MediaTransportControlsThumbnailRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PartialMediaFailureDetectedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PathFigure> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PathFigure> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PathFigureCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PathFigureCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PathGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PathGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PathSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PathSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PathSegmentCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PathSegmentCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PlaneProjection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PlaneProjection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PointCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PointCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PolyBezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PolyBezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PolyLineSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PolyLineSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::PolyQuadraticBezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::PolyQuadraticBezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::Projection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::Projection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::QuadraticBezierSegment> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::QuadraticBezierSegment> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RateChangedRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RectangleGeometry> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RectangleGeometry> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RenderedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RenderingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RenderingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RevealBackgroundBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RevealBackgroundBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RevealBorderBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RevealBorderBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RevealBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RevealBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::RotateTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::RotateTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::ScaleTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::ScaleTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::SkewTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::SkewTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::SolidColorBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::SolidColorBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::TileBrush> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::TileBrush> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::TimelineMarker> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::TimelineMarker> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::TimelineMarkerCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::TimelineMarkerCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::TimelineMarkerRoutedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::Transform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::Transform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::TransformCollection> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::TransformCollection> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::TransformGroup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::TransformGroup> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::TranslateTransform> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::TranslateTransform> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::VisualTreeHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::VisualTreeHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::XamlCompositionBrushBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Media::XamlLight> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Media::XamlLight> {};

}

WINRT_WARNING_POP
