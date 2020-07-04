// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Management.Policies.2.h"
#include "winrt/Windows.Management.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Management_Policies_INamedPolicyData<D>::Area() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->get_Area(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_Policies_INamedPolicyData<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::Policies::NamedPolicyKind consume_Windows_Management_Policies_INamedPolicyData<D>::Kind() const
{
    Windows::Management::Policies::NamedPolicyKind value{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Policies_INamedPolicyData<D>::IsManaged() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->get_IsManaged(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Policies_INamedPolicyData<D>::IsUserPolicy() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->get_IsUserPolicy(&value));
    return value;
}

template <typename D> Windows::System::User consume_Windows_Management_Policies_INamedPolicyData<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->get_User(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Policies_INamedPolicyData<D>::GetBoolean() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->GetBoolean(&result));
    return result;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Management_Policies_INamedPolicyData<D>::GetBinary() const
{
    Windows::Storage::Streams::IBuffer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->GetBinary(put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Management_Policies_INamedPolicyData<D>::GetInt32() const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->GetInt32(&result));
    return result;
}

template <typename D> int64_t consume_Windows_Management_Policies_INamedPolicyData<D>::GetInt64() const
{
    int64_t result{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->GetInt64(&result));
    return result;
}

template <typename D> hstring consume_Windows_Management_Policies_INamedPolicyData<D>::GetString() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->GetString(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Management_Policies_INamedPolicyData<D>::Changed(Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> const& changedHandler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->add_Changed(get_abi(changedHandler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Management::Policies::INamedPolicyData> consume_Windows_Management_Policies_INamedPolicyData<D>::Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> const& changedHandler) const
{
    return impl::make_event_revoker<D, Windows::Management::Policies::INamedPolicyData>(this, &abi_t<Windows::Management::Policies::INamedPolicyData>::remove_Changed, Changed(changedHandler));
}

template <typename D> void consume_Windows_Management_Policies_INamedPolicyData<D>::Changed(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyData)->remove_Changed(get_abi(cookie)));
}

template <typename D> Windows::Management::Policies::NamedPolicyData consume_Windows_Management_Policies_INamedPolicyStatics<D>::GetPolicyFromPath(param::hstring const& area, param::hstring const& name) const
{
    Windows::Management::Policies::NamedPolicyData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyStatics)->GetPolicyFromPath(get_abi(area), get_abi(name), put_abi(result)));
    return result;
}

template <typename D> Windows::Management::Policies::NamedPolicyData consume_Windows_Management_Policies_INamedPolicyStatics<D>::GetPolicyFromPathForUser(Windows::System::User const& user, param::hstring const& area, param::hstring const& name) const
{
    Windows::Management::Policies::NamedPolicyData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Policies::INamedPolicyStatics)->GetPolicyFromPathForUser(get_abi(user), get_abi(area), get_abi(name), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Management::Policies::INamedPolicyData> : produce_base<D, Windows::Management::Policies::INamedPolicyData>
{
    HRESULT __stdcall get_Area(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Area());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::Management::Policies::NamedPolicyKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Management::Policies::NamedPolicyKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsManaged(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsManaged());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsUserPolicy(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsUserPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_User(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBoolean(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().GetBoolean());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetBinary(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetBinary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetInt32(int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int32_t>(this->shim().GetInt32());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetInt64(int64_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<int64_t>(this->shim().GetInt64());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetString(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetString());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Changed(void* changedHandler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().Changed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Management::Policies::NamedPolicyData, Windows::Foundation::IInspectable> const*>(&changedHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Changed(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Changed(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Policies::INamedPolicyStatics> : produce_base<D, Windows::Management::Policies::INamedPolicyStatics>
{
    HRESULT __stdcall GetPolicyFromPath(HSTRING area, HSTRING name, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Management::Policies::NamedPolicyData>(this->shim().GetPolicyFromPath(*reinterpret_cast<hstring const*>(&area), *reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPolicyFromPathForUser(void* user, HSTRING area, HSTRING name, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Management::Policies::NamedPolicyData>(this->shim().GetPolicyFromPathForUser(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&area), *reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Management::Policies {

inline Windows::Management::Policies::NamedPolicyData NamedPolicy::GetPolicyFromPath(param::hstring const& area, param::hstring const& name)
{
    return get_activation_factory<NamedPolicy, Windows::Management::Policies::INamedPolicyStatics>().GetPolicyFromPath(area, name);
}

inline Windows::Management::Policies::NamedPolicyData NamedPolicy::GetPolicyFromPathForUser(Windows::System::User const& user, param::hstring const& area, param::hstring const& name)
{
    return get_activation_factory<NamedPolicy, Windows::Management::Policies::INamedPolicyStatics>().GetPolicyFromPathForUser(user, area, name);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Policies::INamedPolicyData> : winrt::impl::hash_base<winrt::Windows::Management::Policies::INamedPolicyData> {};
template<> struct hash<winrt::Windows::Management::Policies::INamedPolicyStatics> : winrt::impl::hash_base<winrt::Windows::Management::Policies::INamedPolicyStatics> {};
template<> struct hash<winrt::Windows::Management::Policies::NamedPolicy> : winrt::impl::hash_base<winrt::Windows::Management::Policies::NamedPolicy> {};
template<> struct hash<winrt::Windows::Management::Policies::NamedPolicyData> : winrt::impl::hash_base<winrt::Windows::Management::Policies::NamedPolicyData> {};

}

WINRT_WARNING_POP
