// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.Inventory.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_System_Inventory_IInstalledDesktopApp<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Inventory::IInstalledDesktopApp)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Inventory_IInstalledDesktopApp<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Inventory::IInstalledDesktopApp)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Inventory_IInstalledDesktopApp<D>::Publisher() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Inventory::IInstalledDesktopApp)->get_Publisher(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Inventory_IInstalledDesktopApp<D>::DisplayVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Inventory::IInstalledDesktopApp)->get_DisplayVersion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::Inventory::InstalledDesktopApp>> consume_Windows_System_Inventory_IInstalledDesktopAppStatics<D>::GetInventoryAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::Inventory::InstalledDesktopApp>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Inventory::IInstalledDesktopAppStatics)->GetInventoryAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::System::Inventory::IInstalledDesktopApp> : produce_base<D, Windows::System::Inventory::IInstalledDesktopApp>
{
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

    HRESULT __stdcall get_Publisher(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Publisher());
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

template <typename D>
struct produce<D, Windows::System::Inventory::IInstalledDesktopAppStatics> : produce_base<D, Windows::System::Inventory::IInstalledDesktopAppStatics>
{
    HRESULT __stdcall GetInventoryAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::Inventory::InstalledDesktopApp>>>(this->shim().GetInventoryAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Inventory {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::Inventory::InstalledDesktopApp>> InstalledDesktopApp::GetInventoryAsync()
{
    return get_activation_factory<InstalledDesktopApp, Windows::System::Inventory::IInstalledDesktopAppStatics>().GetInventoryAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Inventory::IInstalledDesktopApp> : winrt::impl::hash_base<winrt::Windows::System::Inventory::IInstalledDesktopApp> {};
template<> struct hash<winrt::Windows::System::Inventory::IInstalledDesktopAppStatics> : winrt::impl::hash_base<winrt::Windows::System::Inventory::IInstalledDesktopAppStatics> {};
template<> struct hash<winrt::Windows::System::Inventory::InstalledDesktopApp> : winrt::impl::hash_base<winrt::Windows::System::Inventory::InstalledDesktopApp> {};

}

WINRT_WARNING_POP
