﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Security.Authentication.Identity.Core.2.h"
#include "winrt/Windows.Security.Authentication.Identity.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetOneTimePassCodeAsync(param::hstring const& userAccountId, uint32_t codeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->GetOneTimePassCodeAsync(get_abi(userAccountId), codeLength, put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::AddDeviceAsync(param::hstring const& userAccountId, param::hstring const& authenticationToken, param::hstring const& wnsChannelId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->AddDeviceAsync(get_abi(userAccountId), get_abi(authenticationToken), get_abi(wnsChannelId), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::RemoveDeviceAsync(param::hstring const& userAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->RemoveDeviceAsync(get_abi(userAccountId), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::UpdateWnsChannelAsync(param::hstring const& userAccountId, param::hstring const& channelUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->UpdateWnsChannelAsync(get_abi(userAccountId), get_abi(channelUri), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetSessionsAsync(param::async_iterable<hstring> const& userAccountIdList) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->GetSessionsAsync(get_abi(userAccountIdList), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::GetSessionsAndUnregisteredAccountsAsync(param::async_iterable<hstring> const& userAccountIdList) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->GetSessionsAndUnregisteredAccountsAsync(get_abi(userAccountIdList), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const& sessionAuthentictionStatus, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const& authenticationSessionInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->ApproveSessionUsingAuthSessionInfoAsync(get_abi(sessionAuthentictionStatus), get_abi(authenticationSessionInfo), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const& sessionAuthentictionStatus, param::hstring const& userAccountId, param::hstring const& sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const& sessionAuthenticationType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->ApproveSessionAsync(get_abi(sessionAuthentictionStatus), get_abi(userAccountId), get_abi(sessionId), get_abi(sessionAuthenticationType), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::DenySessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const& authenticationSessionInfo) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->DenySessionUsingAuthSessionInfoAsync(get_abi(authenticationSessionInfo), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager<D>::DenySessionAsync(param::hstring const& userAccountId, param::hstring const& sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const& sessionAuthenticationType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager)->DenySessionAsync(get_abi(userAccountId), get_abi(sessionId), get_abi(sessionAuthenticationType), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticatorStatics<D>::Current() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult<D>::Sessions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult)->get_Sessions(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult<D>::ServiceResponse() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult)->get_ServiceResponse(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::Code() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_Code(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::TimeInterval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_TimeInterval(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::TimeToLive() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_TimeToLive(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo<D>::ServiceResponse() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo)->get_ServiceResponse(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::UserAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_UserAccountId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::SessionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::DisplaySessionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_DisplaySessionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::ApprovalStatus() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_ApprovalStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::AuthenticationType() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_AuthenticationType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::RequestTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_RequestTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo<D>::ExpirationTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo)->get_ExpirationTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::Sessions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo)->get_Sessions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::UnregisteredAccounts() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo)->get_UnregisteredAccounts(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse consume_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo<D>::ServiceResponse() const
{
    Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo)->get_ServiceResponse(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager>
{
    HRESULT __stdcall GetOneTimePassCodeAsync(HSTRING userAccountId, uint32_t codeLength, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo>>(this->shim().GetOneTimePassCodeAsync(*reinterpret_cast<hstring const*>(&userAccountId), codeLength));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddDeviceAsync(HSTRING userAccountId, HSTRING authenticationToken, HSTRING wnsChannelId, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().AddDeviceAsync(*reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&authenticationToken), *reinterpret_cast<hstring const*>(&wnsChannelId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveDeviceAsync(HSTRING userAccountId, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().RemoveDeviceAsync(*reinterpret_cast<hstring const*>(&userAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateWnsChannelAsync(HSTRING userAccountId, HSTRING channelUri, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().UpdateWnsChannelAsync(*reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&channelUri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSessionsAsync(void* userAccountIdList, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult>>(this->shim().GetSessionsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&userAccountIdList)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSessionsAndUnregisteredAccountsAsync(void* userAccountIdList, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>>(this->shim().GetSessionsAndUnregisteredAccountsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&userAccountIdList)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ApproveSessionUsingAuthSessionInfoAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus, void* authenticationSessionInfo, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().ApproveSessionAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const*>(&sessionAuthentictionStatus), *reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const*>(&authenticationSessionInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ApproveSessionAsync(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus, HSTRING userAccountId, HSTRING sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().ApproveSessionAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus const*>(&sessionAuthentictionStatus), *reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&sessionId), *reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const*>(&sessionAuthenticationType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DenySessionUsingAuthSessionInfoAsync(void* authenticationSessionInfo, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().DenySessionAsync(*reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo const*>(&authenticationSessionInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DenySessionAsync(HSTRING userAccountId, HSTRING sessionId, Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>>(this->shim().DenySessionAsync(*reinterpret_cast<hstring const*>(&userAccountId), *reinterpret_cast<hstring const*>(&sessionId), *reinterpret_cast<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType const*>(&sessionAuthenticationType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>
{
    HRESULT __stdcall get_Current(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager>(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult>
{
    HRESULT __stdcall get_Sessions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>>(this->shim().Sessions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceResponse(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>(this->shim().ServiceResponse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo>
{
    HRESULT __stdcall get_Code(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Code());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimeInterval(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TimeInterval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimeToLive(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().TimeToLive());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceResponse(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>(this->shim().ServiceResponse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo>
{
    HRESULT __stdcall get_UserAccountId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserAccountId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SessionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplaySessionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplaySessionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ApprovalStatus(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus>(this->shim().ApprovalStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationType(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType>(this->shim().AuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().RequestTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> : produce_base<D, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>
{
    HRESULT __stdcall get_Sessions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo>>(this->shim().Sessions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UnregisteredAccounts(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().UnregisteredAccounts());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceResponse(Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>(this->shim().ServiceResponse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Core {

inline Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager MicrosoftAccountMultiFactorAuthenticationManager::Current()
{
    return get_activation_factory<MicrosoftAccountMultiFactorAuthenticationManager, Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics>().Current();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationManager> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo> {};
template<> struct hash<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo> {};

}

WINRT_WARNING_POP
