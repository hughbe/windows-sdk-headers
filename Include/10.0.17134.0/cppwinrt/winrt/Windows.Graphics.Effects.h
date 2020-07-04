﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Graphics_Effects_IGraphicsEffect<D>::Name() const
{
    hstring name{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Effects::IGraphicsEffect)->get_Name(put_abi(name)));
    return name;
}

template <typename D> void consume_Windows_Graphics_Effects_IGraphicsEffect<D>::Name(param::hstring const& name) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Effects::IGraphicsEffect)->put_Name(get_abi(name)));
}

template <typename D>
struct produce<D, Windows::Graphics::Effects::IGraphicsEffect> : produce_base<D, Windows::Graphics::Effects::IGraphicsEffect>
{
    HRESULT __stdcall get_Name(HSTRING* name) noexcept final
    {
        try
        {
            *name = nullptr;
            typename D::abi_guard guard(this->shim());
            *name = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Name(HSTRING name) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&name));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Effects::IGraphicsEffectSource> : produce_base<D, Windows::Graphics::Effects::IGraphicsEffectSource>
{};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Effects {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Effects::IGraphicsEffect> : winrt::impl::hash_base<winrt::Windows::Graphics::Effects::IGraphicsEffect> {};
template<> struct hash<winrt::Windows::Graphics::Effects::IGraphicsEffectSource> : winrt::impl::hash_base<winrt::Windows::Graphics::Effects::IGraphicsEffectSource> {};

}

WINRT_WARNING_POP
