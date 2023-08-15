// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_Shell_H
#define WINRT_Windows_UI_Shell_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220110.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220110.5"
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.StartScreen.2.h"
#include "winrt/impl/Windows.UI.Shell.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Shell_IAdaptiveCard<D>::ToJson() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IAdaptiveCard)->ToJson(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::IAdaptiveCard) consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>::CreateAdaptiveCardFromJson(param::hstring const& value) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics)->CreateAdaptiveCardFromJson(*(void**)(&value), &result));
        return winrt::Windows::UI::Shell::IAdaptiveCard{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_UI_Shell_IFocusSession<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSession)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IFocusSession<D>::End() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSession)->End());
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Shell_IFocusSessionManager<D>::IsFocusActive() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManager)->get_IsFocusActive(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::FocusSession) consume_Windows_UI_Shell_IFocusSessionManager<D>::GetSession(param::hstring const& id) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManager)->GetSession(*(void**)(&id), &result));
        return winrt::Windows::UI::Shell::FocusSession{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::FocusSession) consume_Windows_UI_Shell_IFocusSessionManager<D>::TryStartFocusSession() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManager)->TryStartFocusSession(&result));
        return winrt::Windows::UI::Shell::FocusSession{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::FocusSession) consume_Windows_UI_Shell_IFocusSessionManager<D>::TryStartFocusSession(winrt::Windows::Foundation::DateTime const& endTime) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManager)->TryStartFocusSession2(impl::bind_in(endTime), &result));
        return winrt::Windows::UI::Shell::FocusSession{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IFocusSessionManager<D>::DeactivateFocus() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManager)->DeactivateFocus());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_UI_Shell_IFocusSessionManager<D>::IsFocusActiveChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::FocusSessionManager, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManager)->add_IsFocusActiveChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Shell_IFocusSessionManager<D>::IsFocusActiveChanged_revoker consume_Windows_UI_Shell_IFocusSessionManager<D>::IsFocusActiveChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::FocusSessionManager, winrt::Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, IsFocusActiveChanged_revoker>(this, IsFocusActiveChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IFocusSessionManager<D>::IsFocusActiveChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManager)->remove_IsFocusActiveChanged(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::FocusSessionManager) consume_Windows_UI_Shell_IFocusSessionManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManagerStatics)->GetDefault(&result));
        return winrt::Windows::UI::Shell::FocusSessionManager{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Shell_IFocusSessionManagerStatics<D>::IsSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IFocusSessionManagerStatics)->get_IsSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_UI_Shell_ISecurityAppManager<D>::Register(winrt::Windows::UI::Shell::SecurityAppKind const& kind, param::hstring const& displayName, winrt::Windows::Foundation::Uri const& detailsUri, bool registerPerUser) const
    {
        winrt::guid result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ISecurityAppManager)->Register(static_cast<int32_t>(kind), *(void**)(&displayName), *(void**)(&detailsUri), registerPerUser, put_abi(result)));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_ISecurityAppManager<D>::Unregister(winrt::Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ISecurityAppManager)->Unregister(static_cast<int32_t>(kind), impl::bind_in(guidRegistration)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_ISecurityAppManager<D>::UpdateState(winrt::Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration, winrt::Windows::UI::Shell::SecurityAppState const& state, winrt::Windows::UI::Shell::SecurityAppSubstatus const& substatus, winrt::Windows::Foundation::Uri const& detailsUri) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ISecurityAppManager)->UpdateState(static_cast<int32_t>(kind), impl::bind_in(guidRegistration), static_cast<int32_t>(state), static_cast<int32_t>(substatus), *(void**)(&detailsUri)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::WindowId) consume_Windows_UI_Shell_IShareWindowCommandEventArgs<D>::WindowId() const
    {
        winrt::Windows::UI::WindowId value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandEventArgs)->get_WindowId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::ShareWindowCommand) consume_Windows_UI_Shell_IShareWindowCommandEventArgs<D>::Command() const
    {
        winrt::Windows::UI::Shell::ShareWindowCommand value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandEventArgs)->get_Command(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IShareWindowCommandEventArgs<D>::Command(winrt::Windows::UI::Shell::ShareWindowCommand const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandEventArgs)->put_Command(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IShareWindowCommandSource<D>::Start() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSource)->Start());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IShareWindowCommandSource<D>::Stop() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSource)->Stop());
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IShareWindowCommandSource<D>::ReportCommandChanged() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSource)->ReportCommandChanged());
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSource)->add_CommandRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandRequested_revoker consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CommandRequested_revoker>(this, CommandRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSource)->remove_CommandRequested(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandInvoked(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSource)->add_CommandInvoked(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandInvoked_revoker consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandInvoked(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, CommandInvoked_revoker>(this, CommandInvoked(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_UI_Shell_IShareWindowCommandSource<D>::CommandInvoked(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSource)->remove_CommandInvoked(impl::bind_in(token));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::ShareWindowCommandSource) consume_Windows_UI_Shell_IShareWindowCommandSourceStatics<D>::GetForCurrentView() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics)->GetForCurrentView(&result));
        return winrt::Windows::UI::Shell::ShareWindowCommandSource{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Shell_ITaskbarManager<D>::IsSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager)->get_IsSupported(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_UI_Shell_ITaskbarManager<D>::IsPinningAllowed() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager)->get_IsPinningAllowed(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_UI_Shell_ITaskbarManager<D>::IsCurrentAppPinnedAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager)->IsCurrentAppPinnedAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_UI_Shell_ITaskbarManager<D>::IsAppListEntryPinnedAsync(winrt::Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager)->IsAppListEntryPinnedAsync(*(void**)(&appListEntry), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinCurrentAppAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager)->RequestPinCurrentAppAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinAppListEntryAsync(winrt::Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager)->RequestPinAppListEntryAsync(*(void**)(&appListEntry), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_UI_Shell_ITaskbarManager2<D>::IsSecondaryTilePinnedAsync(param::hstring const& tileId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager2)->IsSecondaryTilePinnedAsync(*(void**)(&tileId), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_UI_Shell_ITaskbarManager2<D>::RequestPinSecondaryTileAsync(winrt::Windows::UI::StartScreen::SecondaryTile const& secondaryTile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager2)->RequestPinSecondaryTileAsync(*(void**)(&secondaryTile), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<bool>) consume_Windows_UI_Shell_ITaskbarManager2<D>::TryUnpinSecondaryTileAsync(param::hstring const& tileId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManager2)->TryUnpinSecondaryTileAsync(*(void**)(&tileId), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Shell::TaskbarManager) consume_Windows_UI_Shell_ITaskbarManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Shell::ITaskbarManagerStatics)->GetDefault(&result));
        return winrt::Windows::UI::Shell::TaskbarManager{ result, take_ownership_from_abi };
    }
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IAdaptiveCard> : produce_base<D, winrt::Windows::UI::Shell::IAdaptiveCard>
    {
        int32_t __stdcall ToJson(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToJson());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> : produce_base<D, winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        int32_t __stdcall CreateAdaptiveCardFromJson(void* value, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Shell::IAdaptiveCard>(this->shim().CreateAdaptiveCardFromJson(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IFocusSession> : produce_base<D, winrt::Windows::UI::Shell::IFocusSession>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall End() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().End();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IFocusSessionManager> : produce_base<D, winrt::Windows::UI::Shell::IFocusSessionManager>
    {
        int32_t __stdcall get_IsFocusActive(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFocusActive());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSession(void* id, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Shell::FocusSession>(this->shim().GetSession(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryStartFocusSession(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Shell::FocusSession>(this->shim().TryStartFocusSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryStartFocusSession2(int64_t endTime, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Shell::FocusSession>(this->shim().TryStartFocusSession(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&endTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeactivateFocus() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeactivateFocus();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_IsFocusActiveChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().IsFocusActiveChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::FocusSessionManager, winrt::Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_IsFocusActiveChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsFocusActiveChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IFocusSessionManagerStatics> : produce_base<D, winrt::Windows::UI::Shell::IFocusSessionManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Shell::FocusSessionManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::ISecurityAppManager> : produce_base<D, winrt::Windows::UI::Shell::ISecurityAppManager>
    {
        int32_t __stdcall Register(int32_t kind, void* displayName, void* detailsUri, bool registerPerUser, winrt::guid* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::guid>(this->shim().Register(*reinterpret_cast<winrt::Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&detailsUri), registerPerUser));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Unregister(int32_t kind, winrt::guid guidRegistration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister(*reinterpret_cast<winrt::Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<winrt::guid const*>(&guidRegistration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateState(int32_t kind, winrt::guid guidRegistration, int32_t state, int32_t substatus, void* detailsUri) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateState(*reinterpret_cast<winrt::Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<winrt::guid const*>(&guidRegistration), *reinterpret_cast<winrt::Windows::UI::Shell::SecurityAppState const*>(&state), *reinterpret_cast<winrt::Windows::UI::Shell::SecurityAppSubstatus const*>(&substatus), *reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&detailsUri));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IShareWindowCommandEventArgs> : produce_base<D, winrt::Windows::UI::Shell::IShareWindowCommandEventArgs>
    {
        int32_t __stdcall get_WindowId(struct struct_Windows_UI_WindowId* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::WindowId>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::WindowId>(this->shim().WindowId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Command(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Shell::ShareWindowCommand>(this->shim().Command());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Command(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Command(*reinterpret_cast<winrt::Windows::UI::Shell::ShareWindowCommand const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IShareWindowCommandSource> : produce_base<D, winrt::Windows::UI::Shell::IShareWindowCommandSource>
    {
        int32_t __stdcall Start() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Stop() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportCommandChanged() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCommandChanged();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_CommandRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CommandRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CommandRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommandRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_CommandInvoked(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().CommandInvoked(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Shell::ShareWindowCommandSource, winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_CommandInvoked(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommandInvoked(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics> : produce_base<D, winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics>
    {
        int32_t __stdcall GetForCurrentView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Shell::ShareWindowCommandSource>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::ITaskbarManager> : produce_base<D, winrt::Windows::UI::Shell::ITaskbarManager>
    {
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPinningAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPinningAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCurrentAppPinnedAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsCurrentAppPinnedAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsAppListEntryPinnedAsync(void* appListEntry, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsAppListEntryPinnedAsync(*reinterpret_cast<winrt::Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinCurrentAppAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinCurrentAppAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinAppListEntryAsync(void* appListEntry, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinAppListEntryAsync(*reinterpret_cast<winrt::Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::ITaskbarManager2> : produce_base<D, winrt::Windows::UI::Shell::ITaskbarManager2>
    {
        int32_t __stdcall IsSecondaryTilePinnedAsync(void* tileId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsSecondaryTilePinnedAsync(*reinterpret_cast<hstring const*>(&tileId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinSecondaryTileAsync(void* secondaryTile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinSecondaryTileAsync(*reinterpret_cast<winrt::Windows::UI::StartScreen::SecondaryTile const*>(&secondaryTile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUnpinSecondaryTileAsync(void* tileId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryUnpinSecondaryTileAsync(*reinterpret_cast<hstring const*>(&tileId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Shell::ITaskbarManagerStatics> : produce_base<D, winrt::Windows::UI::Shell::ITaskbarManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Shell::TaskbarManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Shell
{
    inline auto AdaptiveCardBuilder::CreateAdaptiveCardFromJson(param::hstring const& value)
    {
        return impl::call_factory<AdaptiveCardBuilder, IAdaptiveCardBuilderStatics>([&](IAdaptiveCardBuilderStatics const& f) { return f.CreateAdaptiveCardFromJson(value); });
    }
    inline auto FocusSessionManager::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Shell::FocusSessionManager(*)(IFocusSessionManagerStatics const&), FocusSessionManager, IFocusSessionManagerStatics>([](IFocusSessionManagerStatics const& f) { return f.GetDefault(); });
    }
    inline auto FocusSessionManager::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IFocusSessionManagerStatics const&), FocusSessionManager, IFocusSessionManagerStatics>([](IFocusSessionManagerStatics const& f) { return f.IsSupported(); });
    }
    inline SecurityAppManager::SecurityAppManager() :
        SecurityAppManager(impl::call_factory_cast<SecurityAppManager(*)(winrt::Windows::Foundation::IActivationFactory const&), SecurityAppManager>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<SecurityAppManager>(); }))
    {
    }
    inline auto ShareWindowCommandSource::GetForCurrentView()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Shell::ShareWindowCommandSource(*)(IShareWindowCommandSourceStatics const&), ShareWindowCommandSource, IShareWindowCommandSourceStatics>([](IShareWindowCommandSourceStatics const& f) { return f.GetForCurrentView(); });
    }
    inline auto TaskbarManager::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::UI::Shell::TaskbarManager(*)(ITaskbarManagerStatics const&), TaskbarManager, ITaskbarManagerStatics>([](ITaskbarManagerStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCard> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::IFocusSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::IFocusSessionManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::IFocusSessionManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::ISecurityAppManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::IShareWindowCommandEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::IShareWindowCommandSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::IShareWindowCommandSourceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManager2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::AdaptiveCardBuilder> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::FocusSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::FocusSessionManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::SecurityAppManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::ShareWindowCommandEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::ShareWindowCommandSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Shell::TaskbarManager> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
