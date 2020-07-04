// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"

namespace winrt::impl {

template <typename D> Windows::Networking::HostName consume_Windows_Networking_IEndpointPair<D>::LocalHostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->get_LocalHostName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_IEndpointPair<D>::LocalHostName(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->put_LocalHostName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_IEndpointPair<D>::LocalServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->get_LocalServiceName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_IEndpointPair<D>::LocalServiceName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->put_LocalServiceName(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_IEndpointPair<D>::RemoteHostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->get_RemoteHostName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_IEndpointPair<D>::RemoteHostName(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->put_RemoteHostName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_IEndpointPair<D>::RemoteServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->get_RemoteServiceName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_IEndpointPair<D>::RemoteServiceName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPair)->put_RemoteServiceName(get_abi(value)));
}

template <typename D> Windows::Networking::EndpointPair consume_Windows_Networking_IEndpointPairFactory<D>::CreateEndpointPair(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName, Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) const
{
    Windows::Networking::EndpointPair value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::IEndpointPairFactory)->CreateEndpointPair(get_abi(localHostName), get_abi(localServiceName), get_abi(remoteHostName), get_abi(remoteServiceName), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::IPInformation consume_Windows_Networking_IHostName<D>::IPInformation() const
{
    Windows::Networking::Connectivity::IPInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::IHostName)->get_IPInformation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_IHostName<D>::RawName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::IHostName)->get_RawName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_IHostName<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::IHostName)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_IHostName<D>::CanonicalName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::IHostName)->get_CanonicalName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostNameType consume_Windows_Networking_IHostName<D>::Type() const
{
    Windows::Networking::HostNameType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::IHostName)->get_Type(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_IHostName<D>::IsEqual(Windows::Networking::HostName const& hostName) const
{
    bool isEqual{};
    check_hresult(WINRT_SHIM(Windows::Networking::IHostName)->IsEqual(get_abi(hostName), &isEqual));
    return isEqual;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_IHostNameFactory<D>::CreateHostName(param::hstring const& hostName) const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::IHostNameFactory)->CreateHostName(get_abi(hostName), put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Networking_IHostNameStatics<D>::Compare(param::hstring const& value1, param::hstring const& value2) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Networking::IHostNameStatics)->Compare(get_abi(value1), get_abi(value2), &result));
    return result;
}

template <typename D>
struct produce<D, Windows::Networking::IEndpointPair> : produce_base<D, Windows::Networking::IEndpointPair>
{
    HRESULT __stdcall get_LocalHostName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().LocalHostName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LocalHostName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalHostName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalServiceName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalServiceName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LocalServiceName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LocalServiceName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteHostName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().RemoteHostName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteHostName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteHostName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteServiceName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteServiceName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteServiceName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteServiceName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::IEndpointPairFactory> : produce_base<D, Windows::Networking::IEndpointPairFactory>
{
    HRESULT __stdcall CreateEndpointPair(void* localHostName, HSTRING localServiceName, void* remoteHostName, HSTRING remoteServiceName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::EndpointPair>(this->shim().CreateEndpointPair(*reinterpret_cast<Windows::Networking::HostName const*>(&localHostName), *reinterpret_cast<hstring const*>(&localServiceName), *reinterpret_cast<Windows::Networking::HostName const*>(&remoteHostName), *reinterpret_cast<hstring const*>(&remoteServiceName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::IHostName> : produce_base<D, Windows::Networking::IHostName>
{
    HRESULT __stdcall get_IPInformation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::IPInformation>(this->shim().IPInformation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RawName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanonicalName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CanonicalName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Networking::HostNameType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostNameType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsEqual(void* hostName, bool* isEqual) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isEqual = detach_from<bool>(this->shim().IsEqual(*reinterpret_cast<Windows::Networking::HostName const*>(&hostName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::IHostNameFactory> : produce_base<D, Windows::Networking::IHostNameFactory>
{
    HRESULT __stdcall CreateHostName(HSTRING hostName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().CreateHostName(*reinterpret_cast<hstring const*>(&hostName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::IHostNameStatics> : produce_base<D, Windows::Networking::IHostNameStatics>
{
    HRESULT __stdcall Compare(HSTRING value1, HSTRING value2, int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().Compare(*reinterpret_cast<hstring const*>(&value1), *reinterpret_cast<hstring const*>(&value2)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking {

inline EndpointPair::EndpointPair(Windows::Networking::HostName const& localHostName, param::hstring const& localServiceName, Windows::Networking::HostName const& remoteHostName, param::hstring const& remoteServiceName) :
    EndpointPair(get_activation_factory<EndpointPair, Windows::Networking::IEndpointPairFactory>().CreateEndpointPair(localHostName, localServiceName, remoteHostName, remoteServiceName))
{}

inline HostName::HostName(param::hstring const& hostName) :
    HostName(get_activation_factory<HostName, Windows::Networking::IHostNameFactory>().CreateHostName(hostName))
{}

inline int32_t HostName::Compare(param::hstring const& value1, param::hstring const& value2)
{
    return get_activation_factory<HostName, Windows::Networking::IHostNameStatics>().Compare(value1, value2);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::IEndpointPair> : winrt::impl::hash_base<winrt::Windows::Networking::IEndpointPair> {};
template<> struct hash<winrt::Windows::Networking::IEndpointPairFactory> : winrt::impl::hash_base<winrt::Windows::Networking::IEndpointPairFactory> {};
template<> struct hash<winrt::Windows::Networking::IHostName> : winrt::impl::hash_base<winrt::Windows::Networking::IHostName> {};
template<> struct hash<winrt::Windows::Networking::IHostNameFactory> : winrt::impl::hash_base<winrt::Windows::Networking::IHostNameFactory> {};
template<> struct hash<winrt::Windows::Networking::IHostNameStatics> : winrt::impl::hash_base<winrt::Windows::Networking::IHostNameStatics> {};
template<> struct hash<winrt::Windows::Networking::EndpointPair> : winrt::impl::hash_base<winrt::Windows::Networking::EndpointPair> {};
template<> struct hash<winrt::Windows::Networking::HostName> : winrt::impl::hash_base<winrt::Windows::Networking::HostName> {};

}

WINRT_WARNING_POP
