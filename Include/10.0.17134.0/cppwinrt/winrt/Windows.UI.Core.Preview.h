// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Core.Preview.2.h"
#include "winrt/Windows.UI.Core.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs)->put_Handled(value));
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreview<D>::CloseRequested(Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Core::Preview::ISystemNavigationManagerPreview)->add_CloseRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Core::Preview::ISystemNavigationManagerPreview> consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreview<D>::CloseRequested(auto_revoke_t, Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreview>(this, &abi_t<Windows::UI::Core::Preview::ISystemNavigationManagerPreview>::remove_CloseRequested, CloseRequested(handler));
}

template <typename D> void consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreview<D>::CloseRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Core::Preview::ISystemNavigationManagerPreview)->remove_CloseRequested(get_abi(token)));
}

template <typename D> Windows::UI::Core::Preview::SystemNavigationManagerPreview consume_Windows_UI_Core_Preview_ISystemNavigationManagerPreviewStatics<D>::GetForCurrentView() const
{
    Windows::UI::Core::Preview::SystemNavigationManagerPreview loader{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics)->GetForCurrentView(put_abi(loader)));
    return loader;
}

template <typename D>
struct produce<D, Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs> : produce_base<D, Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs>
{
    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreview> : produce_base<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreview>
{
    HRESULT __stdcall add_CloseRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CloseRequested(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CloseRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CloseRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics> : produce_base<D, Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>
{
    HRESULT __stdcall GetForCurrentView(void** loader) noexcept final
    {
        try
        {
            *loader = nullptr;
            typename D::abi_guard guard(this->shim());
            *loader = detach_from<Windows::UI::Core::Preview::SystemNavigationManagerPreview>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Core::Preview {

inline Windows::UI::Core::Preview::SystemNavigationManagerPreview SystemNavigationManagerPreview::GetForCurrentView()
{
    return get_activation_factory<SystemNavigationManagerPreview, Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics>().GetForCurrentView();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs> {};
template<> struct hash<winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview> : winrt::impl::hash_base<winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreview> {};
template<> struct hash<winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics> : winrt::impl::hash_base<winrt::Windows::UI::Core::Preview::ISystemNavigationManagerPreviewStatics> {};
template<> struct hash<winrt::Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> {};
template<> struct hash<winrt::Windows::UI::Core::Preview::SystemNavigationManagerPreview> : winrt::impl::hash_base<winrt::Windows::UI::Core::Preview::SystemNavigationManagerPreview> {};

}

WINRT_WARNING_POP
