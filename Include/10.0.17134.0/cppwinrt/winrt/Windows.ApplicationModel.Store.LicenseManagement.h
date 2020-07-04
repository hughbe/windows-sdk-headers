// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Store.LicenseManagement.2.h"
#include "winrt/Windows.ApplicationModel.Store.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics<D>::AddLicenseAsync(Windows::Storage::Streams::IBuffer const& license) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics)->AddLicenseAsync(get_abi(license), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult> consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics<D>::GetSatisfactionInfosAsync(param::async_iterable<hstring> const& contentIds, param::async_iterable<hstring> const& keyIds) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics)->GetSatisfactionInfosAsync(get_abi(contentIds), get_abi(keyIds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseManagerStatics2<D>::RefreshLicensesAsync(Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const& refreshOption) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2)->RefreshLicensesAsync(get_abi(refreshOption), put_abi(action)));
    return action;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>::SatisfiedByDevice() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo)->get_SatisfiedByDevice(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>::SatisfiedByOpenLicense() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo)->get_SatisfiedByOpenLicense(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>::SatisfiedByTrial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo)->get_SatisfiedByTrial(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>::SatisfiedByPass() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo)->get_SatisfiedByPass(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>::SatisfiedByInstallMedia() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo)->get_SatisfiedByInstallMedia(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>::SatisfiedBySignedInUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo)->get_SatisfiedBySignedInUser(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionInfo<D>::IsSatisfied() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo)->get_IsSatisfied(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo> consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult<D>::LicenseSatisfactionInfos() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult)->get_LicenseSatisfactionInfos(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_ApplicationModel_Store_LicenseManagement_ILicenseSatisfactionResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics> : produce_base<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>
{
    HRESULT __stdcall AddLicenseAsync(void* license, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().AddLicenseAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&license)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSatisfactionInfosAsync(void* contentIds, void* keyIds, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult>>(this->shim().GetSatisfactionInfosAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&contentIds), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&keyIds)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2> : produce_base<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>
{
    HRESULT __stdcall RefreshLicensesAsync(Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption refreshOption, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RefreshLicensesAsync(*reinterpret_cast<Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const*>(&refreshOption)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo> : produce_base<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo>
{
    HRESULT __stdcall get_SatisfiedByDevice(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SatisfiedByDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SatisfiedByOpenLicense(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SatisfiedByOpenLicense());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SatisfiedByTrial(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SatisfiedByTrial());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SatisfiedByPass(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SatisfiedByPass());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SatisfiedByInstallMedia(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SatisfiedByInstallMedia());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SatisfiedBySignedInUser(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SatisfiedBySignedInUser());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSatisfied(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSatisfied());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult> : produce_base<D, Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult>
{
    HRESULT __stdcall get_LicenseSatisfactionInfos(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo>>(this->shim().LicenseSatisfactionInfos());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::LicenseManagement {

inline Windows::Foundation::IAsyncAction LicenseManager::AddLicenseAsync(Windows::Storage::Streams::IBuffer const& license)
{
    return get_activation_factory<LicenseManager, Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>().AddLicenseAsync(license);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult> LicenseManager::GetSatisfactionInfosAsync(param::async_iterable<hstring> const& contentIds, param::async_iterable<hstring> const& keyIds)
{
    return get_activation_factory<LicenseManager, Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics>().GetSatisfactionInfosAsync(contentIds, keyIds);
}

inline Windows::Foundation::IAsyncAction LicenseManager::RefreshLicensesAsync(Windows::ApplicationModel::Store::LicenseManagement::LicenseRefreshOption const& refreshOption)
{
    return get_activation_factory<LicenseManager, Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2>().RefreshLicensesAsync(refreshOption);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseManagerStatics2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Store::LicenseManagement::ILicenseSatisfactionResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Store::LicenseManagement::LicenseSatisfactionResult> {};

}

WINRT_WARNING_POP
