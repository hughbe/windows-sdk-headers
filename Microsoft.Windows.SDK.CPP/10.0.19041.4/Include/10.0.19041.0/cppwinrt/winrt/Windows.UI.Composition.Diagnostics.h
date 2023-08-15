// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Composition_Diagnostics_H
#define WINRT_Windows_UI_Composition_Diagnostics_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.Composition.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Composition.Diagnostics.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::Hide(Windows::UI::Composition::Visual const& subtree) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->Hide(*(void**)(&subtree)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::ShowMemoryUsage(Windows::UI::Composition::Visual const& subtree) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->ShowMemoryUsage(*(void**)(&subtree)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::ShowOverdraw(Windows::UI::Composition::Visual const& subtree, Windows::UI::Composition::Diagnostics::CompositionDebugOverdrawContentKinds const& contentKinds) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->ShowOverdraw(*(void**)(&subtree), static_cast<uint32_t>(contentKinds)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Diagnostics_ICompositionDebugHeatMaps<D>::ShowRedraw(Windows::UI::Composition::Visual const& subtree) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps)->ShowRedraw(*(void**)(&subtree)));
    }
    template <typename D> auto consume_Windows_UI_Composition_Diagnostics_ICompositionDebugSettings<D>::HeatMaps() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Diagnostics::ICompositionDebugSettings)->get_HeatMaps(&value));
        return Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Composition_Diagnostics_ICompositionDebugSettingsStatics<D>::TryGetSettings(Windows::UI::Composition::Compositor const& compositor) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics)->TryGetSettings(*(void**)(&compositor), &result));
        return Windows::UI::Composition::Diagnostics::CompositionDebugSettings{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps> : produce_base<D, Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps>
    {
        int32_t __stdcall Hide(void* subtree) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hide(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&subtree));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowMemoryUsage(void* subtree) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowMemoryUsage(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&subtree));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowOverdraw(void* subtree, uint32_t contentKinds) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowOverdraw(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&subtree), *reinterpret_cast<Windows::UI::Composition::Diagnostics::CompositionDebugOverdrawContentKinds const*>(&contentKinds));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ShowRedraw(void* subtree) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowRedraw(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&subtree));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Diagnostics::ICompositionDebugSettings> : produce_base<D, Windows::UI::Composition::Diagnostics::ICompositionDebugSettings>
    {
        int32_t __stdcall get_HeatMaps(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps>(this->shim().HeatMaps());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics> : produce_base<D, Windows::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics>
    {
        int32_t __stdcall TryGetSettings(void* compositor, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>(this->shim().TryGetSettings(*reinterpret_cast<Windows::UI::Composition::Compositor const*>(&compositor)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Composition::Diagnostics
{
    constexpr auto operator|(CompositionDebugOverdrawContentKinds const left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(CompositionDebugOverdrawContentKinds& left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(CompositionDebugOverdrawContentKinds const left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(CompositionDebugOverdrawContentKinds& left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(CompositionDebugOverdrawContentKinds const value) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(CompositionDebugOverdrawContentKinds const left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        return static_cast<CompositionDebugOverdrawContentKinds>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(CompositionDebugOverdrawContentKinds& left, CompositionDebugOverdrawContentKinds const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto CompositionDebugSettings::TryGetSettings(Windows::UI::Composition::Compositor const& compositor)
    {
        return impl::call_factory<CompositionDebugSettings, Windows::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics>([&](auto&& f) { return f.TryGetSettings(compositor); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Diagnostics::ICompositionDebugHeatMaps> {};
    template<> struct hash<winrt::Windows::UI::Composition::Diagnostics::ICompositionDebugSettings> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Diagnostics::ICompositionDebugSettings> {};
    template<> struct hash<winrt::Windows::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics> {};
    template<> struct hash<winrt::Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps> {};
    template<> struct hash<winrt::Windows::UI::Composition::Diagnostics::CompositionDebugSettings> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Diagnostics::CompositionDebugSettings> {};
}
#endif
