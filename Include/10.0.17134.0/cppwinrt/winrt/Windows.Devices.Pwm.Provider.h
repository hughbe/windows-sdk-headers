﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.2.h"
#include "winrt/Windows.Devices.Pwm.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::PinCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->get_PinCount(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::ActualFrequency() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->get_ActualFrequency(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::SetDesiredFrequency(double frequency) const
{
    double result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->SetDesiredFrequency(frequency, &result));
    return result;
}

template <typename D> double consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::MaxFrequency() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->get_MaxFrequency(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::MinFrequency() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->get_MinFrequency(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::AcquirePin(int32_t pin) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->AcquirePin(pin));
}

template <typename D> void consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::ReleasePin(int32_t pin) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->ReleasePin(pin));
}

template <typename D> void consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::EnablePin(int32_t pin) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->EnablePin(pin));
}

template <typename D> void consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::DisablePin(int32_t pin) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->DisablePin(pin));
}

template <typename D> void consume_Windows_Devices_Pwm_Provider_IPwmControllerProvider<D>::SetPulseParameters(int32_t pin, double dutyCycle, bool invertPolarity) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmControllerProvider)->SetPulseParameters(pin, dutyCycle, invertPolarity));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider> consume_Windows_Devices_Pwm_Provider_IPwmProvider<D>::GetControllers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::Provider::IPwmProvider)->GetControllers(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Pwm::Provider::IPwmControllerProvider> : produce_base<D, Windows::Devices::Pwm::Provider::IPwmControllerProvider>
{
    HRESULT __stdcall get_PinCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PinCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActualFrequency(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ActualFrequency());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDesiredFrequency(double frequency, double* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<double>(this->shim().SetDesiredFrequency(frequency));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxFrequency(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MaxFrequency());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MinFrequency(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().MinFrequency());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcquirePin(int32_t pin) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcquirePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReleasePin(int32_t pin) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReleasePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnablePin(int32_t pin) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnablePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DisablePin(int32_t pin) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisablePin(pin);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPulseParameters(int32_t pin, double dutyCycle, bool invertPolarity) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPulseParameters(pin, dutyCycle, invertPolarity);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::Provider::IPwmProvider> : produce_base<D, Windows::Devices::Pwm::Provider::IPwmProvider>
{
    HRESULT __stdcall GetControllers(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::Provider::IPwmControllerProvider>>(this->shim().GetControllers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Pwm::Provider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider> {};
template<> struct hash<winrt::Windows::Devices::Pwm::Provider::IPwmProvider> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::Provider::IPwmProvider> {};

}

WINRT_WARNING_POP
