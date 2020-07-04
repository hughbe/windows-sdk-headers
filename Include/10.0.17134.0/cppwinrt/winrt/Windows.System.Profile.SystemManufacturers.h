// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.2.h"
#include "winrt/Windows.System.Profile.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Uri consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportLink(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportAppLink() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportAppLink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_IOemSupportInfo<D>::SupportProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::IOemSupportInfo)->get_SupportProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics<D>::SerialNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics)->get_SerialNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>::LocalSystemEdition() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics)->get_LocalSystemEdition(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Profile::SystemManufacturers::OemSupportInfo consume_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics<D>::OemSupportInfo() const
{
    Windows::System::Profile::SystemManufacturers::OemSupportInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics)->get_OemSupportInfo(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::IOemSupportInfo> : produce_base<D, Windows::System::Profile::SystemManufacturers::IOemSupportInfo>
{
    HRESULT __stdcall get_SupportLink(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportAppLink(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SupportAppLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportProvider(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SupportProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>
{
    HRESULT __stdcall get_SerialNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SerialNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> : produce_base<D, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>
{
    HRESULT __stdcall get_LocalSystemEdition(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalSystemEdition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OemSupportInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Profile::SystemManufacturers::OemSupportInfo>(this->shim().OemSupportInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

inline hstring SmbiosInformation::SerialNumber()
{
    return get_activation_factory<SmbiosInformation, Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics>().SerialNumber();
}

inline hstring SystemSupportInfo::LocalSystemEdition()
{
    return get_activation_factory<SystemSupportInfo, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>().LocalSystemEdition();
}

inline Windows::System::Profile::SystemManufacturers::OemSupportInfo SystemSupportInfo::OemSupportInfo()
{
    return get_activation_factory<SystemSupportInfo, Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics>().OemSupportInfo();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::IOemSupportInfo> {};
template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::ISmbiosInformationStatics> {};
template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::ISystemSupportInfoStatics> {};
template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::OemSupportInfo> {};
template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::SmbiosInformation> {};
template<> struct hash<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo> : winrt::impl::hash_base<winrt::Windows::System::Profile::SystemManufacturers::SystemSupportInfo> {};

}

WINRT_WARNING_POP
