// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.AppService.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.System.Diagnostics.DevicePortal.2.h"
#include "winrt/Windows.System.Diagnostics.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>(this, &abi_t<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>::remove_Closed, Closed(handler));
}

template <typename D> void consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->remove_Closed(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::RequestReceived(Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->add_RequestReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::RequestReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>(this, &abi_t<Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>::remove_RequestReceived, RequestReceived(handler));
}

template <typename D> void consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection<D>::RequestReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection)->remove_RequestReceived(get_abi(token)));
}

template <typename D> Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionClosedEventArgs<D>::Reason() const
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionRequestReceivedEventArgs<D>::RequestMessage() const
{
    Windows::Web::Http::HttpRequestMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs)->get_RequestMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionRequestReceivedEventArgs<D>::ResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs)->get_ResponseMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::DevicePortal::DevicePortalConnection consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionStatics<D>::GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) const
{
    Windows::System::Diagnostics::DevicePortal::DevicePortalConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics)->GetForAppServiceConnection(get_abi(appServiceConnection), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Sockets::ServerMessageWebSocket consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnection<D>::GetServerMessageWebSocketForRequest(Windows::Web::Http::HttpRequestMessage const& request) const
{
    Windows::Networking::Sockets::ServerMessageWebSocket result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection)->GetServerMessageWebSocketForRequest(get_abi(request), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::Sockets::ServerMessageWebSocket consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnection<D>::GetServerMessageWebSocketForRequest(Windows::Web::Http::HttpRequestMessage const& request, Windows::Networking::Sockets::SocketMessageType const& messageType, param::hstring const& protocol) const
{
    Windows::Networking::Sockets::ServerMessageWebSocket result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection)->GetServerMessageWebSocketForRequest2(get_abi(request), get_abi(messageType), get_abi(protocol), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::Sockets::ServerMessageWebSocket consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnection<D>::GetServerMessageWebSocketForRequest(Windows::Web::Http::HttpRequestMessage const& request, Windows::Networking::Sockets::SocketMessageType const& messageType, param::hstring const& protocol, uint32_t outboundBufferSizeInBytes, uint32_t maxMessageSize, Windows::Networking::Sockets::MessageWebSocketReceiveMode const& receiveMode) const
{
    Windows::Networking::Sockets::ServerMessageWebSocket result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection)->GetServerMessageWebSocketForRequest3(get_abi(request), get_abi(messageType), get_abi(protocol), outboundBufferSizeInBytes, maxMessageSize, get_abi(receiveMode), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::Sockets::ServerStreamWebSocket consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnection<D>::GetServerStreamWebSocketForRequest(Windows::Web::Http::HttpRequestMessage const& request) const
{
    Windows::Networking::Sockets::ServerStreamWebSocket result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection)->GetServerStreamWebSocketForRequest(get_abi(request), put_abi(result)));
    return result;
}

template <typename D> Windows::Networking::Sockets::ServerStreamWebSocket consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnection<D>::GetServerStreamWebSocketForRequest(Windows::Web::Http::HttpRequestMessage const& request, param::hstring const& protocol, uint32_t outboundBufferSizeInBytes, bool noDelay) const
{
    Windows::Networking::Sockets::ServerStreamWebSocket result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection)->GetServerStreamWebSocketForRequest2(get_abi(request), get_abi(protocol), outboundBufferSizeInBytes, noDelay, put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnectionRequestReceivedEventArgs<D>::IsWebSocketUpgradeRequest() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs)->get_IsWebSocketUpgradeRequest(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnectionRequestReceivedEventArgs<D>::WebSocketProtocolsRequested() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs)->get_WebSocketProtocolsRequested(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnectionRequestReceivedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection>
{
    HRESULT __stdcall add_Closed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RequestReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RequestReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs>
{
    HRESULT __stdcall get_RequestMessage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::HttpRequestMessage>(this->shim().RequestMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseMessage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::Http::HttpResponseMessage>(this->shim().ResponseMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>
{
    HRESULT __stdcall GetForAppServiceConnection(void* appServiceConnection, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::DevicePortal::DevicePortalConnection>(this->shim().GetForAppServiceConnection(*reinterpret_cast<Windows::ApplicationModel::AppService::AppServiceConnection const*>(&appServiceConnection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection>
{
    HRESULT __stdcall GetServerMessageWebSocketForRequest(void* request, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Sockets::ServerMessageWebSocket>(this->shim().GetServerMessageWebSocketForRequest(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetServerMessageWebSocketForRequest2(void* request, Windows::Networking::Sockets::SocketMessageType messageType, HSTRING protocol, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Sockets::ServerMessageWebSocket>(this->shim().GetServerMessageWebSocketForRequest(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request), *reinterpret_cast<Windows::Networking::Sockets::SocketMessageType const*>(&messageType), *reinterpret_cast<hstring const*>(&protocol)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetServerMessageWebSocketForRequest3(void* request, Windows::Networking::Sockets::SocketMessageType messageType, HSTRING protocol, uint32_t outboundBufferSizeInBytes, uint32_t maxMessageSize, Windows::Networking::Sockets::MessageWebSocketReceiveMode receiveMode, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Sockets::ServerMessageWebSocket>(this->shim().GetServerMessageWebSocketForRequest(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request), *reinterpret_cast<Windows::Networking::Sockets::SocketMessageType const*>(&messageType), *reinterpret_cast<hstring const*>(&protocol), outboundBufferSizeInBytes, maxMessageSize, *reinterpret_cast<Windows::Networking::Sockets::MessageWebSocketReceiveMode const*>(&receiveMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetServerStreamWebSocketForRequest(void* request, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Sockets::ServerStreamWebSocket>(this->shim().GetServerStreamWebSocketForRequest(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetServerStreamWebSocketForRequest2(void* request, HSTRING protocol, uint32_t outboundBufferSizeInBytes, bool noDelay, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Sockets::ServerStreamWebSocket>(this->shim().GetServerStreamWebSocketForRequest(*reinterpret_cast<Windows::Web::Http::HttpRequestMessage const*>(&request), *reinterpret_cast<hstring const*>(&protocol), outboundBufferSizeInBytes, noDelay));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs> : produce_base<D, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs>
{
    HRESULT __stdcall get_IsWebSocketUpgradeRequest(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWebSocketUpgradeRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WebSocketProtocolsRequested(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().WebSocketProtocolsRequested());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::DevicePortal {

inline Windows::System::Diagnostics::DevicePortal::DevicePortalConnection DevicePortalConnection::GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection)
{
    return get_activation_factory<DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics>().GetForAppServiceConnection(appServiceConnection);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionStatics> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnection> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionClosedEventArgs> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DevicePortal::DevicePortalConnectionRequestReceivedEventArgs> {};

}

WINRT_WARNING_POP
