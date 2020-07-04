// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.2.h"

namespace winrt::impl {

template <typename D> Windows::UI::Color consume_Windows_UI_IColorHelperStatics<D>::FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const
{
    Windows::UI::Color returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorHelperStatics)->FromArgb(a, r, g, b, put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_IColorHelperStatics2<D>::ToDisplayName(Windows::UI::Color const& color) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorHelperStatics2)->ToDisplayName(get_abi(color), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::AliceBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_AliceBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::AntiqueWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_AntiqueWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Aqua() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Aqua(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Aquamarine() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Aquamarine(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Azure() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Azure(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Beige() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Beige(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Bisque() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Bisque(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Black() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Black(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::BlanchedAlmond() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_BlanchedAlmond(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Blue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Blue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::BlueViolet() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_BlueViolet(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Brown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Brown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::BurlyWood() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_BurlyWood(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::CadetBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_CadetBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Chartreuse() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Chartreuse(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Chocolate() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Chocolate(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Coral() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Coral(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::CornflowerBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_CornflowerBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Cornsilk() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Cornsilk(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Crimson() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Crimson(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Cyan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Cyan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkCyan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkCyan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkGoldenrod() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkGoldenrod(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkKhaki() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkKhaki(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkMagenta() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkMagenta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkOliveGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkOliveGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkOrange() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkOrange(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkOrchid() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkOrchid(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSalmon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSalmon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSlateBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSlateBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSlateGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSlateGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkTurquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkTurquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkViolet() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkViolet(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DeepPink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DeepPink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DeepSkyBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DeepSkyBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DimGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DimGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DodgerBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DodgerBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Firebrick() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Firebrick(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::FloralWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_FloralWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::ForestGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_ForestGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Fuchsia() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Fuchsia(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Gainsboro() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Gainsboro(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::GhostWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_GhostWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Gold() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Gold(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Goldenrod() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Goldenrod(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Gray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Gray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Green() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Green(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::GreenYellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_GreenYellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Honeydew() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Honeydew(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::HotPink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_HotPink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::IndianRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_IndianRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Indigo() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Indigo(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Ivory() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Ivory(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Khaki() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Khaki(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Lavender() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Lavender(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LavenderBlush() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LavenderBlush(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LawnGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LawnGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LemonChiffon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LemonChiffon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightCoral() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightCoral(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightCyan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightCyan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightGoldenrodYellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightGoldenrodYellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightPink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightPink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSalmon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSalmon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSkyBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSkyBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSlateGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSlateGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSteelBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSteelBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightYellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightYellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Lime() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Lime(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LimeGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LimeGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Linen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Linen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Magenta() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Magenta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Maroon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Maroon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumAquamarine() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumAquamarine(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumOrchid() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumOrchid(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumPurple() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumPurple(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumSeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumSeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumSlateBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumSlateBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumSpringGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumSpringGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumTurquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumTurquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumVioletRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumVioletRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MidnightBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MidnightBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MintCream() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MintCream(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MistyRose() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MistyRose(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Moccasin() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Moccasin(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::NavajoWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_NavajoWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Navy() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Navy(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::OldLace() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_OldLace(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Olive() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Olive(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::OliveDrab() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_OliveDrab(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Orange() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Orange(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::OrangeRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_OrangeRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Orchid() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Orchid(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleGoldenrod() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleGoldenrod(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleTurquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleTurquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleVioletRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleVioletRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PapayaWhip() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PapayaWhip(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PeachPuff() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PeachPuff(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Peru() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Peru(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Pink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Pink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Plum() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Plum(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PowderBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PowderBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Purple() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Purple(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Red() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Red(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::RosyBrown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_RosyBrown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::RoyalBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_RoyalBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SaddleBrown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SaddleBrown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Salmon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Salmon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SandyBrown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SandyBrown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SeaShell() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SeaShell(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Sienna() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Sienna(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Silver() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Silver(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SkyBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SkyBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SlateBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SlateBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SlateGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SlateGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Snow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Snow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SpringGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SpringGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SteelBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SteelBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Tan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Tan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Teal() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Teal(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Thistle() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Thistle(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Tomato() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Tomato(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Transparent() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Transparent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Turquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Turquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Violet() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Violet(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Wheat() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Wheat(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::White() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_White(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::WhiteSmoke() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_WhiteSmoke(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Yellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Yellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::YellowGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_YellowGreen(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::IColorHelper> : produce_base<D, Windows::UI::IColorHelper>
{};

template <typename D>
struct produce<D, Windows::UI::IColorHelperStatics> : produce_base<D, Windows::UI::IColorHelperStatics>
{
    HRESULT __stdcall FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b, struct struct_Windows_UI_Color* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Color>(this->shim().FromArgb(a, r, g, b));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::IColorHelperStatics2> : produce_base<D, Windows::UI::IColorHelperStatics2>
{
    HRESULT __stdcall ToDisplayName(struct struct_Windows_UI_Color color, HSTRING* returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<hstring>(this->shim().ToDisplayName(*reinterpret_cast<Windows::UI::Color const*>(&color)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::IColors> : produce_base<D, Windows::UI::IColors>
{};

template <typename D>
struct produce<D, Windows::UI::IColorsStatics> : produce_base<D, Windows::UI::IColorsStatics>
{
    HRESULT __stdcall get_AliceBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().AliceBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AntiqueWhite(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().AntiqueWhite());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Aqua(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Aqua());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Aquamarine(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Aquamarine());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Azure(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Azure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Beige(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Beige());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bisque(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Bisque());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Black(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Black());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BlanchedAlmond(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BlanchedAlmond());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Blue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Blue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BlueViolet(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BlueViolet());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Brown(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Brown());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BurlyWood(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BurlyWood());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CadetBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().CadetBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Chartreuse(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Chartreuse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Chocolate(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Chocolate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Coral(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Coral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CornflowerBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().CornflowerBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Cornsilk(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Cornsilk());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Crimson(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Crimson());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Cyan(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Cyan());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkCyan(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkCyan());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGoldenrod(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkGoldenrod());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGray(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkGray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkKhaki(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkKhaki());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkMagenta(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkMagenta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOliveGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkOliveGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOrange(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkOrange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOrchid(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkOrchid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkRed(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkRed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSalmon(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkSalmon());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSeaGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSlateBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkSlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSlateGray(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkSlateGray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkTurquoise(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DarkViolet(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DarkViolet());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeepPink(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DeepPink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeepSkyBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DeepSkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DimGray(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DimGray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DodgerBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DodgerBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Firebrick(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Firebrick());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FloralWhite(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().FloralWhite());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ForestGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().ForestGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Fuchsia(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Fuchsia());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Gainsboro(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Gainsboro());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GhostWhite(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().GhostWhite());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Gold(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Gold());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Goldenrod(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Goldenrod());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Gray(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Gray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Green(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Green());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GreenYellow(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().GreenYellow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Honeydew(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Honeydew());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HotPink(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().HotPink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IndianRed(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().IndianRed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Indigo(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Indigo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Ivory(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Ivory());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Khaki(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Khaki());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Lavender(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Lavender());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LavenderBlush(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LavenderBlush());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LawnGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LawnGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LemonChiffon(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LemonChiffon());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightCoral(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightCoral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightCyan(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightCyan());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightGoldenrodYellow(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightGoldenrodYellow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightGray(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightGray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightPink(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightPink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightSalmon(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightSalmon());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightSeaGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightSkyBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightSkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightSlateGray(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightSlateGray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightSteelBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightSteelBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LightYellow(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LightYellow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Lime(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Lime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LimeGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().LimeGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Linen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Linen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Magenta(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Magenta());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Maroon(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Maroon());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumAquamarine(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumAquamarine());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumOrchid(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumOrchid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumPurple(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumPurple());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSeaGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSlateBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumSlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSpringGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumSpringGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumTurquoise(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediumVioletRed(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MediumVioletRed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MidnightBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MidnightBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MintCream(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MintCream());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MistyRose(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().MistyRose());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Moccasin(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Moccasin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NavajoWhite(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().NavajoWhite());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Navy(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Navy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldLace(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().OldLace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Olive(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Olive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OliveDrab(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().OliveDrab());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Orange(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Orange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OrangeRed(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().OrangeRed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Orchid(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Orchid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PaleGoldenrod(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PaleGoldenrod());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PaleGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PaleGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PaleTurquoise(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PaleTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PaleVioletRed(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PaleVioletRed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PapayaWhip(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PapayaWhip());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeachPuff(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PeachPuff());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Peru(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Peru());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pink(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Pink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Plum(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Plum());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PowderBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().PowderBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Purple(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Purple());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Red(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Red());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RosyBrown(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().RosyBrown());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoyalBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().RoyalBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SaddleBrown(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SaddleBrown());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Salmon(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Salmon());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SandyBrown(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SandyBrown());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SeaGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SeaShell(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SeaShell());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sienna(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Sienna());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Silver(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Silver());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SkyBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SlateBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SlateGray(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SlateGray());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Snow(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Snow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpringGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SpringGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SteelBlue(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().SteelBlue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Tan(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Tan());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Teal(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Teal());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thistle(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Thistle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Tomato(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Tomato());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Transparent(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Transparent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Turquoise(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Turquoise());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Violet(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Violet());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Wheat(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Wheat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_White(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().White());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteSmoke(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().WhiteSmoke());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Yellow(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().Yellow());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_YellowGreen(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().YellowGreen());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI {

inline Windows::UI::Color ColorHelper::FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b)
{
    return get_activation_factory<ColorHelper, Windows::UI::IColorHelperStatics>().FromArgb(a, r, g, b);
}

inline hstring ColorHelper::ToDisplayName(Windows::UI::Color const& color)
{
    return get_activation_factory<ColorHelper, Windows::UI::IColorHelperStatics2>().ToDisplayName(color);
}

inline Windows::UI::Color Colors::AliceBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().AliceBlue();
}

inline Windows::UI::Color Colors::AntiqueWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().AntiqueWhite();
}

inline Windows::UI::Color Colors::Aqua()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Aqua();
}

inline Windows::UI::Color Colors::Aquamarine()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Aquamarine();
}

inline Windows::UI::Color Colors::Azure()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Azure();
}

inline Windows::UI::Color Colors::Beige()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Beige();
}

inline Windows::UI::Color Colors::Bisque()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Bisque();
}

inline Windows::UI::Color Colors::Black()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Black();
}

inline Windows::UI::Color Colors::BlanchedAlmond()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().BlanchedAlmond();
}

inline Windows::UI::Color Colors::Blue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Blue();
}

inline Windows::UI::Color Colors::BlueViolet()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().BlueViolet();
}

inline Windows::UI::Color Colors::Brown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Brown();
}

inline Windows::UI::Color Colors::BurlyWood()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().BurlyWood();
}

inline Windows::UI::Color Colors::CadetBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().CadetBlue();
}

inline Windows::UI::Color Colors::Chartreuse()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Chartreuse();
}

inline Windows::UI::Color Colors::Chocolate()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Chocolate();
}

inline Windows::UI::Color Colors::Coral()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Coral();
}

inline Windows::UI::Color Colors::CornflowerBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().CornflowerBlue();
}

inline Windows::UI::Color Colors::Cornsilk()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Cornsilk();
}

inline Windows::UI::Color Colors::Crimson()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Crimson();
}

inline Windows::UI::Color Colors::Cyan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Cyan();
}

inline Windows::UI::Color Colors::DarkBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkBlue();
}

inline Windows::UI::Color Colors::DarkCyan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkCyan();
}

inline Windows::UI::Color Colors::DarkGoldenrod()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkGoldenrod();
}

inline Windows::UI::Color Colors::DarkGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkGray();
}

inline Windows::UI::Color Colors::DarkGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkGreen();
}

inline Windows::UI::Color Colors::DarkKhaki()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkKhaki();
}

inline Windows::UI::Color Colors::DarkMagenta()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkMagenta();
}

inline Windows::UI::Color Colors::DarkOliveGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkOliveGreen();
}

inline Windows::UI::Color Colors::DarkOrange()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkOrange();
}

inline Windows::UI::Color Colors::DarkOrchid()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkOrchid();
}

inline Windows::UI::Color Colors::DarkRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkRed();
}

inline Windows::UI::Color Colors::DarkSalmon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSalmon();
}

inline Windows::UI::Color Colors::DarkSeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSeaGreen();
}

inline Windows::UI::Color Colors::DarkSlateBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSlateBlue();
}

inline Windows::UI::Color Colors::DarkSlateGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSlateGray();
}

inline Windows::UI::Color Colors::DarkTurquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkTurquoise();
}

inline Windows::UI::Color Colors::DarkViolet()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkViolet();
}

inline Windows::UI::Color Colors::DeepPink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DeepPink();
}

inline Windows::UI::Color Colors::DeepSkyBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DeepSkyBlue();
}

inline Windows::UI::Color Colors::DimGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DimGray();
}

inline Windows::UI::Color Colors::DodgerBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DodgerBlue();
}

inline Windows::UI::Color Colors::Firebrick()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Firebrick();
}

inline Windows::UI::Color Colors::FloralWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().FloralWhite();
}

inline Windows::UI::Color Colors::ForestGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().ForestGreen();
}

inline Windows::UI::Color Colors::Fuchsia()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Fuchsia();
}

inline Windows::UI::Color Colors::Gainsboro()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Gainsboro();
}

inline Windows::UI::Color Colors::GhostWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().GhostWhite();
}

inline Windows::UI::Color Colors::Gold()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Gold();
}

inline Windows::UI::Color Colors::Goldenrod()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Goldenrod();
}

inline Windows::UI::Color Colors::Gray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Gray();
}

inline Windows::UI::Color Colors::Green()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Green();
}

inline Windows::UI::Color Colors::GreenYellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().GreenYellow();
}

inline Windows::UI::Color Colors::Honeydew()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Honeydew();
}

inline Windows::UI::Color Colors::HotPink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().HotPink();
}

inline Windows::UI::Color Colors::IndianRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().IndianRed();
}

inline Windows::UI::Color Colors::Indigo()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Indigo();
}

inline Windows::UI::Color Colors::Ivory()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Ivory();
}

inline Windows::UI::Color Colors::Khaki()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Khaki();
}

inline Windows::UI::Color Colors::Lavender()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Lavender();
}

inline Windows::UI::Color Colors::LavenderBlush()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LavenderBlush();
}

inline Windows::UI::Color Colors::LawnGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LawnGreen();
}

inline Windows::UI::Color Colors::LemonChiffon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LemonChiffon();
}

inline Windows::UI::Color Colors::LightBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightBlue();
}

inline Windows::UI::Color Colors::LightCoral()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightCoral();
}

inline Windows::UI::Color Colors::LightCyan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightCyan();
}

inline Windows::UI::Color Colors::LightGoldenrodYellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightGoldenrodYellow();
}

inline Windows::UI::Color Colors::LightGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightGreen();
}

inline Windows::UI::Color Colors::LightGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightGray();
}

inline Windows::UI::Color Colors::LightPink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightPink();
}

inline Windows::UI::Color Colors::LightSalmon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSalmon();
}

inline Windows::UI::Color Colors::LightSeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSeaGreen();
}

inline Windows::UI::Color Colors::LightSkyBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSkyBlue();
}

inline Windows::UI::Color Colors::LightSlateGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSlateGray();
}

inline Windows::UI::Color Colors::LightSteelBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSteelBlue();
}

inline Windows::UI::Color Colors::LightYellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightYellow();
}

inline Windows::UI::Color Colors::Lime()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Lime();
}

inline Windows::UI::Color Colors::LimeGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LimeGreen();
}

inline Windows::UI::Color Colors::Linen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Linen();
}

inline Windows::UI::Color Colors::Magenta()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Magenta();
}

inline Windows::UI::Color Colors::Maroon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Maroon();
}

inline Windows::UI::Color Colors::MediumAquamarine()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumAquamarine();
}

inline Windows::UI::Color Colors::MediumBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumBlue();
}

inline Windows::UI::Color Colors::MediumOrchid()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumOrchid();
}

inline Windows::UI::Color Colors::MediumPurple()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumPurple();
}

inline Windows::UI::Color Colors::MediumSeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumSeaGreen();
}

inline Windows::UI::Color Colors::MediumSlateBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumSlateBlue();
}

inline Windows::UI::Color Colors::MediumSpringGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumSpringGreen();
}

inline Windows::UI::Color Colors::MediumTurquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumTurquoise();
}

inline Windows::UI::Color Colors::MediumVioletRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumVioletRed();
}

inline Windows::UI::Color Colors::MidnightBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MidnightBlue();
}

inline Windows::UI::Color Colors::MintCream()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MintCream();
}

inline Windows::UI::Color Colors::MistyRose()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MistyRose();
}

inline Windows::UI::Color Colors::Moccasin()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Moccasin();
}

inline Windows::UI::Color Colors::NavajoWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().NavajoWhite();
}

inline Windows::UI::Color Colors::Navy()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Navy();
}

inline Windows::UI::Color Colors::OldLace()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().OldLace();
}

inline Windows::UI::Color Colors::Olive()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Olive();
}

inline Windows::UI::Color Colors::OliveDrab()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().OliveDrab();
}

inline Windows::UI::Color Colors::Orange()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Orange();
}

inline Windows::UI::Color Colors::OrangeRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().OrangeRed();
}

inline Windows::UI::Color Colors::Orchid()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Orchid();
}

inline Windows::UI::Color Colors::PaleGoldenrod()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleGoldenrod();
}

inline Windows::UI::Color Colors::PaleGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleGreen();
}

inline Windows::UI::Color Colors::PaleTurquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleTurquoise();
}

inline Windows::UI::Color Colors::PaleVioletRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleVioletRed();
}

inline Windows::UI::Color Colors::PapayaWhip()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PapayaWhip();
}

inline Windows::UI::Color Colors::PeachPuff()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PeachPuff();
}

inline Windows::UI::Color Colors::Peru()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Peru();
}

inline Windows::UI::Color Colors::Pink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Pink();
}

inline Windows::UI::Color Colors::Plum()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Plum();
}

inline Windows::UI::Color Colors::PowderBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PowderBlue();
}

inline Windows::UI::Color Colors::Purple()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Purple();
}

inline Windows::UI::Color Colors::Red()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Red();
}

