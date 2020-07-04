﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/impl/Windows.UI.Xaml.Shapes.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> double consume_Windows_UI_Xaml_Shapes_ILine<D>::X1() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->get_X1(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_ILine<D>::X1(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->put_X1(value));
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_ILine<D>::Y1() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->get_Y1(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_ILine<D>::Y1(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->put_Y1(value));
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_ILine<D>::X2() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->get_X2(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_ILine<D>::X2(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->put_X2(value));
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_ILine<D>::Y2() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->get_Y2(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_ILine<D>::Y2(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILine)->put_Y2(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_ILineStatics<D>::X1Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILineStatics)->get_X1Property(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_ILineStatics<D>::Y1Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILineStatics)->get_Y1Property(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_ILineStatics<D>::X2Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILineStatics)->get_X2Property(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_ILineStatics<D>::Y2Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::ILineStatics)->get_Y2Property(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Geometry consume_Windows_UI_Xaml_Shapes_IPath<D>::Data() const
{
    Windows::UI::Xaml::Media::Geometry value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPath)->get_Data(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IPath<D>::Data(Windows::UI::Xaml::Media::Geometry const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPath)->put_Data(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Shapes::Path consume_Windows_UI_Xaml_Shapes_IPathFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Shapes::Path instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPathFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IPathStatics<D>::DataProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPathStatics)->get_DataProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::FillRule consume_Windows_UI_Xaml_Shapes_IPolygon<D>::FillRule() const
{
    Windows::UI::Xaml::Media::FillRule value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolygon)->get_FillRule(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IPolygon<D>::FillRule(Windows::UI::Xaml::Media::FillRule const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolygon)->put_FillRule(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::PointCollection consume_Windows_UI_Xaml_Shapes_IPolygon<D>::Points() const
{
    Windows::UI::Xaml::Media::PointCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolygon)->get_Points(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IPolygon<D>::Points(Windows::UI::Xaml::Media::PointCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolygon)->put_Points(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IPolygonStatics<D>::FillRuleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolygonStatics)->get_FillRuleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IPolygonStatics<D>::PointsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolygonStatics)->get_PointsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::FillRule consume_Windows_UI_Xaml_Shapes_IPolyline<D>::FillRule() const
{
    Windows::UI::Xaml::Media::FillRule value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolyline)->get_FillRule(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IPolyline<D>::FillRule(Windows::UI::Xaml::Media::FillRule const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolyline)->put_FillRule(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::PointCollection consume_Windows_UI_Xaml_Shapes_IPolyline<D>::Points() const
{
    Windows::UI::Xaml::Media::PointCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolyline)->get_Points(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IPolyline<D>::Points(Windows::UI::Xaml::Media::PointCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolyline)->put_Points(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IPolylineStatics<D>::FillRuleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolylineStatics)->get_FillRuleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IPolylineStatics<D>::PointsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IPolylineStatics)->get_PointsProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_IRectangle<D>::RadiusX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IRectangle)->get_RadiusX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IRectangle<D>::RadiusX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IRectangle)->put_RadiusX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_IRectangle<D>::RadiusY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IRectangle)->get_RadiusY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IRectangle<D>::RadiusY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IRectangle)->put_RadiusY(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IRectangleStatics<D>::RadiusXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IRectangleStatics)->get_RadiusXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IRectangleStatics<D>::RadiusYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IRectangleStatics)->get_RadiusYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Shapes_IShape<D>::Fill() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_Fill(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::Fill(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_Fill(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Shapes_IShape<D>::Stroke() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_Stroke(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::Stroke(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_Stroke(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeMiterLimit() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeMiterLimit(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeMiterLimit(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeMiterLimit(value));
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeThickness() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeThickness(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeThickness(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeThickness(value));
}

template <typename D> Windows::UI::Xaml::Media::PenLineCap consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeStartLineCap() const
{
    Windows::UI::Xaml::Media::PenLineCap value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeStartLineCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeStartLineCap(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::PenLineCap consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeEndLineCap() const
{
    Windows::UI::Xaml::Media::PenLineCap value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeEndLineCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeEndLineCap(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::PenLineJoin consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeLineJoin() const
{
    Windows::UI::Xaml::Media::PenLineJoin value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeLineJoin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeLineJoin(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeDashOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeDashOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeDashOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeDashOffset(value));
}

template <typename D> Windows::UI::Xaml::Media::PenLineCap consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeDashCap() const
{
    Windows::UI::Xaml::Media::PenLineCap value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeDashCap(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeDashCap(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::DoubleCollection consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeDashArray() const
{
    Windows::UI::Xaml::Media::DoubleCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_StrokeDashArray(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::StrokeDashArray(Windows::UI::Xaml::Media::DoubleCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_StrokeDashArray(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Stretch consume_Windows_UI_Xaml_Shapes_IShape<D>::Stretch() const
{
    Windows::UI::Xaml::Media::Stretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_Stretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Shapes_IShape<D>::Stretch(Windows::UI::Xaml::Media::Stretch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->put_Stretch(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Transform consume_Windows_UI_Xaml_Shapes_IShape<D>::GeometryTransform() const
{
    Windows::UI::Xaml::Media::Transform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape)->get_GeometryTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::CompositionBrush consume_Windows_UI_Xaml_Shapes_IShape2<D>::GetAlphaMask() const
{
    Windows::UI::Composition::CompositionBrush returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShape2)->GetAlphaMask(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Shapes::Shape consume_Windows_UI_Xaml_Shapes_IShapeFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Shapes::Shape instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::FillProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_FillProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeMiterLimitProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeMiterLimitProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeThicknessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeStartLineCapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeStartLineCapProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeEndLineCapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeEndLineCapProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeLineJoinProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeLineJoinProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeDashOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeDashOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeDashCapProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeDashCapProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StrokeDashArrayProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StrokeDashArrayProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Shapes_IShapeStatics<D>::StretchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Shapes::IShapeStatics)->get_StretchProperty(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IEllipse> : produce_base<D, Windows::UI::Xaml::Shapes::IEllipse>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::ILine> : produce_base<D, Windows::UI::Xaml::Shapes::ILine>
{
    HRESULT __stdcall get_X1(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().X1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_X1(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().X1(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Y1(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Y1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Y1(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Y1(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X2(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().X2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_X2(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().X2(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Y2(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Y2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Y2(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Y2(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::ILineStatics> : produce_base<D, Windows::UI::Xaml::Shapes::ILineStatics>
{
    HRESULT __stdcall get_X1Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().X1Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Y1Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Y1Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X2Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().X2Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Y2Property(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().Y2Property());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IPath> : produce_base<D, Windows::UI::Xaml::Shapes::IPath>
{
    HRESULT __stdcall get_Data(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Geometry>(this->shim().Data());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Data(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Data(*reinterpret_cast<Windows::UI::Xaml::Media::Geometry const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IPathFactory> : produce_base<D, Windows::UI::Xaml::Shapes::IPathFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Shapes::Path>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Shapes::IPathStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IPathStatics>
{
    HRESULT __stdcall get_DataProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DataProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IPolygon> : produce_base<D, Windows::UI::Xaml::Shapes::IPolygon>
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
struct produce<D, Windows::UI::Xaml::Shapes::IPolygonStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IPolygonStatics>
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
struct produce<D, Windows::UI::Xaml::Shapes::IPolyline> : produce_base<D, Windows::UI::Xaml::Shapes::IPolyline>
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
struct produce<D, Windows::UI::Xaml::Shapes::IPolylineStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IPolylineStatics>
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
struct produce<D, Windows::UI::Xaml::Shapes::IRectangle> : produce_base<D, Windows::UI::Xaml::Shapes::IRectangle>
{
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
struct produce<D, Windows::UI::Xaml::Shapes::IRectangleStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IRectangleStatics>
{
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
struct produce<D, Windows::UI::Xaml::Shapes::IShape> : produce_base<D, Windows::UI::Xaml::Shapes::IShape>
{
    HRESULT __stdcall get_Fill(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().Fill());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Fill(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Fill(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Stroke(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().Stroke());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Stroke(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stroke(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeMiterLimit(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().StrokeMiterLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeMiterLimit(double value) noexcept final
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

    HRESULT __stdcall get_StrokeThickness(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().StrokeThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeThickness(double value) noexcept final
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

    HRESULT __stdcall get_StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PenLineCap>(this->shim().StrokeStartLineCap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeStartLineCap(Windows::UI::Xaml::Media::PenLineCap value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeStartLineCap(*reinterpret_cast<Windows::UI::Xaml::Media::PenLineCap const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PenLineCap>(this->shim().StrokeEndLineCap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeEndLineCap(Windows::UI::Xaml::Media::PenLineCap value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeEndLineCap(*reinterpret_cast<Windows::UI::Xaml::Media::PenLineCap const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PenLineJoin>(this->shim().StrokeLineJoin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeLineJoin(Windows::UI::Xaml::Media::PenLineJoin value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeLineJoin(*reinterpret_cast<Windows::UI::Xaml::Media::PenLineJoin const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().StrokeDashOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashOffset(double value) noexcept final
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

    HRESULT __stdcall get_StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::PenLineCap>(this->shim().StrokeDashCap());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashCap(Windows::UI::Xaml::Media::PenLineCap value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashCap(*reinterpret_cast<Windows::UI::Xaml::Media::PenLineCap const*>(&value));
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
            *value = detach_from<Windows::UI::Xaml::Media::DoubleCollection>(this->shim().StrokeDashArray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StrokeDashArray(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StrokeDashArray(*reinterpret_cast<Windows::UI::Xaml::Media::DoubleCollection const*>(&value));
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

    HRESULT __stdcall get_GeometryTransform(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Transform>(this->shim().GeometryTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IShape2> : produce_base<D, Windows::UI::Xaml::Shapes::IShape2>
{
    HRESULT __stdcall GetAlphaMask(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Composition::CompositionBrush>(this->shim().GetAlphaMask());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Shapes::IShapeFactory> : produce_base<D, Windows::UI::Xaml::Shapes::IShapeFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Shapes::Shape>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Shapes::IShapeStatics> : produce_base<D, Windows::UI::Xaml::Shapes::IShapeStatics>
{
    HRESULT __stdcall get_FillProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FillProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeMiterLimitProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeMiterLimitProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeThicknessProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeStartLineCapProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeStartLineCapProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeEndLineCapProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeEndLineCapProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeLineJoinProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeLineJoinProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashOffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeDashOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashCapProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeDashCapProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StrokeDashArrayProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().StrokeDashArrayProperty());
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

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Shapes {

inline Ellipse::Ellipse() :
    Ellipse(get_activation_factory<Ellipse>().ActivateInstance<Ellipse>())
{}

inline Line::Line() :
    Line(get_activation_factory<Line>().ActivateInstance<Line>())
{}

inline Windows::UI::Xaml::DependencyProperty Line::X1Property()
{
    return get_activation_factory<Line, Windows::UI::Xaml::Shapes::ILineStatics>().X1Property();
}

inline Windows::UI::Xaml::DependencyProperty Line::Y1Property()
{
    return get_activation_factory<Line, Windows::UI::Xaml::Shapes::ILineStatics>().Y1Property();
}

inline Windows::UI::Xaml::DependencyProperty Line::X2Property()
{
    return get_activation_factory<Line, Windows::UI::Xaml::Shapes::ILineStatics>().X2Property();
}

inline Windows::UI::Xaml::DependencyProperty Line::Y2Property()
{
    return get_activation_factory<Line, Windows::UI::Xaml::Shapes::ILineStatics>().Y2Property();
}

inline Path::Path()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<Path, Windows::UI::Xaml::Shapes::IPathFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty Path::DataProperty()
{
    return get_activation_factory<Path, Windows::UI::Xaml::Shapes::IPathStatics>().DataProperty();
}

inline Polygon::Polygon() :
    Polygon(get_activation_factory<Polygon>().ActivateInstance<Polygon>())
{}

inline Windows::UI::Xaml::DependencyProperty Polygon::FillRuleProperty()
{
    return get_activation_factory<Polygon, Windows::UI::Xaml::Shapes::IPolygonStatics>().FillRuleProperty();
}

inline Windows::UI::Xaml::DependencyProperty Polygon::PointsProperty()
{
    return get_activation_factory<Polygon, Windows::UI::Xaml::Shapes::IPolygonStatics>().PointsProperty();
}

inline Polyline::Polyline() :
    Polyline(get_activation_factory<Polyline>().ActivateInstance<Polyline>())
{}

inline Windows::UI::Xaml::DependencyProperty Polyline::FillRuleProperty()
{
    return get_activation_factory<Polyline, Windows::UI::Xaml::Shapes::IPolylineStatics>().FillRuleProperty();
}

inline Windows::UI::Xaml::DependencyProperty Polyline::PointsProperty()
{
    return get_activation_factory<Polyline, Windows::UI::Xaml::Shapes::IPolylineStatics>().PointsProperty();
}

inline Rectangle::Rectangle() :
    Rectangle(get_activation_factory<Rectangle>().ActivateInstance<Rectangle>())
{}

inline Windows::UI::Xaml::DependencyProperty Rectangle::RadiusXProperty()
{
    return get_activation_factory<Rectangle, Windows::UI::Xaml::Shapes::IRectangleStatics>().RadiusXProperty();
}

inline Windows::UI::Xaml::DependencyProperty Rectangle::RadiusYProperty()
{
    return get_activation_factory<Rectangle, Windows::UI::Xaml::Shapes::IRectangleStatics>().RadiusYProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::FillProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().FillProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeMiterLimitProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeMiterLimitProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeThicknessProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeStartLineCapProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeStartLineCapProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeEndLineCapProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeEndLineCapProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeLineJoinProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeLineJoinProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeDashOffsetProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeDashOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeDashCapProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeDashCapProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StrokeDashArrayProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StrokeDashArrayProperty();
}

inline Windows::UI::Xaml::DependencyProperty Shape::StretchProperty()
{
    return get_activation_factory<Shape, Windows::UI::Xaml::Shapes::IShapeStatics>().StretchProperty();
}

template <typename D, typename... Interfaces>
struct PathT :
    implements<D, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Shapes::IPath, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::Shapes::IShape2>,
    Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = Path;

protected:
    PathT()
    {
        get_activation_factory<Windows::UI::Xaml::Shapes::Path, Windows::UI::Xaml::Shapes::IPathFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ShapeT :
    implements<D, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Shapes::IShape, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8, Windows::UI::Xaml::Shapes::IShape2>,
    Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = Shape;

protected:
    ShapeT()
    {
        get_activation_factory<Windows::UI::Xaml::Shapes::Shape, Windows::UI::Xaml::Shapes::IShapeFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IEllipse> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IEllipse> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::ILine> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::ILine> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::ILineStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::ILineStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IPath> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IPath> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IPathFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IPathFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IPathStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IPathStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IPolygon> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IPolygon> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IPolygonStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IPolygonStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IPolyline> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IPolyline> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IPolylineStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IPolylineStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IRectangle> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IRectangle> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IRectangleStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IRectangleStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IShape> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IShape> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IShape2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IShape2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IShapeFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IShapeFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::IShapeStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::IShapeStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::Ellipse> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::Ellipse> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::Line> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::Line> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::Path> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::Path> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::Polygon> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::Polygon> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::Polyline> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::Polyline> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::Rectangle> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::Rectangle> {};
template<> struct hash<winrt::Windows::UI::Xaml::Shapes::Shape> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Shapes::Shape> {};

}

WINRT_WARNING_POP
