// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_Preview_H
#define WINRT_Windows_Gaming_Input_Preview_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Gaming.Input.h"
#include "winrt/impl/Windows.Gaming.Input.Custom.2.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>::GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics)->GetParentProviderId(*(void**)(&provider), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>::GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics)->GetProviderId(*(void**)(&provider), &value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> : produce_base<D, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        int32_t __stdcall GetParentProviderId(void* provider, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetParentProviderId(*reinterpret_cast<Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetProviderId(void* provider, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetProviderId(*reinterpret_cast<Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::Gaming::Input::Preview
{
    inline auto GameControllerProviderInfo::GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider)
    {
        return impl::call_factory<GameControllerProviderInfo, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>([&](auto&& f) { return f.GetParentProviderId(provider); });
    }
    inline auto GameControllerProviderInfo::GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider)
    {
        return impl::call_factory<GameControllerProviderInfo, Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>([&](auto&& f) { return f.GetProviderId(provider); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> : winrt::impl::hash_base<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> {};
    template<> struct hash<winrt::Windows::Gaming::Input::Preview::GameControllerProviderInfo> : winrt::impl::hash_base<winrt::Windows::Gaming::Input::Preview::GameControllerProviderInfo> {};
}
#endif
