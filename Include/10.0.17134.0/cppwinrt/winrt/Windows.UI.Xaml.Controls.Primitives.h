﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.2.h"
#include "winrt/impl/Windows.UI.Xaml.Input.2.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Animation.2.h"
#include "winrt/impl/Windows.UI.Xaml.Data.2.h"
#include "winrt/impl/Windows.UI.Xaml.Controls.Primitives.2.h"
#include "winrt/Windows.UI.Xaml.Controls.h"

namespace winrt::impl {

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings<D>::KeyboardAcceleratorTextMinWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings)->get_KeyboardAcceleratorTextMinWidth(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>::ClipRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)->get_ClipRect(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>::CompactVerticalDelta() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)->get_CompactVerticalDelta(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>::CompactRootMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)->get_CompactRootMargin(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>::MinimalVerticalDelta() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)->get_MinimalVerticalDelta(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>::MinimalRootMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)->get_MinimalRootMargin(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>::HiddenVerticalDelta() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)->get_HiddenVerticalDelta(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>::HiddenRootMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)->get_HiddenRootMargin(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings<D>::KeyboardAcceleratorTextMinWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings)->get_KeyboardAcceleratorTextMinWidth(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::ClickMode consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::ClickMode() const
{
    Windows::UI::Xaml::Controls::ClickMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->get_ClickMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::ClickMode(Windows::UI::Xaml::Controls::ClickMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->put_ClickMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::IsPointerOver() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->get_IsPointerOver(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::IsPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->get_IsPressed(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::ICommand consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::Command() const
{
    Windows::UI::Xaml::Input::ICommand value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->get_Command(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::Command(Windows::UI::Xaml::Input::ICommand const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->put_Command(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::CommandParameter() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->get_CommandParameter(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::CommandParameter(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->put_CommandParameter(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::Click(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->add_Click(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IButtonBase> consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::Click(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IButtonBase>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IButtonBase>::remove_Click, Click(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>::Click(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBase)->remove_Click(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ButtonBase consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ButtonBase instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>::ClickModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics)->get_ClickModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>::IsPointerOverProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics)->get_IsPointerOverProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>::IsPressedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics)->get_IsPressedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>::CommandProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics)->get_CommandProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>::CommandParameterProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics)->get_CommandParameterProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::MinViewWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_MinViewWidth(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::HeaderText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_HeaderText(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::WeekDay1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_WeekDay1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::WeekDay2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_WeekDay2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::WeekDay3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_WeekDay3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::WeekDay4() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_WeekDay4(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::WeekDay5() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_WeekDay5(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::WeekDay6() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_WeekDay6(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::WeekDay7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_WeekDay7(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::HasMoreContentAfter() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_HasMoreContentAfter(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::HasMoreContentBefore() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_HasMoreContentBefore(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::HasMoreViews() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_HasMoreViews(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::ClipRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_ClipRect(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::CenterX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_CenterX(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>::CenterY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings)->get_CenterY(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::CanVerticallyScroll() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_CanVerticallyScroll(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::CanVerticallyScroll(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->put_CanVerticallyScroll(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::CanHorizontallyScroll() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_CanHorizontallyScroll(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::CanHorizontallyScroll(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->put_CanHorizontallyScroll(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::ExtentWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_ExtentWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::ExtentHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_ExtentHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::ViewportWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_ViewportWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::ViewportHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_ViewportHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::HorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_HorizontalOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::VerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_VerticalOffset(&value));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::ScrollOwner() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->get_ScrollOwner(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::ScrollOwner(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->put_ScrollOwner(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::LineUp() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->LineUp());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::LineDown() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->LineDown());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::LineLeft() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->LineLeft());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::LineRight() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->LineRight());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::PageUp() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->PageUp());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::PageDown() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->PageDown());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::PageLeft() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->PageLeft());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::PageRight() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->PageRight());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::MouseWheelUp() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->MouseWheelUp());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::MouseWheelDown() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->MouseWheelDown());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::MouseWheelLeft() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->MouseWheelLeft());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::MouseWheelRight() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->MouseWheelRight());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::SetHorizontalOffset(double offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->SetHorizontalOffset(offset));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::SetVerticalOffset(double offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->SetVerticalOffset(offset));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>::MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanel)->MakeVisible(get_abi(visual), get_abi(rectangle), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::CarouselPanel consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::CarouselPanel instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::ColorPickerHsvChannel consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider<D>::ColorChannel() const
{
    Windows::UI::Xaml::Controls::ColorPickerHsvChannel result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider)->get_ColorChannel(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider<D>::ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider)->put_ColorChannel(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics<D>::ColorChannelProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics)->get_ColorChannelProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::Color() const
{
    Windows::UI::Color result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_Color(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::Color(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_Color(get_abi(value)));
}

template <typename D> Windows::Foundation::Numerics::float4 consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::HsvColor() const
{
    Windows::Foundation::Numerics::float4 result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_HsvColor(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::HsvColor(Windows::Foundation::Numerics::float4 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_HsvColor(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MinHue() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_MinHue(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MinHue(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_MinHue(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MaxHue() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_MaxHue(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MaxHue(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_MaxHue(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MinSaturation() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_MinSaturation(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MinSaturation(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_MinSaturation(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MaxSaturation() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_MaxSaturation(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MaxSaturation(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_MaxSaturation(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MinValue() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_MinValue(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MinValue(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_MinValue(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MaxValue() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_MaxValue(&result));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::MaxValue(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_MaxValue(value));
}

template <typename D> Windows::UI::Xaml::Controls::ColorSpectrumShape consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::Shape() const
{
    Windows::UI::Xaml::Controls::ColorSpectrumShape result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_Shape(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_Shape(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::ColorSpectrumComponents consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::Components() const
{
    Windows::UI::Xaml::Controls::ColorSpectrumComponents result{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->get_Components(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->put_Components(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::ColorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->add_ColorChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum> consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::ColorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>::remove_ColorChanged, ColorChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>::ColorChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrum)->remove_ColorChanged(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ColorSpectrum consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ColorSpectrum instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::ColorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_ColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::HsvColorProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_HsvColorProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::MinHueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_MinHueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::MaxHueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_MaxHueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::MinSaturationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_MinSaturationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::MaxSaturationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_MaxSaturationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::MinValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_MinValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::MaxValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_MaxValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::ShapeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_ShapeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>::ComponentsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics)->get_ComponentsProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings<D>::DropDownOpenedHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings)->get_DropDownOpenedHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings<D>::DropDownClosedHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings)->get_DropDownClosedHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings<D>::DropDownOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings)->get_DropDownOffset(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::AnimationDirection consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings<D>::SelectedItemDirection() const
{
    Windows::UI::Xaml::Controls::Primitives::AnimationDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings)->get_SelectedItemDirection(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2<D>::DropDownContentMinWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2)->get_DropDownContentMinWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>::ContentHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)->get_ContentHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>::OverflowContentClipRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)->get_OverflowContentClipRect(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>::OverflowContentMinWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)->get_OverflowContentMinWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>::OverflowContentMaxHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)->get_OverflowContentMaxHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>::OverflowContentHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)->get_OverflowContentHorizontalOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>::OverflowContentHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)->get_OverflowContentHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>::NegativeOverflowContentHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings)->get_NegativeOverflowContentHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2<D>::OverflowContentMaxWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2)->get_OverflowContentMaxWidth(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Visibility consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3<D>::EffectiveOverflowButtonVisibility() const
{
    Windows::UI::Xaml::Visibility value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3)->get_EffectiveOverflowButtonVisibility(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs<D>::HorizontalChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs)->get_HorizontalChange(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs<D>::VerticalChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs)->get_VerticalChange(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs<D>::Canceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs)->get_Canceled(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory<D>::CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory)->CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(horizontalChange, verticalChange, canceled, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs<D>::HorizontalChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs)->get_HorizontalChange(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs<D>::VerticalChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs)->get_VerticalChange(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory<D>::CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory)->CreateInstanceWithHorizontalChangeAndVerticalChange(horizontalChange, verticalChange, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs<D>::HorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs)->get_HorizontalOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs<D>::VerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs)->get_VerticalOffset(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory<D>::CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory)->CreateInstanceWithHorizontalOffsetAndVerticalOffset(horizontalOffset, verticalOffset, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Placement() const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->get_Placement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->put_Placement(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->add_Opened(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Opened, Opened(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Opened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->remove_Opened(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->add_Closed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Closed, Closed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->remove_Closed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Opening(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->add_Opening(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Opening(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Opening, Opening(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Opening(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->remove_Opening(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::ShowAt(Windows::UI::Xaml::FrameworkElement const& placementTarget) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->ShowAt(get_abi(placementTarget)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>::Hide() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase)->Hide());
}

template <typename D> Windows::UI::Xaml::FrameworkElement consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::Target() const
{
    Windows::UI::Xaml::FrameworkElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->get_Target(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::AllowFocusOnInteraction() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->get_AllowFocusOnInteraction(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::AllowFocusOnInteraction(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->put_AllowFocusOnInteraction(value));
}

template <typename D> Windows::UI::Xaml::Controls::LightDismissOverlayMode consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::LightDismissOverlayMode() const
{
    Windows::UI::Xaml::Controls::LightDismissOverlayMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->get_LightDismissOverlayMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->put_LightDismissOverlayMode(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::AllowFocusWhenDisabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->get_AllowFocusWhenDisabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::AllowFocusWhenDisabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->put_AllowFocusWhenDisabled(value));
}

template <typename D> Windows::UI::Xaml::ElementSoundMode consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::ElementSoundMode() const
{
    Windows::UI::Xaml::ElementSoundMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->get_ElementSoundMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->put_ElementSoundMode(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::Closing(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->add_Closing(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2> consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>::remove_Closing, Closing(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>::Closing(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2)->remove_Closing(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3<D>::OverlayInputPassThroughElement() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3)->get_OverlayInputPassThroughElement(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3<D>::OverlayInputPassThroughElement(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3)->put_OverlayInputPassThroughElement(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4<D>::TryInvokeKeyboardAccelerator(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4)->TryInvokeKeyboardAccelerator(get_abi(args)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs<D>::Cancel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs)->get_Cancel(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs<D>::Cancel(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs)->put_Cancel(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutBase consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::Controls::Control consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides<D>::CreatePresenter() const
{
    Windows::UI::Xaml::Controls::Control returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides)->CreatePresenter(put_abi(returnValue)));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4<D>::OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4)->OnProcessKeyboardAccelerators(get_abi(args)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>::PlacementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics)->get_PlacementProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>::AttachedFlyoutProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics)->get_AttachedFlyoutProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::FlyoutBase consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>::GetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element) const
{
    Windows::UI::Xaml::Controls::Primitives::FlyoutBase value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics)->GetAttachedFlyout(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>::SetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics)->SetAttachedFlyout(get_abi(element), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>::ShowAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& flyoutOwner) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics)->ShowAttachedFlyout(get_abi(flyoutOwner)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2<D>::AllowFocusOnInteractionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2)->get_AllowFocusOnInteractionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2<D>::LightDismissOverlayModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2)->get_LightDismissOverlayModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2<D>::AllowFocusWhenDisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2)->get_AllowFocusWhenDisabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2<D>::ElementSoundModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2)->get_ElementSoundModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3<D>::OverlayInputPassThroughElementProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3)->get_OverlayInputPassThroughElementProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GeneratorPosition consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics<D>::FromIndexAndOffset(int32_t index, int32_t offset) const
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics)->FromIndexAndOffset(index, offset, put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectionCheckMarkVisualEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_SelectionCheckMarkVisualEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectionCheckMarkVisualEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_SelectionCheckMarkVisualEnabled(value));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::CheckHintBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_CheckHintBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_CheckHintBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::CheckSelectingBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_CheckSelectingBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_CheckSelectingBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::CheckBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_CheckBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_CheckBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DragBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_DragBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DragBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_DragBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DragForeground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_DragForeground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DragForeground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_DragForeground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::FocusBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_FocusBorderBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_FocusBorderBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::PlaceholderBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_PlaceholderBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_PlaceholderBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::PointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_PointerOverBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_PointerOverBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_SelectedBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_SelectedBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedForeground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_SelectedForeground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_SelectedForeground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedPointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_SelectedPointerOverBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_SelectedPointerOverBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedPointerOverBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_SelectedPointerOverBorderBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_SelectedPointerOverBorderBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedBorderThickness() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_SelectedBorderThickness(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_SelectedBorderThickness(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DisabledOpacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_DisabledOpacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DisabledOpacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_DisabledOpacity(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DragOpacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_DragOpacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::DragOpacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_DragOpacity(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::ReorderHintOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_ReorderHintOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::ReorderHintOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_ReorderHintOffset(value));
}

template <typename D> Windows::UI::Xaml::HorizontalAlignment consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::GridViewItemPresenterHorizontalContentAlignment() const
{
    Windows::UI::Xaml::HorizontalAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_GridViewItemPresenterHorizontalContentAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_GridViewItemPresenterHorizontalContentAlignment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::VerticalAlignment consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::GridViewItemPresenterVerticalContentAlignment() const
{
    Windows::UI::Xaml::VerticalAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_GridViewItemPresenterVerticalContentAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_GridViewItemPresenterVerticalContentAlignment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::GridViewItemPresenterPadding() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_GridViewItemPresenterPadding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::GridViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_GridViewItemPresenterPadding(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::PointerOverBackgroundMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_PointerOverBackgroundMargin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_PointerOverBackgroundMargin(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::ContentMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->get_ContentMargin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>::ContentMargin(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter)->put_ContentMargin(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::SelectionCheckMarkVisualEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_SelectionCheckMarkVisualEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::CheckHintBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_CheckHintBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::CheckSelectingBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_CheckSelectingBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::CheckBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_CheckBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::DragBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_DragBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::DragForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_DragForegroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::FocusBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_FocusBorderBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::PlaceholderBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_PlaceholderBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::PointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_PointerOverBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::SelectedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_SelectedBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::SelectedForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_SelectedForegroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::SelectedPointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_SelectedPointerOverBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::SelectedPointerOverBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_SelectedPointerOverBorderBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::SelectedBorderThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_SelectedBorderThicknessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::DisabledOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_DisabledOpacityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::DragOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_DragOpacityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::ReorderHintOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_ReorderHintOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::GridViewItemPresenterHorizontalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_GridViewItemPresenterHorizontalContentAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::GridViewItemPresenterVerticalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_GridViewItemPresenterVerticalContentAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::GridViewItemPresenterPaddingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_GridViewItemPresenterPaddingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::PointerOverBackgroundMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_PointerOverBackgroundMarginProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>::ContentMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics)->get_ContentMarginProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings<D>::DragItemsCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings)->get_DragItemsCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>::Action() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs)->get_Action(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GeneratorPosition consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>::Position() const
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::GeneratorPosition consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>::OldPosition() const
{
    Windows::UI::Xaml::Controls::Primitives::GeneratorPosition value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs)->get_OldPosition(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>::ItemCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs)->get_ItemCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>::ItemUICount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs)->get_ItemUICount(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter<D>::Enabled() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter)->get_Enabled(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter<D>::Enabled(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter)->put_Enabled(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter<D>::Disabled() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter)->get_Disabled(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter<D>::Disabled(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter)->put_Disabled(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics<D>::EnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics)->get_EnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics<D>::DisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics)->get_DisabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter<D>::Enabled() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter)->get_Enabled(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter<D>::Enabled(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter)->put_Enabled(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter<D>::Disabled() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter)->get_Disabled(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter<D>::Disabled(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter)->put_Disabled(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics<D>::EnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics)->get_EnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics<D>::DisabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics)->get_DisabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics<D>::GetLayoutExceptionElement(Windows::Foundation::IInspectable const& dispatcher) const
{
    Windows::UI::Xaml::UIElement element{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics)->GetLayoutExceptionElement(get_abi(dispatcher), put_abi(element)));
    return element;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics<D>::GetLayoutSlot(Windows::UI::Xaml::FrameworkElement const& element) const
{
    Windows::Foundation::Rect slot{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics)->GetLayoutSlot(get_abi(element), put_abi(slot)));
    return slot;
}

template <typename D> Windows::Foundation::Size consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2<D>::GetAvailableSize(Windows::UI::Xaml::UIElement const& element) const
{
    Windows::Foundation::Size availableSize{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2)->GetAvailableSize(get_abi(element), put_abi(availableSize)));
    return availableSize;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectionCheckMarkVisualEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_SelectionCheckMarkVisualEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectionCheckMarkVisualEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_SelectionCheckMarkVisualEnabled(value));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::CheckHintBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_CheckHintBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_CheckHintBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::CheckSelectingBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_CheckSelectingBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_CheckSelectingBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::CheckBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_CheckBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_CheckBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DragBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_DragBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DragBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_DragBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DragForeground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_DragForeground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DragForeground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_DragForeground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::FocusBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_FocusBorderBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_FocusBorderBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::PlaceholderBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_PlaceholderBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_PlaceholderBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::PointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_PointerOverBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_PointerOverBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_SelectedBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_SelectedBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedForeground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_SelectedForeground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_SelectedForeground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedPointerOverBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_SelectedPointerOverBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_SelectedPointerOverBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedPointerOverBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_SelectedPointerOverBorderBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_SelectedPointerOverBorderBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedBorderThickness() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_SelectedBorderThickness(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_SelectedBorderThickness(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DisabledOpacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_DisabledOpacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DisabledOpacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_DisabledOpacity(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DragOpacity() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_DragOpacity(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::DragOpacity(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_DragOpacity(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ReorderHintOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_ReorderHintOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ReorderHintOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_ReorderHintOffset(value));
}

template <typename D> Windows::UI::Xaml::HorizontalAlignment consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ListViewItemPresenterHorizontalContentAlignment() const
{
    Windows::UI::Xaml::HorizontalAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_ListViewItemPresenterHorizontalContentAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_ListViewItemPresenterHorizontalContentAlignment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::VerticalAlignment consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ListViewItemPresenterVerticalContentAlignment() const
{
    Windows::UI::Xaml::VerticalAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_ListViewItemPresenterVerticalContentAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_ListViewItemPresenterVerticalContentAlignment(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ListViewItemPresenterPadding() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_ListViewItemPresenterPadding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ListViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_ListViewItemPresenterPadding(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::PointerOverBackgroundMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_PointerOverBackgroundMargin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_PointerOverBackgroundMargin(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ContentMargin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->get_ContentMargin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>::ContentMargin(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter)->put_ContentMargin(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::SelectedPressedBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->get_SelectedPressedBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::SelectedPressedBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->put_SelectedPressedBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::PressedBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->get_PressedBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::PressedBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->put_PressedBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::CheckBoxBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->get_CheckBoxBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::CheckBoxBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->put_CheckBoxBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::FocusSecondaryBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->get_FocusSecondaryBorderBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::FocusSecondaryBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->put_FocusSecondaryBorderBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::CheckMode() const
{
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->get_CheckMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->put_CheckMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::PointerOverForeground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->get_PointerOverForeground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>::PointerOverForeground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2)->put_PointerOverForeground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->get_RevealBackground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBackground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->put_RevealBackground(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->get_RevealBorderBrush(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->put_RevealBorderBrush(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBorderThickness() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->get_RevealBorderThickness(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBorderThickness(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->put_RevealBorderThickness(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBackgroundShowsAboveContent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->get_RevealBackgroundShowsAboveContent(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>::RevealBackgroundShowsAboveContent(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3)->put_RevealBackgroundShowsAboveContent(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::SelectionCheckMarkVisualEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_SelectionCheckMarkVisualEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::CheckHintBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_CheckHintBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::CheckSelectingBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_CheckSelectingBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::CheckBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_CheckBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::DragBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_DragBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::DragForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_DragForegroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::FocusBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_FocusBorderBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::PlaceholderBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_PlaceholderBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::PointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_PointerOverBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::SelectedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_SelectedBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::SelectedForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_SelectedForegroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::SelectedPointerOverBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_SelectedPointerOverBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::SelectedPointerOverBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_SelectedPointerOverBorderBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::SelectedBorderThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_SelectedBorderThicknessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::DisabledOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_DisabledOpacityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::DragOpacityProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_DragOpacityProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::ReorderHintOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_ReorderHintOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::ListViewItemPresenterHorizontalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_ListViewItemPresenterHorizontalContentAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::ListViewItemPresenterVerticalContentAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_ListViewItemPresenterVerticalContentAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::ListViewItemPresenterPaddingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_ListViewItemPresenterPaddingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::PointerOverBackgroundMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_PointerOverBackgroundMarginProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>::ContentMarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics)->get_ContentMarginProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>::SelectedPressedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2)->get_SelectedPressedBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>::PressedBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2)->get_PressedBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>::CheckBoxBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2)->get_CheckBoxBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>::FocusSecondaryBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2)->get_FocusSecondaryBorderBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>::CheckModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2)->get_CheckModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>::PointerOverForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2)->get_PointerOverForegroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3<D>::RevealBackgroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3)->get_RevealBackgroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3<D>::RevealBorderBrushProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3)->get_RevealBorderBrushProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3<D>::RevealBorderThicknessProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3)->get_RevealBorderThicknessProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3<D>::RevealBackgroundShowsAboveContentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3)->get_RevealBackgroundShowsAboveContentProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings<D>::DragItemsCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings)->get_DragItemsCount(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ShouldLoop() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->get_ShouldLoop(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ShouldLoop(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->put_ShouldLoop(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->get_Items(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::Items(param::vector<Windows::Foundation::IInspectable> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->put_Items(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::SelectedIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->get_SelectedIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::SelectedIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->put_SelectedIndex(value));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::SelectedItem() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->get_SelectedItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::SelectedItem(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->put_SelectedItem(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ItemWidth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->get_ItemWidth(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ItemWidth(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->put_ItemWidth(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ItemHeight() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->get_ItemHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ItemHeight(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->put_ItemHeight(value));
}

template <typename D> Windows::UI::Xaml::DataTemplate consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ItemTemplate() const
{
    Windows::UI::Xaml::DataTemplate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->get_ItemTemplate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->put_ItemTemplate(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->add_SelectionChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector> consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>::remove_SelectionChanged, SelectionChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>::SelectionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelector)->remove_SelectionChanged(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>::ShouldLoopProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics)->get_ShouldLoopProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>::ItemsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics)->get_ItemsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>::SelectedIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics)->get_SelectedIndexProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>::SelectedItemProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics)->get_SelectedItemProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>::ItemWidthProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics)->get_ItemWidthProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>::ItemHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics)->get_ItemHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>::ItemTemplateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics)->get_ItemTemplateProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings<D>::KeyboardAcceleratorTextMinWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings)->get_KeyboardAcceleratorTextMinWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings<D>::FlyoutContentMinWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings)->get_FlyoutContentMinWidth(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::CanVerticallyScroll() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_CanVerticallyScroll(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::CanVerticallyScroll(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->put_CanVerticallyScroll(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::CanHorizontallyScroll() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_CanHorizontallyScroll(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::CanHorizontallyScroll(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->put_CanHorizontallyScroll(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::ExtentWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_ExtentWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::ExtentHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_ExtentHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::ViewportWidth() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_ViewportWidth(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::ViewportHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_ViewportHeight(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::HorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_HorizontalOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::VerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_VerticalOffset(&value));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::ScrollOwner() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->get_ScrollOwner(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::ScrollOwner(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->put_ScrollOwner(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::LineUp() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->LineUp());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::LineDown() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->LineDown());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::LineLeft() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->LineLeft());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::LineRight() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->LineRight());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::PageUp() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->PageUp());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::PageDown() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->PageDown());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::PageLeft() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->PageLeft());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::PageRight() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->PageRight());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::MouseWheelUp() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->MouseWheelUp());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::MouseWheelDown() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->MouseWheelDown());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::MouseWheelLeft() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->MouseWheelLeft());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::MouseWheelRight() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->MouseWheelRight());
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::SetHorizontalOffset(double offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->SetHorizontalOffset(offset));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::SetVerticalOffset(double offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->SetVerticalOffset(offset));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>::MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel)->MakeVisible(get_abi(visual), get_abi(rectangle), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides<D>::OnConfirmed() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides)->OnConfirmed());
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides<D>::ShouldShowConfirmationButtons() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides)->ShouldShowConfirmationButtons(&returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics<D>::TitleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics)->get_TitleProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics<D>::GetTitle(Windows::UI::Xaml::DependencyObject const& element) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics)->GetTitle(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics<D>::SetTitle(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics)->SetTitle(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Child() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->get_Child(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Child(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->put_Child(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::IsOpen() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->get_IsOpen(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::IsOpen(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->put_IsOpen(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::HorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->get_HorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::HorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->put_HorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::VerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->get_VerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::VerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->put_VerticalOffset(value));
}

template <typename D> Windows::UI::Xaml::Media::Animation::TransitionCollection consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::ChildTransitions() const
{
    Windows::UI::Xaml::Media::Animation::TransitionCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->get_ChildTransitions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::ChildTransitions(Windows::UI::Xaml::Media::Animation::TransitionCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->put_ChildTransitions(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::IsLightDismissEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->get_IsLightDismissEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::IsLightDismissEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->put_IsLightDismissEnabled(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->add_Opened(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup> consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IPopup>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IPopup>::remove_Opened, Opened(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Opened(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->remove_Opened(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->add_Closed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup> consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IPopup>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IPopup>::remove_Closed, Closed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup)->remove_Closed(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::LightDismissOverlayMode consume_Windows_UI_Xaml_Controls_Primitives_IPopup2<D>::LightDismissOverlayMode() const
{
    Windows::UI::Xaml::Controls::LightDismissOverlayMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup2)->get_LightDismissOverlayMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IPopup2<D>::LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopup2)->put_LightDismissOverlayMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>::ChildProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopupStatics)->get_ChildProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>::IsOpenProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopupStatics)->get_IsOpenProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>::HorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopupStatics)->get_HorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>::VerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopupStatics)->get_VerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>::ChildTransitionsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopupStatics)->get_ChildTransitionsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>::IsLightDismissEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopupStatics)->get_IsLightDismissEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2<D>::LightDismissOverlayModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IPopupStatics2)->get_LightDismissOverlayModeProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>::EllipseDiameter() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings)->get_EllipseDiameter(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>::EllipseOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings)->get_EllipseOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>::EllipseAnimationWellPosition() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings)->get_EllipseAnimationWellPosition(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>::EllipseAnimationEndPosition() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings)->get_EllipseAnimationEndPosition(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>::ContainerAnimationStartPosition() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings)->get_ContainerAnimationStartPosition(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>::ContainerAnimationEndPosition() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings)->get_ContainerAnimationEndPosition(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>::IndicatorLengthDelta() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings)->get_IndicatorLengthDelta(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings<D>::EllipseDiameter() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings)->get_EllipseDiameter(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings<D>::EllipseOffset() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings)->get_EllipseOffset(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings<D>::MaxSideLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings)->get_MaxSideLength(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::Minimum() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->get_Minimum(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::Minimum(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->put_Minimum(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::Maximum() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->get_Maximum(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::Maximum(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->put_Maximum(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::SmallChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->get_SmallChange(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::SmallChange(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->put_SmallChange(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::LargeChange() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->get_LargeChange(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::LargeChange(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->put_LargeChange(value));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::Value() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::Value(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->put_Value(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::ValueChanged(Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->add_ValueChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IRangeBase> consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::ValueChanged(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IRangeBase>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IRangeBase>::remove_ValueChanged, ValueChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>::ValueChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBase)->remove_ValueChanged(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::RangeBase consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::RangeBase instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides<D>::OnMinimumChanged(double oldMinimum, double newMinimum) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides)->OnMinimumChanged(oldMinimum, newMinimum));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides<D>::OnMaximumChanged(double oldMaximum, double newMaximum) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides)->OnMaximumChanged(oldMaximum, newMaximum));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides<D>::OnValueChanged(double oldValue, double newValue) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides)->OnValueChanged(oldValue, newValue));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>::MinimumProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics)->get_MinimumProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>::MaximumProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics)->get_MaximumProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>::SmallChangeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics)->get_SmallChangeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>::LargeChangeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics)->get_LargeChangeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>::ValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics)->get_ValueProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs<D>::OldValue() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs)->get_OldValue(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs<D>::NewValue() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs)->get_NewValue(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton<D>::Delay() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRepeatButton)->get_Delay(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton<D>::Delay(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRepeatButton)->put_Delay(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton<D>::Interval() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRepeatButton)->get_Interval(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton<D>::Interval(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRepeatButton)->put_Interval(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics<D>::DelayProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics)->get_DelayProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics<D>::IntervalProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics)->get_IntervalProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Orientation consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::Orientation() const
{
    Windows::UI::Xaml::Controls::Orientation value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::Orientation(Windows::UI::Xaml::Controls::Orientation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->put_Orientation(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::ViewportSize() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->get_ViewportSize(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::ViewportSize(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->put_ViewportSize(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::IndicatorMode() const
{
    Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->get_IndicatorMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->put_IndicatorMode(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::Scroll(Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->add_Scroll(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollBar> consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::Scroll(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IScrollBar>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollBar>::remove_Scroll, Scroll(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>::Scroll(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBar)->remove_Scroll(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics<D>::OrientationProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics)->get_OrientationProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics<D>::ViewportSizeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics)->get_ViewportSizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics<D>::IndicatorModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics)->get_IndicatorModeProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs<D>::NewValue() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs)->get_NewValue(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ScrollEventType consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs<D>::ScrollEventType() const
{
    Windows::UI::Xaml::Controls::Primitives::ScrollEventType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs)->get_ScrollEventType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::AreHorizontalSnapPointsRegular() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->get_AreHorizontalSnapPointsRegular(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::AreVerticalSnapPointsRegular() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->get_AreVerticalSnapPointsRegular(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::HorizontalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->add_HorizontalSnapPointsChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::HorizontalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>::remove_HorizontalSnapPointsChanged, HorizontalSnapPointsChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::HorizontalSnapPointsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->remove_HorizontalSnapPointsChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::VerticalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->add_VerticalSnapPointsChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::VerticalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>::remove_VerticalSnapPointsChanged, VerticalSnapPointsChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::VerticalSnapPointsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->remove_VerticalSnapPointsChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<float> consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment) const
{
    Windows::Foundation::Collections::IVectorView<float> returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->GetIrregularSnapPoints(get_abi(orientation), get_abi(alignment), put_abi(returnValue)));
    return returnValue;
}

template <typename D> float consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>::GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment, float& offset) const
{
    float returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo)->GetRegularSnapPoints(get_abi(orientation), get_abi(alignment), &offset, &returnValue));
    return returnValue;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->get_SelectedIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->put_SelectedIndex(value));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedItem() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->get_SelectedItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedItem(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->put_SelectedItem(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->get_SelectedValue(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedValue(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->put_SelectedValue(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedValuePath() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->get_SelectedValuePath(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectedValuePath(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->put_SelectedValuePath(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::IsSynchronizedWithCurrentItem() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->get_IsSynchronizedWithCurrentItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::IsSynchronizedWithCurrentItem(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->put_IsSynchronizedWithCurrentItem(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->add_SelectionChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::ISelector> consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::ISelector>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::ISelector>::remove_SelectionChanged, SelectionChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>::SelectionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelector)->remove_SelectionChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem<D>::IsSelected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorItem)->get_IsSelected(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem<D>::IsSelected(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorItem)->put_IsSelected(value));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::SelectorItem consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::SelectorItem instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics<D>::IsSelectedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics)->get_IsSelectedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>::SelectedIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorStatics)->get_SelectedIndexProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>::SelectedItemProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorStatics)->get_SelectedItemProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>::SelectedValueProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorStatics)->get_SelectedValueProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>::SelectedValuePathProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorStatics)->get_SelectedValuePathProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>::IsSynchronizedWithCurrentItemProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorStatics)->get_IsSynchronizedWithCurrentItemProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>::GetIsSelectionActive(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISelectorStatics)->GetIsSelectionActive(get_abi(element), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>::HeaderBackground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings)->get_HeaderBackground(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>::HeaderForeground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings)->get_HeaderForeground(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>::BorderBrush() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings)->get_BorderBrush(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>::BorderThickness() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings)->get_BorderThickness(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::ImageSource consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>::IconSource() const
{
    Windows::UI::Xaml::Media::ImageSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings)->get_IconSource(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Animation::TransitionCollection consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>::ContentTransitions() const
{
    Windows::UI::Xaml::Media::Animation::TransitionCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings)->get_ContentTransitions(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>::OpenPaneLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings)->get_OpenPaneLength(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>::NegativeOpenPaneLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings)->get_NegativeOpenPaneLength(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>::OpenPaneLengthMinusCompactLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings)->get_OpenPaneLengthMinusCompactLength(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>::NegativeOpenPaneLengthMinusCompactLength() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings)->get_NegativeOpenPaneLengthMinusCompactLength(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::GridLength consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>::OpenPaneGridLength() const
{
    Windows::UI::Xaml::GridLength value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings)->get_OpenPaneGridLength(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::GridLength consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>::CompactPaneGridLength() const
{
    Windows::UI::Xaml::GridLength value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings)->get_CompactPaneGridLength(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::IsDragging() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->get_IsDragging(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragStarted(Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->add_DragStarted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb> consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragStarted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IThumb>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragStarted, DragStarted(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->remove_DragStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragDelta(Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->add_DragDelta(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb> consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragDelta(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IThumb>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragDelta, DragDelta(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragDelta(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->remove_DragDelta(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragCompleted(Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->add_DragCompleted(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb> consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragCompleted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IThumb>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragCompleted, DragCompleted(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::DragCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->remove_DragCompleted(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>::CancelDrag() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumb)->CancelDrag());
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IThumbStatics<D>::IsDraggingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IThumbStatics)->get_IsDraggingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Controls_Primitives_ITickBar<D>::Fill() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ITickBar)->get_Fill(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_ITickBar<D>::Fill(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ITickBar)->put_Fill(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics<D>::FillProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::ITickBarStatics)->get_FillProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::IsChecked() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->get_IsChecked(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::IsChecked(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->put_IsChecked(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::IsThreeState() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->get_IsThreeState(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::IsThreeState(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->put_IsThreeState(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Checked(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->add_Checked(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton> consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Checked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Checked, Checked(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Checked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->remove_Checked(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Unchecked(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->add_Unchecked(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton> consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Unchecked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Unchecked, Unchecked(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Unchecked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->remove_Unchecked(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Indeterminate(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->add_Indeterminate(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton> consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Indeterminate(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton>(this, &abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Indeterminate, Indeterminate(value));
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>::Indeterminate(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButton)->remove_Indeterminate(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Controls::Primitives::ToggleButton consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Controls::Primitives::ToggleButton instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides<D>::OnToggle() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides)->OnToggle());
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics<D>::IsCheckedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics)->get_IsCheckedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics<D>::IsThreeStateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics)->get_IsThreeStateProperty(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::KnobCurrentToOnOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_KnobCurrentToOnOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::KnobCurrentToOffOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_KnobCurrentToOffOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::KnobOnToOffOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_KnobOnToOffOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::KnobOffToOnOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_KnobOffToOnOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::CurtainCurrentToOnOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_CurtainCurrentToOnOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::CurtainCurrentToOffOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_CurtainCurrentToOffOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::CurtainOnToOffOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_CurtainOnToOffOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>::CurtainOffToOnOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings)->get_CurtainOffToOnOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings<D>::FromHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings)->get_FromHorizontalOffset(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings<D>::FromVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings)->get_FromVerticalOffset(&value));
    return value;
}

template <> struct delegate<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs const*>(&e));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
{
    HRESULT __stdcall get_KeyboardAcceleratorTextMinWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KeyboardAcceleratorTextMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
{
    HRESULT __stdcall get_ClipRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ClipRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompactVerticalDelta(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CompactVerticalDelta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompactRootMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().CompactRootMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinimalVerticalDelta(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinimalVerticalDelta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinimalRootMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().MinimalRootMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HiddenVerticalDelta(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HiddenVerticalDelta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HiddenRootMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().HiddenRootMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
{
    HRESULT __stdcall get_KeyboardAcceleratorTextMinWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KeyboardAcceleratorTextMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IButtonBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IButtonBase>
{
    HRESULT __stdcall get_ClickMode(Windows::UI::Xaml::Controls::ClickMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::ClickMode>(this->shim().ClickMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ClickMode(Windows::UI::Xaml::Controls::ClickMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClickMode(*reinterpret_cast<Windows::UI::Xaml::Controls::ClickMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPointerOver(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPointerOver());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPressed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPressed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Command(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Input::ICommand>(this->shim().Command());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Command(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Command(*reinterpret_cast<Windows::UI::Xaml::Input::ICommand const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CommandParameter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().CommandParameter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CommandParameter(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommandParameter(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Click(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Click(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Click(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Click(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::ButtonBase>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
{
    HRESULT __stdcall get_ClickModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ClickModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPointerOverProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsPointerOverProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPressedProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsPressedProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CommandProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CommandProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CommandParameterProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CommandParameterProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICalendarPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
{
    HRESULT __stdcall get_MinViewWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinViewWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HeaderText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WeekDay1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WeekDay2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay3(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WeekDay3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay4(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WeekDay4());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay5(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WeekDay5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay6(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WeekDay6());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekDay7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WeekDay7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreContentAfter(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasMoreContentAfter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreContentBefore(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasMoreContentBefore());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasMoreViews(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasMoreViews());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClipRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ClipRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
{
    HRESULT __stdcall get_CanVerticallyScroll(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanVerticallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanVerticallyScroll(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanVerticallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanHorizontallyScroll(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanHorizontallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanHorizontallyScroll(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanHorizontallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ExtentWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ExtentHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ViewportWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ViewportHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollOwner(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().ScrollOwner());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScrollOwner(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollOwner(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineUp() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineUp();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineDown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineDown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineLeft() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineLeft();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineRight() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineRight();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageUp() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageUp();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageDown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageDown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageLeft() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageLeft();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageRight() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageRight();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelUp() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelUp();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelDown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelDown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelLeft() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelLeft();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelRight() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelRight();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetHorizontalOffset(double offset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHorizontalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetVerticalOffset(double offset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVerticalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MakeVisible(void* visual, Windows::Foundation::Rect rectangle, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().MakeVisible(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&visual), *reinterpret_cast<Windows::Foundation::Rect const*>(&rectangle)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
{
    HRESULT __stdcall get_ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::ColorPickerHsvChannel>(this->shim().ColorChannel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorChannel(*reinterpret_cast<Windows::UI::Xaml::Controls::ColorPickerHsvChannel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
{
    HRESULT __stdcall get_ColorChannelProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ColorChannelProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrum> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
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

    HRESULT __stdcall get_HsvColor(Windows::Foundation::Numerics::float4* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Numerics::float4>(this->shim().HsvColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HsvColor(Windows::Foundation::Numerics::float4 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HsvColor(*reinterpret_cast<Windows::Foundation::Numerics::float4 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinHue(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MinHue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinHue(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinHue(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHue(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MaxHue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxHue(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxHue(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinSaturation(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MinSaturation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinSaturation(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinSaturation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSaturation(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MaxSaturation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxSaturation(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxSaturation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinValue(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MinValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MinValue(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MinValue(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValue(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().MaxValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxValue(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxValue(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::ColorSpectrumShape>(this->shim().Shape());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Shape(*reinterpret_cast<Windows::UI::Xaml::Controls::ColorSpectrumShape const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Xaml::Controls::ColorSpectrumComponents>(this->shim().Components());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Components(*reinterpret_cast<Windows::UI::Xaml::Controls::ColorSpectrumComponents const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ColorChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ColorChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
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

    HRESULT __stdcall get_HsvColorProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HsvColorProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinHueProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinHueProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxHueProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MaxHueProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinSaturationProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinSaturationProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSaturationProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MaxSaturationProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinValueProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinValueProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValueProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MaxValueProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShapeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ShapeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ComponentsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ComponentsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
{
    HRESULT __stdcall get_DropDownOpenedHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DropDownOpenedHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DropDownClosedHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DropDownClosedHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DropDownOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DropDownOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItemDirection(Windows::UI::Xaml::Controls::Primitives::AnimationDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>(this->shim().SelectedItemDirection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
{
    HRESULT __stdcall get_DropDownContentMinWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DropDownContentMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
{
    HRESULT __stdcall get_ContentHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ContentHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentClipRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().OverflowContentClipRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentMinWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OverflowContentMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentMaxHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OverflowContentMaxHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentHorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OverflowContentHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OverflowContentHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OverflowContentHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NegativeOverflowContentHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NegativeOverflowContentHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
{
    HRESULT __stdcall get_OverflowContentMaxWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OverflowContentMaxWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
{
    HRESULT __stdcall get_EffectiveOverflowButtonVisibility(Windows::UI::Xaml::Visibility* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Visibility>(this->shim().EffectiveOverflowButtonVisibility());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
{
    HRESULT __stdcall get_HorizontalChange(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalChange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalChange(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalChange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Canceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Canceled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
{
    HRESULT __stdcall CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>(this->shim().CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(horizontalChange, verticalChange, canceled, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
{
    HRESULT __stdcall get_HorizontalChange(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalChange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalChange(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalChange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
{
    HRESULT __stdcall CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>(this->shim().CreateInstanceWithHorizontalChangeAndVerticalChange(horizontalChange, verticalChange, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
{
    HRESULT __stdcall get_HorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
{
    HRESULT __stdcall CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>(this->shim().CreateInstanceWithHorizontalOffsetAndVerticalOffset(horizontalOffset, verticalOffset, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
{
    HRESULT __stdcall get_Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>(this->shim().Placement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Placement(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Opened(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Opened(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
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

    HRESULT __stdcall add_Closed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
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

    HRESULT __stdcall add_Opening(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Opening(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Opening(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Opening(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAt(void* placementTarget) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowAt(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&placementTarget));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Hide() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
{
    HRESULT __stdcall get_Target(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::FrameworkElement>(this->shim().Target());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowFocusOnInteraction(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowFocusOnInteraction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowFocusOnInteraction(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowFocusOnInteraction(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::LightDismissOverlayMode>(this->shim().LightDismissOverlayMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightDismissOverlayMode(*reinterpret_cast<Windows::UI::Xaml::Controls::LightDismissOverlayMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowFocusWhenDisabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowFocusWhenDisabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowFocusWhenDisabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowFocusWhenDisabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::ElementSoundMode>(this->shim().ElementSoundMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ElementSoundMode(*reinterpret_cast<Windows::UI::Xaml::ElementSoundMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closing(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closing(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closing(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
{
    HRESULT __stdcall get_OverlayInputPassThroughElement(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyObject>(this->shim().OverlayInputPassThroughElement());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OverlayInputPassThroughElement(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverlayInputPassThroughElement(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
{
    HRESULT __stdcall TryInvokeKeyboardAccelerator(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TryInvokeKeyboardAccelerator(*reinterpret_cast<Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
{
    HRESULT __stdcall get_Cancel(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Cancel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Cancel(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cancel(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
{
    HRESULT __stdcall CreatePresenter(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Controls::Control>(this->shim().CreatePresenter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
{
    HRESULT __stdcall OnProcessKeyboardAccelerators(void* args) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnProcessKeyboardAccelerators(*reinterpret_cast<Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const*>(&args));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
{
    HRESULT __stdcall get_PlacementProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PlacementProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AttachedFlyoutProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AttachedFlyoutProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAttachedFlyout(void* element, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>(this->shim().GetAttachedFlyout(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAttachedFlyout(void* element, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAttachedFlyout(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&element), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::FlyoutBase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAttachedFlyout(void* flyoutOwner) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowAttachedFlyout(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&flyoutOwner));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
{
    HRESULT __stdcall get_AllowFocusOnInteractionProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AllowFocusOnInteractionProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightDismissOverlayModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LightDismissOverlayModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowFocusWhenDisabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().AllowFocusWhenDisabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ElementSoundModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ElementSoundModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
{
    HRESULT __stdcall get_OverlayInputPassThroughElementProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().OverlayInputPassThroughElementProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
{
    HRESULT __stdcall FromIndexAndOffset(int32_t index, int32_t offset, struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>(this->shim().FromIndexAndOffset(index, offset));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SelectionCheckMarkVisualEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionCheckMarkVisualEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CheckHintBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckHintBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckHintBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CheckSelectingBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckSelectingBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckSelectingBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CheckBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().DragBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DragBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragForeground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().DragForeground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DragForeground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragForeground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().FocusBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusBorderBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusBorderBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().PlaceholderBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaceholderBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaceholderBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().PointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerOverBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForeground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedForeground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedForeground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedForeground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedPointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedPointerOverBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedPointerOverBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBorderBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedPointerOverBorderBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().SelectedBorderThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedBorderThickness(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacity(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DisabledOpacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisabledOpacity(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisabledOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacity(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DragOpacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DragOpacity(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ReorderHintOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReorderHintOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReorderHintOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::HorizontalAlignment>(this->shim().GridViewItemPresenterHorizontalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GridViewItemPresenterHorizontalContentAlignment(*reinterpret_cast<Windows::UI::Xaml::HorizontalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::VerticalAlignment>(this->shim().GridViewItemPresenterVerticalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GridViewItemPresenterVerticalContentAlignment(*reinterpret_cast<Windows::UI::Xaml::VerticalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().GridViewItemPresenterPadding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GridViewItemPresenterPadding(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().PointerOverBackgroundMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerOverBackgroundMargin(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().ContentMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentMargin(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectionCheckMarkVisualEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckHintBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckSelectingBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DragBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragForegroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DragForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PlaceholderBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForegroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedPointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedPointerOverBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThicknessProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedBorderThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DisabledOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DragOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ReorderHintOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterHorizontalContentAlignmentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().GridViewItemPresenterHorizontalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterVerticalContentAlignmentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().GridViewItemPresenterVerticalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GridViewItemPresenterPaddingProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().GridViewItemPresenterPaddingProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMarginProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointerOverBackgroundMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMarginProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ContentMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
{
    HRESULT __stdcall get_DragItemsCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().DragItemsCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
{
    HRESULT __stdcall get_Action(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Position(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldPosition(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>(this->shim().OldPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ItemCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemUICount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ItemUICount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
{
    HRESULT __stdcall get_Enabled(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Disabled(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().Disabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Disabled(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disabled(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
{
    HRESULT __stdcall get_EnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().EnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DisabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
{
    HRESULT __stdcall get_Enabled(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().Enabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Enabled(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enabled(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Disabled(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().Disabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Disabled(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disabled(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
{
    HRESULT __stdcall get_EnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().EnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DisabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformation> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
{
    HRESULT __stdcall GetLayoutExceptionElement(void* dispatcher, void** element) noexcept final
    {
        try
        {
            *element = nullptr;
            typename D::abi_guard guard(this->shim());
            *element = detach_from<Windows::UI::Xaml::UIElement>(this->shim().GetLayoutExceptionElement(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&dispatcher)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLayoutSlot(void* element, Windows::Foundation::Rect* slot) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *slot = detach_from<Windows::Foundation::Rect>(this->shim().GetLayoutSlot(*reinterpret_cast<Windows::UI::Xaml::FrameworkElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
{
    HRESULT __stdcall GetAvailableSize(void* element, Windows::Foundation::Size* availableSize) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *availableSize = detach_from<Windows::Foundation::Size>(this->shim().GetAvailableSize(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SelectionCheckMarkVisualEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectionCheckMarkVisualEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionCheckMarkVisualEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CheckHintBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckHintBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckHintBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CheckSelectingBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckSelectingBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckSelectingBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CheckBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().DragBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DragBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragForeground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().DragForeground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DragForeground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragForeground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().FocusBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusBorderBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusBorderBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().PlaceholderBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlaceholderBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaceholderBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().PointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerOverBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForeground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedForeground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedForeground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedForeground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedPointerOverBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedPointerOverBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedPointerOverBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPointerOverBorderBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedPointerOverBorderBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().SelectedBorderThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedBorderThickness(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacity(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DisabledOpacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisabledOpacity(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisabledOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacity(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DragOpacity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DragOpacity(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragOpacity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ReorderHintOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReorderHintOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReorderHintOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::HorizontalAlignment>(this->shim().ListViewItemPresenterHorizontalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListViewItemPresenterHorizontalContentAlignment(*reinterpret_cast<Windows::UI::Xaml::HorizontalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::VerticalAlignment>(this->shim().ListViewItemPresenterVerticalContentAlignment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListViewItemPresenterVerticalContentAlignment(*reinterpret_cast<Windows::UI::Xaml::VerticalAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().ListViewItemPresenterPadding());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListViewItemPresenterPadding(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().PointerOverBackgroundMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerOverBackgroundMargin(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().ContentMargin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentMargin(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
{
    HRESULT __stdcall get_SelectedPressedBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().SelectedPressedBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedPressedBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedPressedBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PressedBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().PressedBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PressedBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PressedBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBoxBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().CheckBoxBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckBoxBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckBoxBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusSecondaryBorderBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().FocusSecondaryBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_FocusSecondaryBorderBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusSecondaryBorderBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>(this->shim().CheckMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CheckMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverForeground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().PointerOverForeground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointerOverForeground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerOverForeground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
{
    HRESULT __stdcall get_RevealBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().RevealBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RevealBackground(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevealBackground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RevealBorderBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().RevealBorderBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RevealBorderBrush(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevealBorderBrush(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().RevealBorderThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevealBorderThickness(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RevealBackgroundShowsAboveContent(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RevealBackgroundShowsAboveContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RevealBackgroundShowsAboveContent(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RevealBackgroundShowsAboveContent(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
{
    HRESULT __stdcall get_SelectionCheckMarkVisualEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectionCheckMarkVisualEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckHintBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckHintBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckSelectingBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckSelectingBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DragBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragForegroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DragForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusBorderBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PlaceholderBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedForegroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedPointerOverBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedPointerOverBorderBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedPointerOverBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedBorderThicknessProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedBorderThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisabledOpacityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DisabledOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DragOpacityProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DragOpacityProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReorderHintOffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ReorderHintOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterHorizontalContentAlignmentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ListViewItemPresenterHorizontalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterVerticalContentAlignmentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ListViewItemPresenterVerticalContentAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ListViewItemPresenterPaddingProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ListViewItemPresenterPaddingProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverBackgroundMarginProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointerOverBackgroundMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentMarginProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ContentMarginProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
{
    HRESULT __stdcall get_SelectedPressedBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedPressedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PressedBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PressedBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckBoxBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckBoxBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FocusSecondaryBorderBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().FocusSecondaryBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CheckModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().CheckModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerOverForegroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().PointerOverForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
{
    HRESULT __stdcall get_RevealBackgroundProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RevealBackgroundProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RevealBorderBrushProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RevealBorderBrushProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RevealBorderThicknessProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RevealBorderThicknessProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RevealBackgroundShowsAboveContentProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().RevealBackgroundShowsAboveContentProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
{
    HRESULT __stdcall get_DragItemsCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().DragItemsCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelector> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
{
    HRESULT __stdcall get_ShouldLoop(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShouldLoop());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShouldLoop(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShouldLoop(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Items(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable>>(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Items(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Items(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> const*>(&value));
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

    HRESULT __stdcall get_SelectedItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().SelectedItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedItem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemWidth(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ItemWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ItemWidth(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemHeight(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ItemHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ItemHeight(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DataTemplate>(this->shim().ItemTemplate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ItemTemplate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemTemplate(*reinterpret_cast<Windows::UI::Xaml::DataTemplate const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SelectionChanged(*reinterpret_cast<Windows::UI::Xaml::Controls::SelectionChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
{
    HRESULT __stdcall get_ShouldLoopProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ShouldLoopProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedIndexProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItemProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedItemProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemWidthProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemWidthProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemHeightProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemTemplateProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ItemTemplateProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
{
    HRESULT __stdcall get_KeyboardAcceleratorTextMinWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KeyboardAcceleratorTextMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
{
    HRESULT __stdcall get_FlyoutContentMinWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().FlyoutContentMinWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
{
    HRESULT __stdcall get_CanVerticallyScroll(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanVerticallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanVerticallyScroll(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanVerticallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanHorizontallyScroll(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanHorizontallyScroll());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanHorizontallyScroll(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanHorizontallyScroll(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ExtentWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtentHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ExtentHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportWidth(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ViewportWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportHeight(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ViewportHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollOwner(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().ScrollOwner());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScrollOwner(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollOwner(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineUp() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineUp();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineDown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineDown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineLeft() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineLeft();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LineRight() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineRight();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageUp() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageUp();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageDown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageDown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageLeft() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageLeft();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PageRight() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageRight();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelUp() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelUp();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelDown() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelDown();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelLeft() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelLeft();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MouseWheelRight() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseWheelRight();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetHorizontalOffset(double offset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHorizontalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetVerticalOffset(double offset) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVerticalOffset(offset);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MakeVisible(void* visual, Windows::Foundation::Rect rectangle, Windows::Foundation::Rect* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Rect>(this->shim().MakeVisible(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&visual), *reinterpret_cast<Windows::Foundation::Rect const*>(&rectangle)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
{
    HRESULT __stdcall OnConfirmed() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnConfirmed();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShouldShowConfirmationButtons(bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().ShouldShowConfirmationButtons());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
{
    HRESULT __stdcall get_TitleProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().TitleProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTitle(void* element, HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetTitle(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetTitle(void* element, HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTitle(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPivotPanel> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopup> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopup>
{
    HRESULT __stdcall get_Child(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::UIElement>(this->shim().Child());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Child(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Child(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
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

    HRESULT __stdcall put_IsOpen(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOpen(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().HorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_HorizontalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().VerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VerticalOffset(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChildTransitions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::TransitionCollection>(this->shim().ChildTransitions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ChildTransitions(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChildTransitions(*reinterpret_cast<Windows::UI::Xaml::Media::Animation::TransitionCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLightDismissEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsLightDismissEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsLightDismissEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsLightDismissEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Opened(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Opened(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
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

    HRESULT __stdcall add_Closed(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopup2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopup2>
{
    HRESULT __stdcall get_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::LightDismissOverlayMode>(this->shim().LightDismissOverlayMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LightDismissOverlayMode(*reinterpret_cast<Windows::UI::Xaml::Controls::LightDismissOverlayMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
{
    HRESULT __stdcall get_ChildProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ChildProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOpenProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsOpenProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HorizontalOffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().HorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VerticalOffsetProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().VerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChildTransitionsProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ChildTransitionsProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsLightDismissEnabledProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsLightDismissEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics2> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
{
    HRESULT __stdcall get_LightDismissOverlayModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LightDismissOverlayModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
{
    HRESULT __stdcall get_EllipseDiameter(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().EllipseDiameter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().EllipseOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseAnimationWellPosition(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().EllipseAnimationWellPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseAnimationEndPosition(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().EllipseAnimationEndPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContainerAnimationStartPosition(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ContainerAnimationStartPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContainerAnimationEndPosition(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ContainerAnimationEndPosition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IndicatorLengthDelta(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().IndicatorLengthDelta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
{
    HRESULT __stdcall get_EllipseDiameter(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().EllipseDiameter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EllipseOffset(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().EllipseOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxSideLength(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxSideLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBase> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBase>
{
    HRESULT __stdcall get_Minimum(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Minimum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Minimum(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Minimum(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Maximum(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Maximum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Maximum(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Maximum(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SmallChange(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SmallChange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SmallChange(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmallChange(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LargeChange(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LargeChange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LargeChange(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LargeChange(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ValueChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ValueChanged(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::RangeBase>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
{
    HRESULT __stdcall OnMinimumChanged(double oldMinimum, double newMinimum) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnMinimumChanged(oldMinimum, newMinimum);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnMaximumChanged(double oldMaximum, double newMaximum) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnMaximumChanged(oldMaximum, newMaximum);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnValueChanged(double oldValue, double newValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnValueChanged(oldValue, newValue);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
{
    HRESULT __stdcall get_MinimumProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MinimumProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaximumProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().MaximumProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SmallChangeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SmallChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LargeChangeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().LargeChangeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ValueProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ValueProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
{
    HRESULT __stdcall get_OldValue(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButton> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
{
    HRESULT __stdcall get_Delay(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Delay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Delay(int32_t value) noexcept final
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

    HRESULT __stdcall get_Interval(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Interval(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interval(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
{
    HRESULT __stdcall get_DelayProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().DelayProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IntervalProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IntervalProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollBar> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollBar>
{
    HRESULT __stdcall get_Orientation(Windows::UI::Xaml::Controls::Orientation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Orientation>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(Windows::UI::Xaml::Controls::Orientation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(*reinterpret_cast<Windows::UI::Xaml::Controls::Orientation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportSize(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ViewportSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ViewportSize(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewportSize(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>(this->shim().IndicatorMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IndicatorMode(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Scroll(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Scroll(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Scroll(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scroll(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
{
    HRESULT __stdcall get_OrientationProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().OrientationProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportSizeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().ViewportSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IndicatorModeProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IndicatorModeProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
{
    HRESULT __stdcall get_NewValue(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScrollEventType(Windows::UI::Xaml::Controls::Primitives::ScrollEventType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Controls::Primitives::ScrollEventType>(this->shim().ScrollEventType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
{
    HRESULT __stdcall get_AreHorizontalSnapPointsRegular(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreHorizontalSnapPointsRegular());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AreVerticalSnapPointsRegular(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AreVerticalSnapPointsRegular());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_HorizontalSnapPointsChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().HorizontalSnapPointsChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_HorizontalSnapPointsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HorizontalSnapPointsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VerticalSnapPointsChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VerticalSnapPointsChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VerticalSnapPointsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VerticalSnapPointsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::Collections::IVectorView<float>>(this->shim().GetIrregularSnapPoints(*reinterpret_cast<Windows::UI::Xaml::Controls::Orientation const*>(&orientation), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const*>(&alignment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment alignment, float* offset, float* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<float>(this->shim().GetRegularSnapPoints(*reinterpret_cast<Windows::UI::Xaml::Controls::Orientation const*>(&orientation), *reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const*>(&alignment), *offset));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelector> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelector>
{
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

    HRESULT __stdcall get_SelectedItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().SelectedItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedItem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedItem(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().SelectedValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValuePath(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SelectedValuePath());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SelectedValuePath(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectedValuePath(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSynchronizedWithCurrentItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().IsSynchronizedWithCurrentItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsSynchronizedWithCurrentItem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSynchronizedWithCurrentItem(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SelectionChanged(*reinterpret_cast<Windows::UI::Xaml::Controls::SelectionChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItem> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
{
    HRESULT __stdcall get_IsSelected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsSelected(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSelected(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::SelectorItem>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
{
    HRESULT __stdcall get_IsSelectedProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsSelectedProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
{
    HRESULT __stdcall get_SelectedIndexProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedItemProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedItemProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValueProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedValueProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedValuePathProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().SelectedValuePathProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSynchronizedWithCurrentItemProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsSynchronizedWithCurrentItemProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetIsSelectionActive(void* element, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().GetIsSelectionActive(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
{
    HRESULT __stdcall get_HeaderBackground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().HeaderBackground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderForeground(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().HeaderForeground());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BorderBrush(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Brush>(this->shim().BorderBrush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BorderThickness(struct struct_Windows_UI_Xaml_Thickness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Thickness>(this->shim().BorderThickness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IconSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::ImageSource>(this->shim().IconSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentTransitions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Media::Animation::TransitionCollection>(this->shim().ContentTransitions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
{
    HRESULT __stdcall get_OpenPaneLength(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OpenPaneLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NegativeOpenPaneLength(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NegativeOpenPaneLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OpenPaneLengthMinusCompactLength(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().OpenPaneLengthMinusCompactLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NegativeOpenPaneLengthMinusCompactLength(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NegativeOpenPaneLengthMinusCompactLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OpenPaneGridLength(struct struct_Windows_UI_Xaml_GridLength* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::GridLength>(this->shim().OpenPaneGridLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompactPaneGridLength(struct struct_Windows_UI_Xaml_GridLength* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::GridLength>(this->shim().CompactPaneGridLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IThumb> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IThumb>
{
    HRESULT __stdcall get_IsDragging(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDragging());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DragStarted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DragStarted(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DragStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DragDelta(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DragDelta(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DragDelta(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragDelta(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DragCompleted(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DragCompleted(*reinterpret_cast<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DragCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DragCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CancelDrag() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelDrag();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IThumbStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
{
    HRESULT __stdcall get_IsDraggingProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsDraggingProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ITickBar> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ITickBar>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::ITickBarStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
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
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton>
{
    HRESULT __stdcall get_IsChecked(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().IsChecked());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsChecked(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsChecked(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsThreeState(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsThreeState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsThreeState(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsThreeState(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Checked(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Checked(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Checked(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Checked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Unchecked(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Unchecked(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Unchecked(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unchecked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Indeterminate(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Indeterminate(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Indeterminate(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Indeterminate(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Controls::Primitives::ToggleButton>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
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
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
{
    HRESULT __stdcall OnToggle() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnToggle();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
{
    HRESULT __stdcall get_IsCheckedProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsCheckedProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsThreeStateProperty(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::DependencyProperty>(this->shim().IsThreeStateProperty());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
{
    HRESULT __stdcall get_KnobCurrentToOnOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KnobCurrentToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KnobCurrentToOffOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KnobCurrentToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KnobOnToOffOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KnobOnToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KnobOffToOnOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().KnobOffToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainCurrentToOnOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CurtainCurrentToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainCurrentToOffOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CurtainCurrentToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainOnToOffOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CurtainOnToOffOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurtainOffToOnOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().CurtainOffToOnOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings> : produce_base<D, Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
{
    HRESULT __stdcall get_FromHorizontalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().FromHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FromVerticalOffset(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().FromVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
{
    Windows::UI::Xaml::Controls::Control CreatePresenter()
    {
        Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.CreatePresenter();
        }
        return this->shim().CreatePresenter();
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
{
    void OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args)
    {
        Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4 overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnProcessKeyboardAccelerators(args);
        }
        return this->shim().OnProcessKeyboardAccelerators(args);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
{
    void OnConfirmed()
    {
        Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnConfirmed();
        }
        return this->shim().OnConfirmed();
    }
    bool ShouldShowConfirmationButtons()
    {
        Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.ShouldShowConfirmationButtons();
        }
        return this->shim().ShouldShowConfirmationButtons();
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
{
    void OnMinimumChanged(double oldMinimum, double newMinimum)
    {
        Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnMinimumChanged(oldMinimum, newMinimum);
        }
        return this->shim().OnMinimumChanged(oldMinimum, newMinimum);
    }
    void OnMaximumChanged(double oldMaximum, double newMaximum)
    {
        Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnMaximumChanged(oldMaximum, newMaximum);
        }
        return this->shim().OnMaximumChanged(oldMaximum, newMaximum);
    }
    void OnValueChanged(double oldValue, double newValue)
    {
        Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnValueChanged(oldValue, newValue);
        }
        return this->shim().OnValueChanged(oldValue, newValue);
    }
};
template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
{
    void OnToggle()
    {
        Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.OnToggle();
        }
        return this->shim().OnToggle();
    }
};
}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives {

inline Windows::UI::Xaml::DependencyProperty ButtonBase::ClickModeProperty()
{
    return get_activation_factory<ButtonBase, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>().ClickModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::IsPointerOverProperty()
{
    return get_activation_factory<ButtonBase, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>().IsPointerOverProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::IsPressedProperty()
{
    return get_activation_factory<ButtonBase, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>().IsPressedProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::CommandProperty()
{
    return get_activation_factory<ButtonBase, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>().CommandProperty();
}

inline Windows::UI::Xaml::DependencyProperty ButtonBase::CommandParameterProperty()
{
    return get_activation_factory<ButtonBase, Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>().CommandParameterProperty();
}

inline CalendarPanel::CalendarPanel() :
    CalendarPanel(get_activation_factory<CalendarPanel>().ActivateInstance<CalendarPanel>())
{}

inline CarouselPanel::CarouselPanel()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<CarouselPanel, Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>().CreateInstance(outer, inner);
}

inline ColorPickerSlider::ColorPickerSlider()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<ColorPickerSlider, Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty ColorPickerSlider::ColorChannelProperty()
{
    return get_activation_factory<ColorPickerSlider, Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>().ColorChannelProperty();
}

inline ColorSpectrum::ColorSpectrum()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::ColorProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().ColorProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::HsvColorProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().HsvColorProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::MinHueProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().MinHueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::MaxHueProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().MaxHueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::MinSaturationProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().MinSaturationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::MaxSaturationProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().MaxSaturationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::MinValueProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().MinValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::MaxValueProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().MaxValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::ShapeProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().ShapeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ColorSpectrum::ComponentsProperty()
{
    return get_activation_factory<ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>().ComponentsProperty();
}

inline DragCompletedEventArgs::DragCompletedEventArgs(double horizontalChange, double verticalChange, bool canceled)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DragCompletedEventArgs, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>().CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(horizontalChange, verticalChange, canceled, outer, inner);
}

inline DragDeltaEventArgs::DragDeltaEventArgs(double horizontalChange, double verticalChange)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DragDeltaEventArgs, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>().CreateInstanceWithHorizontalChangeAndVerticalChange(horizontalChange, verticalChange, outer, inner);
}

inline DragStartedEventArgs::DragStartedEventArgs(double horizontalOffset, double verticalOffset)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<DragStartedEventArgs, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>().CreateInstanceWithHorizontalOffsetAndVerticalOffset(horizontalOffset, verticalOffset, outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::PlacementProperty()
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>().PlacementProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::AttachedFlyoutProperty()
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>().AttachedFlyoutProperty();
}

inline Windows::UI::Xaml::Controls::Primitives::FlyoutBase FlyoutBase::GetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element)
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>().GetAttachedFlyout(element);
}

inline void FlyoutBase::SetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value)
{
    get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>().SetAttachedFlyout(element, value);
}

inline void FlyoutBase::ShowAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& flyoutOwner)
{
    get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>().ShowAttachedFlyout(flyoutOwner);
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::AllowFocusOnInteractionProperty()
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>().AllowFocusOnInteractionProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::LightDismissOverlayModeProperty()
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>().LightDismissOverlayModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::AllowFocusWhenDisabledProperty()
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>().AllowFocusWhenDisabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::ElementSoundModeProperty()
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>().ElementSoundModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty FlyoutBase::OverlayInputPassThroughElementProperty()
{
    return get_activation_factory<FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>().OverlayInputPassThroughElementProperty();
}

inline Windows::UI::Xaml::Controls::Primitives::GeneratorPosition GeneratorPositionHelper::FromIndexAndOffset(int32_t index, int32_t offset)
{
    return get_activation_factory<GeneratorPositionHelper, Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>().FromIndexAndOffset(index, offset);
}

inline GridViewItemPresenter::GridViewItemPresenter()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectionCheckMarkVisualEnabledProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().SelectionCheckMarkVisualEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::CheckHintBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().CheckHintBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::CheckSelectingBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().CheckSelectingBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::CheckBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().CheckBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DragBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().DragBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DragForegroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().DragForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::FocusBorderBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().FocusBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::PlaceholderBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().PlaceholderBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::PointerOverBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().PointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().SelectedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedForegroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().SelectedForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedPointerOverBackgroundProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().SelectedPointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedPointerOverBorderBrushProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().SelectedPointerOverBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::SelectedBorderThicknessProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().SelectedBorderThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DisabledOpacityProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().DisabledOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::DragOpacityProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().DragOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::ReorderHintOffsetProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().ReorderHintOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::GridViewItemPresenterHorizontalContentAlignmentProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().GridViewItemPresenterHorizontalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::GridViewItemPresenterVerticalContentAlignmentProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().GridViewItemPresenterVerticalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::GridViewItemPresenterPaddingProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().GridViewItemPresenterPaddingProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::PointerOverBackgroundMarginProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().PointerOverBackgroundMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty GridViewItemPresenter::ContentMarginProperty()
{
    return get_activation_factory<GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>().ContentMarginProperty();
}

inline JumpListItemBackgroundConverter::JumpListItemBackgroundConverter() :
    JumpListItemBackgroundConverter(get_activation_factory<JumpListItemBackgroundConverter>().ActivateInstance<JumpListItemBackgroundConverter>())
{}

inline Windows::UI::Xaml::DependencyProperty JumpListItemBackgroundConverter::EnabledProperty()
{
    return get_activation_factory<JumpListItemBackgroundConverter, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>().EnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty JumpListItemBackgroundConverter::DisabledProperty()
{
    return get_activation_factory<JumpListItemBackgroundConverter, Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>().DisabledProperty();
}

inline JumpListItemForegroundConverter::JumpListItemForegroundConverter() :
    JumpListItemForegroundConverter(get_activation_factory<JumpListItemForegroundConverter>().ActivateInstance<JumpListItemForegroundConverter>())
{}

inline Windows::UI::Xaml::DependencyProperty JumpListItemForegroundConverter::EnabledProperty()
{
    return get_activation_factory<JumpListItemForegroundConverter, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>().EnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty JumpListItemForegroundConverter::DisabledProperty()
{
    return get_activation_factory<JumpListItemForegroundConverter, Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>().DisabledProperty();
}

inline Windows::UI::Xaml::UIElement LayoutInformation::GetLayoutExceptionElement(Windows::Foundation::IInspectable const& dispatcher)
{
    return get_activation_factory<LayoutInformation, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>().GetLayoutExceptionElement(dispatcher);
}

inline Windows::Foundation::Rect LayoutInformation::GetLayoutSlot(Windows::UI::Xaml::FrameworkElement const& element)
{
    return get_activation_factory<LayoutInformation, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>().GetLayoutSlot(element);
}

inline Windows::Foundation::Size LayoutInformation::GetAvailableSize(Windows::UI::Xaml::UIElement const& element)
{
    return get_activation_factory<LayoutInformation, Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>().GetAvailableSize(element);
}

inline ListViewItemPresenter::ListViewItemPresenter()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectionCheckMarkVisualEnabledProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().SelectionCheckMarkVisualEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckHintBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().CheckHintBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckSelectingBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().CheckSelectingBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().CheckBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DragBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().DragBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DragForegroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().DragForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::FocusBorderBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().FocusBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PlaceholderBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().PlaceholderBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PointerOverBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().PointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().SelectedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedForegroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().SelectedForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedPointerOverBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().SelectedPointerOverBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedPointerOverBorderBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().SelectedPointerOverBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedBorderThicknessProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().SelectedBorderThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DisabledOpacityProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().DisabledOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::DragOpacityProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().DragOpacityProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ReorderHintOffsetProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().ReorderHintOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ListViewItemPresenterHorizontalContentAlignmentProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().ListViewItemPresenterHorizontalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ListViewItemPresenterVerticalContentAlignmentProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().ListViewItemPresenterVerticalContentAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ListViewItemPresenterPaddingProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().ListViewItemPresenterPaddingProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PointerOverBackgroundMarginProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().PointerOverBackgroundMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::ContentMarginProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>().ContentMarginProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::SelectedPressedBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>().SelectedPressedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PressedBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>().PressedBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckBoxBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>().CheckBoxBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::FocusSecondaryBorderBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>().FocusSecondaryBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::CheckModeProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>().CheckModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::PointerOverForegroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>().PointerOverForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::RevealBackgroundProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>().RevealBackgroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::RevealBorderBrushProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>().RevealBorderBrushProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::RevealBorderThicknessProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>().RevealBorderThicknessProperty();
}

inline Windows::UI::Xaml::DependencyProperty ListViewItemPresenter::RevealBackgroundShowsAboveContentProperty()
{
    return get_activation_factory<ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>().RevealBackgroundShowsAboveContentProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ShouldLoopProperty()
{
    return get_activation_factory<LoopingSelector, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>().ShouldLoopProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemsProperty()
{
    return get_activation_factory<LoopingSelector, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>().ItemsProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::SelectedIndexProperty()
{
    return get_activation_factory<LoopingSelector, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>().SelectedIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::SelectedItemProperty()
{
    return get_activation_factory<LoopingSelector, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>().SelectedItemProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemWidthProperty()
{
    return get_activation_factory<LoopingSelector, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>().ItemWidthProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemHeightProperty()
{
    return get_activation_factory<LoopingSelector, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>().ItemHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty LoopingSelector::ItemTemplateProperty()
{
    return get_activation_factory<LoopingSelector, Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>().ItemTemplateProperty();
}

inline Windows::UI::Xaml::DependencyProperty PickerFlyoutBase::TitleProperty()
{
    return get_activation_factory<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>().TitleProperty();
}

inline hstring PickerFlyoutBase::GetTitle(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>().GetTitle(element);
}

inline void PickerFlyoutBase::SetTitle(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value)
{
    get_activation_factory<PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>().SetTitle(element, value);
}

inline PivotHeaderItem::PivotHeaderItem()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<PivotHeaderItem, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>().CreateInstance(outer, inner);
}

inline PivotHeaderPanel::PivotHeaderPanel() :
    PivotHeaderPanel(get_activation_factory<PivotHeaderPanel>().ActivateInstance<PivotHeaderPanel>())
{}

inline PivotPanel::PivotPanel() :
    PivotPanel(get_activation_factory<PivotPanel>().ActivateInstance<PivotPanel>())
{}

inline Popup::Popup() :
    Popup(get_activation_factory<Popup>().ActivateInstance<Popup>())
{}

inline Windows::UI::Xaml::DependencyProperty Popup::ChildProperty()
{
    return get_activation_factory<Popup, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>().ChildProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::IsOpenProperty()
{
    return get_activation_factory<Popup, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>().IsOpenProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::HorizontalOffsetProperty()
{
    return get_activation_factory<Popup, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>().HorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::VerticalOffsetProperty()
{
    return get_activation_factory<Popup, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>().VerticalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::ChildTransitionsProperty()
{
    return get_activation_factory<Popup, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>().ChildTransitionsProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::IsLightDismissEnabledProperty()
{
    return get_activation_factory<Popup, Windows::UI::Xaml::Controls::Primitives::IPopupStatics>().IsLightDismissEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty Popup::LightDismissOverlayModeProperty()
{
    return get_activation_factory<Popup, Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>().LightDismissOverlayModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::MinimumProperty()
{
    return get_activation_factory<RangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>().MinimumProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::MaximumProperty()
{
    return get_activation_factory<RangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>().MaximumProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::SmallChangeProperty()
{
    return get_activation_factory<RangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>().SmallChangeProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::LargeChangeProperty()
{
    return get_activation_factory<RangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>().LargeChangeProperty();
}

inline Windows::UI::Xaml::DependencyProperty RangeBase::ValueProperty()
{
    return get_activation_factory<RangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>().ValueProperty();
}

inline RepeatButton::RepeatButton() :
    RepeatButton(get_activation_factory<RepeatButton>().ActivateInstance<RepeatButton>())
{}

inline Windows::UI::Xaml::DependencyProperty RepeatButton::DelayProperty()
{
    return get_activation_factory<RepeatButton, Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>().DelayProperty();
}

inline Windows::UI::Xaml::DependencyProperty RepeatButton::IntervalProperty()
{
    return get_activation_factory<RepeatButton, Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>().IntervalProperty();
}

inline ScrollBar::ScrollBar() :
    ScrollBar(get_activation_factory<ScrollBar>().ActivateInstance<ScrollBar>())
{}

inline Windows::UI::Xaml::DependencyProperty ScrollBar::OrientationProperty()
{
    return get_activation_factory<ScrollBar, Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>().OrientationProperty();
}

inline Windows::UI::Xaml::DependencyProperty ScrollBar::ViewportSizeProperty()
{
    return get_activation_factory<ScrollBar, Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>().ViewportSizeProperty();
}

inline Windows::UI::Xaml::DependencyProperty ScrollBar::IndicatorModeProperty()
{
    return get_activation_factory<ScrollBar, Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>().IndicatorModeProperty();
}

inline ScrollEventArgs::ScrollEventArgs() :
    ScrollEventArgs(get_activation_factory<ScrollEventArgs>().ActivateInstance<ScrollEventArgs>())
{}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedIndexProperty()
{
    return get_activation_factory<Selector, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>().SelectedIndexProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedItemProperty()
{
    return get_activation_factory<Selector, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>().SelectedItemProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedValueProperty()
{
    return get_activation_factory<Selector, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>().SelectedValueProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::SelectedValuePathProperty()
{
    return get_activation_factory<Selector, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>().SelectedValuePathProperty();
}

inline Windows::UI::Xaml::DependencyProperty Selector::IsSynchronizedWithCurrentItemProperty()
{
    return get_activation_factory<Selector, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>().IsSynchronizedWithCurrentItemProperty();
}

inline bool Selector::GetIsSelectionActive(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Selector, Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>().GetIsSelectionActive(element);
}

inline Windows::UI::Xaml::DependencyProperty SelectorItem::IsSelectedProperty()
{
    return get_activation_factory<SelectorItem, Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>().IsSelectedProperty();
}

inline Thumb::Thumb() :
    Thumb(get_activation_factory<Thumb>().ActivateInstance<Thumb>())
{}

inline Windows::UI::Xaml::DependencyProperty Thumb::IsDraggingProperty()
{
    return get_activation_factory<Thumb, Windows::UI::Xaml::Controls::Primitives::IThumbStatics>().IsDraggingProperty();
}

inline TickBar::TickBar() :
    TickBar(get_activation_factory<TickBar>().ActivateInstance<TickBar>())
{}

inline Windows::UI::Xaml::DependencyProperty TickBar::FillProperty()
{
    return get_activation_factory<TickBar, Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>().FillProperty();
}

inline ToggleButton::ToggleButton()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<ToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::DependencyProperty ToggleButton::IsCheckedProperty()
{
    return get_activation_factory<ToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>().IsCheckedProperty();
}

inline Windows::UI::Xaml::DependencyProperty ToggleButton::IsThreeStateProperty()
{
    return get_activation_factory<ToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>().IsThreeStateProperty();
}

template <typename L> DragCompletedEventHandler::DragCompletedEventHandler(L handler) :
    DragCompletedEventHandler(impl::make_delegate<DragCompletedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DragCompletedEventHandler::DragCompletedEventHandler(F* handler) :
    DragCompletedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DragCompletedEventHandler::DragCompletedEventHandler(O* object, M method) :
    DragCompletedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DragCompletedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<DragCompletedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> DragDeltaEventHandler::DragDeltaEventHandler(L handler) :
    DragDeltaEventHandler(impl::make_delegate<DragDeltaEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DragDeltaEventHandler::DragDeltaEventHandler(F* handler) :
    DragDeltaEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DragDeltaEventHandler::DragDeltaEventHandler(O* object, M method) :
    DragDeltaEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DragDeltaEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<DragDeltaEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> DragStartedEventHandler::DragStartedEventHandler(L handler) :
    DragStartedEventHandler(impl::make_delegate<DragStartedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DragStartedEventHandler::DragStartedEventHandler(F* handler) :
    DragStartedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DragStartedEventHandler::DragStartedEventHandler(O* object, M method) :
    DragStartedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DragStartedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<DragStartedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ItemsChangedEventHandler::ItemsChangedEventHandler(L handler) :
    ItemsChangedEventHandler(impl::make_delegate<ItemsChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ItemsChangedEventHandler::ItemsChangedEventHandler(F* handler) :
    ItemsChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ItemsChangedEventHandler::ItemsChangedEventHandler(O* object, M method) :
    ItemsChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ItemsChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ItemsChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> RangeBaseValueChangedEventHandler::RangeBaseValueChangedEventHandler(L handler) :
    RangeBaseValueChangedEventHandler(impl::make_delegate<RangeBaseValueChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> RangeBaseValueChangedEventHandler::RangeBaseValueChangedEventHandler(F* handler) :
    RangeBaseValueChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> RangeBaseValueChangedEventHandler::RangeBaseValueChangedEventHandler(O* object, M method) :
    RangeBaseValueChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void RangeBaseValueChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<RangeBaseValueChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename L> ScrollEventHandler::ScrollEventHandler(L handler) :
    ScrollEventHandler(impl::make_delegate<ScrollEventHandler>(std::forward<L>(handler)))
{}

template <typename F> ScrollEventHandler::ScrollEventHandler(F* handler) :
    ScrollEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> ScrollEventHandler::ScrollEventHandler(O* object, M method) :
    ScrollEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void ScrollEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<ScrollEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D> Windows::UI::Xaml::Controls::Control IFlyoutBaseOverridesT<D>::CreatePresenter() const
{
    return shim().template try_as<IFlyoutBaseOverrides>().CreatePresenter();
}

template <typename D> void IFlyoutBaseOverrides4T<D>::OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const
{
    return shim().template try_as<IFlyoutBaseOverrides4>().OnProcessKeyboardAccelerators(args);
}

template <typename D> void IPickerFlyoutBaseOverridesT<D>::OnConfirmed() const
{
    return shim().template try_as<IPickerFlyoutBaseOverrides>().OnConfirmed();
}

template <typename D> bool IPickerFlyoutBaseOverridesT<D>::ShouldShowConfirmationButtons() const
{
    return shim().template try_as<IPickerFlyoutBaseOverrides>().ShouldShowConfirmationButtons();
}

template <typename D> void IRangeBaseOverridesT<D>::OnMinimumChanged(double oldMinimum, double newMinimum) const
{
    return shim().template try_as<IRangeBaseOverrides>().OnMinimumChanged(oldMinimum, newMinimum);
}

template <typename D> void IRangeBaseOverridesT<D>::OnMaximumChanged(double oldMaximum, double newMaximum) const
{
    return shim().template try_as<IRangeBaseOverrides>().OnMaximumChanged(oldMaximum, newMaximum);
}

template <typename D> void IRangeBaseOverridesT<D>::OnValueChanged(double oldValue, double newValue) const
{
    return shim().template try_as<IRangeBaseOverrides>().OnValueChanged(oldValue, newValue);
}

template <typename D> void IToggleButtonOverridesT<D>::OnToggle() const
{
    return shim().template try_as<IToggleButtonOverrides>().OnToggle();
}

template <typename D, typename... Interfaces>
struct ButtonBaseT :
    implements<D, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IContentControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = ButtonBase;

protected:
    ButtonBaseT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::ButtonBase, Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct CarouselPanelT :
    implements<D, Windows::UI::Xaml::Controls::IVirtualizingPanelOverrides, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::ICarouselPanel, Windows::UI::Xaml::Controls::IPanel, Windows::UI::Xaml::Controls::IVirtualizingPanel, Windows::UI::Xaml::Controls::IVirtualizingPanelProtected, Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IVirtualizingPanelOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = CarouselPanel;

protected:
    CarouselPanelT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::CarouselPanel, Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ColorPickerSliderT :
    implements<D, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::ISlider, Windows::UI::Xaml::Controls::ISlider2, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = ColorPickerSlider;

protected:
    ColorPickerSliderT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider, Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ColorSpectrumT :
    implements<D, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IColorSpectrum, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = ColorSpectrum;

protected:
    ColorSpectrumT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DragCompletedEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    using composable = DragCompletedEventArgs;

protected:
    DragCompletedEventArgsT(double horizontalChange, double verticalChange, bool canceled)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs, Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>().CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(horizontalChange, verticalChange, canceled, *this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DragDeltaEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    using composable = DragDeltaEventArgs;

protected:
    DragDeltaEventArgsT(double horizontalChange, double verticalChange)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs, Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>().CreateInstanceWithHorizontalChangeAndVerticalChange(horizontalChange, verticalChange, *this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct DragStartedEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    using composable = DragStartedEventArgs;

protected:
    DragStartedEventArgsT(double horizontalOffset, double verticalOffset)
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs, Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>().CreateInstanceWithHorizontalOffsetAndVerticalOffset(horizontalOffset, verticalOffset, *this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct FlyoutBaseT :
    implements<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverridesT<D>, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4T<D>
{
    using composable = FlyoutBase;

protected:
    FlyoutBaseT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct GridViewItemPresenterT :
    implements<D, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter, Windows::UI::Xaml::Controls::IContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IContentPresenterOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = GridViewItemPresenter;

protected:
    GridViewItemPresenterT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ListViewItemPresenterT :
    implements<D, Windows::UI::Xaml::Controls::IContentPresenterOverrides, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter, Windows::UI::Xaml::Controls::IContentPresenter, Windows::UI::Xaml::Controls::IContentPresenter2, Windows::UI::Xaml::Controls::IContentPresenter3, Windows::UI::Xaml::Controls::IContentPresenter4, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IContentPresenterOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = ListViewItemPresenter;

protected:
    ListViewItemPresenterT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter, Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct PickerFlyoutBaseT :
    implements<D, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3, Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverridesT<D>, Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4T<D>, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverridesT<D>
{
    using composable = PickerFlyoutBase;

protected:
    PickerFlyoutBaseT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase, Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct PivotHeaderItemT :
    implements<D, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IContentControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = PivotHeaderItem;

protected:
    PivotHeaderItemT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem, Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct RangeBaseT :
    implements<D, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IRangeBase, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = RangeBase;

protected:
    RangeBaseT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::RangeBase, Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct SelectorItemT :
    implements<D, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::ISelectorItem, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IContentControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = SelectorItem;

protected:
    SelectorItemT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::SelectorItem, Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename... Interfaces>
struct ToggleButtonT :
    implements<D, Windows::UI::Xaml::Controls::IContentControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides, Windows::UI::Xaml::Controls::IControlOverrides6, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElementOverrides, Windows::UI::Xaml::IUIElementOverrides7, Windows::UI::Xaml::IUIElementOverrides8, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Controls::Primitives::IToggleButton, Windows::UI::Xaml::Controls::IContentControl, Windows::UI::Xaml::Controls::IContentControl2, Windows::UI::Xaml::Controls::IControl, Windows::UI::Xaml::Controls::IControl2, Windows::UI::Xaml::Controls::IControl3, Windows::UI::Xaml::Controls::IControl4, Windows::UI::Xaml::Controls::IControl5, Windows::UI::Xaml::Controls::IControlProtected, Windows::UI::Xaml::Controls::Primitives::IButtonBase, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElement6, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElement7, Windows::UI::Xaml::IUIElement8>,
    Windows::UI::Xaml::Controls::IContentControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverridesT<D>, Windows::UI::Xaml::Controls::IControlOverrides6T<D>, Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverridesT<D>, Windows::UI::Xaml::IFrameworkElementOverrides2T<D>, Windows::UI::Xaml::IUIElementOverridesT<D>, Windows::UI::Xaml::IUIElementOverrides7T<D>, Windows::UI::Xaml::IUIElementOverrides8T<D>
{
    using composable = ToggleButton;

protected:
    ToggleButtonT()
    {
        get_activation_factory<Windows::UI::Xaml::Controls::Primitives::ToggleButton, Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ICarouselPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ICarouselPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrum> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrum> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformation> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformation> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelector> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelector> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPivotPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPopup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPopup> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPopup2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPopup2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPopupStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPopupStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IPopupStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IPopupStatics2> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IRepeatButton> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IRepeatButton> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollBar> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollBar> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISelector> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISelector> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItem> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISelectorStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IThumb> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IThumb> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IThumbStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IThumbStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ITickBar> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ITickBar> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ITickBarStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ITickBarStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButton> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ButtonBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::CalendarPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::CalendarPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::CarouselPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ColorSpectrum> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::LayoutInformation> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::LayoutInformation> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelector> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::PivotPanel> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::Popup> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::Popup> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBase> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::RepeatButton> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollBar> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::Selector> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::Selector> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::SelectorItem> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::Thumb> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::TickBar> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::TickBar> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleButton> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings> {};
template<> struct hash<winrt::Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings> {};

}

WINRT_WARNING_POP
