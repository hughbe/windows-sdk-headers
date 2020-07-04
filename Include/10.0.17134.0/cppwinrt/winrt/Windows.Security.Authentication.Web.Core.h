// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.2.h"
#include "winrt/Windows.Security.Authentication.Web.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Core_IFindAllAccountsResult<D>::Accounts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IFindAllAccountsResult)->get_Accounts(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus consume_Windows_Security_Authentication_Web_Core_IFindAllAccountsResult<D>::Status() const
{
    Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IFindAllAccountsResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError consume_Windows_Security_Authentication_Web_Core_IFindAllAccountsResult<D>::ProviderError() const
{
    Windows::Security::Authentication::Web::Core::WebProviderError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IFindAllAccountsResult)->get_ProviderError(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs<D>::Account() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountEventArgs)->get_Account(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>(this, &abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>(this, &abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::DefaultSignInAccountChanged(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->add_DefaultSignInAccountChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::DefaultSignInAccountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>(this, &abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_DefaultSignInAccountChanged, DefaultSignInAccountChanged(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::DefaultSignInAccountChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->remove_DefaultSignInAccountChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->GetTokenSilentlyAsync(get_abi(request), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->GetTokenSilentlyWithWebAccountAsync(get_abi(request), get_abi(webAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->RequestTokenAsync(get_abi(request), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->RequestTokenWithWebAccountAsync(get_abi(request), get_abi(webAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->FindAccountAsync(get_abi(provider), get_abi(webAccountId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::FindAccountProviderAsync(param::hstring const& webAccountProviderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->FindAccountProviderAsync(get_abi(webAccountProviderId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->FindAccountProviderWithAuthorityAsync(get_abi(webAccountProviderId), get_abi(authority), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2<D>::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2)->FindAccountProviderWithAuthorityForUserAsync(get_abi(webAccountProviderId), get_abi(authority), get_abi(user), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebAccountMonitor consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3<D>::CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts) const
{
    Windows::Security::Authentication::Web::Core::WebAccountMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3)->CreateWebAccountMonitor(get_abi(webAccounts), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4<D>::FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4)->FindAllAccountsAsync(get_abi(provider), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4<D>::FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& clientId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4)->FindAllAccountsWithClientIdAsync(get_abi(provider), get_abi(clientId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4<D>::FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4)->FindSystemAccountProviderAsync(get_abi(webAccountProviderId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4<D>::FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4)->FindSystemAccountProviderWithAuthorityAsync(get_abi(webAccountProviderId), get_abi(authority), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics4<D>::FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4)->FindSystemAccountProviderWithAuthorityForUserAsync(get_abi(webAccountProviderId), get_abi(authority), get_abi(user), put_abi(operation)));
    return operation;
}

template <typename D> uint32_t consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderError)->get_ErrorCode(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>::ErrorMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderError)->get_ErrorMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderError)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError consume_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory<D>::Create(uint32_t errorCode, param::hstring const& errorMessage) const
{
    Windows::Security::Authentication::Web::Core::WebProviderError webProviderError{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory)->Create(errorCode, get_abi(errorMessage), put_abi(webProviderError)));
    return webProviderError;
}

template <typename D> Windows::Security::Credentials::WebAccountProvider consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::WebAccountProvider() const
{
    Windows::Security::Credentials::WebAccountProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_WebAccountProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::Scope() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_Scope(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::ClientId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_ClientId(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::PromptType() const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_PromptType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> requestProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_Properties(put_abi(requestProperties)));
    return requestProperties;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest2<D>::AppProperties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> requestProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest2)->get_AppProperties(put_abi(requestProperties)));
    return requestProperties;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3<D>::CorrelationId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest3)->get_CorrelationId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3<D>::CorrelationId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest3)->put_CorrelationId(get_abi(value)));
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::Create(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->Create(get_abi(provider), get_abi(scope), get_abi(clientId), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::CreateWithPromptType(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->CreateWithPromptType(get_abi(provider), get_abi(scope), get_abi(clientId), get_abi(promptType), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::CreateWithProvider(Windows::Security::Credentials::WebAccountProvider const& provider) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->CreateWithProvider(get_abi(provider), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::CreateWithScope(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->CreateWithScope(get_abi(provider), get_abi(scope), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::ResponseData() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->get_ResponseData(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequestStatus consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::ResponseStatus() const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequestStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->get_ResponseStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::ResponseError() const
{
    Windows::Security::Authentication::Web::Core::WebProviderError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->get_ResponseError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::InvalidateCacheAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->InvalidateCacheAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::Token() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_Token(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::ProviderError() const
{
    Windows::Security::Authentication::Web::Core::WebProviderError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_ProviderError(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::WebAccount() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_WebAccount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>::CreateWithToken(param::hstring const& token) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory)->CreateWithToken(get_abi(token), put_abi(webTokenResponse)));
    return webTokenResponse;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>::CreateWithTokenAndAccount(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory)->CreateWithTokenAndAccount(get_abi(token), get_abi(webAccount), put_abi(webTokenResponse)));
    return webTokenResponse;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>::CreateWithTokenAccountAndError(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory)->CreateWithTokenAccountAndError(get_abi(token), get_abi(webAccount), get_abi(error), put_abi(webTokenResponse)));
    return webTokenResponse;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IFindAllAccountsResult> : produce_base<D, Windows::Security::Authentication::Web::Core::IFindAllAccountsResult>
{
    HRESULT __stdcall get_Accounts(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>>(this->shim().Accounts());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::FindAllWebAccountsStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderError(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::WebProviderError>(this->shim().ProviderError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
{
    HRESULT __stdcall get_Account(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccount>(this->shim().Account());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>
{
    HRESULT __stdcall add_Updated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_DefaultSignInAccountChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().DefaultSignInAccountChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_DefaultSignInAccountChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultSignInAccountChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
{
    HRESULT __stdcall GetTokenSilentlyAsync(void* request, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>>(this->shim().GetTokenSilentlyAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetTokenSilentlyWithWebAccountAsync(void* request, void* webAccount, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>>(this->shim().GetTokenSilentlyAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestTokenAsync(void* request, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>>(this->shim().RequestTokenAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestTokenWithWebAccountAsync(void* request, void* webAccount, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>>(this->shim().RequestTokenAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAccountAsync(void* provider, HSTRING webAccountId, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>>(this->shim().FindAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&webAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAccountProviderAsync(HSTRING webAccountProviderId, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>>(this->shim().FindAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAccountProviderWithAuthorityAsync(HSTRING webAccountProviderId, HSTRING authority, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>>(this->shim().FindAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId), *reinterpret_cast<hstring const*>(&authority)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>
{
    HRESULT __stdcall FindAccountProviderWithAuthorityForUserAsync(HSTRING webAccountProviderId, HSTRING authority, void* user, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>>(this->shim().FindAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId), *reinterpret_cast<hstring const*>(&authority), *reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>
{
    HRESULT __stdcall CreateWebAccountMonitor(void* webAccounts, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Security::Authentication::Web::Core::WebAccountMonitor>(this->shim().CreateWebAccountMonitor(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Credentials::WebAccount> const*>(&webAccounts)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>
{
    HRESULT __stdcall FindAllAccountsAsync(void* provider, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult>>(this->shim().FindAllAccountsAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllAccountsWithClientIdAsync(void* provider, HSTRING clientId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult>>(this->shim().FindAllAccountsAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&clientId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindSystemAccountProviderAsync(HSTRING webAccountProviderId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>>(this->shim().FindSystemAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindSystemAccountProviderWithAuthorityAsync(HSTRING webAccountProviderId, HSTRING authority, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>>(this->shim().FindSystemAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId), *reinterpret_cast<hstring const*>(&authority)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindSystemAccountProviderWithAuthorityForUserAsync(HSTRING webAccountProviderId, HSTRING authority, void* user, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>>(this->shim().FindSystemAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId), *reinterpret_cast<hstring const*>(&authority), *reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebProviderError> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebProviderError>
{
    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorMessage(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorMessage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>
{
    HRESULT __stdcall Create(uint32_t errorCode, HSTRING errorMessage, void** webProviderError) noexcept final
    {
        try
        {
            *webProviderError = nullptr;
            typename D::abi_guard guard(this->shim());
            *webProviderError = detach_from<Windows::Security::Authentication::Web::Core::WebProviderError>(this->shim().Create(errorCode, *reinterpret_cast<hstring const*>(&errorMessage)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest>
{
    HRESULT __stdcall get_WebAccountProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccountProvider>(this->shim().WebAccountProvider());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scope(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Scope());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClientId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ClientId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PromptType(Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>(this->shim().PromptType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** requestProperties) noexcept final
    {
        try
        {
            *requestProperties = nullptr;
            typename D::abi_guard guard(this->shim());
            *requestProperties = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest2> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest2>
{
    HRESULT __stdcall get_AppProperties(void** requestProperties) noexcept final
    {
        try
        {
            *requestProperties = nullptr;
            typename D::abi_guard guard(this->shim());
            *requestProperties = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().AppProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest3> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
{
    HRESULT __stdcall get_CorrelationId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CorrelationId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CorrelationId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CorrelationId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
{
    HRESULT __stdcall Create(void* provider, HSTRING scope, HSTRING clientId, void** webTokenRequest) noexcept final
    {
        try
        {
            *webTokenRequest = nullptr;
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_from<Windows::Security::Authentication::Web::Core::WebTokenRequest>(this->shim().Create(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&scope), *reinterpret_cast<hstring const*>(&clientId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPromptType(void* provider, HSTRING scope, HSTRING clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType promptType, void** webTokenRequest) noexcept final
    {
        try
        {
            *webTokenRequest = nullptr;
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_from<Windows::Security::Authentication::Web::Core::WebTokenRequest>(this->shim().CreateWithPromptType(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&scope), *reinterpret_cast<hstring const*>(&clientId), *reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const*>(&promptType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProvider(void* provider, void** webTokenRequest) noexcept final
    {
        try
        {
            *webTokenRequest = nullptr;
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_from<Windows::Security::Authentication::Web::Core::WebTokenRequest>(this->shim().CreateWithProvider(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithScope(void* provider, HSTRING scope, void** webTokenRequest) noexcept final
    {
        try
        {
            *webTokenRequest = nullptr;
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_from<Windows::Security::Authentication::Web::Core::WebTokenRequest>(this->shim().CreateWithScope(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&scope)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestResult> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>
{
    HRESULT __stdcall get_ResponseData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse>>(this->shim().ResponseData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseStatus(Windows::Security::Authentication::Web::Core::WebTokenRequestStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>(this->shim().ResponseStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseError(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::WebProviderError>(this->shim().ResponseError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InvalidateCacheAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InvalidateCacheAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenResponse> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenResponse>
{
    HRESULT __stdcall get_Token(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Token());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderError(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Authentication::Web::Core::WebProviderError>(this->shim().ProviderError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WebAccount(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::WebAccount>(this->shim().WebAccount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, hstring>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>
{
    HRESULT __stdcall CreateWithToken(HSTRING token, void** webTokenResponse) noexcept final
    {
        try
        {
            *webTokenResponse = nullptr;
            typename D::abi_guard guard(this->shim());
            *webTokenResponse = detach_from<Windows::Security::Authentication::Web::Core::WebTokenResponse>(this->shim().CreateWithToken(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTokenAndAccount(HSTRING token, void* webAccount, void** webTokenResponse) noexcept final
    {
        try
        {
            *webTokenResponse = nullptr;
            typename D::abi_guard guard(this->shim());
            *webTokenResponse = detach_from<Windows::Security::Authentication::Web::Core::WebTokenResponse>(this->shim().CreateWithTokenAndAccount(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTokenAccountAndError(HSTRING token, void* webAccount, void* error, void** webTokenResponse) noexcept final
    {
        try
        {
            *webTokenResponse = nullptr;
            typename D::abi_guard guard(this->shim());
            *webTokenResponse = detach_from<Windows::Security::Authentication::Web::Core::WebTokenResponse>(this->shim().CreateWithTokenAccountAndError(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Security::Authentication::Web::Core::WebProviderError const*>(&error)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Core {

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().GetTokenSilentlyAsync(request);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().GetTokenSilentlyAsync(request, webAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().RequestTokenAsync(request);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().RequestTokenAsync(request, webAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAuthenticationCoreManager::FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().FindAccountAsync(provider, webAccountId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(param::hstring const& webAccountProviderId)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().FindAccountProviderAsync(webAccountProviderId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().FindAccountProviderAsync(webAccountProviderId, authority);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>().FindAccountProviderAsync(webAccountProviderId, authority, user);
}

inline Windows::Security::Authentication::Web::Core::WebAccountMonitor WebAuthenticationCoreManager::CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>().CreateWebAccountMonitor(webAccounts);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult> WebAuthenticationCoreManager::FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>().FindAllAccountsAsync(provider);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::FindAllAccountsResult> WebAuthenticationCoreManager::FindAllAccountsAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& clientId)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>().FindAllAccountsAsync(provider, clientId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>().FindSystemAccountProviderAsync(webAccountProviderId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>().FindSystemAccountProviderAsync(webAccountProviderId, authority);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindSystemAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4>().FindSystemAccountProviderAsync(webAccountProviderId, authority, user);
}

inline WebProviderError::WebProviderError(uint32_t errorCode, param::hstring const& errorMessage) :
    WebProviderError(get_activation_factory<WebProviderError, Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>().Create(errorCode, errorMessage))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().Create(provider, scope, clientId))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().CreateWithPromptType(provider, scope, clientId, promptType))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().CreateWithProvider(provider))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().CreateWithScope(provider, scope))
{}

inline WebTokenResponse::WebTokenResponse() :
    WebTokenResponse(get_activation_factory<WebTokenResponse>().ActivateInstance<WebTokenResponse>())
{}

inline WebTokenResponse::WebTokenResponse(param::hstring const& token) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>().CreateWithToken(token))
{}

inline WebTokenResponse::WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>().CreateWithTokenAndAccount(token, webAccount))
{}

inline WebTokenResponse::WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>().CreateWithTokenAccountAndError(token, webAccount, error))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IFindAllAccountsResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IFindAllAccountsResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAccountMonitor> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebAccountMonitor> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics4> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebProviderError> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebProviderError> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest2> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest2> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest3> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest3> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponse> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponse> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::FindAllAccountsResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::FindAllAccountsResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebAccountEventArgs> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::WebAccountEventArgs> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebAccountMonitor> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::WebAccountMonitor> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebProviderError> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::WebProviderError> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestResult> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestResult> {};
template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebTokenResponse> : winrt::impl::hash_base<winrt::Windows::Security::Authentication::Web::Core::WebTokenResponse> {};

}

WINRT_WARNING_POP
