// C++/WinRT v2.0.220418.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteSystems_Availability_H
#define WINRT_Windows_System_RemoteSystems_Availability_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220418.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220418.1"
#include "winrt/Windows.System.RemoteSystems.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.RemoteSystems.Availability.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_RemoteSystems_Availability_IRemoteSystemAvailabilityStatics<D>::EnableCloudPC(param::hstring const& displayName, param::hstring const& cloudPCId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics)->EnableCloudPC(*(void**)(&displayName), *(void**)(&cloudPCId)));
    }
    template <typename D> auto consume_Windows_System_RemoteSystems_Availability_IRemoteSystemAvailabilityStatics<D>::DisableCloudPC(param::hstring const& cloudPCId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics)->DisableCloudPC(*(void**)(&cloudPCId)));
    }
    template <typename D> auto consume_Windows_System_RemoteSystems_Availability_IRemoteSystemAvailabilityStatics<D>::IsCloudPCEnabled(param::hstring const& cloudPCId) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics)->IsCloudPCEnabled(*(void**)(&cloudPCId), &result));
        return result;
    }
    template <typename D> auto consume_Windows_System_RemoteSystems_Availability_IRemoteSystemAvailabilityStatics<D>::IsIntegratedCloudPCSwitchEnabled() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics)->IsIntegratedCloudPCSwitchEnabled(&result));
        return result;
    }
    template <typename D> auto consume_Windows_System_RemoteSystems_Availability_IRemoteSystemAvailabilityStatics<D>::GetAllEnabledCloudPCIds() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics)->GetAllEnabledCloudPCIds(&result));
        return winrt::Windows::Foundation::Collections::IVectorView<hstring>{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics> : produce_base<D, winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics>
    {
        int32_t __stdcall EnableCloudPC(void* displayName, void* cloudPCId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnableCloudPC(*reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&cloudPCId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DisableCloudPC(void* cloudPCId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableCloudPC(*reinterpret_cast<hstring const*>(&cloudPCId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCloudPCEnabled(void* cloudPCId, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCloudPCEnabled(*reinterpret_cast<hstring const*>(&cloudPCId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsIntegratedCloudPCSwitchEnabled(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsIntegratedCloudPCSwitchEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAllEnabledCloudPCIds(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().GetAllEnabledCloudPCIds());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems::Availability
{
    inline auto RemoteSystemAvailability::EnableCloudPC(param::hstring const& displayName, param::hstring const& cloudPCId)
    {
        impl::call_factory<RemoteSystemAvailability, IRemoteSystemAvailabilityStatics>([&](IRemoteSystemAvailabilityStatics const& f) { return f.EnableCloudPC(displayName, cloudPCId); });
    }
    inline auto RemoteSystemAvailability::DisableCloudPC(param::hstring const& cloudPCId)
    {
        impl::call_factory<RemoteSystemAvailability, IRemoteSystemAvailabilityStatics>([&](IRemoteSystemAvailabilityStatics const& f) { return f.DisableCloudPC(cloudPCId); });
    }
    inline auto RemoteSystemAvailability::IsCloudPCEnabled(param::hstring const& cloudPCId)
    {
        return impl::call_factory<RemoteSystemAvailability, IRemoteSystemAvailabilityStatics>([&](IRemoteSystemAvailabilityStatics const& f) { return f.IsCloudPCEnabled(cloudPCId); });
    }
    inline auto RemoteSystemAvailability::IsIntegratedCloudPCSwitchEnabled()
    {
        return impl::call_factory_cast<bool(*)(IRemoteSystemAvailabilityStatics const&), RemoteSystemAvailability, IRemoteSystemAvailabilityStatics>([](IRemoteSystemAvailabilityStatics const& f) { return f.IsIntegratedCloudPCSwitchEnabled(); });
    }
    inline auto RemoteSystemAvailability::GetAllEnabledCloudPCIds()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IVectorView<hstring>(*)(IRemoteSystemAvailabilityStatics const&), RemoteSystemAvailability, IRemoteSystemAvailabilityStatics>([](IRemoteSystemAvailabilityStatics const& f) { return f.GetAllEnabledCloudPCIds(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteSystems::Availability::RemoteSystemAvailability> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
