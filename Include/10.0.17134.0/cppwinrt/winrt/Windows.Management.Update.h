// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Management.Update.2.h"
#include "winrt/Windows.Management.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Management_Update_IPreviewBuildsManager<D>::ArePreviewBuildsAllowed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Update::IPreviewBuildsManager)->get_ArePreviewBuildsAllowed(&value));
    return value;
}

template <typename D> void consume_Windows_Management_Update_IPreviewBuildsManager<D>::ArePreviewBuildsAllowed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Update::IPreviewBuildsManager)->put_ArePreviewBuildsAllowed(value));
}

template <typename D> Windows::Management::Update::PreviewBuildsState consume_Windows_Management_Update_IPreviewBuildsManager<D>::GetCurrentState() const
{
    Windows::Management::Update::PreviewBuildsState result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Update::IPreviewBuildsManager)->GetCurrentState(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Management_Update_IPreviewBuildsManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Update::IPreviewBuildsManager)->SyncAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Management::Update::PreviewBuildsManager consume_Windows_Management_Update_IPreviewBuildsManagerStatics<D>::GetDefault() const
{
    Windows::Management::Update::PreviewBuildsManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Update::IPreviewBuildsManagerStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Update_IPreviewBuildsManagerStatics<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Management::Update::IPreviewBuildsManagerStatics)->IsSupported(&result));
    return result;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Management_Update_IPreviewBuildsState<D>::Properties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Update::IPreviewBuildsState)->get_Properties(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Management::Update::IPreviewBuildsManager> : produce_base<D, Windows::Management::Update::IPreviewBuildsManager>
{
    HRESULT __stdcall get_ArePreviewBuildsAllowed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ArePreviewBuildsAllowed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ArePreviewBuildsAllowed(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArePreviewBuildsAllowed(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentState(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Management::Update::PreviewBuildsState>(this->shim().GetCurrentState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SyncAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Update::IPreviewBuildsManagerStatics> : produce_base<D, Windows::Management::Update::IPreviewBuildsManagerStatics>
{
    HRESULT __stdcall GetDefault(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Management::Update::PreviewBuildsManager>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::Management::Update::IPreviewBuildsState> : produce_base<D, Windows::Management::Update::IPreviewBuildsState>
{
    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Management::Update {

inline Windows::Management::Update::PreviewBuildsManager PreviewBuildsManager::GetDefault()
{
    return get_activation_factory<PreviewBuildsManager, Windows::Management::Update::IPreviewBuildsManagerStatics>().GetDefault();
}

inline bool PreviewBuildsManager::IsSupported()
{
    return get_activation_factory<PreviewBuildsManager, Windows::Management::Update::IPreviewBuildsManagerStatics>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsManager> : winrt::impl::hash_base<winrt::Windows::Management::Update::IPreviewBuildsManager> {};
template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsManagerStatics> : winrt::impl::hash_base<winrt::Windows::Management::Update::IPreviewBuildsManagerStatics> {};
template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsState> : winrt::impl::hash_base<winrt::Windows::Management::Update::IPreviewBuildsState> {};
template<> struct hash<winrt::Windows::Management::Update::PreviewBuildsManager> : winrt::impl::hash_base<winrt::Windows::Management::Update::PreviewBuildsManager> {};
template<> struct hash<winrt::Windows::Management::Update::PreviewBuildsState> : winrt::impl::hash_base<winrt::Windows::Management::Update::PreviewBuildsState> {};

}

WINRT_WARNING_POP
