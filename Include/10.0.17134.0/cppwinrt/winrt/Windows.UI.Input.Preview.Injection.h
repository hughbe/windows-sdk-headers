// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Gaming.Input.2.h"
#include "winrt/impl/Windows.UI.Input.Preview.Injection.2.h"

namespace winrt::impl {

template <typename D> Windows::Gaming::Input::GamepadButtons consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::Buttons() const
{
    Windows::Gaming::Input::GamepadButtons value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_Buttons(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::Buttons(Windows::Gaming::Input::GamepadButtons const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_Buttons(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_LeftThumbstickX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_LeftThumbstickX(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_LeftThumbstickY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftThumbstickY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_LeftThumbstickY(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftTrigger() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_LeftTrigger(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::LeftTrigger(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_LeftTrigger(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_RightThumbstickX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_RightThumbstickX(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_RightThumbstickY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightThumbstickY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_RightThumbstickY(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightTrigger() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->get_RightTrigger(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo<D>::RightTrigger(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo)->put_RightTrigger(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo consume_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory<D>::CreateInstance(Windows::Gaming::Input::GamepadReading const& reading) const
{
    Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory)->CreateInstanceFromGamepadReading(get_abi(reading), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::KeyOptions() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->get_KeyOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->put_KeyOptions(get_abi(value)));
}

template <typename D> uint16_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::ScanCode() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->get_ScanCode(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::ScanCode(uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->put_ScanCode(value));
}

template <typename D> uint16_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::VirtualKey() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->get_VirtualKey(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo<D>::VirtualKey(uint16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo)->put_VirtualKey(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseOptions() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_MouseOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_MouseOptions(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseData() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_MouseData(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::MouseData(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_MouseData(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaY() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_DeltaY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaY(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_DeltaY(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaX() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_DeltaX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::DeltaX(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_DeltaX(value));
}

template <typename D> uint32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::TimeOffsetInMilliseconds() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->get_TimeOffsetInMilliseconds(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo<D>::TimeOffsetInMilliseconds(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo)->put_TimeOffsetInMilliseconds(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PointerInfo() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_PointerInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_PointerInfo(get_abi(value)));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPenButtons consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenButtons() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_PenButtons(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_PenButtons(get_abi(value)));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPenParameters consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenParameters() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_PenParameters(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_PenParameters(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Pressure() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_Pressure(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Pressure(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_Pressure(value));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Rotation() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_Rotation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::Rotation(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_Rotation(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltX() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_TiltX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltX(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_TiltX(value));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltY() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->get_TiltY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo<D>::TiltY(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo)->put_TiltY(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputRectangle consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Contact() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputRectangle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Contact(Windows::UI::Input::Preview::Injection::InjectedInputRectangle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_Contact(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Orientation() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_Orientation(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Orientation(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_Orientation(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::PointerInfo() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_PointerInfo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::PointerInfo(Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_PointerInfo(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Pressure() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_Pressure(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::Pressure(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_Pressure(value));
}

template <typename D> Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::TouchParameters() const
{
    Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->get_TouchParameters(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo<D>::TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo)->put_TouchParameters(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectKeyboardInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectKeyboardInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectMouseInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectMouseInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InitializeTouchInjection(get_abi(visualMode)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectTouchInput(param::iterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectTouchInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::UninitializeTouchInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->UninitializeTouchInjection());
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const& visualMode) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InitializePenInjection(get_abi(visualMode)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectPenInput(Windows::UI::Input::Preview::Injection::InjectedInputPenInfo const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectPenInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::UninitializePenInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->UninitializePenInjection());
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector<D>::InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut const& shortcut) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector)->InjectShortcut(get_abi(shortcut)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>::InitializeGamepadInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector2)->InitializeGamepadInjection());
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>::InjectGamepadInput(Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo const& input) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector2)->InjectGamepadInput(get_abi(input)));
}

template <typename D> void consume_Windows_UI_Input_Preview_Injection_IInputInjector2<D>::UninitializeGamepadInjection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjector2)->UninitializeGamepadInjection());
}

template <typename D> Windows::UI::Input::Preview::Injection::InputInjector consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics<D>::TryCreate() const
{
    Windows::UI::Input::Preview::Injection::InputInjector instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjectorStatics)->TryCreate(put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Input::Preview::Injection::InputInjector consume_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2<D>::TryCreateForAppBroadcastOnly() const
{
    Windows::UI::Input::Preview::Injection::InputInjector instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Preview::Injection::IInputInjectorStatics2)->TryCreateForAppBroadcastOnly(put_abi(instance)));
    return instance;
}

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo>
{
    HRESULT __stdcall get_Buttons(Windows::Gaming::Input::GamepadButtons* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Gaming::Input::GamepadButtons>(this->shim().Buttons());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Buttons(Windows::Gaming::Input::GamepadButtons value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Buttons(*reinterpret_cast<Windows::Gaming::Input::GamepadButtons const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LeftThumbstickX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LeftThumbstickX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LeftThumbstickX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftThumbstickX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LeftThumbstickY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LeftThumbstickY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LeftThumbstickY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftThumbstickY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LeftTrigger(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().LeftTrigger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LeftTrigger(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LeftTrigger(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightThumbstickX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RightThumbstickX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RightThumbstickX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightThumbstickX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightThumbstickY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RightThumbstickY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RightThumbstickY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightThumbstickY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightTrigger(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RightTrigger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RightTrigger(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightTrigger(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>
{
    HRESULT __stdcall CreateInstanceFromGamepadReading(struct struct_Windows_Gaming_Input_GamepadReading reading, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo>(this->shim().CreateInstance(*reinterpret_cast<Windows::Gaming::Input::GamepadReading const*>(&reading)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo>
{
    HRESULT __stdcall get_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions>(this->shim().KeyOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeyOptions(Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyOptions(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScanCode(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().ScanCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScanCode(uint16_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScanCode(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualKey(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().VirtualKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VirtualKey(uint16_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VirtualKey(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo>
{
    HRESULT __stdcall get_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions>(this->shim().MouseOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MouseOptions(Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseOptions(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MouseData(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MouseData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MouseData(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MouseData(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaY(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().DeltaY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DeltaY(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeltaY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeltaX(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().DeltaX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DeltaX(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeltaX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimeOffsetInMilliseconds(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TimeOffsetInMilliseconds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TimeOffsetInMilliseconds(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimeOffsetInMilliseconds(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo>
{
    HRESULT __stdcall get_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>(this->shim().PointerInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerInfo(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons>(this->shim().PenButtons());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PenButtons(Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PenButtons(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPenButtons const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters>(this->shim().PenParameters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PenParameters(Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PenParameters(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPenParameters const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Pressure(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pressure(value);
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

    HRESULT __stdcall get_TiltX(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().TiltX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TiltX(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TiltX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TiltY(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().TiltY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TiltY(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TiltY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> : produce_base<D, Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo>
{
    HRESULT __stdcall get_Contact(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputRectangle>(this->shim().Contact());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Contact(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputRectangle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Contact(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputRectangle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Orientation(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Orientation(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Orientation(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo>(this->shim().PointerInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PointerInfo(struct struct_Windows_UI_Input_Preview_Injection_InjectedInputPointerInfo value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerInfo(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Pressure(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pressure(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters>(this->shim().TouchParameters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TouchParameters(Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TouchParameters(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjector> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjector>
{
    HRESULT __stdcall InjectKeyboardInput(void* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectKeyboardInput(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InjectMouseInput(void* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectMouseInput(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InitializeTouchInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitializeTouchInjection(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const*>(&visualMode));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InjectTouchInput(void* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectTouchInput(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UninitializeTouchInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UninitializeTouchInjection();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InitializePenInjection(Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitializePenInjection(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode const*>(&visualMode));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InjectPenInput(void* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectPenInput(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputPenInfo const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UninitializePenInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UninitializePenInjection();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InjectShortcut(Windows::UI::Input::Preview::Injection::InjectedInputShortcut shortcut) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectShortcut(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputShortcut const*>(&shortcut));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjector2> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjector2>
{
    HRESULT __stdcall InitializeGamepadInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitializeGamepadInjection();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InjectGamepadInput(void* input) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InjectGamepadInput(*reinterpret_cast<Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo const*>(&input));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UninitializeGamepadInjection() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UninitializeGamepadInjection();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>
{
    HRESULT __stdcall TryCreate(void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Input::Preview::Injection::InputInjector>(this->shim().TryCreate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> : produce_base<D, Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>
{
    HRESULT __stdcall TryCreateForAppBroadcastOnly(void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Input::Preview::Injection::InputInjector>(this->shim().TryCreateForAppBroadcastOnly());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview::Injection {

inline InjectedInputGamepadInfo::InjectedInputGamepadInfo() :
    InjectedInputGamepadInfo(get_activation_factory<InjectedInputGamepadInfo>().ActivateInstance<InjectedInputGamepadInfo>())
{}

inline InjectedInputGamepadInfo::InjectedInputGamepadInfo(Windows::Gaming::Input::GamepadReading const& reading) :
    InjectedInputGamepadInfo(get_activation_factory<InjectedInputGamepadInfo, Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory>().CreateInstance(reading))
{}

inline InjectedInputKeyboardInfo::InjectedInputKeyboardInfo() :
    InjectedInputKeyboardInfo(get_activation_factory<InjectedInputKeyboardInfo>().ActivateInstance<InjectedInputKeyboardInfo>())
{}

inline InjectedInputMouseInfo::InjectedInputMouseInfo() :
    InjectedInputMouseInfo(get_activation_factory<InjectedInputMouseInfo>().ActivateInstance<InjectedInputMouseInfo>())
{}

inline InjectedInputPenInfo::InjectedInputPenInfo() :
    InjectedInputPenInfo(get_activation_factory<InjectedInputPenInfo>().ActivateInstance<InjectedInputPenInfo>())
{}

inline InjectedInputTouchInfo::InjectedInputTouchInfo() :
    InjectedInputTouchInfo(get_activation_factory<InjectedInputTouchInfo>().ActivateInstance<InjectedInputTouchInfo>())
{}

inline Windows::UI::Input::Preview::Injection::InputInjector InputInjector::TryCreate()
{
    return get_activation_factory<InputInjector, Windows::UI::Input::Preview::Injection::IInputInjectorStatics>().TryCreate();
}

inline Windows::UI::Input::Preview::Injection::InputInjector InputInjector::TryCreateForAppBroadcastOnly()
{
    return get_activation_factory<InputInjector, Windows::UI::Input::Preview::Injection::IInputInjectorStatics2>().TryCreateForAppBroadcastOnly();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjector> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInputInjector> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjector2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInputInjector2> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::IInputInjectorStatics2> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::InjectedInputGamepadInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::InjectedInputPenInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo> {};
template<> struct hash<winrt::Windows::UI::Input::Preview::Injection::InputInjector> : winrt::impl::hash_base<winrt::Windows::UI::Input::Preview::Injection::InputInjector> {};

}

WINRT_WARNING_POP
