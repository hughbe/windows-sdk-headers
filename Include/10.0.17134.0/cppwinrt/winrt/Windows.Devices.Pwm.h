// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Pwm.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Devices_Pwm_IPwmController<D>::PinCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmController)->get_PinCount(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Pwm_IPwmController<D>::ActualFrequency() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmController)->get_ActualFrequency(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Pwm_IPwmController<D>::SetDesiredFrequency(double desiredFrequency) const
{
    double result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmController)->SetDesiredFrequency(desiredFrequency, &result));
    return result;
}

template <typename D> double consume_Windows_Devices_Pwm_IPwmController<D>::MinFrequency() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmController)->get_MinFrequency(&value));
    return value;
}

template <typename D> double consume_Windows_Devices_Pwm_IPwmController<D>::MaxFrequency() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmController)->get_MaxFrequency(&value));
    return value;
}

template <typename D> Windows::Devices::Pwm::PwmPin consume_Windows_Devices_Pwm_IPwmController<D>::OpenPin(int32_t pinNumber) const
{
    Windows::Devices::Pwm::PwmPin pin{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmController)->OpenPin(pinNumber, put_abi(pin)));
    return pin;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> consume_Windows_Devices_Pwm_IPwmControllerStatics<D>::GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider const& provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmControllerStatics)->GetControllersAsync(get_abi(provider), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> consume_Windows_Devices_Pwm_IPwmControllerStatics2<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmControllerStatics2)->GetDefaultAsync(put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_Devices_Pwm_IPwmControllerStatics3<D>::GetDeviceSelector() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmControllerStatics3)->GetDeviceSelector(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Pwm_IPwmControllerStatics3<D>::GetDeviceSelector(param::hstring const& friendlyName) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmControllerStatics3)->GetDeviceSelectorFromFriendlyName(get_abi(friendlyName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> consume_Windows_Devices_Pwm_IPwmControllerStatics3<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmControllerStatics3)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Pwm::PwmController consume_Windows_Devices_Pwm_IPwmPin<D>::Controller() const
{
    Windows::Devices::Pwm::PwmController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Pwm_IPwmPin<D>::GetActiveDutyCyclePercentage() const
{
    double result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->GetActiveDutyCyclePercentage(&result));
    return result;
}

template <typename D> void consume_Windows_Devices_Pwm_IPwmPin<D>::SetActiveDutyCyclePercentage(double dutyCyclePercentage) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->SetActiveDutyCyclePercentage(dutyCyclePercentage));
}

template <typename D> Windows::Devices::Pwm::PwmPulsePolarity consume_Windows_Devices_Pwm_IPwmPin<D>::Polarity() const
{
    Windows::Devices::Pwm::PwmPulsePolarity value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->get_Polarity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Pwm_IPwmPin<D>::Polarity(Windows::Devices::Pwm::PwmPulsePolarity const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->put_Polarity(get_abi(value)));
}

template <typename D> void consume_Windows_Devices_Pwm_IPwmPin<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->Start());
}

template <typename D> void consume_Windows_Devices_Pwm_IPwmPin<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->Stop());
}

template <typename D> bool consume_Windows_Devices_Pwm_IPwmPin<D>::IsStarted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Pwm::IPwmPin)->get_IsStarted(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmController> : produce_base<D, Windows::Devices::Pwm::IPwmController>
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

    HRESULT __stdcall SetDesiredFrequency(double desiredFrequency, double* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<double>(this->shim().SetDesiredFrequency(desiredFrequency));
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

    HRESULT __stdcall OpenPin(int32_t pinNumber, void** pin) noexcept final
    {
        try
        {
            *pin = nullptr;
            typename D::abi_guard guard(this->shim());
            *pin = detach_from<Windows::Devices::Pwm::PwmPin>(this->shim().OpenPin(pinNumber));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics>
{
    HRESULT __stdcall GetControllersAsync(void* provider, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>>>(this->shim().GetControllersAsync(*reinterpret_cast<Windows::Devices::Pwm::Provider::IPwmProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics2> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics2>
{
    HRESULT __stdcall GetDefaultAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController>>(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmControllerStatics3> : produce_base<D, Windows::Devices::Pwm::IPwmControllerStatics3>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromFriendlyName(HSTRING friendlyName, HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetDeviceSelector(*reinterpret_cast<hstring const*>(&friendlyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Pwm::IPwmPin> : produce_base<D, Windows::Devices::Pwm::IPwmPin>
{
    HRESULT __stdcall get_Controller(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Pwm::PwmController>(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetActiveDutyCyclePercentage(double* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<double>(this->shim().GetActiveDutyCyclePercentage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetActiveDutyCyclePercentage(double dutyCyclePercentage) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActiveDutyCyclePercentage(dutyCyclePercentage);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Polarity(Windows::Devices::Pwm::PwmPulsePolarity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Pwm::PwmPulsePolarity>(this->shim().Polarity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Polarity(Windows::Devices::Pwm::PwmPulsePolarity value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Polarity(*reinterpret_cast<Windows::Devices::Pwm::PwmPulsePolarity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsStarted(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStarted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Pwm {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Pwm::PwmController>> PwmController::GetControllersAsync(Windows::Devices::Pwm::Provider::IPwmProvider const& provider)
{
    return get_activation_factory<PwmController, Windows::Devices::Pwm::IPwmControllerStatics>().GetControllersAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> PwmController::GetDefaultAsync()
{
    return get_activation_factory<PwmController, Windows::Devices::Pwm::IPwmControllerStatics2>().GetDefaultAsync();
}

inline hstring PwmController::GetDeviceSelector()
{
    return get_activation_factory<PwmController, Windows::Devices::Pwm::IPwmControllerStatics3>().GetDeviceSelector();
}

inline hstring PwmController::GetDeviceSelector(param::hstring const& friendlyName)
{
    return get_activation_factory<PwmController, Windows::Devices::Pwm::IPwmControllerStatics3>().GetDeviceSelector(friendlyName);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Pwm::PwmController> PwmController::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<PwmController, Windows::Devices::Pwm::IPwmControllerStatics3>().FromIdAsync(deviceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Pwm::IPwmController> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::IPwmController> {};
template<> struct hash<winrt::Windows::Devices::Pwm::IPwmControllerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::IPwmControllerStatics> {};
template<> struct hash<winrt::Windows::Devices::Pwm::IPwmControllerStatics2> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::IPwmControllerStatics2> {};
template<> struct hash<winrt::Windows::Devices::Pwm::IPwmControllerStatics3> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::IPwmControllerStatics3> {};
template<> struct hash<winrt::Windows::Devices::Pwm::IPwmPin> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::IPwmPin> {};
template<> struct hash<winrt::Windows::Devices::Pwm::PwmController> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::PwmController> {};
template<> struct hash<winrt::Windows::Devices::Pwm::PwmPin> : winrt::impl::hash_base<winrt::Windows::Devices::Pwm::PwmPin> {};

}

WINRT_WARNING_POP
