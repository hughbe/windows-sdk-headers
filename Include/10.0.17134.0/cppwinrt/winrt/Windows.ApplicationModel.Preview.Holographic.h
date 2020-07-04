// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Holographic.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsCurrentViewPresentedOnHolographicDisplay() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsCurrentViewPresentedOnHolographicDisplay(&result));
    return result;
}

template <typename D> bool consume_Windows_ApplicationModel_Preview_Holographic_IHolographicApplicationPreviewStatics<D>::IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics)->IsHolographicActivation(get_abi(activatedEventArgs), &result));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : produce_base<D, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>
{
    HRESULT __stdcall IsCurrentViewPresentedOnHolographicDisplay(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCurrentViewPresentedOnHolographicDisplay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsHolographicActivation(void* activatedEventArgs, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsHolographicActivation(*reinterpret_cast<Windows::ApplicationModel::Activation::IActivatedEventArgs const*>(&activatedEventArgs)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Holographic {

inline bool HolographicApplicationPreview::IsCurrentViewPresentedOnHolographicDisplay()
{
    return get_activation_factory<HolographicApplicationPreview, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>().IsCurrentViewPresentedOnHolographicDisplay();
}

inline bool HolographicApplicationPreview::IsHolographicActivation(Windows::ApplicationModel::Activation::IActivatedEventArgs const& activatedEventArgs)
{
    return get_activation_factory<HolographicApplicationPreview, Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics>().IsHolographicActivation(activatedEventArgs);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Holographic::IHolographicApplicationPreviewStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Holographic::HolographicApplicationPreview> {};

}

WINRT_WARNING_POP
