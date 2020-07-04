﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Services.Cortana.2.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->IsSupported(&result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::ArePermissionsGrantedAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
{
    Windows::Foundation::IAsyncOperation<bool> getGrantedPermissionsOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->ArePermissionsGrantedAsync(get_abi(permissions), put_abi(getGrantedPermissionsOperation)));
    return getGrantedPermissionsOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::GrantPermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> grantOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->GrantPermissionsAsync(get_abi(permissions), put_abi(grantOperation)));
    return grantOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> consume_Windows_Services_Cortana_ICortanaPermissionsManager<D>::RevokePermissionsAsync(param::async_iterable<Windows::Services::Cortana::CortanaPermission> const& permissions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult> revokeOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManager)->RevokePermissionsAsync(get_abi(permissions), put_abi(revokeOperation)));
    return revokeOperation;
}

template <typename D> Windows::Services::Cortana::CortanaPermissionsManager consume_Windows_Services_Cortana_ICortanaPermissionsManagerStatics<D>::GetDefault() const
{
    Windows::Services::Cortana::CortanaPermissionsManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaPermissionsManagerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Services_Cortana_ICortanaSettings<D>::HasUserConsentToVoiceActivation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaSettings)->get_HasUserConsentToVoiceActivation(&value));
    return value;
}

template <typename D> bool consume_Windows_Services_Cortana_ICortanaSettings<D>::IsVoiceActivationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaSettings)->get_IsVoiceActivationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Cortana_ICortanaSettings<D>::IsVoiceActivationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaSettings)->put_IsVoiceActivationEnabled(value));
}

template <typename D> bool consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaSettingsStatics)->IsSupported(&value));
    return value;
}

template <typename D> Windows::Services::Cortana::CortanaSettings consume_Windows_Services_Cortana_ICortanaSettingsStatics<D>::GetDefault() const
{
    Windows::Services::Cortana::CortanaSettings result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Cortana::ICortanaSettingsStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManager> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManager>
{
    HRESULT __stdcall IsSupported(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ArePermissionsGrantedAsync(void* permissions, void** getGrantedPermissionsOperation) noexcept final
    {
        try
        {
            *getGrantedPermissionsOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *getGrantedPermissionsOperation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ArePermissionsGrantedAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GrantPermissionsAsync(void* permissions, void** grantOperation) noexcept final
    {
        try
        {
            *grantOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *grantOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>>(this->shim().GrantPermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RevokePermissionsAsync(void* permissions, void** revokeOperation) noexcept final
    {
        try
        {
            *revokeOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *revokeOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Cortana::CortanaPermissionsChangeResult>>(this->shim().RevokePermissionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Services::Cortana::CortanaPermission> const*>(&permissions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : produce_base<D, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>
{
    HRESULT __stdcall GetDefault(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaPermissionsManager>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaSettings> : produce_base<D, Windows::Services::Cortana::ICortanaSettings>
{
    HRESULT __stdcall get_HasUserConsentToVoiceActivation(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasUserConsentToVoiceActivation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsVoiceActivationEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVoiceActivationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsVoiceActivationEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVoiceActivationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Cortana::ICortanaSettingsStatics> : produce_base<D, Windows::Services::Cortana::ICortanaSettingsStatics>
{
    HRESULT __stdcall IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDefault(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Services::Cortana::CortanaSettings>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Services::Cortana {

inline Windows::Services::Cortana::CortanaPermissionsManager CortanaPermissionsManager::GetDefault()
{
    return get_activation_factory<CortanaPermissionsManager, Windows::Services::Cortana::ICortanaPermissionsManagerStatics>().GetDefault();
}

inline bool CortanaSettings::IsSupported()
{
    return get_activation_factory<CortanaSettings, Windows::Services::Cortana::ICortanaSettingsStatics>().IsSupported();
}

inline Windows::Services::Cortana::CortanaSettings CortanaSettings::GetDefault()
{
    return get_activation_factory<CortanaSettings, Windows::Services::Cortana::ICortanaSettingsStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManager> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaPermissionsManager> {};
template<> struct hash<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaPermissionsManagerStatics> {};
template<> struct hash<winrt::Windows::Services::Cortana::ICortanaSettings> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaSettings> {};
template<> struct hash<winrt::Windows::Services::Cortana::ICortanaSettingsStatics> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::ICortanaSettingsStatics> {};
template<> struct hash<winrt::Windows::Services::Cortana::CortanaPermissionsManager> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::CortanaPermissionsManager> {};
template<> struct hash<winrt::Windows::Services::Cortana::CortanaSettings> : winrt::impl::hash_base<winrt::Windows::Services::Cortana::CortanaSettings> {};

}

WINRT_WARNING_POP
