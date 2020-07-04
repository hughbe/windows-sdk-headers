// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.UI.Shell.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_UI_Shell_IAdaptiveCard<D>::ToJson() const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::UI::Shell::IAdaptiveCard)->ToJson(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Shell::IAdaptiveCard consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>::CreateAdaptiveCardFromJson(param::hstring const& value) const
{
    Windows::UI::Shell::IAdaptiveCard result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Shell::IAdaptiveCardBuilderStatics)->CreateAdaptiveCardFromJson(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_Shell_ITaskbarManager<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Shell::ITaskbarManager)->get_IsSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Shell_ITaskbarManager<D>::IsPinningAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Shell::ITaskbarManager)->get_IsPinningAllowed(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Shell_ITaskbarManager<D>::IsCurrentAppPinnedAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Shell::ITaskbarManager)->IsCurrentAppPinnedAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Shell_ITaskbarManager<D>::IsAppListEntryPinnedAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Shell::ITaskbarManager)->IsAppListEntryPinnedAsync(get_abi(appListEntry), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinCurrentAppAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Shell::ITaskbarManager)->RequestPinCurrentAppAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Shell::ITaskbarManager)->RequestPinAppListEntryAsync(get_abi(appListEntry), put_abi(operation)));
    return operation;
}

template <typename D> Windows::UI::Shell::TaskbarManager consume_Windows_UI_Shell_ITaskbarManagerStatics<D>::GetDefault() const
{
    Windows::UI::Shell::TaskbarManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Shell::ITaskbarManagerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::UI::Shell::IAdaptiveCard> : produce_base<D, Windows::UI::Shell::IAdaptiveCard>
{
    HRESULT __stdcall ToJson(HSTRING* result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToJson());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Shell::IAdaptiveCardBuilderStatics> : produce_base<D, Windows::UI::Shell::IAdaptiveCardBuilderStatics>
{
    HRESULT __stdcall CreateAdaptiveCardFromJson(HSTRING value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::IAdaptiveCard>(this->shim().CreateAdaptiveCardFromJson(*reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Shell::ITaskbarManager> : produce_base<D, Windows::UI::Shell::ITaskbarManager>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
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

    HRESULT __stdcall get_IsPinningAllowed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPinningAllowed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsCurrentAppPinnedAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsCurrentAppPinnedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsAppListEntryPinnedAsync(void* appListEntry, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsAppListEntryPinnedAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestPinCurrentAppAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinCurrentAppAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestPinAppListEntryAsync(void* appListEntry, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinAppListEntryAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Shell::ITaskbarManagerStatics> : produce_base<D, Windows::UI::Shell::ITaskbarManagerStatics>
{
    HRESULT __stdcall GetDefault(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::TaskbarManager>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Shell {

inline Windows::UI::Shell::IAdaptiveCard AdaptiveCardBuilder::CreateAdaptiveCardFromJson(param::hstring const& value)
{
    return get_activation_factory<AdaptiveCardBuilder, Windows::UI::Shell::IAdaptiveCardBuilderStatics>().CreateAdaptiveCardFromJson(value);
}

inline Windows::UI::Shell::TaskbarManager TaskbarManager::GetDefault()
{
    return get_activation_factory<TaskbarManager, Windows::UI::Shell::ITaskbarManagerStatics>().GetDefault();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCard> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IAdaptiveCard> {};
template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> {};
template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManager> {};
template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManagerStatics> {};
template<> struct hash<winrt::Windows::UI::Shell::AdaptiveCardBuilder> : winrt::impl::hash_base<winrt::Windows::UI::Shell::AdaptiveCardBuilder> {};
template<> struct hash<winrt::Windows::UI::Shell::TaskbarManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::TaskbarManager> {};

}

WINRT_WARNING_POP
