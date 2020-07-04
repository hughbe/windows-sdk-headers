// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.ViewManagement.Core.2.h"
#include "winrt/Windows.UI.ViewManagement.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::OcclusionsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->add_OcclusionsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView> consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::OcclusionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::Core::ICoreInputView>(this, &abi_t<Windows::UI::ViewManagement::Core::ICoreInputView>::remove_OcclusionsChanged, OcclusionsChanged(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::OcclusionsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->remove_OcclusionsChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::GetCoreInputViewOcclusions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->GetCoreInputViewOcclusions(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::TryShowPrimaryView() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->TryShowPrimaryView(&result));
    return result;
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>::TryHidePrimaryView() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView)->TryHidePrimaryView(&result));
    return result;
}

template <typename D> event_token consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>::XYFocusTransferringFromPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView2)->add_XYFocusTransferringFromPrimaryView(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2> consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>::XYFocusTransferringFromPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::Core::ICoreInputView2>(this, &abi_t<Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferringFromPrimaryView, XYFocusTransferringFromPrimaryView(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>::XYFocusTransferringFromPrimaryView(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView2)->remove_XYFocusTransferringFromPrimaryView(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>::XYFocusTransferredToPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView2)->add_XYFocusTransferredToPrimaryView(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2> consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>::XYFocusTransferredToPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::ViewManagement::Core::ICoreInputView2>(this, &abi_t<Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferredToPrimaryView, XYFocusTransferredToPrimaryView(handler));
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>::XYFocusTransferredToPrimaryView(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView2)->remove_XYFocusTransferredToPrimaryView(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>::TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect const& origin, Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection const& direction) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputView2)->TryTransferXYFocusToPrimaryView(get_abi(origin), get_abi(direction), &result));
    return result;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>::OccludingRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion)->get_OccludingRect(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>::OcclusionKind() const
{
    Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion)->get_OcclusionKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>::Occlusions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs)->get_Occlusions(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs)->put_Handled(value));
}

template <typename D> Windows::UI::ViewManagement::Core::CoreInputView consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics<D>::GetForCurrentView() const
{
    Windows::UI::ViewManagement::Core::CoreInputView result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewStatics)->GetForCurrentView(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>::Origin() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs)->get_Origin(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>::Direction() const
{
    Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>::TransferHandled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs)->put_TransferHandled(value));
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>::TransferHandled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs)->get_TransferHandled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>::KeepPrimaryViewVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs)->put_KeepPrimaryViewVisible(value));
}

template <typename D> bool consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>::KeepPrimaryViewVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs)->get_KeepPrimaryViewVisible(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputView> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputView>
{
    HRESULT __stdcall add_OcclusionsChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().OcclusionsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OcclusionsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OcclusionsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCoreInputViewOcclusions(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>>(this->shim().GetCoreInputViewOcclusions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryShowPrimaryView(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryShowPrimaryView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryHidePrimaryView(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryHidePrimaryView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputView2> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputView2>
{
    HRESULT __stdcall add_XYFocusTransferringFromPrimaryView(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().XYFocusTransferringFromPrimaryView(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_XYFocusTransferringFromPrimaryView(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusTransferringFromPrimaryView(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_XYFocusTransferredToPrimaryView(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().XYFocusTransferredToPrimaryView(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_XYFocusTransferredToPrimaryView(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusTransferredToPrimaryView(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect origin, Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection direction, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().TryTransferXYFocusToPrimaryView(*reinterpret_cast<Windows::Foundation::Rect const*>(&origin), *reinterpret_cast<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection const*>(&direction)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
{
    HRESULT __stdcall get_OccludingRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().OccludingRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OcclusionKind(Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>(this->shim().OcclusionKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
{
    HRESULT __stdcall get_Occlusions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>>(this->shim().Occlusions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputViewStatics> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
{
    HRESULT __stdcall GetForCurrentView(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::ViewManagement::Core::CoreInputView>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs> : produce_base<D, Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>
{
    HRESULT __stdcall get_Origin(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Origin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransferHandled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransferHandled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransferHandled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().TransferHandled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KeepPrimaryViewVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeepPrimaryViewVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeepPrimaryViewVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().KeepPrimaryViewVisible());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core {

inline Windows::UI::ViewManagement::Core::CoreInputView CoreInputView::GetForCurrentView()
{
    return get_activation_factory<CoreInputView, Windows::UI::ViewManagement::Core::ICoreInputViewStatics>().GetForCurrentView();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputView> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::ICoreInputView> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::CoreInputView> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::CoreInputView> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> {};

}

WINRT_WARNING_POP
