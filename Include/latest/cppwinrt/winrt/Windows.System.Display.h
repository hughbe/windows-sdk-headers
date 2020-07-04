// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Display_H
#define WINRT_Windows_System_Display_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.System.h"
#include "winrt/impl/Windows.System.Display.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_Display_IDisplayRequest<D>::RequestActive() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Display::IDisplayRequest)->RequestActive());
    }
    template <typename D> auto consume_Windows_System_Display_IDisplayRequest<D>::RequestRelease() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::System::Display::IDisplayRequest)->RequestRelease());
    }
    template <typename D>
    struct produce<D, Windows::System::Display::IDisplayRequest> : produce_base<D, Windows::System::Display::IDisplayRequest>
    {
        int32_t __stdcall RequestActive() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestActive();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestRelease() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestRelease();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::System::Display
{
    inline DisplayRequest::DisplayRequest() :
        DisplayRequest(impl::call_factory<DisplayRequest>([](auto&& f) { return f.template ActivateInstance<DisplayRequest>(); }))
    {
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::System::Display::IDisplayRequest> : winrt::impl::hash_base<winrt::Windows::System::Display::IDisplayRequest> {};
    template<> struct hash<winrt::Windows::System::Display::DisplayRequest> : winrt::impl::hash_base<winrt::Windows::System::Display::DisplayRequest> {};
}
#endif