inline Windows::UI::Color Colors::RosyBrown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().RosyBrown();
}

inline Windows::UI::Color Colors::RoyalBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().RoyalBlue();
}

inline Windows::UI::Color Colors::SaddleBrown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SaddleBrown();
}

inline Windows::UI::Color Colors::Salmon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Salmon();
}

inline Windows::UI::Color Colors::SandyBrown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SandyBrown();
}

inline Windows::UI::Color Colors::SeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SeaGreen();
}

inline Windows::UI::Color Colors::SeaShell()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SeaShell();
}

inline Windows::UI::Color Colors::Sienna()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Sienna();
}

inline Windows::UI::Color Colors::Silver()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Silver();
}

inline Windows::UI::Color Colors::SkyBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SkyBlue();
}

inline Windows::UI::Color Colors::SlateBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SlateBlue();
}

inline Windows::UI::Color Colors::SlateGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SlateGray();
}

inline Windows::UI::Color Colors::Snow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Snow();
}

inline Windows::UI::Color Colors::SpringGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SpringGreen();
}

inline Windows::UI::Color Colors::SteelBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SteelBlue();
}

inline Windows::UI::Color Colors::Tan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Tan();
}

inline Windows::UI::Color Colors::Teal()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Teal();
}

inline Windows::UI::Color Colors::Thistle()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Thistle();
}

