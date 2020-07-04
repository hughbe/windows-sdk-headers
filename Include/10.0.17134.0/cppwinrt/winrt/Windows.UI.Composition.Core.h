// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Composition.Core.2.h"
#include "winrt/Windows.UI.Composition.h"

namespace winrt::impl {

template <typename D> Windows::UI::Composition::Compositor consume_Windows_UI_Composition_Core_ICompositorController<D>::Compositor() const
{
    Windows::UI::Composition::Compositor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Core::ICompositorController)->get_Compositor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Core_ICompositorController<D>::Commit() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Core::ICompositorController)->Commit());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_Composition_Core_ICompositorController<D>::EnsurePreviousCommitCompletedAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Core::ICompositorController)->EnsurePreviousCommitCompletedAsync(put_abi(action)));
    return action;
}

template <typename D> event_token consume_Windows_UI_Composition_Core_ICompositorController<D>::CommitNeeded(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::Core::CompositorController, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Core::ICompositorController)->add_CommitNeeded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Composition::Core::ICompositorController> consume_Windows_UI_Composition_Core_ICompositorController<D>::CommitNeeded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::Core::CompositorController, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Composition::Core::ICompositorController>(this, &abi_t<Windows::UI::Composition::Core::ICompositorController>::remove_CommitNeeded, CommitNeeded(handler));
}

template <typename D> void consume_Windows_UI_Composition_Core_ICompositorController<D>::CommitNeeded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Core::ICompositorController)->remove_CommitNeeded(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::UI::Composition::Core::ICompositorController> : produce_base<D, Windows::UI::Composition::Core::ICompositorController>
{
    HRESULT __stdcall get_Compositor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Compositor>(this->shim().Compositor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Commit() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Commit();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EnsurePreviousCommitCompletedAsync(void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().EnsurePreviousCommitCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CommitNeeded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CommitNeeded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Composition::Core::CompositorController, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CommitNeeded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitNeeded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Core {

inline CompositorController::CompositorController() :
    CompositorController(get_activation_factory<CompositorController>().ActivateInstance<CompositorController>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Composition::Core::ICompositorController> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Core::ICompositorController> {};
template<> struct hash<winrt::Windows::UI::Composition::Core::CompositorController> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Core::CompositorController> {};

}

WINRT_WARNING_POP
