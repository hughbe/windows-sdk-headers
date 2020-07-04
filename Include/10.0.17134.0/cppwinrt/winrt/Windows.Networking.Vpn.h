// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Sockets.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.Vpn.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> Windows::Networking::Vpn::VpnAppIdType consume_Windows_Networking_Vpn_IVpnAppId<D>::Type() const
{
    Windows::Networking::Vpn::VpnAppIdType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnAppId)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnAppId<D>::Type(Windows::Networking::Vpn::VpnAppIdType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnAppId)->put_Type(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnAppId<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnAppId)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnAppId<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnAppId)->put_Value(get_abi(value)));
}

template <typename D> Windows::Networking::Vpn::VpnAppId consume_Windows_Networking_Vpn_IVpnAppIdFactory<D>::Create(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value) const
{
    Windows::Networking::Vpn::VpnAppId result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnAppIdFactory)->Create(get_abi(type), get_abi(value), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::AssociateTransport(Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->AssociateTransport(get_abi(mainOuterTunnelTransport), get_abi(optionalOuterTunnelTransport)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::Start(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& routeScope, Windows::Networking::Vpn::VpnNamespaceAssignment const& namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->Start(get_abi(assignedClientIPv4list), get_abi(assignedClientIPv6list), get_abi(vpnInterfaceId), get_abi(routeScope), get_abi(namespaceScope), mtuSize, maxFrameSize, optimizeForLowCostNetwork, get_abi(mainOuterTunnelTransport), get_abi(optionalOuterTunnelTransport)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->Stop());
}

template <typename D> Windows::Networking::Vpn::VpnPickedCredential consume_Windows_Networking_Vpn_IVpnChannel<D>::RequestCredentials(Windows::Networking::Vpn::VpnCredentialType const& credType, bool isRetry, bool isSingleSignOnCredential, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    Windows::Networking::Vpn::VpnPickedCredential credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->RequestCredentials(get_abi(credType), isRetry, isSingleSignOnCredential, get_abi(certificate), put_abi(credential)));
    return credential;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType const& type, Windows::Networking::Vpn::VpnPacketBuffer& vpnPacketBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->RequestVpnPacketBuffer(get_abi(type), put_abi(vpnPacketBuffer)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::LogDiagnosticMessage(param::hstring const& message) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->LogDiagnosticMessage(get_abi(message)));
}

template <typename D> uint32_t consume_Windows_Networking_Vpn_IVpnChannel<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_Id(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnChannelConfiguration consume_Windows_Networking_Vpn_IVpnChannel<D>::Configuration() const
{
    Windows::Networking::Vpn::VpnChannelConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_Configuration(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Vpn_IVpnChannel<D>::ActivityChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->add_ActivityChange(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Vpn::IVpnChannel> consume_Windows_Networking_Vpn_IVpnChannel<D>::ActivityChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Vpn::IVpnChannel>(this, &abi_t<Windows::Networking::Vpn::IVpnChannel>::remove_ActivityChange, ActivityChange(handler));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::ActivityChange(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->remove_ActivityChange(get_abi(token)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::PlugInContext(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->put_PlugInContext(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Networking_Vpn_IVpnChannel<D>::PlugInContext() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_PlugInContext(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnSystemHealth consume_Windows_Networking_Vpn_IVpnChannel<D>::SystemHealth() const
{
    Windows::Networking::Vpn::VpnSystemHealth value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->get_SystemHealth(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::RequestCustomPrompt(param::vector_view<Windows::Networking::Vpn::IVpnCustomPrompt> const& customPrompt) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->RequestCustomPrompt(get_abi(customPrompt)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::SetErrorMessage(param::hstring const& message) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->SetErrorMessage(get_abi(message)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel<D>::SetAllowedSslTlsVersions(Windows::Foundation::IInspectable const& tunnelTransport, bool useTls12) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel)->SetAllowedSslTlsVersions(get_abi(tunnelTransport), useTls12));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel2<D>::StartWithMainTransport(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->StartWithMainTransport(get_abi(assignedClientIPv4list), get_abi(assignedClientIPv6list), get_abi(vpnInterfaceId), get_abi(assignedRoutes), get_abi(assignedDomainName), mtuSize, maxFrameSize, Reserved, get_abi(mainOuterTunnelTransport)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel2<D>::StartExistingTransports(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->StartExistingTransports(get_abi(assignedClientIPv4list), get_abi(assignedClientIPv6list), get_abi(vpnInterfaceId), get_abi(assignedRoutes), get_abi(assignedDomainName), mtuSize, maxFrameSize, Reserved));
}

template <typename D> event_token consume_Windows_Networking_Vpn_IVpnChannel2<D>::ActivityStateChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->add_ActivityStateChange(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Networking::Vpn::IVpnChannel2> consume_Windows_Networking_Vpn_IVpnChannel2<D>::ActivityStateChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Vpn::IVpnChannel2>(this, &abi_t<Windows::Networking::Vpn::IVpnChannel2>::remove_ActivityStateChange, ActivityStateChange(handler));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel2<D>::ActivityStateChange(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->remove_ActivityStateChange(get_abi(token)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer consume_Windows_Networking_Vpn_IVpnChannel2<D>::GetVpnSendPacketBuffer() const
{
    Windows::Networking::Vpn::VpnPacketBuffer vpnSendPacketBuffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->GetVpnSendPacketBuffer(put_abi(vpnSendPacketBuffer)));
    return vpnSendPacketBuffer;
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer consume_Windows_Networking_Vpn_IVpnChannel2<D>::GetVpnReceivePacketBuffer() const
{
    Windows::Networking::Vpn::VpnPacketBuffer vpnReceivePacketBuffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->GetVpnReceivePacketBuffer(put_abi(vpnReceivePacketBuffer)));
    return vpnReceivePacketBuffer;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCustomPromptAsync(param::async_vector_view<Windows::Networking::Vpn::IVpnCustomPromptElement> const& customPromptElement) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCustomPromptAsync(get_abi(customPromptElement), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCredentialsWithCertificateAsync(get_abi(credType), credOptions, get_abi(certificate), put_abi(credential)));
    return credential;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCredentialsWithOptionsAsync(get_abi(credType), credOptions, put_abi(credential)));
    return credential;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> consume_Windows_Networking_Vpn_IVpnChannel2<D>::RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> credential{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->RequestCredentialsSimpleAsync(get_abi(credType), put_abi(credential)));
    return credential;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel2<D>::TerminateConnection(param::hstring const& message) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->TerminateConnection(get_abi(message)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel2<D>::StartWithTrafficFilter(param::vector_view<Windows::Networking::HostName> const& assignedClientIpv4List, param::vector_view<Windows::Networking::HostName> const& assignedClientIpv6List, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport, Windows::Networking::Vpn::VpnTrafficFilterAssignment const& assignedTrafficFilters) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel2)->StartWithTrafficFilter(get_abi(assignedClientIpv4List), get_abi(assignedClientIpv6List), get_abi(vpnInterfaceId), get_abi(assignedRoutes), get_abi(assignedNamespace), mtuSize, maxFrameSize, reserved, get_abi(mainOuterTunnelTransport), get_abi(optionalOuterTunnelTransport), get_abi(assignedTrafficFilters)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel4<D>::AddAndAssociateTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel4)->AddAndAssociateTransport(get_abi(transport), get_abi(context)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel4<D>::StartWithTrafficFilter(param::iterable<Windows::Networking::HostName> const& assignedClientIpv4Addresses, param::iterable<Windows::Networking::HostName> const& assignedClientIpv6Addresses, Windows::Networking::Vpn::VpnInterfaceId const& vpninterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, param::iterable<Windows::Foundation::IInspectable> const& transports, Windows::Networking::Vpn::VpnTrafficFilterAssignment const& assignedTrafficFilters) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel4)->StartWithMultipleTransports(get_abi(assignedClientIpv4Addresses), get_abi(assignedClientIpv6Addresses), get_abi(vpninterfaceId), get_abi(assignedRoutes), get_abi(assignedNamespace), mtuSize, maxFrameSize, reserved, get_abi(transports), get_abi(assignedTrafficFilters)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel4<D>::ReplaceAndAssociateTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel4)->ReplaceAndAssociateTransport(get_abi(transport), get_abi(context)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannel4<D>::StartReconnectingTransport(Windows::Foundation::IInspectable const& transport, Windows::Foundation::IInspectable const& context) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel4)->StartReconnectingTransport(get_abi(transport), get_abi(context)));
}

template <typename D> Windows::Networking::Sockets::ControlChannelTriggerStatus consume_Windows_Networking_Vpn_IVpnChannel4<D>::GetSlotTypeForTransportContext(Windows::Foundation::IInspectable const& context) const
{
    Windows::Networking::Sockets::ControlChannelTriggerStatus slotType{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel4)->GetSlotTypeForTransportContext(get_abi(context), put_abi(slotType)));
    return slotType;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Networking_Vpn_IVpnChannel4<D>::CurrentRequestTransportContext() const
{
    Windows::Foundation::IInspectable context{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannel4)->get_CurrentRequestTransportContext(put_abi(context)));
    return context;
}

template <typename D> Windows::Networking::Vpn::VpnChannelActivityEventType consume_Windows_Networking_Vpn_IVpnChannelActivityEventArgs<D>::Type() const
{
    Windows::Networking::Vpn::VpnChannelActivityEventType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannelActivityEventArgs)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnChannelActivityEventType consume_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs<D>::ActivityState() const
{
    Windows::Networking::Vpn::VpnChannelActivityEventType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs)->get_ActivityState(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>::ServerServiceName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration)->get_ServerServiceName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>::ServerHostNameList() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration)->get_ServerHostNameList(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>::CustomField() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration)->get_CustomField(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> consume_Windows_Networking_Vpn_IVpnChannelConfiguration2<D>::ServerUris() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannelConfiguration2)->get_ServerUris(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnChannelStatics<D>::ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnChannelStatics)->ProcessEventAsync(get_abi(thirdPartyPlugIn), get_abi(event)));
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_Vpn_IVpnCredential<D>::PasskeyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_PasskeyCredential(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Networking_Vpn_IVpnCredential<D>::CertificateCredential() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_CertificateCredential(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCredential<D>::AdditionalPin() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_AdditionalPin(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_Vpn_IVpnCredential<D>::OldPasswordCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCredential)->get_OldPasswordCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>::InitialCheckState(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomCheckBox)->put_InitialCheckState(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>::InitialCheckState() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomCheckBox)->get_InitialCheckState(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>::Checked() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomCheckBox)->get_Checked(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>::OptionsText(param::async_vector_view<hstring> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomComboBox)->put_OptionsText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>::OptionsText() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomComboBox)->get_OptionsText(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>::Selected() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomComboBox)->get_Selected(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::DefaultText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->put_DefaultText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::DefaultText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->get_DefaultText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::NoEcho(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->put_NoEcho(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::NoEcho() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->get_NoEcho(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomEditBox)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->put_Label(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Compulsory(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->put_Compulsory(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Compulsory() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->get_Compulsory(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Bordered(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->put_Bordered(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>::Bordered() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPrompt)->get_Bordered(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>::InitialValue(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptBooleanInput)->put_InitialValue(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>::InitialValue() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptBooleanInput)->get_InitialValue(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>::Value() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptBooleanInput)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Compulsory(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->put_Compulsory(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Compulsory() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->get_Compulsory(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Emphasized(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->put_Emphasized(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>::Emphasized() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptElement)->get_Emphasized(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector<D>::Options() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptOptionSelector)->get_Options(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector<D>::SelectedIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptOptionSelector)->get_SelectedIndex(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPromptText<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptText)->put_Text(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomPromptText<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptText)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::PlaceholderText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->put_PlaceholderText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::PlaceholderText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->get_PlaceholderText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::IsTextHidden(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->put_IsTextHidden(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::IsTextHidden() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->get_IsTextHidden(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomPromptTextInput)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnCustomTextBox<D>::DisplayText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomTextBox)->put_DisplayText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnCustomTextBox<D>::DisplayText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnCustomTextBox)->get_DisplayText(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>::DomainNameList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameAssignment)->get_DomainNameList(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>::ProxyAutoConfigurationUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameAssignment)->put_ProxyAutoConfigurationUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>::ProxyAutoConfigurationUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameAssignment)->get_ProxyAutoConfigurationUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainName(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->put_DomainName(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_DomainName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainNameType(Windows::Networking::Vpn::VpnDomainNameType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->put_DomainNameType(get_abi(value)));
}

template <typename D> Windows::Networking::Vpn::VpnDomainNameType consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DomainNameType() const
{
    Windows::Networking::Vpn::VpnDomainNameType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_DomainNameType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::DnsServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_DnsServers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>::WebProxyServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo)->get_WebProxyServers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> consume_Windows_Networking_Vpn_IVpnDomainNameInfo2<D>::WebProxyUris() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfo2)->get_WebProxyUris(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnDomainNameInfo consume_Windows_Networking_Vpn_IVpnDomainNameInfoFactory<D>::CreateVpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList) const
{
    Windows::Networking::Vpn::VpnDomainNameInfo domainNameInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnDomainNameInfoFactory)->CreateVpnDomainNameInfo(get_abi(name), get_abi(nameType), get_abi(dnsServerList), get_abi(proxyServerList), put_abi(domainNameInfo)));
    return domainNameInfo;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnInterfaceId<D>::GetAddressInfo(com_array<uint8_t>& id) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnInterfaceId)->GetAddressInfo(impl::put_size_abi(id), put_abi(id)));
}

template <typename D> Windows::Networking::Vpn::VpnInterfaceId consume_Windows_Networking_Vpn_IVpnInterfaceIdFactory<D>::CreateVpnInterfaceId(array_view<uint8_t const> address) const
{
    Windows::Networking::Vpn::VpnInterfaceId vpnInterfaceId{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnInterfaceIdFactory)->CreateVpnInterfaceId(address.size(), get_abi(address), put_abi(vpnInterfaceId)));
    return vpnInterfaceId;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::AddProfileFromXmlAsync(param::hstring const& xml) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->AddProfileFromXmlAsync(get_abi(xml), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::AddProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->AddProfileFromObjectAsync(get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::UpdateProfileFromXmlAsync(param::hstring const& xml) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->UpdateProfileFromXmlAsync(get_abi(xml), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::UpdateProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->UpdateProfileFromObjectAsync(get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::GetProfilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->GetProfilesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::DeleteProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->DeleteProfileAsync(get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::ConnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->ConnectProfileAsync(get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::ConnectProfileWithPasswordCredentialAsync(Windows::Networking::Vpn::IVpnProfile const& profile, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->ConnectProfileWithPasswordCredentialAsync(get_abi(profile), get_abi(passwordCredential), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> consume_Windows_Networking_Vpn_IVpnManagementAgent<D>::DisconnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnManagementAgent)->DisconnectProfileAsync(get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::NamespaceList(param::vector<Windows::Networking::Vpn::VpnNamespaceInfo> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->put_NamespaceList(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::NamespaceList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->get_NamespaceList(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::ProxyAutoConfigUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->put_ProxyAutoConfigUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>::ProxyAutoConfigUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceAssignment)->get_ProxyAutoConfigUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::Namespace(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->put_Namespace(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::Namespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->get_Namespace(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::DnsServers(param::vector<Windows::Networking::HostName> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->put_DnsServers(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::DnsServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->get_DnsServers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::WebProxyServers(param::vector<Windows::Networking::HostName> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->put_WebProxyServers(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::HostName> consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>::WebProxyServers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfo)->get_WebProxyServers(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnNamespaceInfo consume_Windows_Networking_Vpn_IVpnNamespaceInfoFactory<D>::CreateVpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList) const
{
    Windows::Networking::Vpn::VpnNamespaceInfo namespaceInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNamespaceInfoFactory)->CreateVpnNamespaceInfo(get_abi(name), get_abi(dnsServerList), get_abi(proxyServerList), put_abi(namespaceInfo)));
    return namespaceInfo;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::Servers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_Servers(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnRoutingPolicyType consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::RoutingPolicyType() const
{
    Windows::Networking::Vpn::VpnRoutingPolicyType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_RoutingPolicyType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_RoutingPolicyType(get_abi(value)));
}

template <typename D> Windows::Networking::Vpn::VpnNativeProtocolType consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::NativeProtocolType() const
{
    Windows::Networking::Vpn::VpnNativeProtocolType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_NativeProtocolType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_NativeProtocolType(get_abi(value)));
}

template <typename D> Windows::Networking::Vpn::VpnAuthenticationMethod consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::UserAuthenticationMethod() const
{
    Windows::Networking::Vpn::VpnAuthenticationMethod value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_UserAuthenticationMethod(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_UserAuthenticationMethod(get_abi(value)));
}

template <typename D> Windows::Networking::Vpn::VpnAuthenticationMethod consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::TunnelAuthenticationMethod() const
{
    Windows::Networking::Vpn::VpnAuthenticationMethod value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_TunnelAuthenticationMethod(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_TunnelAuthenticationMethod(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::EapConfiguration() const
{
    hstring Value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->get_EapConfiguration(put_abi(Value)));
    return Value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNativeProfile<D>::EapConfiguration(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile)->put_EapConfiguration(get_abi(value)));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>::RequireVpnClientAppUI() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile2)->get_RequireVpnClientAppUI(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>::RequireVpnClientAppUI(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile2)->put_RequireVpnClientAppUI(value));
}

template <typename D> Windows::Networking::Vpn::VpnManagementConnectionStatus consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>::ConnectionStatus() const
{
    Windows::Networking::Vpn::VpnManagementConnectionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnNativeProfile2)->get_ConnectionStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::Buffer consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::Buffer() const
{
    Windows::Storage::Streams::Buffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->get_Buffer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->put_Status(get_abi(value)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBufferStatus consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::Status() const
{
    Windows::Networking::Vpn::VpnPacketBufferStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::TransportAffinity(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->put_TransportAffinity(value));
}

template <typename D> uint32_t consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>::TransportAffinity() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer)->get_TransportAffinity(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnAppId consume_Windows_Networking_Vpn_IVpnPacketBuffer2<D>::AppId() const
{
    Windows::Networking::Vpn::VpnAppId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer2)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBuffer3<D>::TransportContext(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer3)->put_TransportContext(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Networking_Vpn_IVpnPacketBuffer3<D>::TransportContext() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBuffer3)->get_TransportContext(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer consume_Windows_Networking_Vpn_IVpnPacketBufferFactory<D>::CreateVpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length) const
{
    Windows::Networking::Vpn::VpnPacketBuffer vpnPacketBuffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferFactory)->CreateVpnPacketBuffer(get_abi(parentBuffer), offset, length, put_abi(vpnPacketBuffer)));
    return vpnPacketBuffer;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Append(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->Append(get_abi(nextVpnPacketBuffer)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::AddAtBegin(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->AddAtBegin(get_abi(nextVpnPacketBuffer)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::RemoveAtEnd() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->RemoveAtEnd(put_abi(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::RemoveAtBegin() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->RemoveAtBegin(put_abi(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->Clear());
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->put_Status(get_abi(value)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBufferStatus consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Status() const
{
    Windows::Networking::Vpn::VpnPacketBufferStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->get_Status(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>::Size() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList)->get_Size(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::AddLeadingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->AddLeadingPacket(get_abi(nextVpnPacketBuffer)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::RemoveLeadingPacket() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->RemoveLeadingPacket(put_abi(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::AddTrailingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->AddTrailingPacket(get_abi(nextVpnPacketBuffer)));
}

template <typename D> Windows::Networking::Vpn::VpnPacketBuffer consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>::RemoveTrailingPacket() const
{
    Windows::Networking::Vpn::VpnPacketBuffer nextVpnPacketBuffer{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPacketBufferList2)->RemoveTrailingPacket(put_abi(nextVpnPacketBuffer)));
    return nextVpnPacketBuffer;
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_Vpn_IVpnPickedCredential<D>::PasskeyCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPickedCredential)->get_PasskeyCredential(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnPickedCredential<D>::AdditionalPin() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPickedCredential)->get_AdditionalPin(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::PasswordCredential consume_Windows_Networking_Vpn_IVpnPickedCredential<D>::OldPasswordCredential() const
{
    Windows::Security::Credentials::PasswordCredential value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPickedCredential)->get_OldPasswordCredential(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Connect(Windows::Networking::Vpn::VpnChannel const& channel) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Connect(get_abi(channel)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Disconnect(Windows::Networking::Vpn::VpnChannel const& channel) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Disconnect(get_abi(channel)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugIn<D>::GetKeepAlivePayload(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer& keepAlivePacket) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->GetKeepAlivePayload(get_abi(channel), put_abi(keepAlivePacket)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Encapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBufferList const& packets, Windows::Networking::Vpn::VpnPacketBufferList const& encapulatedPackets) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Encapsulate(get_abi(channel), get_abi(packets), get_abi(encapulatedPackets)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugIn<D>::Decapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer const& encapBuffer, Windows::Networking::Vpn::VpnPacketBufferList const& decapsulatedPackets, Windows::Networking::Vpn::VpnPacketBufferList const& controlPacketsToSend) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugIn)->Decapsulate(get_abi(channel), get_abi(encapBuffer), get_abi(decapsulatedPackets), get_abi(controlPacketsToSend)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::ServerUris() const
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->get_ServerUris(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::CustomConfiguration() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->get_CustomConfiguration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::CustomConfiguration(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->put_CustomConfiguration(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::VpnPluginPackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->get_VpnPluginPackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>::VpnPluginPackageFamilyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile)->put_VpnPluginPackageFamilyName(get_abi(value)));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>::RequireVpnClientAppUI() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile2)->get_RequireVpnClientAppUI(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>::RequireVpnClientAppUI(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile2)->put_RequireVpnClientAppUI(value));
}

template <typename D> Windows::Networking::Vpn::VpnManagementConnectionStatus consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>::ConnectionStatus() const
{
    Windows::Networking::Vpn::VpnManagementConnectionStatus value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnPlugInProfile2)->get_ConnectionStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Vpn_IVpnProfile<D>::ProfileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_ProfileName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnProfile<D>::ProfileName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->put_ProfileName(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId> consume_Windows_Networking_Vpn_IVpnProfile<D>::AppTriggers() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_AppTriggers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> consume_Windows_Networking_Vpn_IVpnProfile<D>::Routes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_Routes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> consume_Windows_Networking_Vpn_IVpnProfile<D>::DomainNameInfoList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_DomainNameInfoList(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> consume_Windows_Networking_Vpn_IVpnProfile<D>::TrafficFilters() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_TrafficFilters(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnProfile<D>::RememberCredentials() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_RememberCredentials(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnProfile<D>::RememberCredentials(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->put_RememberCredentials(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnProfile<D>::AlwaysOn() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->get_AlwaysOn(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnProfile<D>::AlwaysOn(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnProfile)->put_AlwaysOn(value));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnRoute<D>::Address(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRoute)->put_Address(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Vpn_IVpnRoute<D>::Address() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRoute)->get_Address(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnRoute<D>::PrefixSize(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRoute)->put_PrefixSize(value));
}

template <typename D> uint8_t consume_Windows_Networking_Vpn_IVpnRoute<D>::PrefixSize() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRoute)->get_PrefixSize(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv4InclusionRoutes(get_abi(value)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv6InclusionRoutes(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4InclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv4InclusionRoutes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6InclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv6InclusionRoutes(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv4ExclusionRoutes(get_abi(value)));
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_Ipv6ExclusionRoutes(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv4ExclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv4ExclusionRoutes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::Ipv6ExclusionRoutes() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_Ipv6ExclusionRoutes(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::ExcludeLocalSubnets(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->put_ExcludeLocalSubnets(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>::ExcludeLocalSubnets() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteAssignment)->get_ExcludeLocalSubnets(&value));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnRoute consume_Windows_Networking_Vpn_IVpnRouteFactory<D>::CreateVpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize) const
{
    Windows::Networking::Vpn::VpnRoute route{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnRouteFactory)->CreateVpnRoute(get_abi(address), prefixSize, put_abi(route)));
    return route;
}

template <typename D> Windows::Storage::Streams::Buffer consume_Windows_Networking_Vpn_IVpnSystemHealth<D>::StatementOfHealth() const
{
    Windows::Storage::Streams::Buffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnSystemHealth)->get_StatementOfHealth(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnAppId consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::AppId() const
{
    Windows::Networking::Vpn::VpnAppId value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_AppId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::AppId(Windows::Networking::Vpn::VpnAppId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->put_AppId(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::AppClaims() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_AppClaims(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnIPProtocol consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::Protocol() const
{
    Windows::Networking::Vpn::VpnIPProtocol value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_Protocol(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::Protocol(Windows::Networking::Vpn::VpnIPProtocol const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->put_Protocol(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::LocalPortRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_LocalPortRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RemotePortRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_RemotePortRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::LocalAddressRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_LocalAddressRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RemoteAddressRanges() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_RemoteAddressRanges(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Vpn::VpnRoutingPolicyType consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RoutingPolicyType() const
{
    Windows::Networking::Vpn::VpnRoutingPolicyType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->get_RoutingPolicyType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>::RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilter)->put_RoutingPolicyType(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::TrafficFilterList() const
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->get_TrafficFilterList(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowOutbound() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->get_AllowOutbound(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowOutbound(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->put_AllowOutbound(value));
}

template <typename D> bool consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowInbound() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->get_AllowInbound(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>::AllowInbound(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterAssignment)->put_AllowInbound(value));
}

template <typename D> Windows::Networking::Vpn::VpnTrafficFilter consume_Windows_Networking_Vpn_IVpnTrafficFilterFactory<D>::Create(Windows::Networking::Vpn::VpnAppId const& appId) const
{
    Windows::Networking::Vpn::VpnTrafficFilter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Vpn::IVpnTrafficFilterFactory)->Create(get_abi(appId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnAppId> : produce_base<D, Windows::Networking::Vpn::IVpnAppId>
{
    HRESULT __stdcall get_Type(Windows::Networking::Vpn::VpnAppIdType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAppIdType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Type(Windows::Networking::Vpn::VpnAppIdType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Type(*reinterpret_cast<Windows::Networking::Vpn::VpnAppIdType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnAppIdFactory> : produce_base<D, Windows::Networking::Vpn::IVpnAppIdFactory>
{
    HRESULT __stdcall Create(Windows::Networking::Vpn::VpnAppIdType type, HSTRING value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Vpn::VpnAppId>(this->shim().Create(*reinterpret_cast<Windows::Networking::Vpn::VpnAppIdType const*>(&type), *reinterpret_cast<hstring const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannel> : produce_base<D, Windows::Networking::Vpn::IVpnChannel>
{
    HRESULT __stdcall AssociateTransport(void* mainOuterTunnelTransport, void* optionalOuterTunnelTransport) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AssociateTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&optionalOuterTunnelTransport));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start(void* assignedClientIPv4list, void* assignedClientIPv6list, void* vpnInterfaceId, void* routeScope, void* namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, void* mainOuterTunnelTransport, void* optionalOuterTunnelTransport) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv4list), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv6list), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&routeScope), *reinterpret_cast<Windows::Networking::Vpn::VpnNamespaceAssignment const*>(&namespaceScope), mtuSize, maxFrameSize, optimizeForLowCostNetwork, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&optionalOuterTunnelTransport));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCredentials(Windows::Networking::Vpn::VpnCredentialType credType, bool isRetry, bool isSingleSignOnCredential, void* certificate, void** credential) noexcept final
    {
        try
        {
            *credential = nullptr;
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Networking::Vpn::VpnPickedCredential>(this->shim().RequestCredentials(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType), isRetry, isSingleSignOnCredential, *reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType type, void** vpnPacketBuffer) noexcept final
    {
        try
        {
            *vpnPacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            this->shim().RequestVpnPacketBuffer(*reinterpret_cast<Windows::Networking::Vpn::VpnDataPathType const*>(&type), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer*>(vpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LogDiagnosticMessage(HSTRING message) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LogDiagnosticMessage(*reinterpret_cast<hstring const*>(&message));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnChannelConfiguration>(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ActivityChange(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ActivityChange(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ActivityChange(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActivityChange(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PlugInContext(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlugInContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlugInContext(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().PlugInContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemHealth(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnSystemHealth>(this->shim().SystemHealth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCustomPrompt(void* customPrompt) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestCustomPrompt(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPrompt> const*>(&customPrompt));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetErrorMessage(HSTRING message) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetErrorMessage(*reinterpret_cast<hstring const*>(&message));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAllowedSslTlsVersions(void* tunnelTransport, bool useTls12) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAllowedSslTlsVersions(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&tunnelTransport), useTls12);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannel2> : produce_base<D, Windows::Networking::Vpn::IVpnChannel2>
{
    HRESULT __stdcall StartWithMainTransport(void* assignedClientIPv4list, void* assignedClientIPv6list, void* vpnInterfaceId, void* assignedRoutes, void* assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, void* mainOuterTunnelTransport) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartWithMainTransport(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv4list), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv6list), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedDomainName), mtuSize, maxFrameSize, Reserved, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartExistingTransports(void* assignedClientIPv4list, void* assignedClientIPv6list, void* vpnInterfaceId, void* assignedRoutes, void* assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartExistingTransports(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv4list), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIPv6list), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedDomainName), mtuSize, maxFrameSize, Reserved);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ActivityStateChange(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ActivityStateChange(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ActivityStateChange(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActivityStateChange(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetVpnSendPacketBuffer(void** vpnSendPacketBuffer) noexcept final
    {
        try
        {
            *vpnSendPacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *vpnSendPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().GetVpnSendPacketBuffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetVpnReceivePacketBuffer(void** vpnReceivePacketBuffer) noexcept final
    {
        try
        {
            *vpnReceivePacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *vpnReceivePacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().GetVpnReceivePacketBuffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCustomPromptAsync(void* customPromptElement, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RequestCustomPromptAsync(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnCustomPromptElement> const*>(&customPromptElement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCredentialsWithCertificateAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions, void* certificate, void** credential) noexcept final
    {
        try
        {
            *credential = nullptr;
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>>(this->shim().RequestCredentialsAsync(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType), credOptions, *reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCredentialsWithOptionsAsync(Windows::Networking::Vpn::VpnCredentialType credType, uint32_t credOptions, void** credential) noexcept final
    {
        try
        {
            *credential = nullptr;
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>>(this->shim().RequestCredentialsAsync(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType), credOptions));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCredentialsSimpleAsync(Windows::Networking::Vpn::VpnCredentialType credType, void** credential) noexcept final
    {
        try
        {
            *credential = nullptr;
            typename D::abi_guard guard(this->shim());
            *credential = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential>>(this->shim().RequestCredentialsAsync(*reinterpret_cast<Windows::Networking::Vpn::VpnCredentialType const*>(&credType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TerminateConnection(HSTRING message) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TerminateConnection(*reinterpret_cast<hstring const*>(&message));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartWithTrafficFilter(void* assignedClientIpv4List, void* assignedClientIpv6List, void* vpnInterfaceId, void* assignedRoutes, void* assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, void* mainOuterTunnelTransport, void* optionalOuterTunnelTransport, void* assignedTrafficFilters) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartWithTrafficFilter(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIpv4List), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> const*>(&assignedClientIpv6List), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpnInterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedNamespace), mtuSize, maxFrameSize, reserved, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&mainOuterTunnelTransport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&optionalOuterTunnelTransport), *reinterpret_cast<Windows::Networking::Vpn::VpnTrafficFilterAssignment const*>(&assignedTrafficFilters));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannel4> : produce_base<D, Windows::Networking::Vpn::IVpnChannel4>
{
    HRESULT __stdcall AddAndAssociateTransport(void* transport, void* context) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAndAssociateTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&transport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartWithMultipleTransports(void* assignedClientIpv4Addresses, void* assignedClientIpv6Addresses, void* vpninterfaceId, void* assignedRoutes, void* assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, void* transports, void* assignedTrafficFilters) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartWithTrafficFilter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&assignedClientIpv4Addresses), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&assignedClientIpv6Addresses), *reinterpret_cast<Windows::Networking::Vpn::VpnInterfaceId const*>(&vpninterfaceId), *reinterpret_cast<Windows::Networking::Vpn::VpnRouteAssignment const*>(&assignedRoutes), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameAssignment const*>(&assignedNamespace), mtuSize, maxFrameSize, reserved, *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::IInspectable> const*>(&transports), *reinterpret_cast<Windows::Networking::Vpn::VpnTrafficFilterAssignment const*>(&assignedTrafficFilters));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReplaceAndAssociateTransport(void* transport, void* context) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplaceAndAssociateTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&transport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartReconnectingTransport(void* transport, void* context) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartReconnectingTransport(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&transport), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&context));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSlotTypeForTransportContext(void* context, Windows::Networking::Sockets::ControlChannelTriggerStatus* slotType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *slotType = detach_from<Windows::Networking::Sockets::ControlChannelTriggerStatus>(this->shim().GetSlotTypeForTransportContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&context)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentRequestTransportContext(void** context) noexcept final
    {
        try
        {
            *context = nullptr;
            typename D::abi_guard guard(this->shim());
            *context = detach_from<Windows::Foundation::IInspectable>(this->shim().CurrentRequestTransportContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelActivityEventArgs> : produce_base<D, Windows::Networking::Vpn::IVpnChannelActivityEventArgs>
{
    HRESULT __stdcall get_Type(Windows::Networking::Vpn::VpnChannelActivityEventType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnChannelActivityEventType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> : produce_base<D, Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>
{
    HRESULT __stdcall get_ActivityState(Windows::Networking::Vpn::VpnChannelActivityEventType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnChannelActivityEventType>(this->shim().ActivityState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelConfiguration> : produce_base<D, Windows::Networking::Vpn::IVpnChannelConfiguration>
{
    HRESULT __stdcall get_ServerServiceName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ServerServiceName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServerHostNameList(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>>(this->shim().ServerHostNameList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomField(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomField());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelConfiguration2> : produce_base<D, Windows::Networking::Vpn::IVpnChannelConfiguration2>
{
    HRESULT __stdcall get_ServerUris(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>>(this->shim().ServerUris());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnChannelStatics> : produce_base<D, Windows::Networking::Vpn::IVpnChannelStatics>
{
    HRESULT __stdcall ProcessEventAsync(void* thirdPartyPlugIn, void* event) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessEventAsync(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&thirdPartyPlugIn), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&event));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCredential> : produce_base<D, Windows::Networking::Vpn::IVpnCredential>
{
    HRESULT __stdcall get_PasskeyCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().PasskeyCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CertificateCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().CertificateCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalPin(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AdditionalPin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldPasswordCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().OldPasswordCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomCheckBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomCheckBox>
{
    HRESULT __stdcall put_InitialCheckState(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialCheckState(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialCheckState(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InitialCheckState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Checked(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Checked());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomComboBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomComboBox>
{
    HRESULT __stdcall put_OptionsText(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionsText(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OptionsText(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().OptionsText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Selected(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Selected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomEditBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomEditBox>
{
    HRESULT __stdcall put_DefaultText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DefaultText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NoEcho(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoEcho(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NoEcho(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NoEcho());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomErrorBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomErrorBox>
{};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPrompt> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    HRESULT __stdcall put_Label(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Label(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Compulsory(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Compulsory(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Compulsory(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Compulsory());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Bordered(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bordered(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bordered(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Bordered());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>
{
    HRESULT __stdcall put_InitialValue(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InitialValue(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InitialValue(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InitialValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptElement> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
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

    HRESULT __stdcall put_Compulsory(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Compulsory(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Compulsory(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Compulsory());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Emphasized(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Emphasized(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Emphasized(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Emphasized());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>
{
    HRESULT __stdcall get_Options(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedIndex(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SelectedIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptText> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptText>
{
    HRESULT __stdcall put_Text(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomPromptTextInput> : produce_base<D, Windows::Networking::Vpn::IVpnCustomPromptTextInput>
{
    HRESULT __stdcall put_PlaceholderText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PlaceholderText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlaceholderText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PlaceholderText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsTextHidden(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTextHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsTextHidden(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTextHidden());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnCustomTextBox> : produce_base<D, Windows::Networking::Vpn::IVpnCustomTextBox>
{
    HRESULT __stdcall put_DisplayText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameAssignment>
{
    HRESULT __stdcall get_DomainNameList(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>>(this->shim().DomainNameList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyAutoConfigurationUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyAutoConfigurationUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAutoConfigurationUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ProxyAutoConfigurationUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfo> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfo>
{
    HRESULT __stdcall put_DomainName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().DomainName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DomainNameType(Windows::Networking::Vpn::VpnDomainNameType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainNameType(*reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainNameType(Windows::Networking::Vpn::VpnDomainNameType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnDomainNameType>(this->shim().DomainNameType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DnsServers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().DnsServers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WebProxyServers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().WebProxyServers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfo2> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfo2>
{
    HRESULT __stdcall get_WebProxyUris(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>>(this->shim().WebProxyUris());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnDomainNameInfoFactory> : produce_base<D, Windows::Networking::Vpn::IVpnDomainNameInfoFactory>
{
    HRESULT __stdcall CreateVpnDomainNameInfo(HSTRING name, Windows::Networking::Vpn::VpnDomainNameType nameType, void* dnsServerList, void* proxyServerList, void** domainNameInfo) noexcept final
    {
        try
        {
            *domainNameInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *domainNameInfo = detach_from<Windows::Networking::Vpn::VpnDomainNameInfo>(this->shim().CreateVpnDomainNameInfo(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Networking::Vpn::VpnDomainNameType const*>(&nameType), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&dnsServerList), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::HostName> const*>(&proxyServerList)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnInterfaceId> : produce_base<D, Windows::Networking::Vpn::IVpnInterfaceId>
{
    HRESULT __stdcall GetAddressInfo(uint32_t* __idSize, uint8_t** id) noexcept final
    {
        try
        {
            *__idSize = 0;
            *id = nullptr;
            typename D::abi_guard guard(this->shim());
            this->shim().GetAddressInfo(detach_abi<uint8_t>(__idSize, id));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnInterfaceIdFactory> : produce_base<D, Windows::Networking::Vpn::IVpnInterfaceIdFactory>
{
    HRESULT __stdcall CreateVpnInterfaceId(uint32_t __addressSize, uint8_t* address, void** vpnInterfaceId) noexcept final
    {
        try
        {
            *vpnInterfaceId = nullptr;
            typename D::abi_guard guard(this->shim());
            *vpnInterfaceId = detach_from<Windows::Networking::Vpn::VpnInterfaceId>(this->shim().CreateVpnInterfaceId(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(address), reinterpret_cast<uint8_t const *>(address) + __addressSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnManagementAgent> : produce_base<D, Windows::Networking::Vpn::IVpnManagementAgent>
{
    HRESULT __stdcall AddProfileFromXmlAsync(HSTRING xml, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().AddProfileFromXmlAsync(*reinterpret_cast<hstring const*>(&xml)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddProfileFromObjectAsync(void* profile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().AddProfileFromObjectAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateProfileFromXmlAsync(HSTRING xml, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().UpdateProfileFromXmlAsync(*reinterpret_cast<hstring const*>(&xml)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateProfileFromObjectAsync(void* profile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().UpdateProfileFromObjectAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetProfilesAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>>>(this->shim().GetProfilesAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteProfileAsync(void* profile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().DeleteProfileAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectProfileAsync(void* profile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().ConnectProfileAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConnectProfileWithPasswordCredentialAsync(void* profile, void* passwordCredential, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().ConnectProfileWithPasswordCredentialAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile), *reinterpret_cast<Windows::Security::Credentials::PasswordCredential const*>(&passwordCredential)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DisconnectProfileAsync(void* profile, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus>>(this->shim().DisconnectProfileAsync(*reinterpret_cast<Windows::Networking::Vpn::IVpnProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNamespaceAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceAssignment>
{
    HRESULT __stdcall put_NamespaceList(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NamespaceList(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NamespaceList(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo>>(this->shim().NamespaceList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProxyAutoConfigUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProxyAutoConfigUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProxyAutoConfigUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ProxyAutoConfigUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNamespaceInfo> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceInfo>
{
    HRESULT __stdcall put_Namespace(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Namespace(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Namespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Namespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DnsServers(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DnsServers(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DnsServers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().DnsServers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_WebProxyServers(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WebProxyServers(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WebProxyServers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::HostName>>(this->shim().WebProxyServers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNamespaceInfoFactory> : produce_base<D, Windows::Networking::Vpn::IVpnNamespaceInfoFactory>
{
    HRESULT __stdcall CreateVpnNamespaceInfo(HSTRING name, void* dnsServerList, void* proxyServerList, void** namespaceInfo) noexcept final
    {
        try
        {
            *namespaceInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *namespaceInfo = detach_from<Windows::Networking::Vpn::VpnNamespaceInfo>(this->shim().CreateVpnNamespaceInfo(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&dnsServerList), *reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::HostName> const*>(&proxyServerList)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNativeProfile> : produce_base<D, Windows::Networking::Vpn::IVpnNativeProfile>
{
    HRESULT __stdcall get_Servers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Servers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnRoutingPolicyType>(this->shim().RoutingPolicyType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoutingPolicyType(*reinterpret_cast<Windows::Networking::Vpn::VpnRoutingPolicyType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnNativeProtocolType>(this->shim().NativeProtocolType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NativeProtocolType(*reinterpret_cast<Windows::Networking::Vpn::VpnNativeProtocolType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAuthenticationMethod>(this->shim().UserAuthenticationMethod());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserAuthenticationMethod(*reinterpret_cast<Windows::Networking::Vpn::VpnAuthenticationMethod const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAuthenticationMethod>(this->shim().TunnelAuthenticationMethod());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TunnelAuthenticationMethod(*reinterpret_cast<Windows::Networking::Vpn::VpnAuthenticationMethod const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EapConfiguration(HSTRING* Value) noexcept final
    {
        try
        {
            *Value = nullptr;
            typename D::abi_guard guard(this->shim());
            *Value = detach_from<hstring>(this->shim().EapConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_EapConfiguration(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EapConfiguration(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnNativeProfile2> : produce_base<D, Windows::Networking::Vpn::IVpnNativeProfile2>
{
    HRESULT __stdcall get_RequireVpnClientAppUI(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequireVpnClientAppUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequireVpnClientAppUI(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequireVpnClientAppUI(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionStatus(Windows::Networking::Vpn::VpnManagementConnectionStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnManagementConnectionStatus>(this->shim().ConnectionStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer>
{
    HRESULT __stdcall get_Buffer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::Buffer>(this->shim().Buffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::Vpn::VpnPacketBufferStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnPacketBufferStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransportAffinity(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransportAffinity(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransportAffinity(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TransportAffinity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer2> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer2>
{
    HRESULT __stdcall get_AppId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAppId>(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBuffer3> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBuffer3>
{
    HRESULT __stdcall put_TransportContext(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransportContext(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransportContext(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().TransportContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferFactory> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferFactory>
{
    HRESULT __stdcall CreateVpnPacketBuffer(void* parentBuffer, uint32_t offset, uint32_t length, void** vpnPacketBuffer) noexcept final
    {
        try
        {
            *vpnPacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *vpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().CreateVpnPacketBuffer(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&parentBuffer), offset, length));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferList> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferList>
{
    HRESULT __stdcall Append(void* nextVpnPacketBuffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddAtBegin(void* nextVpnPacketBuffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAtBegin(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAtEnd(void** nextVpnPacketBuffer) noexcept final
    {
        try
        {
            *nextVpnPacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveAtEnd());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAtBegin(void** nextVpnPacketBuffer) noexcept final
    {
        try
        {
            *nextVpnPacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveAtBegin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Status(Windows::Networking::Vpn::VpnPacketBufferStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Networking::Vpn::VpnPacketBufferStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnPacketBufferStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPacketBufferList2> : produce_base<D, Windows::Networking::Vpn::IVpnPacketBufferList2>
{
    HRESULT __stdcall AddLeadingPacket(void* nextVpnPacketBuffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddLeadingPacket(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveLeadingPacket(void** nextVpnPacketBuffer) noexcept final
    {
        try
        {
            *nextVpnPacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveLeadingPacket());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddTrailingPacket(void* nextVpnPacketBuffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTrailingPacket(*reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&nextVpnPacketBuffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveTrailingPacket(void** nextVpnPacketBuffer) noexcept final
    {
        try
        {
            *nextVpnPacketBuffer = nullptr;
            typename D::abi_guard guard(this->shim());
            *nextVpnPacketBuffer = detach_from<Windows::Networking::Vpn::VpnPacketBuffer>(this->shim().RemoveTrailingPacket());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPickedCredential> : produce_base<D, Windows::Networking::Vpn::IVpnPickedCredential>
{
    HRESULT __stdcall get_PasskeyCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().PasskeyCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalPin(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AdditionalPin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldPasswordCredential(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Credentials::PasswordCredential>(this->shim().OldPasswordCredential());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPlugIn> : produce_base<D, Windows::Networking::Vpn::IVpnPlugIn>
{
    HRESULT __stdcall Connect(void* channel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Connect(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Disconnect(void* channel) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnect(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetKeepAlivePayload(void* channel, void** keepAlivePacket) noexcept final
    {
        try
        {
            *keepAlivePacket = nullptr;
            typename D::abi_guard guard(this->shim());
            this->shim().GetKeepAlivePayload(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer*>(keepAlivePacket));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Encapsulate(void* channel, void* packets, void* encapulatedPackets) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Encapsulate(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&packets), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&encapulatedPackets));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Decapsulate(void* channel, void* encapBuffer, void* decapsulatedPackets, void* controlPacketsToSend) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Decapsulate(*reinterpret_cast<Windows::Networking::Vpn::VpnChannel const*>(&channel), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBuffer const*>(&encapBuffer), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&decapsulatedPackets), *reinterpret_cast<Windows::Networking::Vpn::VpnPacketBufferList const*>(&controlPacketsToSend));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPlugInProfile> : produce_base<D, Windows::Networking::Vpn::IVpnPlugInProfile>
{
    HRESULT __stdcall get_ServerUris(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Foundation::Uri>>(this->shim().ServerUris());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomConfiguration(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomConfiguration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CustomConfiguration(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CustomConfiguration(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VpnPluginPackageFamilyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VpnPluginPackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_VpnPluginPackageFamilyName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VpnPluginPackageFamilyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnPlugInProfile2> : produce_base<D, Windows::Networking::Vpn::IVpnPlugInProfile2>
{
    HRESULT __stdcall get_RequireVpnClientAppUI(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequireVpnClientAppUI());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequireVpnClientAppUI(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequireVpnClientAppUI(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionStatus(Windows::Networking::Vpn::VpnManagementConnectionStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnManagementConnectionStatus>(this->shim().ConnectionStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnProfile> : produce_base<D, Windows::Networking::Vpn::IVpnProfile>
{
    HRESULT __stdcall get_ProfileName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProfileName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProfileName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProfileName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppTriggers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId>>(this->shim().AppTriggers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Routes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Routes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainNameInfoList(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo>>(this->shim().DomainNameInfoList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TrafficFilters(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>>(this->shim().TrafficFilters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RememberCredentials(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RememberCredentials());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RememberCredentials(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RememberCredentials(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysOn(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AlwaysOn());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysOn(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysOn(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnRoute> : produce_base<D, Windows::Networking::Vpn::IVpnRoute>
{
    HRESULT __stdcall put_Address(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Address(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Address(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PrefixSize(uint8_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrefixSize(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrefixSize(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().PrefixSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnRouteAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnRouteAssignment>
{
    HRESULT __stdcall put_Ipv4InclusionRoutes(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv4InclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Ipv6InclusionRoutes(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv6InclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv4InclusionRoutes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv4InclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv6InclusionRoutes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv6InclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Ipv4ExclusionRoutes(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv4ExclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Ipv6ExclusionRoutes(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Ipv6ExclusionRoutes(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv4ExclusionRoutes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv4ExclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Ipv6ExclusionRoutes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute>>(this->shim().Ipv6ExclusionRoutes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ExcludeLocalSubnets(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExcludeLocalSubnets(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExcludeLocalSubnets(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ExcludeLocalSubnets());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnRouteFactory> : produce_base<D, Windows::Networking::Vpn::IVpnRouteFactory>
{
    HRESULT __stdcall CreateVpnRoute(void* address, uint8_t prefixSize, void** route) noexcept final
    {
        try
        {
            *route = nullptr;
            typename D::abi_guard guard(this->shim());
            *route = detach_from<Windows::Networking::Vpn::VpnRoute>(this->shim().CreateVpnRoute(*reinterpret_cast<Windows::Networking::HostName const*>(&address), prefixSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnSystemHealth> : produce_base<D, Windows::Networking::Vpn::IVpnSystemHealth>
{
    HRESULT __stdcall get_StatementOfHealth(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::Buffer>(this->shim().StatementOfHealth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilter> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilter>
{
    HRESULT __stdcall get_AppId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnAppId>(this->shim().AppId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AppId(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppId(*reinterpret_cast<Windows::Networking::Vpn::VpnAppId const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppClaims(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().AppClaims());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Protocol(Windows::Networking::Vpn::VpnIPProtocol* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnIPProtocol>(this->shim().Protocol());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Protocol(Windows::Networking::Vpn::VpnIPProtocol value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Protocol(*reinterpret_cast<Windows::Networking::Vpn::VpnIPProtocol const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalPortRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().LocalPortRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemotePortRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().RemotePortRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalAddressRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().LocalAddressRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteAddressRanges(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().RemoteAddressRanges());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Vpn::VpnRoutingPolicyType>(this->shim().RoutingPolicyType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoutingPolicyType(*reinterpret_cast<Windows::Networking::Vpn::VpnRoutingPolicyType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilterAssignment> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilterAssignment>
{
    HRESULT __stdcall get_TrafficFilterList(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter>>(this->shim().TrafficFilterList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowOutbound(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowOutbound());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowOutbound(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowOutbound(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowInbound(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowInbound());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowInbound(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowInbound(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Vpn::IVpnTrafficFilterFactory> : produce_base<D, Windows::Networking::Vpn::IVpnTrafficFilterFactory>
{
    HRESULT __stdcall Create(void* appId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Networking::Vpn::VpnTrafficFilter>(this->shim().Create(*reinterpret_cast<Windows::Networking::Vpn::VpnAppId const*>(&appId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking::Vpn {

inline VpnAppId::VpnAppId(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value) :
    VpnAppId(get_activation_factory<VpnAppId, Windows::Networking::Vpn::IVpnAppIdFactory>().Create(type, value))
{}

inline void VpnChannel::ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event)
{
    get_activation_factory<VpnChannel, Windows::Networking::Vpn::IVpnChannelStatics>().ProcessEventAsync(thirdPartyPlugIn, event);
}

inline VpnCustomCheckBox::VpnCustomCheckBox() :
    VpnCustomCheckBox(get_activation_factory<VpnCustomCheckBox>().ActivateInstance<VpnCustomCheckBox>())
{}

inline VpnCustomComboBox::VpnCustomComboBox() :
    VpnCustomComboBox(get_activation_factory<VpnCustomComboBox>().ActivateInstance<VpnCustomComboBox>())
{}

inline VpnCustomEditBox::VpnCustomEditBox() :
    VpnCustomEditBox(get_activation_factory<VpnCustomEditBox>().ActivateInstance<VpnCustomEditBox>())
{}

inline VpnCustomErrorBox::VpnCustomErrorBox() :
    VpnCustomErrorBox(get_activation_factory<VpnCustomErrorBox>().ActivateInstance<VpnCustomErrorBox>())
{}

inline VpnCustomPromptBooleanInput::VpnCustomPromptBooleanInput() :
    VpnCustomPromptBooleanInput(get_activation_factory<VpnCustomPromptBooleanInput>().ActivateInstance<VpnCustomPromptBooleanInput>())
{}

inline VpnCustomPromptOptionSelector::VpnCustomPromptOptionSelector() :
    VpnCustomPromptOptionSelector(get_activation_factory<VpnCustomPromptOptionSelector>().ActivateInstance<VpnCustomPromptOptionSelector>())
{}

inline VpnCustomPromptText::VpnCustomPromptText() :
    VpnCustomPromptText(get_activation_factory<VpnCustomPromptText>().ActivateInstance<VpnCustomPromptText>())
{}

inline VpnCustomPromptTextInput::VpnCustomPromptTextInput() :
    VpnCustomPromptTextInput(get_activation_factory<VpnCustomPromptTextInput>().ActivateInstance<VpnCustomPromptTextInput>())
{}

inline VpnCustomTextBox::VpnCustomTextBox() :
    VpnCustomTextBox(get_activation_factory<VpnCustomTextBox>().ActivateInstance<VpnCustomTextBox>())
{}

inline VpnDomainNameAssignment::VpnDomainNameAssignment() :
    VpnDomainNameAssignment(get_activation_factory<VpnDomainNameAssignment>().ActivateInstance<VpnDomainNameAssignment>())
{}

inline VpnDomainNameInfo::VpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList) :
    VpnDomainNameInfo(get_activation_factory<VpnDomainNameInfo, Windows::Networking::Vpn::IVpnDomainNameInfoFactory>().CreateVpnDomainNameInfo(name, nameType, dnsServerList, proxyServerList))
{}

inline VpnInterfaceId::VpnInterfaceId(array_view<uint8_t const> address) :
    VpnInterfaceId(get_activation_factory<VpnInterfaceId, Windows::Networking::Vpn::IVpnInterfaceIdFactory>().CreateVpnInterfaceId(address))
{}

inline VpnManagementAgent::VpnManagementAgent() :
    VpnManagementAgent(get_activation_factory<VpnManagementAgent>().ActivateInstance<VpnManagementAgent>())
{}

inline VpnNamespaceAssignment::VpnNamespaceAssignment() :
    VpnNamespaceAssignment(get_activation_factory<VpnNamespaceAssignment>().ActivateInstance<VpnNamespaceAssignment>())
{}

inline VpnNamespaceInfo::VpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList) :
    VpnNamespaceInfo(get_activation_factory<VpnNamespaceInfo, Windows::Networking::Vpn::IVpnNamespaceInfoFactory>().CreateVpnNamespaceInfo(name, dnsServerList, proxyServerList))
{}

inline VpnNativeProfile::VpnNativeProfile() :
    VpnNativeProfile(get_activation_factory<VpnNativeProfile>().ActivateInstance<VpnNativeProfile>())
{}

inline VpnPacketBuffer::VpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length) :
    VpnPacketBuffer(get_activation_factory<VpnPacketBuffer, Windows::Networking::Vpn::IVpnPacketBufferFactory>().CreateVpnPacketBuffer(parentBuffer, offset, length))
{}

inline VpnPlugInProfile::VpnPlugInProfile() :
    VpnPlugInProfile(get_activation_factory<VpnPlugInProfile>().ActivateInstance<VpnPlugInProfile>())
{}

inline VpnRoute::VpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize) :
    VpnRoute(get_activation_factory<VpnRoute, Windows::Networking::Vpn::IVpnRouteFactory>().CreateVpnRoute(address, prefixSize))
{}

inline VpnRouteAssignment::VpnRouteAssignment() :
    VpnRouteAssignment(get_activation_factory<VpnRouteAssignment>().ActivateInstance<VpnRouteAssignment>())
{}

inline VpnTrafficFilter::VpnTrafficFilter(Windows::Networking::Vpn::VpnAppId const& appId) :
    VpnTrafficFilter(get_activation_factory<VpnTrafficFilter, Windows::Networking::Vpn::IVpnTrafficFilterFactory>().Create(appId))
{}

inline VpnTrafficFilterAssignment::VpnTrafficFilterAssignment() :
    VpnTrafficFilterAssignment(get_activation_factory<VpnTrafficFilterAssignment>().ActivateInstance<VpnTrafficFilterAssignment>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::Vpn::IVpnAppId> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnAppId> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnAppIdFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnAppIdFactory> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannel> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel2> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannel2> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannel4> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannel4> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelActivityEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannelActivityEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelConfiguration> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannelConfiguration> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelConfiguration2> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannelConfiguration2> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnChannelStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnChannelStatics> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCredential> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCredential> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomCheckBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomCheckBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomComboBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomComboBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomEditBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomEditBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomErrorBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomErrorBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPrompt> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomPrompt> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptElement> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomPromptElement> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptText> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomPromptText> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomPromptTextInput> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomPromptTextInput> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnCustomTextBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnCustomTextBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnDomainNameAssignment> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameInfo> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnDomainNameInfo> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameInfo2> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnDomainNameInfo2> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnDomainNameInfoFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnDomainNameInfoFactory> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnInterfaceId> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnInterfaceId> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnInterfaceIdFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnInterfaceIdFactory> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnManagementAgent> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnManagementAgent> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNamespaceAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnNamespaceAssignment> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNamespaceInfo> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnNamespaceInfo> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNamespaceInfoFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnNamespaceInfoFactory> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNativeProfile> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnNativeProfile> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnNativeProfile2> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnNativeProfile2> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBuffer> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPacketBuffer> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBuffer2> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPacketBuffer2> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBuffer3> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPacketBuffer3> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBufferFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPacketBufferFactory> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBufferList> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPacketBufferList> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPacketBufferList2> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPacketBufferList2> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPickedCredential> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPickedCredential> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPlugIn> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPlugIn> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPlugInProfile> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPlugInProfile> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnPlugInProfile2> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnPlugInProfile2> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnProfile> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnProfile> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnRoute> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnRoute> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnRouteAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnRouteAssignment> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnRouteFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnRouteFactory> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnSystemHealth> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnSystemHealth> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnTrafficFilter> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnTrafficFilter> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnTrafficFilterAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnTrafficFilterAssignment> {};
template<> struct hash<winrt::Windows::Networking::Vpn::IVpnTrafficFilterFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::IVpnTrafficFilterFactory> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnAppId> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnAppId> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannel> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnChannel> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannelActivityEventArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnChannelActivityEventArgs> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnChannelConfiguration> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnChannelConfiguration> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCredential> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCredential> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomCheckBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomCheckBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomComboBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomComboBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomEditBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomEditBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomErrorBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomErrorBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptBooleanInput> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomPromptBooleanInput> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptOptionSelector> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomPromptOptionSelector> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptText> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomPromptText> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomPromptTextInput> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomPromptTextInput> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnCustomTextBox> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnCustomTextBox> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnDomainNameAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnDomainNameAssignment> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnDomainNameInfo> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnDomainNameInfo> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnInterfaceId> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnInterfaceId> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnManagementAgent> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnManagementAgent> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnNamespaceAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnNamespaceAssignment> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnNamespaceInfo> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnNamespaceInfo> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnNativeProfile> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnNativeProfile> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnPacketBuffer> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnPacketBuffer> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnPacketBufferList> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnPacketBufferList> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnPickedCredential> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnPickedCredential> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnPlugInProfile> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnPlugInProfile> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnRoute> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnRoute> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnRouteAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnRouteAssignment> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnSystemHealth> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnSystemHealth> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnTrafficFilter> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnTrafficFilter> {};
template<> struct hash<winrt::Windows::Networking::Vpn::VpnTrafficFilterAssignment> : winrt::impl::hash_base<winrt::Windows::Networking::Vpn::VpnTrafficFilterAssignment> {};

}

WINRT_WARNING_POP