inline Windows::UI::Color Colors::Tomato()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Tomato();
}

inline Windows::UI::Color Colors::Transparent()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Transparent();
}

inline Windows::UI::Color Colors::Turquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Turquoise();
}

inline Windows::UI::Color Colors::Violet()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Violet();
}

inline Windows::UI::Color Colors::Wheat()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Wheat();
}

inline Windows::UI::Color Colors::White()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().White();
}

inline Windows::UI::Color Colors::WhiteSmoke()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().WhiteSmoke();
}

inline Windows::UI::Color Colors::Yellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Yellow();
}

inline Windows::UI::Color Colors::YellowGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().YellowGreen();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::IColorHelper> : winrt::impl::hash_base<winrt::Windows::UI::IColorHelper> {};
template<> struct hash<winrt::Windows::UI::IColorHelperStatics> : winrt::impl::hash_base<winrt::Windows::UI::IColorHelperStatics> {};
template<> struct hash<winrt::Windows::UI::IColorHelperStatics2> : winrt::impl::hash_base<winrt::Windows::UI::IColorHelperStatics2> {};
template<> struct hash<winrt::Windows::UI::IColors> : winrt::impl::hash_base<winrt::Windows::UI::IColors> {};
template<> struct hash<winrt::Windows::UI::IColorsStatics> : winrt::impl::hash_base<winrt::Windows::UI::IColorsStatics> {};
template<> struct hash<winrt::Windows::UI::ColorHelper> : winrt::impl::hash_base<winrt::Windows::UI::ColorHelper> {};
template<> struct hash<winrt::Windows::UI::Colors> : winrt::impl::hash_base<winrt::Windows::UI::Colors> {};

}

WINRT_WARNING_POP
