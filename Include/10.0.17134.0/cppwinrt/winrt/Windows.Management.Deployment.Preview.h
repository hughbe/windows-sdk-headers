// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Management.Deployment.Preview.2.h"
#include "winrt/Windows.Management.Deployment.h"

namespace winrt::impl {

template <typename D> Windows::Management::Deployment::Preview::InstalledClassicAppInfo consume_Windows_Management_Deployment_Preview_IClassicAppManagerStatics<D>::FindInstalledApp(param::hstring const& appUninstallKey) const
{
    Windows::Management::Deployment::Preview::InstalledClassicAppInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::Preview::IClassicAppManagerStatics)->FindInstalledApp(get_abi(appUninstallKey), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::Preview::IInstalledClassicAppInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>::DisplayVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::Preview::IInstalledClassicAppInfo)->get_DisplayVersion(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : produce_base<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
{
    HRESULT __stdcall FindInstalledApp(HSTRING appUninstallKey, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Management::Deployment::Preview::InstalledClassicAppInfo>(this->shim().FindInstalledApp(*reinterpret_cast<hstring const*>(&appUninstallKey)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> : produce_base<D, Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>
{
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

    HRESULT __stdcall get_DisplayVersion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview {

inline Windows::Management::Deployment::Preview::InstalledClassicAppInfo ClassicAppManager::FindInstalledApp(param::hstring const& appUninstallKey)
{
    return get_activation_factory<ClassicAppManager, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>().FindInstalledApp(appUninstallKey);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics> {};
template<> struct hash<winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> {};
template<> struct hash<winrt::Windows::Management::Deployment::Preview::ClassicAppManager> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::ClassicAppManager> {};
template<> struct hash<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo> {};

}

WINRT_WARNING_POP
