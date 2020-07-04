﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Geolocation.2.h"
#include "winrt/impl/Windows.Services.Maps.OfflineMaps.2.h"
#include "winrt/Windows.Services.Maps.h"

namespace winrt::impl {

template <typename D> Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::Status() const
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackage)->get_Status(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackage)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::EnclosingRegionName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackage)->get_EnclosingRegionName(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::EstimatedSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackage)->get_EstimatedSizeInBytes(&value));
    return value;
}

template <typename D> void consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::StatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackage)->remove_StatusChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackage)->add_StatusChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage> consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> const& value) const
{
    return impl::make_event_revoker<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>(this, &abi_t<Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>::remove_StatusChanged, StatusChanged(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackage<D>::RequestStartDownloadAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackage)->RequestStartDownloadAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult<D>::Status() const
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageQueryResult<D>::Packages() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult)->get_Packages(put_abi(value)));
    return value;
}

template <typename D> Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStartDownloadResult<D>::Status() const
{
    Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus value{};
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics<D>::FindPackagesAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics)->FindPackagesAsync(get_abi(queryPoint), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics<D>::FindPackagesInBoundingBoxAsync(Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics)->FindPackagesInBoundingBoxAsync(get_abi(queryBoundingBox), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> consume_Windows_Services_Maps_OfflineMaps_IOfflineMapPackageStatics<D>::FindPackagesInGeocircleAsync(Windows::Devices::Geolocation::Geocircle const& queryCircle) const
{
    Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics)->FindPackagesInGeocircleAsync(get_abi(queryCircle), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackage> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackage>
{
    HRESULT __stdcall get_Status(Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStatus>(this->shim().Status());
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

    HRESULT __stdcall get_EnclosingRegionName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnclosingRegionName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EstimatedSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().EstimatedSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_StatusChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().StatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Services::Maps::OfflineMaps::OfflineMapPackage, Windows::Foundation::IInspectable> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestStartDownloadAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult>>(this->shim().RequestStartDownloadAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult>
{
    HRESULT __stdcall get_Status(Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Packages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::OfflineMaps::OfflineMapPackage>>(this->shim().Packages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult>
{
    HRESULT __stdcall get_Status(Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics> : produce_base<D, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>
{
    HRESULT __stdcall FindPackagesAsync(void* queryPoint, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>>(this->shim().FindPackagesAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geopoint const*>(&queryPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesInBoundingBoxAsync(void* queryBoundingBox, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>>(this->shim().FindPackagesInBoundingBoxAsync(*reinterpret_cast<Windows::Devices::Geolocation::GeoboundingBox const*>(&queryBoundingBox)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesInGeocircleAsync(void* queryCircle, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult>>(this->shim().FindPackagesInGeocircleAsync(*reinterpret_cast<Windows::Devices::Geolocation::Geocircle const*>(&queryCircle)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Services::Maps::OfflineMaps {

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> OfflineMapPackage::FindPackagesAsync(Windows::Devices::Geolocation::Geopoint const& queryPoint)
{
    return get_activation_factory<OfflineMapPackage, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>().FindPackagesAsync(queryPoint);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> OfflineMapPackage::FindPackagesInBoundingBoxAsync(Windows::Devices::Geolocation::GeoboundingBox const& queryBoundingBox)
{
    return get_activation_factory<OfflineMapPackage, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>().FindPackagesInBoundingBoxAsync(queryBoundingBox);
}

inline Windows::Foundation::IAsyncOperation<Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> OfflineMapPackage::FindPackagesInGeocircleAsync(Windows::Devices::Geolocation::Geocircle const& queryCircle)
{
    return get_activation_factory<OfflineMapPackage, Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics>().FindPackagesInGeocircleAsync(queryCircle);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage> : winrt::impl::hash_base<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackage> {};
template<> struct hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult> : winrt::impl::hash_base<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageQueryResult> {};
template<> struct hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult> : winrt::impl::hash_base<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStartDownloadResult> {};
template<> struct hash<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics> : winrt::impl::hash_base<winrt::Windows::Services::Maps::OfflineMaps::IOfflineMapPackageStatics> {};
template<> struct hash<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage> : winrt::impl::hash_base<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackage> {};
template<> struct hash<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> : winrt::impl::hash_base<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageQueryResult> {};
template<> struct hash<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> : winrt::impl::hash_base<winrt::Windows::Services::Maps::OfflineMaps::OfflineMapPackageStartDownloadResult> {};

}

WINRT_WARNING_POP
