// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Display.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> Windows::Graphics::Display::AdvancedColorKind consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::CurrentAdvancedColorKind() const
{
    Windows::Graphics::Display::AdvancedColorKind value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_CurrentAdvancedColorKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::RedPrimary() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_RedPrimary(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::GreenPrimary() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_GreenPrimary(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::BluePrimary() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_BluePrimary(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Point consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::WhitePoint() const
{
    Windows::Foundation::Point value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_WhitePoint(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::MaxLuminanceInNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_MaxLuminanceInNits(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::MinLuminanceInNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_MinLuminanceInNits(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::MaxAverageFullFrameLuminanceInNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_MaxAverageFullFrameLuminanceInNits(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::SdrWhiteLevelInNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->get_SdrWhiteLevelInNits(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::IsHdrMetadataFormatCurrentlySupported(Windows::Graphics::Display::HdrMetadataFormat const& format) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->IsHdrMetadataFormatCurrentlySupported(get_abi(format), &result));
    return result;
}

template <typename D> bool consume_Windows_Graphics_Display_IAdvancedColorInfo<D>::IsAdvancedColorKindAvailable(Windows::Graphics::Display::AdvancedColorKind const& kind) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IAdvancedColorInfo)->IsAdvancedColorKindAvailable(get_abi(kind), &result));
    return result;
}

template <typename D> bool consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->get_IsSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->get_IsOverrideActive(&value));
    return value;
}

template <typename D> double consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevel() const
{
    double level{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->get_BrightnessLevel(&level));
    return level;
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::SetBrightnessLevel(double brightnessLevel, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->SetBrightnessLevel(brightnessLevel, get_abi(options)));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::SetBrightnessScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->SetBrightnessScenario(get_abi(scenario), get_abi(options)));
}

template <typename D> double consume_Windows_Graphics_Display_IBrightnessOverride<D>::GetLevelForScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario) const
{
    double brightnessLevel{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->GetLevelForScenario(get_abi(scenario), &brightnessLevel));
    return brightnessLevel;
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::StartOverride() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->StartOverride());
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::StopOverride() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->StopOverride());
}

template <typename D> event_token consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->add_IsSupportedChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IBrightnessOverride> consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IBrightnessOverride>(this, &abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsSupportedChanged, IsSupportedChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsSupportedChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->remove_IsSupportedChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->add_IsOverrideActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IBrightnessOverride> consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IBrightnessOverride>(this, &abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_IsOverrideActiveChanged, IsOverrideActiveChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::IsOverrideActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->remove_IsOverrideActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevelChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->add_BrightnessLevelChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IBrightnessOverride> consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IBrightnessOverride>(this, &abi_t<Windows::Graphics::Display::IBrightnessOverride>::remove_BrightnessLevelChanged, BrightnessLevelChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IBrightnessOverride<D>::BrightnessLevelChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverride)->remove_BrightnessLevelChanged(get_abi(token)));
}

