// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Devices.Enumeration.Pnp.2.h"
#include "winrt/Windows.Devices.Enumeration.h"

namespace winrt::impl {

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectType consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Type() const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->get_Type(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObject<D>::Update(Windows::Devices::Enumeration::Pnp::PnpObjectUpdate const& updateInfo) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObject)->Update(get_abi(updateInfo)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::hstring const& id, param::async_iterable<hstring> const& requestedProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->CreateFromIdAsync(get_abi(type), get_abi(id), get_abi(requestedProperties), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->FindAllAsync(get_abi(type), get_abi(requestedProperties), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> asyncOp{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->FindAllAsyncAqsFilter(get_abi(type), get_abi(requestedProperties), get_abi(aqsFilter), put_abi(asyncOp)));
    return asyncOp;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectWatcher consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties) const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->CreateWatcher(get_abi(type), get_abi(requestedProperties), put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectWatcher consume_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics<D>::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter) const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectStatics)->CreateWatcherAqsFilter(get_abi(type), get_abi(requestedProperties), get_abi(aqsFilter), put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Devices::Enumeration::Pnp::PnpObjectType consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>::Type() const
{
    Windows::Devices::Enumeration::Pnp::PnpObjectType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate)->get_Type(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>(this, &abi_t<Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus status{};
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->get_Status(put_abi(status)));
    return status;
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher)->Stop());
}

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObject> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObject>
{
    HRESULT __stdcall get_Type(Windows::Devices::Enumeration::Pnp::PnpObjectType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::Pnp::PnpObjectType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Update(void* updateInfo) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Update(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectUpdate const*>(&updateInfo));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>
{
    HRESULT __stdcall CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, HSTRING id, void* requestedProperties, void** asyncOp) noexcept final
    {
        try
        {
            *asyncOp = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject>>(this->shim().CreateFromIdAsync(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType type, void* requestedProperties, void** asyncOp) noexcept final
    {
        try
        {
            *asyncOp = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>>(this->shim().FindAllAsync(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsyncAqsFilter(Windows::Devices::Enumeration::Pnp::PnpObjectType type, void* requestedProperties, HSTRING aqsFilter, void** asyncOp) noexcept final
    {
        try
        {
            *asyncOp = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOp = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection>>(this->shim().FindAllAsync(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties), *reinterpret_cast<hstring const*>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType type, void* requestedProperties, void** watcher) noexcept final
    {
        try
        {
            *watcher = nullptr;
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>(this->shim().CreateWatcher(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcherAqsFilter(Windows::Devices::Enumeration::Pnp::PnpObjectType type, void* requestedProperties, HSTRING aqsFilter, void** watcher) noexcept final
    {
        try
        {
            *watcher = nullptr;
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher>(this->shim().CreateWatcher(*reinterpret_cast<Windows::Devices::Enumeration::Pnp::PnpObjectType const*>(&type), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&requestedProperties), *reinterpret_cast<hstring const*>(&aqsFilter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate>
{
    HRESULT __stdcall get_Type(Windows::Devices::Enumeration::Pnp::PnpObjectType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::Pnp::PnpObjectType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> : produce_base<D, Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher>
{
    HRESULT __stdcall add_Added(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObject> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::Pnp::PnpObjectWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_from<Windows::Devices::Enumeration::DeviceWatcherStatus>(this->shim().Status());
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
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration::Pnp {

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObject> PnpObject::CreateFromIdAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::hstring const& id, param::async_iterable<hstring> const& requestedProperties)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().CreateFromIdAsync(type, id, requestedProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> PnpObject::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().FindAllAsync(type, requestedProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::Pnp::PnpObjectCollection> PnpObject::FindAllAsync(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::async_iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().FindAllAsync(type, requestedProperties, aqsFilter);
}

inline Windows::Devices::Enumeration::Pnp::PnpObjectWatcher PnpObject::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().CreateWatcher(type, requestedProperties);
}

inline Windows::Devices::Enumeration::Pnp::PnpObjectWatcher PnpObject::CreateWatcher(Windows::Devices::Enumeration::Pnp::PnpObjectType const& type, param::iterable<hstring> const& requestedProperties, param::hstring const& aqsFilter)
{
    return get_activation_factory<PnpObject, Windows::Devices::Enumeration::Pnp::IPnpObjectStatics>().CreateWatcher(type, requestedProperties, aqsFilter);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObject> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::IPnpObject> {};
template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectStatics> {};
template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate> {};
template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher> {};
template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObject> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::PnpObject> {};
template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectCollection> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectCollection> {};
template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate> {};
template<> struct hash<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher> {};

}

WINRT_WARNING_POP
