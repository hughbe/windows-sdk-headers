// C++/WinRT v2.0.220418.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Provider_H
#define WINRT_Windows_System_RemoteDesktop_Provider_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220418.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220418.1"
#include "winrt/Windows.System.RemoteDesktop.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.System.RemoteDesktop.Provider.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo<D>::Name(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo)->put_Name(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfoFactory<D>::CreateInstance(param::hstring const& name) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory)->CreateInstance(*(void**)(&name), &value));
        return winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>::DisplayInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService)->get_DisplayInfo(&value));
        return winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>::DisplayInfo(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService)->put_DisplayInfo(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>::SwitchToCloudPC() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService)->SwitchToCloudPC());
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>::SwitchToLocalPC(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService)->add_SwitchToLocalPC(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>::SwitchToLocalPC_revoker consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>::SwitchToLocalPC(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, SwitchToLocalPC_revoker>(this, SwitchToLocalPC(handler));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>::SwitchToLocalPC(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService)->remove_SwitchToLocalPC(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostServiceStatics<D>::GetForWindow(winrt::Windows::UI::WindowId const& windowId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics)->GetForWindow(impl::bind_in(windowId), &result));
        return winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo<D>::SetConnectionStatus(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo)->SetConnectionStatus(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>::DisplayInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2)->get_DisplayInfo(&value));
        return winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>::DisplayInfo(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2)->put_DisplayInfo(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>::SwitchToCloudPC(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2)->add_SwitchToCloudPC(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>::SwitchToCloudPC_revoker consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>::SwitchToCloudPC(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, SwitchToCloudPC_revoker>(this, SwitchToCloudPC(handler));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>::SwitchToCloudPC(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2)->remove_SwitchToCloudPC(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>::SwitchToLocalPC() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2)->SwitchToLocalPC());
    }
    template <typename D> auto consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics<D>::GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::UI::WindowId const& windowId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics)->GetForLaunchUri(*(void**)(&launchUri), impl::bind_in(windowId), &result));
        return winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Name(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory>
    {
        int32_t __stdcall CreateInstance(void* name, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>
    {
        int32_t __stdcall get_DisplayInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo>(this->shim().DisplayInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayInfo(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayInfo(*reinterpret_cast<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SwitchToCloudPC() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SwitchToCloudPC();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_SwitchToLocalPC(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SwitchToLocalPC(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SwitchToLocalPC(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SwitchToLocalPC(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics>
    {
        int32_t __stdcall GetForWindow(struct struct_Windows_UI_WindowId windowId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService>(this->shim().GetForWindow(*reinterpret_cast<winrt::Windows::UI::WindowId const*>(&windowId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>
    {
        int32_t __stdcall SetConnectionStatus(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetConnectionStatus(*reinterpret_cast<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>
    {
        int32_t __stdcall get_DisplayInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo>(this->shim().DisplayInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayInfo(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayInfo(*reinterpret_cast<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_SwitchToCloudPC(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SwitchToCloudPC(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SwitchToCloudPC(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SwitchToCloudPC(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall SwitchToLocalPC() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SwitchToLocalPC();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics> : produce_base<D, winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>
    {
        int32_t __stdcall GetForLaunchUri(void* launchUri, struct struct_Windows_UI_WindowId windowId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo>(this->shim().GetForLaunchUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&launchUri), *reinterpret_cast<winrt::Windows::UI::WindowId const*>(&windowId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Provider
{
    inline CloudPCDisplayInfo::CloudPCDisplayInfo(param::hstring const& name) :
        CloudPCDisplayInfo(impl::call_factory<CloudPCDisplayInfo, ICloudPCDisplayInfoFactory>([&](ICloudPCDisplayInfoFactory const& f) { return f.CreateInstance(name); }))
    {
    }
    inline auto CloudPCHostService::GetForWindow(winrt::Windows::UI::WindowId const& windowId)
    {
        return impl::call_factory<CloudPCHostService, ICloudPCHostServiceStatics>([&](ICloudPCHostServiceStatics const& f) { return f.GetForWindow(windowId); });
    }
    inline auto RemoteDesktopConnectionInfo::GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::UI::WindowId const& windowId)
    {
        return impl::call_factory<RemoteDesktopConnectionInfo, IRemoteDesktopConnectionInfoStatics>([&](IRemoteDesktopConnectionInfoStatics const& f) { return f.GetForLaunchUri(launchUri, windowId); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