template <typename D> double consume_Windows_Graphics_Display_IBrightnessOverrideSettings<D>::DesiredLevel() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideSettings)->get_DesiredLevel(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IBrightnessOverrideSettings<D>::DesiredNits() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideSettings)->get_DesiredNits(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::BrightnessOverrideSettings consume_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics<D>::CreateFromLevel(double level) const
{
    Windows::Graphics::Display::BrightnessOverrideSettings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideSettingsStatics)->CreateFromLevel(level, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::BrightnessOverrideSettings consume_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics<D>::CreateFromNits(float nits) const
{
    Windows::Graphics::Display::BrightnessOverrideSettings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideSettingsStatics)->CreateFromNits(nits, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::BrightnessOverrideSettings consume_Windows_Graphics_Display_IBrightnessOverrideSettingsStatics<D>::CreateFromDisplayBrightnessOverrideScenario(Windows::Graphics::Display::DisplayBrightnessOverrideScenario const& overrideScenario) const
{
    Windows::Graphics::Display::BrightnessOverrideSettings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideSettingsStatics)->CreateFromDisplayBrightnessOverrideScenario(get_abi(overrideScenario), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::BrightnessOverride consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>::GetDefaultForSystem() const
{
    Windows::Graphics::Display::BrightnessOverride value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideStatics)->GetDefaultForSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::BrightnessOverride consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::BrightnessOverride value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>::SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IBrightnessOverrideStatics)->SaveForSystemAsync(get_abi(value), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Display::DisplayColorOverrideScenario consume_Windows_Graphics_Display_IColorOverrideSettings<D>::DesiredDisplayColorOverrideScenario() const
{
    Windows::Graphics::Display::DisplayColorOverrideScenario value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IColorOverrideSettings)->get_DesiredDisplayColorOverrideScenario(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::ColorOverrideSettings consume_Windows_Graphics_Display_IColorOverrideSettingsStatics<D>::CreateFromDisplayColorOverrideScenario(Windows::Graphics::Display::DisplayColorOverrideScenario const& overrideScenario) const
{
    Windows::Graphics::Display::ColorOverrideSettings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IColorOverrideSettingsStatics)->CreateFromDisplayColorOverrideScenario(get_abi(overrideScenario), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::ColorOverrideSettings consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::ColorOverrideSettings() const
{
    Windows::Graphics::Display::ColorOverrideSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->get_ColorOverrideSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::ColorOverrideSettings(Windows::Graphics::Display::ColorOverrideSettings const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->put_ColorOverrideSettings(get_abi(value)));
}

template <typename D> Windows::Graphics::Display::BrightnessOverrideSettings consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::BrightnessOverrideSettings() const
{
    Windows::Graphics::Display::BrightnessOverrideSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->get_BrightnessOverrideSettings(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::BrightnessOverrideSettings(Windows::Graphics::Display::BrightnessOverrideSettings const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->put_BrightnessOverrideSettings(get_abi(value)));
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::CanOverride() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->get_CanOverride(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::IsOverrideActive() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->get_IsOverrideActive(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::GetCurrentDisplayEnhancementOverrideCapabilities() const
{
    Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->GetCurrentDisplayEnhancementOverrideCapabilities(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::RequestOverride() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->RequestOverride());
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::StopOverride() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->StopOverride());
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::CanOverrideChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->add_CanOverrideChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride> consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::CanOverrideChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayEnhancementOverride>(this, &abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_CanOverrideChanged, CanOverrideChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::CanOverrideChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->remove_CanOverrideChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->add_IsOverrideActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride> consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayEnhancementOverride>(this, &abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_IsOverrideActiveChanged, IsOverrideActiveChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::IsOverrideActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->remove_IsOverrideActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::DisplayEnhancementOverrideCapabilitiesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->add_DisplayEnhancementOverrideCapabilitiesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayEnhancementOverride> consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::DisplayEnhancementOverrideCapabilitiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayEnhancementOverride>(this, &abi_t<Windows::Graphics::Display::IDisplayEnhancementOverride>::remove_DisplayEnhancementOverrideCapabilitiesChanged, DisplayEnhancementOverrideCapabilitiesChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayEnhancementOverride<D>::DisplayEnhancementOverrideCapabilitiesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverride)->remove_DisplayEnhancementOverrideCapabilitiesChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities<D>::IsBrightnessControlSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities)->get_IsBrightnessControlSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities<D>::IsBrightnessNitsControlSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities)->get_IsBrightnessNitsControlSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::NitRange> consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilities<D>::GetSupportedNitRanges() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::NitRange> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities)->GetSupportedNitRanges(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities consume_Windows_Graphics_Display_IDisplayEnhancementOverrideCapabilitiesChangedEventArgs<D>::Capabilities() const
{
    Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs)->get_Capabilities(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayEnhancementOverride consume_Windows_Graphics_Display_IDisplayEnhancementOverrideStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::DisplayEnhancementOverride result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayEnhancementOverrideStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayInformation<D>::CurrentOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_CurrentOrientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayInformation<D>::NativeOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_NativeOrientation(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_OrientationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_OrientationChanged, OrientationChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::OrientationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_OrientationChanged(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::ResolutionScale consume_Windows_Graphics_Display_IDisplayInformation<D>::ResolutionScale() const
{
    Windows::Graphics::Display::ResolutionScale value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_ResolutionScale(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayInformation<D>::LogicalDpi() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_LogicalDpi(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayInformation<D>::RawDpiX() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_RawDpiX(&value));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayInformation<D>::RawDpiY() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_RawDpiY(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::DpiChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_DpiChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::DpiChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_DpiChanged, DpiChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::DpiChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_DpiChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->get_StereoEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_StereoEnabledChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_StereoEnabledChanged, StereoEnabledChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::StereoEnabledChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_StereoEnabledChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Graphics_Display_IDisplayInformation<D>::GetColorProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->GetColorProfileAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation<D>::ColorProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->add_ColorProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation> consume_Windows_Graphics_Display_IDisplayInformation<D>::ColorProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation>::remove_ColorProfileChanged, ColorProfileChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation<D>::ColorProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation)->remove_ColorProfileChanged(get_abi(token)));
}

template <typename D> double consume_Windows_Graphics_Display_IDisplayInformation2<D>::RawPixelsPerViewPixel() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation2)->get_RawPixelsPerViewPixel(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Graphics_Display_IDisplayInformation3<D>::DiagonalSizeInInches() const
{
    Windows::Foundation::IReference<double> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation3)->get_DiagonalSizeInInches(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Display_IDisplayInformation4<D>::ScreenWidthInRawPixels() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation4)->get_ScreenWidthInRawPixels(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Display_IDisplayInformation4<D>::ScreenHeightInRawPixels() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation4)->get_ScreenHeightInRawPixels(&value));
    return value;
}

template <typename D> Windows::Graphics::Display::AdvancedColorInfo consume_Windows_Graphics_Display_IDisplayInformation5<D>::GetAdvancedColorInfo() const
{
    Windows::Graphics::Display::AdvancedColorInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation5)->GetAdvancedColorInfo(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformation5<D>::AdvancedColorInfoChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation5)->add_AdvancedColorInfoChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformation5> consume_Windows_Graphics_Display_IDisplayInformation5<D>::AdvancedColorInfoChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformation5>(this, &abi_t<Windows::Graphics::Display::IDisplayInformation5>::remove_AdvancedColorInfoChanged, AdvancedColorInfoChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformation5<D>::AdvancedColorInfoChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformation5)->remove_AdvancedColorInfoChanged(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::DisplayInformation consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::GetForCurrentView() const
{
    Windows::Graphics::Display::DisplayInformation current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->GetForCurrentView(put_abi(current)));
    return current;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::AutoRotationPreferences() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->get_AutoRotationPreferences(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->put_AutoRotationPreferences(get_abi(value)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->add_DisplayContentsInvalidated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayInformationStatics> consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayInformationStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayInformationStatics>::remove_DisplayContentsInvalidated, DisplayContentsInvalidated(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayInformationStatics<D>::DisplayContentsInvalidated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayInformationStatics)->remove_DisplayContentsInvalidated(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::CurrentOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_CurrentOrientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::NativeOrientation() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_NativeOrientation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Display::DisplayOrientations consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::AutoRotationPreferences() const
{
    Windows::Graphics::Display::DisplayOrientations value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_AutoRotationPreferences(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->put_AutoRotationPreferences(get_abi(value)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_OrientationChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_OrientationChanged, OrientationChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::OrientationChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_OrientationChanged(get_abi(token)));
}

template <typename D> Windows::Graphics::Display::ResolutionScale consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ResolutionScale() const
{
    Windows::Graphics::Display::ResolutionScale value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_ResolutionScale(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpi() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_LogicalDpi(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_LogicalDpiChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_LogicalDpiChanged, LogicalDpiChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::LogicalDpiChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_LogicalDpiChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->get_StereoEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_StereoEnabledChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_StereoEnabledChanged, StereoEnabledChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::StereoEnabledChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_StereoEnabledChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::GetColorProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->GetColorProfileAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_ColorProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_ColorProfileChanged, ColorProfileChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::ColorProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_ColorProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->add_DisplayContentsInvalidated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Display::IDisplayPropertiesStatics>(this, &abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_DisplayContentsInvalidated, DisplayContentsInvalidated(handler));
}

template <typename D> void consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>::DisplayContentsInvalidated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Display::IDisplayPropertiesStatics)->remove_DisplayContentsInvalidated(get_abi(token)));
}

template <> struct delegate<Windows::Graphics::Display::DisplayPropertiesEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Graphics::Display::DisplayPropertiesEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Graphics::Display::DisplayPropertiesEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender));
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
struct produce<D, Windows::Graphics::Display::IAdvancedColorInfo> : produce_base<D, Windows::Graphics::Display::IAdvancedColorInfo>
{
    HRESULT __stdcall get_CurrentAdvancedColorKind(Windows::Graphics::Display::AdvancedColorKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::AdvancedColorKind>(this->shim().CurrentAdvancedColorKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RedPrimary(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().RedPrimary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GreenPrimary(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().GreenPrimary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BluePrimary(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().BluePrimary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WhitePoint(Windows::Foundation::Point* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Point>(this->shim().WhitePoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxLuminanceInNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxLuminanceInNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinLuminanceInNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MinLuminanceInNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxAverageFullFrameLuminanceInNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().MaxAverageFullFrameLuminanceInNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SdrWhiteLevelInNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().SdrWhiteLevelInNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsHdrMetadataFormatCurrentlySupported(Windows::Graphics::Display::HdrMetadataFormat format, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsHdrMetadataFormatCurrentlySupported(*reinterpret_cast<Windows::Graphics::Display::HdrMetadataFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsAdvancedColorKindAvailable(Windows::Graphics::Display::AdvancedColorKind kind, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsAdvancedColorKindAvailable(*reinterpret_cast<Windows::Graphics::Display::AdvancedColorKind const*>(&kind)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IBrightnessOverride> : produce_base<D, Windows::Graphics::Display::IBrightnessOverride>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverrideActive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOverrideActive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrightnessLevel(double* level) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *level = detach_from<double>(this->shim().BrightnessLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetBrightnessLevel(double brightnessLevel, Windows::Graphics::Display::DisplayBrightnessOverrideOptions options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBrightnessLevel(brightnessLevel, *reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessOverrideOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetBrightnessScenario(Windows::Graphics::Display::DisplayBrightnessScenario scenario, Windows::Graphics::Display::DisplayBrightnessOverrideOptions options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetBrightnessScenario(*reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessScenario const*>(&scenario), *reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessOverrideOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLevelForScenario(Windows::Graphics::Display::DisplayBrightnessScenario scenario, double* brightnessLevel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *brightnessLevel = detach_from<double>(this->shim().GetLevelForScenario(*reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessScenario const*>(&scenario)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartOverride() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartOverride();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopOverride() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopOverride();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_IsSupportedChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().IsSupportedChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_IsSupportedChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSupportedChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_IsOverrideActiveChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().IsOverrideActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_IsOverrideActiveChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverrideActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BrightnessLevelChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().BrightnessLevelChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BrightnessLevelChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BrightnessLevelChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IBrightnessOverrideSettings> : produce_base<D, Windows::Graphics::Display::IBrightnessOverrideSettings>
{
    HRESULT __stdcall get_DesiredLevel(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DesiredLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredNits(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DesiredNits());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IBrightnessOverrideSettingsStatics> : produce_base<D, Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>
{
    HRESULT __stdcall CreateFromLevel(double level, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Display::BrightnessOverrideSettings>(this->shim().CreateFromLevel(level));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromNits(float nits, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Display::BrightnessOverrideSettings>(this->shim().CreateFromNits(nits));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromDisplayBrightnessOverrideScenario(Windows::Graphics::Display::DisplayBrightnessOverrideScenario overrideScenario, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Display::BrightnessOverrideSettings>(this->shim().CreateFromDisplayBrightnessOverrideScenario(*reinterpret_cast<Windows::Graphics::Display::DisplayBrightnessOverrideScenario const*>(&overrideScenario)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IBrightnessOverrideStatics> : produce_base<D, Windows::Graphics::Display::IBrightnessOverrideStatics>
{
    HRESULT __stdcall GetDefaultForSystem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::BrightnessOverride>(this->shim().GetDefaultForSystem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetForCurrentView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::BrightnessOverride>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SaveForSystemAsync(void* value, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().SaveForSystemAsync(*reinterpret_cast<Windows::Graphics::Display::BrightnessOverride const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IColorOverrideSettings> : produce_base<D, Windows::Graphics::Display::IColorOverrideSettings>
{
    HRESULT __stdcall get_DesiredDisplayColorOverrideScenario(Windows::Graphics::Display::DisplayColorOverrideScenario* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayColorOverrideScenario>(this->shim().DesiredDisplayColorOverrideScenario());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IColorOverrideSettingsStatics> : produce_base<D, Windows::Graphics::Display::IColorOverrideSettingsStatics>
{
    HRESULT __stdcall CreateFromDisplayColorOverrideScenario(Windows::Graphics::Display::DisplayColorOverrideScenario overrideScenario, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Display::ColorOverrideSettings>(this->shim().CreateFromDisplayColorOverrideScenario(*reinterpret_cast<Windows::Graphics::Display::DisplayColorOverrideScenario const*>(&overrideScenario)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayEnhancementOverride> : produce_base<D, Windows::Graphics::Display::IDisplayEnhancementOverride>
{
    HRESULT __stdcall get_ColorOverrideSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::ColorOverrideSettings>(this->shim().ColorOverrideSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ColorOverrideSettings(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorOverrideSettings(*reinterpret_cast<Windows::Graphics::Display::ColorOverrideSettings const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrightnessOverrideSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::BrightnessOverrideSettings>(this->shim().BrightnessOverrideSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BrightnessOverrideSettings(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BrightnessOverrideSettings(*reinterpret_cast<Windows::Graphics::Display::BrightnessOverrideSettings const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanOverride(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanOverride());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverrideActive(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOverrideActive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentDisplayEnhancementOverrideCapabilities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>(this->shim().GetCurrentDisplayEnhancementOverrideCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestOverride() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestOverride();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StopOverride() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StopOverride();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CanOverrideChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CanOverrideChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CanOverrideChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanOverrideChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_IsOverrideActiveChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().IsOverrideActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_IsOverrideActiveChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverrideActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayEnhancementOverrideCapabilitiesChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DisplayEnhancementOverrideCapabilitiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayEnhancementOverride, Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayEnhancementOverrideCapabilitiesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayEnhancementOverrideCapabilitiesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities> : produce_base<D, Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities>
{
    HRESULT __stdcall get_IsBrightnessControlSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBrightnessControlSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsBrightnessNitsControlSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBrightnessNitsControlSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSupportedNitRanges(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::NitRange>>(this->shim().GetSupportedNitRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs> : produce_base<D, Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs>
{
    HRESULT __stdcall get_Capabilities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities>(this->shim().Capabilities());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayEnhancementOverrideStatics> : produce_base<D, Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>
{
    HRESULT __stdcall GetForCurrentView(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Display::DisplayEnhancementOverride>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation> : produce_base<D, Windows::Graphics::Display::IDisplayInformation>
{
    HRESULT __stdcall get_CurrentOrientation(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayOrientations>(this->shim().CurrentOrientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NativeOrientation(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayOrientations>(this->shim().NativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_OrientationChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().OrientationChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OrientationChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OrientationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionScale(Windows::Graphics::Display::ResolutionScale* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::ResolutionScale>(this->shim().ResolutionScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalDpi(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LogicalDpi());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiX(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RawDpiX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawDpiY(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().RawDpiY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DpiChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DpiChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DpiChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StereoEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StereoEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StereoEnabledChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StereoEnabledChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StereoEnabledChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StereoEnabledChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetColorProfileAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>>(this->shim().GetColorProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ColorProfileChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ColorProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorProfileChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation2> : produce_base<D, Windows::Graphics::Display::IDisplayInformation2>
{
    HRESULT __stdcall get_RawPixelsPerViewPixel(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RawPixelsPerViewPixel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation3> : produce_base<D, Windows::Graphics::Display::IDisplayInformation3>
{
    HRESULT __stdcall get_DiagonalSizeInInches(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<double>>(this->shim().DiagonalSizeInInches());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation4> : produce_base<D, Windows::Graphics::Display::IDisplayInformation4>
{
    HRESULT __stdcall get_ScreenWidthInRawPixels(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ScreenWidthInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScreenHeightInRawPixels(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ScreenHeightInRawPixels());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformation5> : produce_base<D, Windows::Graphics::Display::IDisplayInformation5>
{
    HRESULT __stdcall GetAdvancedColorInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::AdvancedColorInfo>(this->shim().GetAdvancedColorInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AdvancedColorInfoChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AdvancedColorInfoChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AdvancedColorInfoChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AdvancedColorInfoChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayInformationStatics> : produce_base<D, Windows::Graphics::Display::IDisplayInformationStatics>
{
    HRESULT __stdcall GetForCurrentView(void** current) noexcept final
    {
        try
        {
            *current = nullptr;
            typename D::abi_guard guard(this->shim());
            *current = detach_from<Windows::Graphics::Display::DisplayInformation>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayOrientations>(this->shim().AutoRotationPreferences());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRotationPreferences(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayContentsInvalidated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DisplayContentsInvalidated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayContentsInvalidated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayContentsInvalidated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Display::IDisplayPropertiesStatics> : produce_base<D, Windows::Graphics::Display::IDisplayPropertiesStatics>
{
    HRESULT __stdcall get_CurrentOrientation(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayOrientations>(this->shim().CurrentOrientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NativeOrientation(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayOrientations>(this->shim().NativeOrientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::DisplayOrientations>(this->shim().AutoRotationPreferences());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AutoRotationPreferences(*reinterpret_cast<Windows::Graphics::Display::DisplayOrientations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_OrientationChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().OrientationChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OrientationChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OrientationChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResolutionScale(Windows::Graphics::Display::ResolutionScale* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Display::ResolutionScale>(this->shim().ResolutionScale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalDpi(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().LogicalDpi());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LogicalDpiChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LogicalDpiChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LogicalDpiChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogicalDpiChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StereoEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().StereoEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StereoEnabledChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StereoEnabledChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StereoEnabledChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StereoEnabledChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetColorProfileAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>>(this->shim().GetColorProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ColorProfileChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ColorProfileChanged(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ColorProfileChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DisplayContentsInvalidated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DisplayContentsInvalidated(*reinterpret_cast<Windows::Graphics::Display::DisplayPropertiesEventHandler const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DisplayContentsInvalidated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayContentsInvalidated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Display {

inline Windows::Graphics::Display::BrightnessOverride BrightnessOverride::GetDefaultForSystem()
{
    return get_activation_factory<BrightnessOverride, Windows::Graphics::Display::IBrightnessOverrideStatics>().GetDefaultForSystem();
}

inline Windows::Graphics::Display::BrightnessOverride BrightnessOverride::GetForCurrentView()
{
    return get_activation_factory<BrightnessOverride, Windows::Graphics::Display::IBrightnessOverrideStatics>().GetForCurrentView();
}

inline Windows::Foundation::IAsyncOperation<bool> BrightnessOverride::SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value)
{
    return get_activation_factory<BrightnessOverride, Windows::Graphics::Display::IBrightnessOverrideStatics>().SaveForSystemAsync(value);
}

inline Windows::Graphics::Display::BrightnessOverrideSettings BrightnessOverrideSettings::CreateFromLevel(double level)
{
    return get_activation_factory<BrightnessOverrideSettings, Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>().CreateFromLevel(level);
}

inline Windows::Graphics::Display::BrightnessOverrideSettings BrightnessOverrideSettings::CreateFromNits(float nits)
{
    return get_activation_factory<BrightnessOverrideSettings, Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>().CreateFromNits(nits);
}

inline Windows::Graphics::Display::BrightnessOverrideSettings BrightnessOverrideSettings::CreateFromDisplayBrightnessOverrideScenario(Windows::Graphics::Display::DisplayBrightnessOverrideScenario const& overrideScenario)
{
    return get_activation_factory<BrightnessOverrideSettings, Windows::Graphics::Display::IBrightnessOverrideSettingsStatics>().CreateFromDisplayBrightnessOverrideScenario(overrideScenario);
}

inline Windows::Graphics::Display::ColorOverrideSettings ColorOverrideSettings::CreateFromDisplayColorOverrideScenario(Windows::Graphics::Display::DisplayColorOverrideScenario const& overrideScenario)
{
    return get_activation_factory<ColorOverrideSettings, Windows::Graphics::Display::IColorOverrideSettingsStatics>().CreateFromDisplayColorOverrideScenario(overrideScenario);
}

inline Windows::Graphics::Display::DisplayEnhancementOverride DisplayEnhancementOverride::GetForCurrentView()
{
    return get_activation_factory<DisplayEnhancementOverride, Windows::Graphics::Display::IDisplayEnhancementOverrideStatics>().GetForCurrentView();
}

inline Windows::Graphics::Display::DisplayInformation DisplayInformation::GetForCurrentView()
{
    return get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().GetForCurrentView();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayInformation::AutoRotationPreferences()
{
    return get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().AutoRotationPreferences();
}

inline void DisplayInformation::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value)
{
    get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().AutoRotationPreferences(value);
}

inline event_token DisplayInformation::DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().DisplayContentsInvalidated(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayInformationStatics> DisplayInformation::DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>();
    return { factory, &impl::abi_t<Windows::Graphics::Display::IDisplayInformationStatics>::remove_DisplayContentsInvalidated, factory.DisplayContentsInvalidated(handler) };
}

inline void DisplayInformation::DisplayContentsInvalidated(event_token const& token)
{
    get_activation_factory<DisplayInformation, Windows::Graphics::Display::IDisplayInformationStatics>().DisplayContentsInvalidated(token);
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::CurrentOrientation()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().CurrentOrientation();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::NativeOrientation()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().NativeOrientation();
}

inline Windows::Graphics::Display::DisplayOrientations DisplayProperties::AutoRotationPreferences()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().AutoRotationPreferences();
}

inline void DisplayProperties::AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().AutoRotationPreferences(value);
}

inline event_token DisplayProperties::OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().OrientationChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_OrientationChanged, factory.OrientationChanged(handler) };
}

inline void DisplayProperties::OrientationChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().OrientationChanged(token);
}

inline Windows::Graphics::Display::ResolutionScale DisplayProperties::ResolutionScale()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().ResolutionScale();
}

inline float DisplayProperties::LogicalDpi()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().LogicalDpi();
}

inline event_token DisplayProperties::LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().LogicalDpiChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_LogicalDpiChanged, factory.LogicalDpiChanged(handler) };
}

inline void DisplayProperties::LogicalDpiChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().LogicalDpiChanged(token);
}

inline bool DisplayProperties::StereoEnabled()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().StereoEnabled();
}

inline event_token DisplayProperties::StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().StereoEnabledChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_StereoEnabledChanged, factory.StereoEnabledChanged(handler) };
}

inline void DisplayProperties::StereoEnabledChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().StereoEnabledChanged(token);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> DisplayProperties::GetColorProfileAsync()
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().GetColorProfileAsync();
}

inline event_token DisplayProperties::ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().ColorProfileChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_ColorProfileChanged, factory.ColorProfileChanged(handler) };
}

inline void DisplayProperties::ColorProfileChanged(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().ColorProfileChanged(token);
}

inline event_token DisplayProperties::DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    return get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().DisplayContentsInvalidated(handler);
}

inline factory_event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics> DisplayProperties::DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler)
{
    auto factory = get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>();
    return { factory, &impl::abi_t<Windows::Graphics::Display::IDisplayPropertiesStatics>::remove_DisplayContentsInvalidated, factory.DisplayContentsInvalidated(handler) };
}

inline void DisplayProperties::DisplayContentsInvalidated(event_token const& token)
{
    get_activation_factory<DisplayProperties, Windows::Graphics::Display::IDisplayPropertiesStatics>().DisplayContentsInvalidated(token);
}

template <typename L> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(L handler) :
    DisplayPropertiesEventHandler(impl::make_delegate<DisplayPropertiesEventHandler>(std::forward<L>(handler)))
{}

template <typename F> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(F* handler) :
    DisplayPropertiesEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> DisplayPropertiesEventHandler::DisplayPropertiesEventHandler(O* object, M method) :
    DisplayPropertiesEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void DisplayPropertiesEventHandler::operator()(Windows::Foundation::IInspectable const& sender) const
{
    check_hresult((*(impl::abi_t<DisplayPropertiesEventHandler>**)this)->Invoke(get_abi(sender)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Display::IAdvancedColorInfo> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IAdvancedColorInfo> {};
template<> struct hash<winrt::Windows::Graphics::Display::IBrightnessOverride> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IBrightnessOverride> {};
template<> struct hash<winrt::Windows::Graphics::Display::IBrightnessOverrideSettings> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IBrightnessOverrideSettings> {};
template<> struct hash<winrt::Windows::Graphics::Display::IBrightnessOverrideSettingsStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IBrightnessOverrideSettingsStatics> {};
template<> struct hash<winrt::Windows::Graphics::Display::IBrightnessOverrideStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IBrightnessOverrideStatics> {};
template<> struct hash<winrt::Windows::Graphics::Display::IColorOverrideSettings> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IColorOverrideSettings> {};
template<> struct hash<winrt::Windows::Graphics::Display::IColorOverrideSettingsStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IColorOverrideSettingsStatics> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayEnhancementOverride> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayEnhancementOverride> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilities> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayEnhancementOverrideCapabilitiesChangedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayEnhancementOverrideStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayEnhancementOverrideStatics> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayInformation> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation2> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayInformation2> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation3> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayInformation3> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation4> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayInformation4> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformation5> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayInformation5> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayInformationStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayInformationStatics> {};
template<> struct hash<winrt::Windows::Graphics::Display::IDisplayPropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::IDisplayPropertiesStatics> {};
template<> struct hash<winrt::Windows::Graphics::Display::AdvancedColorInfo> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::AdvancedColorInfo> {};
template<> struct hash<winrt::Windows::Graphics::Display::BrightnessOverride> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::BrightnessOverride> {};
template<> struct hash<winrt::Windows::Graphics::Display::BrightnessOverrideSettings> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::BrightnessOverrideSettings> {};
template<> struct hash<winrt::Windows::Graphics::Display::ColorOverrideSettings> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::ColorOverrideSettings> {};
template<> struct hash<winrt::Windows::Graphics::Display::DisplayEnhancementOverride> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::DisplayEnhancementOverride> {};
template<> struct hash<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilities> {};
template<> struct hash<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::DisplayEnhancementOverrideCapabilitiesChangedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Display::DisplayInformation> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::DisplayInformation> {};
template<> struct hash<winrt::Windows::Graphics::Display::DisplayProperties> : winrt::impl::hash_base<winrt::Windows::Graphics::Display::DisplayProperties> {};

}

WINRT_WARNING_POP
