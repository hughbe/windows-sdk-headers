﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "winrt/base.h"

#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/Windows.Security.Cryptography.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->BuildChainAsync(get_abi(certificates), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::BuildChainAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates, Windows::Security::Cryptography::Certificates::ChainBuildingParameters const& parameters) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->BuildChainWithParametersAsync(get_abi(certificates), get_abi(parameters), put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::SerialNumber() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_SerialNumber(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetHashValue() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetHashValue(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetHashValue(param::hstring const& hashAlgorithmName) const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetHashValueWithAlgorithm(get_abi(hashAlgorithmName), impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::GetCertificateBlob() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->GetCertificateBlob(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::Issuer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_Issuer(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::HasPrivateKey() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_HasPrivateKey(&value));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::IsStronglyProtected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_IsStronglyProtected(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::ValidFrom() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_ValidFrom(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::ValidTo() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_ValidTo(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::EnhancedKeyUsages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_EnhancedKeyUsages(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->put_FriendlyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::IsSecurityDeviceBound() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_IsSecurityDeviceBound(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateKeyUsages consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::KeyUsages() const
{
    Windows::Security::Cryptography::Certificates::CertificateKeyUsages value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_KeyUsages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::KeyAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_KeyAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SignatureAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SignatureAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SignatureHashAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SignatureHashAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo consume_Windows_Security_Cryptography_Certificates_ICertificate2<D>::SubjectAlternativeName() const
{
    Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate2)->get_SubjectAlternativeName(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::IsPerUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_IsPerUser(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::StoreName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_StoreName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificate3<D>::KeyStorageProviderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificate3)->get_KeyStorageProviderName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::ChainValidationResult consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::Validate() const
{
    Windows::Security::Cryptography::Certificates::ChainValidationResult status{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->Validate(put_abi(status)));
    return status;
}

template <typename D> Windows::Security::Cryptography::Certificates::ChainValidationResult consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::Validate(Windows::Security::Cryptography::Certificates::ChainValidationParameters const& parameter) const
{
    Windows::Security::Cryptography::Certificates::ChainValidationResult status{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->ValidateWithParameters(get_abi(parameter), put_abi(status)));
    return status;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICertificateChain<D>::GetCertificates(bool includeRoot) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> certificates{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateChain)->GetCertificates(includeRoot, put_abi(certificates)));
    return certificates;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->CreateRequestAsync(get_abi(request), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->InstallCertificateAsync(get_abi(certificate), get_abi(installOption), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics)->ImportPfxDataAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>::UserCertificateEnrollmentManager() const
{
    Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2)->get_UserCertificateEnrollmentManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2)->ImportPfxDataToKspAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), get_abi(keyStorageProvider), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3)->ImportPfxDataToKspWithParametersAsync(get_abi(pfxData), get_abi(password), get_abi(pfxImportParameters), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::ObjectId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_ObjectId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::ObjectId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_ObjectId(get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::IsCritical() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_IsCritical(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::IsCritical(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_IsCritical(value));
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::EncodeValue(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->EncodeValue(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::Value() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->get_Value(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateExtension<D>::Value(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateExtension)->put_Value(value.size(), get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICertificateFactory<D>::CreateCertificate(Windows::Storage::Streams::IBuffer const& certBlob) const
{
    Windows::Security::Cryptography::Certificates::Certificate certificate{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateFactory)->CreateCertificate(get_abi(certBlob), put_abi(certificate)));
    return certificate;
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::EncipherOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_EncipherOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::EncipherOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_EncipherOnly(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::CrlSign() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_CrlSign(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::CrlSign(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_CrlSign(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyCertificateSign() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyCertificateSign(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyCertificateSign(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyCertificateSign(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyAgreement() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyAgreement(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyAgreement(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyAgreement(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DataEncipherment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_DataEncipherment(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DataEncipherment(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_DataEncipherment(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyEncipherment() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_KeyEncipherment(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::KeyEncipherment(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_KeyEncipherment(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::NonRepudiation() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_NonRepudiation(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::NonRepudiation(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_NonRepudiation(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DigitalSignature() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->get_DigitalSignature(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages<D>::DigitalSignature(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateKeyUsages)->put_DigitalSignature(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::EnhancedKeyUsages() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_EnhancedKeyUsages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::IssuerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_IssuerName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::IssuerName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_IssuerName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_FriendlyName(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::Thumbprint() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_Thumbprint(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::Thumbprint(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_Thumbprint(value.size(), get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::HardwareOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->get_HardwareOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery<D>::HardwareOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery)->put_HardwareOnly(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeDuplicates() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_IncludeDuplicates(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeDuplicates(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_IncludeDuplicates(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeExpiredCertificates() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_IncludeExpiredCertificates(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::IncludeExpiredCertificates(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_IncludeExpiredCertificates(value));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::StoreName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->get_StoreName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateQuery2<D>::StoreName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateQuery2)->put_StoreName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Subject(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_Subject(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyAlgorithmName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyAlgorithmName(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeySize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeySize(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeySize(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeySize(value));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_FriendlyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::HashAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_HashAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::HashAlgorithmName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_HashAlgorithmName(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::ExportOption consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Exportable() const
{
    Windows::Security::Cryptography::Certificates::ExportOption value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_Exportable(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_Exportable(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::EnrollKeyUsages consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyUsages() const
{
    Windows::Security::Cryptography::Certificates::EnrollKeyUsages value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyUsages(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyUsages(Windows::Security::Cryptography::Certificates::EnrollKeyUsages const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyUsages(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::KeyProtectionLevel consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyProtectionLevel() const
{
    Windows::Security::Cryptography::Certificates::KeyProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyProtectionLevel(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyStorageProviderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->get_KeyStorageProviderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties<D>::KeyStorageProviderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties)->put_KeyStorageProviderName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SmartcardReaderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_SmartcardReaderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SmartcardReaderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_SmartcardReaderName(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SigningCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_SigningCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::SigningCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_SigningCertificate(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::AttestationCredentialCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->get_AttestationCredentialCertificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2<D>::AttestationCredentialCertificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2)->put_AttestationCredentialCertificate(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_CurveName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_CurveName(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveParameters() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_CurveParameters(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::CurveParameters(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_CurveParameters(value.size(), get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerNamePrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_ContainerNamePrefix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerNamePrefix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_ContainerNamePrefix(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_ContainerName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::ContainerName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_ContainerName(get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::UseExistingKey() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->get_UseExistingKey(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3<D>::UseExistingKey(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3)->put_UseExistingKey(value));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::SuppressedDefaults() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_SuppressedDefaults(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::SubjectAlternativeName() const
{
    Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_SubjectAlternativeName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension> consume_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4<D>::Extensions() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4)->get_Extensions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>::Add(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore)->Add(get_abi(certificate)));
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICertificateStore<D>::Delete(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore)->Delete(get_abi(certificate)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICertificateStore2<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStore2)->get_Name(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->FindAllAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->FindAllWithQueryAsync(get_abi(query), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::TrustedRootCertificationAuthorities() const
{
    Windows::Security::Cryptography::Certificates::CertificateStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->get_TrustedRootCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::IntermediateCertificationAuthorities() const
{
    Windows::Security::Cryptography::Certificates::CertificateStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->get_IntermediateCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics<D>::GetStoreByName(param::hstring const& storeName) const
{
    Windows::Security::Cryptography::Certificates::CertificateStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics)->GetStoreByName(get_abi(storeName), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::UserCertificateStore consume_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2<D>::GetUserStoreByName(param::hstring const& storeName) const
{
    Windows::Security::Cryptography::Certificates::UserCertificateStore result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2)->GetUserStoreByName(get_abi(storeName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::EnhancedKeyUsages() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_EnhancedKeyUsages(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ValidationTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_ValidationTimestamp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ValidationTimestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_ValidationTimestamp(get_abi(value)));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::RevocationCheckEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_RevocationCheckEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::RevocationCheckEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_RevocationCheckEnabled(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::NetworkRetrievalEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_NetworkRetrievalEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::NetworkRetrievalEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_NetworkRetrievalEnabled(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::AuthorityInformationAccessEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_AuthorityInformationAccessEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::AuthorityInformationAccessEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_AuthorityInformationAccessEnabled(value));
}

template <typename D> bool consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::CurrentTimeValidationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_CurrentTimeValidationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::CurrentTimeValidationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->put_CurrentTimeValidationEnabled(value));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_IChainBuildingParameters<D>::ExclusiveTrustRoots() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate> certificates{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainBuildingParameters)->get_ExclusiveTrustRoots(put_abi(certificates)));
    return certificates;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateChainPolicy consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::CertificateChainPolicy() const
{
    Windows::Security::Cryptography::Certificates::CertificateChainPolicy value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->get_CertificateChainPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::CertificateChainPolicy(Windows::Security::Cryptography::Certificates::CertificateChainPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->put_CertificateChainPolicy(get_abi(value)));
}

template <typename D> Windows::Networking::HostName consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::ServerDnsName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->get_ServerDnsName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IChainValidationParameters<D>::ServerDnsName(Windows::Networking::HostName const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IChainValidationParameters)->put_ServerDnsName(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Certificates(put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Content() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Content(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::Signers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->get_Signers(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::SignatureValidationResult consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature<D>::VerifySignature() const
{
    Windows::Security::Cryptography::Certificates::SignatureValidationResult value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignature)->VerifySignature(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CmsAttachedSignature consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory<D>::CreateCmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const
{
    Windows::Security::Cryptography::Certificates::CmsAttachedSignature cmsSignedData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory)->CreateCmsAttachedSignature(get_abi(inputBlob), put_abi(cmsSignedData)));
    return cmsSignedData;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics<D>::GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> outputBlob{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics)->GenerateSignatureAsync(get_abi(data), get_abi(signers), get_abi(certificates), put_abi(outputBlob)));
    return outputBlob;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->get_Certificates(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::Signers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->get_Signers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature<D>::VerifySignatureAsync(Windows::Storage::Streams::IInputStream const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignature)->VerifySignatureAsync(get_abi(data), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CmsDetachedSignature consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory<D>::CreateCmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) const
{
    Windows::Security::Cryptography::Certificates::CmsDetachedSignature cmsSignedData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory)->CreateCmsDetachedSignature(get_abi(inputBlob), put_abi(cmsSignedData)));
    return cmsSignedData;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics<D>::GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> outputBlob{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics)->GenerateSignatureAsync(get_abi(data), get_abi(signers), get_abi(certificates), put_abi(outputBlob)));
    return outputBlob;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::Certificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_Certificate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->put_Certificate(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::HashAlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_HashAlgorithmName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::HashAlgorithmName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->put_HashAlgorithmName(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::CmsTimestampInfo consume_Windows_Security_Cryptography_Certificates_ICmsSignerInfo<D>::TimestampInfo() const
{
    Windows::Security::Cryptography::Certificates::CmsTimestampInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsSignerInfo)->get_TimestampInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::Certificate consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::SigningCertificate() const
{
    Windows::Security::Cryptography::Certificates::Certificate value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_SigningCertificate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::Certificates() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_Certificates(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ICmsTimestampInfo)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Rsa() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Rsa(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Dsa() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Dsa(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdh521() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdh521(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics<D>::Ecdsa521() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics)->get_Ecdsa521(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>::Ecdsa() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2)->get_Ecdsa(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2<D>::Ecdh() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2)->get_Ecdh(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>::DecryptTpmAttestationCredentialAsync(param::hstring const& credential) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics)->DecryptTpmAttestationCredentialAsync(get_abi(credential), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics<D>::GetTpmAttestationCredentialId(param::hstring const& credential) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics)->GetTpmAttestationCredentialId(get_abi(credential), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2<D>::DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2)->DecryptTpmAttestationCredentialWithContainerNameAsync(get_abi(credential), get_abi(containerName), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::SoftwareKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_SoftwareKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::SmartcardKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_SmartcardKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics<D>::PlatformKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics)->get_PlatformKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2<D>::PassportKeyStorageProvider() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2)->get_PassportKeyStorageProvider(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::ExportOption consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::Exportable() const
{
    Windows::Security::Cryptography::Certificates::ExportOption value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_Exportable(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::Exportable(Windows::Security::Cryptography::Certificates::ExportOption const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_Exportable(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::KeyProtectionLevel consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyProtectionLevel() const
{
    Windows::Security::Cryptography::Certificates::KeyProtectionLevel value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_KeyProtectionLevel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_KeyProtectionLevel(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Certificates::InstallOptions consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::InstallOptions() const
{
    Windows::Security::Cryptography::Certificates::InstallOptions value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_InstallOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::InstallOptions(Windows::Security::Cryptography::Certificates::InstallOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_InstallOptions(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::FriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_FriendlyName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyStorageProviderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_KeyStorageProviderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::KeyStorageProviderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_KeyStorageProviderName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ContainerNamePrefix() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_ContainerNamePrefix(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ContainerNamePrefix(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_ContainerNamePrefix(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ReaderName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->get_ReaderName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Certificates_IPfxImportParameters<D>::ReaderName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IPfxImportParameters)->put_ReaderName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::Personal() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_Personal(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::TrustedRootCertificationAuthorities() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_TrustedRootCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics<D>::IntermediateCertificationAuthorities() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics)->get_IntermediateCertificationAuthorities(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::EmailName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_EmailName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::IPAddress() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_IPAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::Url() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_Url(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::DnsName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_DnsName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::DistinguishedName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_DistinguishedName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo<D>::PrincipalName() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo)->get_PrincipalName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::EmailNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_EmailNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::IPAddresses() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_IPAddresses(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::Urls() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_Urls(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::DnsNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_DnsNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::DistinguishedNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_DistinguishedNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::PrincipalNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_PrincipalNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Certificates::CertificateExtension consume_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2<D>::Extension() const
{
    Windows::Security::Cryptography::Certificates::CertificateExtension value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2)->get_Extension(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request) const
{
    Windows::Foundation::IAsyncOperation<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->CreateRequestAsync(get_abi(request), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->InstallCertificateAsync(get_abi(certificate), get_abi(installOption), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->ImportPfxDataAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager)->ImportPfxDataToKspAsync(get_abi(pfxData), get_abi(password), get_abi(exportable), get_abi(keyProtectionLevel), get_abi(installOption), get_abi(friendlyName), get_abi(keyStorageProvider), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2<D>::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2)->ImportPfxDataToKspWithParametersAsync(get_abi(pfxData), get_abi(password), get_abi(pfxImportParameters), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::RequestAddAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->RequestAddAsync(get_abi(certificate), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::RequestDeleteAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->RequestDeleteAsync(get_abi(certificate), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Certificates_IUserCertificateStore<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Certificates::IUserCertificateStore)->get_Name(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate>
{
    int32_t WINRT_CALL BuildChainAsync(void* certificates, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(BuildChainAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>), Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>>(this->shim().BuildChainAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL BuildChainWithParametersAsync(void* certificates, void* parameters, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(BuildChainAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>), Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const, Windows::Security::Cryptography::Certificates::ChainBuildingParameters const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::CertificateChain>>(this->shim().BuildChainAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ChainBuildingParameters const*>(&parameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SerialNumber(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SerialNumber, WINRT_WRAP(com_array<uint8_t>));
            std::tie(*__valueSize, *value) = detach_abi(this->shim().SerialNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL GetHashValue(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetHashValue, WINRT_WRAP(com_array<uint8_t>));
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetHashValue());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL GetHashValueWithAlgorithm(void* hashAlgorithmName, uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetHashValue, WINRT_WRAP(com_array<uint8_t>), hstring const&);
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetHashValue(*reinterpret_cast<hstring const*>(&hashAlgorithmName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL GetCertificateBlob(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetCertificateBlob, WINRT_WRAP(Windows::Storage::Streams::IBuffer));
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetCertificateBlob());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Subject(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Subject, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Subject());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Issuer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Issuer, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Issuer());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_HasPrivateKey(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HasPrivateKey, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().HasPrivateKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IsStronglyProtected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsStronglyProtected, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IsStronglyProtected());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ValidFrom(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ValidFrom, WINRT_WRAP(Windows::Foundation::DateTime));
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ValidFrom());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ValidTo(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ValidTo, WINRT_WRAP(Windows::Foundation::DateTime));
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ValidTo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_EnhancedKeyUsages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EnhancedKeyUsages, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().EnhancedKeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_FriendlyName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(void), hstring const&);
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FriendlyName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate2>
{
    int32_t WINRT_CALL get_IsSecurityDeviceBound(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsSecurityDeviceBound, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IsSecurityDeviceBound());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyUsages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyUsages, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CertificateKeyUsages));
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateKeyUsages>(this->shim().KeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyAlgorithmName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyAlgorithmName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().KeyAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SignatureAlgorithmName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SignatureAlgorithmName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SignatureAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SignatureHashAlgorithmName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SignatureHashAlgorithmName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SignatureHashAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SubjectAlternativeName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SubjectAlternativeName, WINRT_WRAP(Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo));
            *value = detach_from<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>(this->shim().SubjectAlternativeName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificate3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificate3>
{
    int32_t WINRT_CALL get_IsPerUser(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsPerUser, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IsPerUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_StoreName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StoreName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().StoreName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyStorageProviderName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyStorageProviderName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().KeyStorageProviderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateChain> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateChain>
{
    int32_t WINRT_CALL Validate(Windows::Security::Cryptography::Certificates::ChainValidationResult* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Validate, WINRT_WRAP(Windows::Security::Cryptography::Certificates::ChainValidationResult));
            *status = detach_from<Windows::Security::Cryptography::Certificates::ChainValidationResult>(this->shim().Validate());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ValidateWithParameters(void* parameter, Windows::Security::Cryptography::Certificates::ChainValidationResult* status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Validate, WINRT_WRAP(Windows::Security::Cryptography::Certificates::ChainValidationResult), Windows::Security::Cryptography::Certificates::ChainValidationParameters const&);
            *status = detach_from<Windows::Security::Cryptography::Certificates::ChainValidationResult>(this->shim().Validate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ChainValidationParameters const*>(&parameter)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL GetCertificates(bool includeRoot, void** certificates) noexcept final
    {
        try
        {
            *certificates = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetCertificates, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>), bool);
            *certificates = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().GetCertificates(includeRoot));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>
{
    int32_t WINRT_CALL CreateRequestAsync(void* request, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateRequestAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<hstring>), Windows::Security::Cryptography::Certificates::CertificateRequestProperties const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().CreateRequestAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateRequestProperties const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL InstallCertificateAsync(void* certificate, Windows::Security::Cryptography::Certificates::InstallOptions installOption, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(InstallCertificateAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, Windows::Security::Cryptography::Certificates::InstallOptions const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InstallCertificateAsync(*reinterpret_cast<hstring const*>(&certificate), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ImportPfxDataAsync(void* pfxData, void* password, Windows::Security::Cryptography::Certificates::ExportOption exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions installOption, void* friendlyName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ImportPfxDataAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, hstring const, Windows::Security::Cryptography::Certificates::ExportOption const, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const, Windows::Security::Cryptography::Certificates::InstallOptions const, hstring const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>
{
    int32_t WINRT_CALL get_UserCertificateEnrollmentManager(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(UserCertificateEnrollmentManager, WINRT_WRAP(Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager));
            *value = detach_from<Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager>(this->shim().UserCertificateEnrollmentManager());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ImportPfxDataToKspAsync(void* pfxData, void* password, Windows::Security::Cryptography::Certificates::ExportOption exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions installOption, void* friendlyName, void* keyStorageProvider, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ImportPfxDataAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, hstring const, Windows::Security::Cryptography::Certificates::ExportOption const, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const, Windows::Security::Cryptography::Certificates::InstallOptions const, hstring const, hstring const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName), *reinterpret_cast<hstring const*>(&keyStorageProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>
{
    int32_t WINRT_CALL ImportPfxDataToKspWithParametersAsync(void* pfxData, void* password, void* pfxImportParameters, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ImportPfxDataAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, hstring const, Windows::Security::Cryptography::Certificates::PfxImportParameters const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::PfxImportParameters const*>(&pfxImportParameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateExtension> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateExtension>
{
    int32_t WINRT_CALL get_ObjectId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ObjectId, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ObjectId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ObjectId(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ObjectId, WINRT_WRAP(void), hstring const&);
            this->shim().ObjectId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IsCritical(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsCritical, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IsCritical());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IsCritical(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsCritical, WINRT_WRAP(void), bool);
            this->shim().IsCritical(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL EncodeValue(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EncodeValue, WINRT_WRAP(void), hstring const&);
            this->shim().EncodeValue(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Value(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Value, WINRT_WRAP(com_array<uint8_t>));
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Value(uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Value, WINRT_WRAP(void), array_view<uint8_t const>);
            this->shim().Value(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateFactory>
{
    int32_t WINRT_CALL CreateCertificate(void* certBlob, void** certificate) noexcept final
    {
        try
        {
            *certificate = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCertificate, WINRT_WRAP(Windows::Security::Cryptography::Certificates::Certificate), Windows::Storage::Streams::IBuffer const&);
            *certificate = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().CreateCertificate(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&certBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateKeyUsages>
{
    int32_t WINRT_CALL get_EncipherOnly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EncipherOnly, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().EncipherOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_EncipherOnly(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EncipherOnly, WINRT_WRAP(void), bool);
            this->shim().EncipherOnly(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_CrlSign(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CrlSign, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().CrlSign());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CrlSign(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CrlSign, WINRT_WRAP(void), bool);
            this->shim().CrlSign(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyCertificateSign(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyCertificateSign, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().KeyCertificateSign());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyCertificateSign(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyCertificateSign, WINRT_WRAP(void), bool);
            this->shim().KeyCertificateSign(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyAgreement(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyAgreement, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().KeyAgreement());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyAgreement(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyAgreement, WINRT_WRAP(void), bool);
            this->shim().KeyAgreement(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DataEncipherment(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DataEncipherment, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().DataEncipherment());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_DataEncipherment(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DataEncipherment, WINRT_WRAP(void), bool);
            this->shim().DataEncipherment(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyEncipherment(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyEncipherment, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().KeyEncipherment());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyEncipherment(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyEncipherment, WINRT_WRAP(void), bool);
            this->shim().KeyEncipherment(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_NonRepudiation(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NonRepudiation, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().NonRepudiation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_NonRepudiation(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NonRepudiation, WINRT_WRAP(void), bool);
            this->shim().NonRepudiation(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DigitalSignature(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DigitalSignature, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().DigitalSignature());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_DigitalSignature(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DigitalSignature, WINRT_WRAP(void), bool);
            this->shim().DigitalSignature(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateQuery> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateQuery>
{
    int32_t WINRT_CALL get_EnhancedKeyUsages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EnhancedKeyUsages, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().EnhancedKeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IssuerName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IssuerName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().IssuerName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IssuerName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IssuerName, WINRT_WRAP(void), hstring const&);
            this->shim().IssuerName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FriendlyName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_FriendlyName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(void), hstring const&);
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Thumbprint(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Thumbprint, WINRT_WRAP(com_array<uint8_t>));
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Thumbprint());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Thumbprint(uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Thumbprint, WINRT_WRAP(void), array_view<uint8_t const>);
            this->shim().Thumbprint(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_HardwareOnly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HardwareOnly, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().HardwareOnly());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_HardwareOnly(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HardwareOnly, WINRT_WRAP(void), bool);
            this->shim().HardwareOnly(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateQuery2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateQuery2>
{
    int32_t WINRT_CALL get_IncludeDuplicates(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IncludeDuplicates, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IncludeDuplicates());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IncludeDuplicates(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IncludeDuplicates, WINRT_WRAP(void), bool);
            this->shim().IncludeDuplicates(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IncludeExpiredCertificates(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IncludeExpiredCertificates, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IncludeExpiredCertificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IncludeExpiredCertificates(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IncludeExpiredCertificates, WINRT_WRAP(void), bool);
            this->shim().IncludeExpiredCertificates(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_StoreName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StoreName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().StoreName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_StoreName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(StoreName, WINRT_WRAP(void), hstring const&);
            this->shim().StoreName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties>
{
    int32_t WINRT_CALL get_Subject(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Subject, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Subject());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Subject(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Subject, WINRT_WRAP(void), hstring const&);
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyAlgorithmName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyAlgorithmName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().KeyAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyAlgorithmName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyAlgorithmName, WINRT_WRAP(void), hstring const&);
            this->shim().KeyAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeySize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeySize, WINRT_WRAP(uint32_t));
            *value = detach_from<uint32_t>(this->shim().KeySize());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeySize(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeySize, WINRT_WRAP(void), uint32_t);
            this->shim().KeySize(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FriendlyName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_FriendlyName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(void), hstring const&);
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_HashAlgorithmName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HashAlgorithmName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().HashAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_HashAlgorithmName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HashAlgorithmName, WINRT_WRAP(void), hstring const&);
            this->shim().HashAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Exportable(Windows::Security::Cryptography::Certificates::ExportOption* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Exportable, WINRT_WRAP(Windows::Security::Cryptography::Certificates::ExportOption));
            *value = detach_from<Windows::Security::Cryptography::Certificates::ExportOption>(this->shim().Exportable());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Exportable(Windows::Security::Cryptography::Certificates::ExportOption value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Exportable, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::ExportOption const&);
            this->shim().Exportable(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyUsages(Windows::Security::Cryptography::Certificates::EnrollKeyUsages* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyUsages, WINRT_WRAP(Windows::Security::Cryptography::Certificates::EnrollKeyUsages));
            *value = detach_from<Windows::Security::Cryptography::Certificates::EnrollKeyUsages>(this->shim().KeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyUsages(Windows::Security::Cryptography::Certificates::EnrollKeyUsages value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyUsages, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::EnrollKeyUsages const&);
            this->shim().KeyUsages(*reinterpret_cast<Windows::Security::Cryptography::Certificates::EnrollKeyUsages const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyProtectionLevel, WINRT_WRAP(Windows::Security::Cryptography::Certificates::KeyProtectionLevel));
            *value = detach_from<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>(this->shim().KeyProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyProtectionLevel, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::KeyProtectionLevel const&);
            this->shim().KeyProtectionLevel(*reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyStorageProviderName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyStorageProviderName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().KeyStorageProviderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyStorageProviderName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyStorageProviderName, WINRT_WRAP(void), hstring const&);
            this->shim().KeyStorageProviderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2>
{
    int32_t WINRT_CALL get_SmartcardReaderName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SmartcardReaderName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SmartcardReaderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SmartcardReaderName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SmartcardReaderName, WINRT_WRAP(void), hstring const&);
            this->shim().SmartcardReaderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SigningCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SigningCertificate, WINRT_WRAP(Windows::Security::Cryptography::Certificates::Certificate));
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().SigningCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SigningCertificate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SigningCertificate, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::Certificate const&);
            this->shim().SigningCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_AttestationCredentialCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AttestationCredentialCertificate, WINRT_WRAP(Windows::Security::Cryptography::Certificates::Certificate));
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().AttestationCredentialCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_AttestationCredentialCertificate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AttestationCredentialCertificate, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::Certificate const&);
            this->shim().AttestationCredentialCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3>
{
    int32_t WINRT_CALL get_CurveName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CurveName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().CurveName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CurveName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CurveName, WINRT_WRAP(void), hstring const&);
            this->shim().CurveName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_CurveParameters(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CurveParameters, WINRT_WRAP(com_array<uint8_t>));
            std::tie(*__valueSize, *value) = detach_abi(this->shim().CurveParameters());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CurveParameters(uint32_t __valueSize, uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CurveParameters, WINRT_WRAP(void), array_view<uint8_t const>);
            this->shim().CurveParameters(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ContainerNamePrefix(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContainerNamePrefix, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ContainerNamePrefix());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ContainerNamePrefix(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContainerNamePrefix, WINRT_WRAP(void), hstring const&);
            this->shim().ContainerNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ContainerName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContainerName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ContainerName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ContainerName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContainerName, WINRT_WRAP(void), hstring const&);
            this->shim().ContainerName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_UseExistingKey(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(UseExistingKey, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().UseExistingKey());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_UseExistingKey(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(UseExistingKey, WINRT_WRAP(void), bool);
            this->shim().UseExistingKey(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4>
{
    int32_t WINRT_CALL get_SuppressedDefaults(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuppressedDefaults, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().SuppressedDefaults());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SubjectAlternativeName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SubjectAlternativeName, WINRT_WRAP(Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo));
            *value = detach_from<Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo>(this->shim().SubjectAlternativeName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Extensions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Extensions, WINRT_WRAP(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension>));
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::CertificateExtension>>(this->shim().Extensions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStore> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStore>
{
    int32_t WINRT_CALL Add(void* certificate) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Add, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::Certificate const&);
            this->shim().Add(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL Delete(void* certificate) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Delete, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::Certificate const&);
            this->shim().Delete(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStore2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStore2>
{
    int32_t WINRT_CALL get_Name(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Name, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>
{
    int32_t WINRT_CALL FindAllAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FindAllAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>));
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>>(this->shim().FindAllAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL FindAllWithQueryAsync(void* query, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FindAllAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>), Windows::Security::Cryptography::Certificates::CertificateQuery const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>>(this->shim().FindAllAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateQuery const*>(&query)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_TrustedRootCertificationAuthorities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TrustedRootCertificationAuthorities, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CertificateStore));
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateStore>(this->shim().TrustedRootCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IntermediateCertificationAuthorities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IntermediateCertificationAuthorities, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CertificateStore));
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateStore>(this->shim().IntermediateCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL GetStoreByName(void* storeName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetStoreByName, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CertificateStore), hstring const&);
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateStore>(this->shim().GetStoreByName(*reinterpret_cast<hstring const*>(&storeName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>
{
    int32_t WINRT_CALL GetUserStoreByName(void* storeName, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetUserStoreByName, WINRT_WRAP(Windows::Security::Cryptography::Certificates::UserCertificateStore), hstring const&);
            *result = detach_from<Windows::Security::Cryptography::Certificates::UserCertificateStore>(this->shim().GetUserStoreByName(*reinterpret_cast<hstring const*>(&storeName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IChainBuildingParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IChainBuildingParameters>
{
    int32_t WINRT_CALL get_EnhancedKeyUsages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EnhancedKeyUsages, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().EnhancedKeyUsages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ValidationTimestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ValidationTimestamp, WINRT_WRAP(Windows::Foundation::DateTime));
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ValidationTimestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ValidationTimestamp(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ValidationTimestamp, WINRT_WRAP(void), Windows::Foundation::DateTime const&);
            this->shim().ValidationTimestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_RevocationCheckEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RevocationCheckEnabled, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().RevocationCheckEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_RevocationCheckEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RevocationCheckEnabled, WINRT_WRAP(void), bool);
            this->shim().RevocationCheckEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_NetworkRetrievalEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NetworkRetrievalEnabled, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().NetworkRetrievalEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_NetworkRetrievalEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NetworkRetrievalEnabled, WINRT_WRAP(void), bool);
            this->shim().NetworkRetrievalEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_AuthorityInformationAccessEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AuthorityInformationAccessEnabled, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().AuthorityInformationAccessEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_AuthorityInformationAccessEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(AuthorityInformationAccessEnabled, WINRT_WRAP(void), bool);
            this->shim().AuthorityInformationAccessEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_CurrentTimeValidationEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CurrentTimeValidationEnabled, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().CurrentTimeValidationEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CurrentTimeValidationEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CurrentTimeValidationEnabled, WINRT_WRAP(void), bool);
            this->shim().CurrentTimeValidationEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ExclusiveTrustRoots(void** certificates) noexcept final
    {
        try
        {
            *certificates = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ExclusiveTrustRoots, WINRT_WRAP(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate>));
            *certificates = detach_from<Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().ExclusiveTrustRoots());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IChainValidationParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IChainValidationParameters>
{
    int32_t WINRT_CALL get_CertificateChainPolicy(Windows::Security::Cryptography::Certificates::CertificateChainPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CertificateChainPolicy, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CertificateChainPolicy));
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateChainPolicy>(this->shim().CertificateChainPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CertificateChainPolicy(Windows::Security::Cryptography::Certificates::CertificateChainPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CertificateChainPolicy, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::CertificateChainPolicy const&);
            this->shim().CertificateChainPolicy(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateChainPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ServerDnsName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ServerDnsName, WINRT_WRAP(Windows::Networking::HostName));
            *value = detach_from<Windows::Networking::HostName>(this->shim().ServerDnsName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ServerDnsName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ServerDnsName, WINRT_WRAP(void), Windows::Networking::HostName const&);
            this->shim().ServerDnsName(*reinterpret_cast<Windows::Networking::HostName const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignature>
{
    int32_t WINRT_CALL get_Certificates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Certificates, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().Certificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Content(uint32_t* __valueSize, uint8_t** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Content, WINRT_WRAP(com_array<uint8_t>));
            std::tie(*__valueSize, *value) = detach_abi(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Signers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Signers, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>>(this->shim().Signers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL VerifySignature(Windows::Security::Cryptography::Certificates::SignatureValidationResult* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(VerifySignature, WINRT_WRAP(Windows::Security::Cryptography::Certificates::SignatureValidationResult));
            *value = detach_from<Windows::Security::Cryptography::Certificates::SignatureValidationResult>(this->shim().VerifySignature());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>
{
    int32_t WINRT_CALL CreateCmsAttachedSignature(void* inputBlob, void** cmsSignedData) noexcept final
    {
        try
        {
            *cmsSignedData = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCmsAttachedSignature, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CmsAttachedSignature), Windows::Storage::Streams::IBuffer const&);
            *cmsSignedData = detach_from<Windows::Security::Cryptography::Certificates::CmsAttachedSignature>(this->shim().CreateCmsAttachedSignature(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>
{
    int32_t WINRT_CALL GenerateSignatureAsync(void* data, void* signers, void* certificates, void** outputBlob) noexcept final
    {
        try
        {
            *outputBlob = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GenerateSignatureAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>), Windows::Storage::Streams::IBuffer const, Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const, Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const);
            *outputBlob = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().GenerateSignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const*>(&signers), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignature>
{
    int32_t WINRT_CALL get_Certificates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Certificates, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().Certificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Signers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Signers, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::CmsSignerInfo>>(this->shim().Signers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL VerifySignatureAsync(void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(VerifySignatureAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult>), Windows::Storage::Streams::IInputStream const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Certificates::SignatureValidationResult>>(this->shim().VerifySignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&data)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>
{
    int32_t WINRT_CALL CreateCmsDetachedSignature(void* inputBlob, void** cmsSignedData) noexcept final
    {
        try
        {
            *cmsSignedData = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCmsDetachedSignature, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CmsDetachedSignature), Windows::Storage::Streams::IBuffer const&);
            *cmsSignedData = detach_from<Windows::Security::Cryptography::Certificates::CmsDetachedSignature>(this->shim().CreateCmsDetachedSignature(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&inputBlob)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>
{
    int32_t WINRT_CALL GenerateSignatureAsync(void* data, void* signers, void* certificates, void** outputBlob) noexcept final
    {
        try
        {
            *outputBlob = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GenerateSignatureAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>), Windows::Storage::Streams::IInputStream const, Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const, Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const);
            *outputBlob = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().GenerateSignatureAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&data), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const*>(&signers), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate> const*>(&certificates)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsSignerInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsSignerInfo>
{
    int32_t WINRT_CALL get_Certificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Certificate, WINRT_WRAP(Windows::Security::Cryptography::Certificates::Certificate));
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().Certificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Certificate(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Certificate, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::Certificate const&);
            this->shim().Certificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_HashAlgorithmName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HashAlgorithmName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().HashAlgorithmName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_HashAlgorithmName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(HashAlgorithmName, WINRT_WRAP(void), hstring const&);
            this->shim().HashAlgorithmName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_TimestampInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TimestampInfo, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CmsTimestampInfo));
            *value = detach_from<Windows::Security::Cryptography::Certificates::CmsTimestampInfo>(this->shim().TimestampInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ICmsTimestampInfo>
{
    int32_t WINRT_CALL get_SigningCertificate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SigningCertificate, WINRT_WRAP(Windows::Security::Cryptography::Certificates::Certificate));
            *value = detach_from<Windows::Security::Cryptography::Certificates::Certificate>(this->shim().SigningCertificate());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Certificates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Certificates, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>>(this->shim().Certificates());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Timestamp, WINRT_WRAP(Windows::Foundation::DateTime));
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>
{
    int32_t WINRT_CALL get_Rsa(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Rsa, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Rsa());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Dsa(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Dsa, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Dsa());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Ecdh256(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdh256, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdh256());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Ecdh384(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdh384, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdh384());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Ecdh521(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdh521, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdh521());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Ecdsa256(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdsa256, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdsa256());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Ecdsa384(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdsa384, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdsa384());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Ecdsa521(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdsa521, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdsa521());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>
{
    int32_t WINRT_CALL get_Ecdsa(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdsa, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdsa());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Ecdh(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Ecdh, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Ecdh());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>
{
    int32_t WINRT_CALL DecryptTpmAttestationCredentialAsync(void* credential, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DecryptTpmAttestationCredentialAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<hstring>), hstring const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().DecryptTpmAttestationCredentialAsync(*reinterpret_cast<hstring const*>(&credential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL GetTpmAttestationCredentialId(void* credential, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GetTpmAttestationCredentialId, WINRT_WRAP(hstring), hstring const&);
            *value = detach_from<hstring>(this->shim().GetTpmAttestationCredentialId(*reinterpret_cast<hstring const*>(&credential)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>
{
    int32_t WINRT_CALL DecryptTpmAttestationCredentialWithContainerNameAsync(void* credential, void* containerName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DecryptTpmAttestationCredentialAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<hstring>), hstring const, hstring const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().DecryptTpmAttestationCredentialAsync(*reinterpret_cast<hstring const*>(&credential), *reinterpret_cast<hstring const*>(&containerName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>
{
    int32_t WINRT_CALL get_SoftwareKeyStorageProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SoftwareKeyStorageProvider, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SoftwareKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SmartcardKeyStorageProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SmartcardKeyStorageProvider, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SmartcardKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_PlatformKeyStorageProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PlatformKeyStorageProvider, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().PlatformKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>
{
    int32_t WINRT_CALL get_PassportKeyStorageProvider(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PassportKeyStorageProvider, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().PassportKeyStorageProvider());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IPfxImportParameters> : produce_base<D, Windows::Security::Cryptography::Certificates::IPfxImportParameters>
{
    int32_t WINRT_CALL get_Exportable(Windows::Security::Cryptography::Certificates::ExportOption* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Exportable, WINRT_WRAP(Windows::Security::Cryptography::Certificates::ExportOption));
            *value = detach_from<Windows::Security::Cryptography::Certificates::ExportOption>(this->shim().Exportable());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Exportable(Windows::Security::Cryptography::Certificates::ExportOption value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Exportable, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::ExportOption const&);
            this->shim().Exportable(*reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyProtectionLevel, WINRT_WRAP(Windows::Security::Cryptography::Certificates::KeyProtectionLevel));
            *value = detach_from<Windows::Security::Cryptography::Certificates::KeyProtectionLevel>(this->shim().KeyProtectionLevel());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyProtectionLevel(Windows::Security::Cryptography::Certificates::KeyProtectionLevel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyProtectionLevel, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::KeyProtectionLevel const&);
            this->shim().KeyProtectionLevel(*reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_InstallOptions(Windows::Security::Cryptography::Certificates::InstallOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(InstallOptions, WINRT_WRAP(Windows::Security::Cryptography::Certificates::InstallOptions));
            *value = detach_from<Windows::Security::Cryptography::Certificates::InstallOptions>(this->shim().InstallOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_InstallOptions(Windows::Security::Cryptography::Certificates::InstallOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(InstallOptions, WINRT_WRAP(void), Windows::Security::Cryptography::Certificates::InstallOptions const&);
            this->shim().InstallOptions(*reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FriendlyName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_FriendlyName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FriendlyName, WINRT_WRAP(void), hstring const&);
            this->shim().FriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_KeyStorageProviderName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyStorageProviderName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().KeyStorageProviderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_KeyStorageProviderName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(KeyStorageProviderName, WINRT_WRAP(void), hstring const&);
            this->shim().KeyStorageProviderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ContainerNamePrefix(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContainerNamePrefix, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ContainerNamePrefix());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ContainerNamePrefix(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContainerNamePrefix, WINRT_WRAP(void), hstring const&);
            this->shim().ContainerNamePrefix(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ReaderName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ReaderName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ReaderName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ReaderName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ReaderName, WINRT_WRAP(void), hstring const&);
            this->shim().ReaderName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> : produce_base<D, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>
{
    int32_t WINRT_CALL get_Personal(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Personal, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Personal());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_TrustedRootCertificationAuthorities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TrustedRootCertificationAuthorities, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().TrustedRootCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IntermediateCertificationAuthorities(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IntermediateCertificationAuthorities, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().IntermediateCertificationAuthorities());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> : produce_base<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo>
{
    int32_t WINRT_CALL get_EmailName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EmailName, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().EmailName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IPAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IPAddress, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().IPAddress());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Url(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Url, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Url());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DnsName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DnsName, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().DnsName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DistinguishedName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DistinguishedName, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().DistinguishedName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_PrincipalName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PrincipalName, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().PrincipalName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> : produce_base<D, Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2>
{
    int32_t WINRT_CALL get_EmailNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EmailNames, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().EmailNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IPAddresses(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IPAddresses, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().IPAddresses());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Urls(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Urls, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().Urls());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DnsNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DnsNames, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DnsNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DistinguishedNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DistinguishedNames, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DistinguishedNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_PrincipalNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PrincipalNames, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().PrincipalNames());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Extension(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Extension, WINRT_WRAP(Windows::Security::Cryptography::Certificates::CertificateExtension));
            *value = detach_from<Windows::Security::Cryptography::Certificates::CertificateExtension>(this->shim().Extension());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager>
{
    int32_t WINRT_CALL CreateRequestAsync(void* request, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateRequestAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<hstring>), Windows::Security::Cryptography::Certificates::CertificateRequestProperties const);
            *value = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().CreateRequestAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::CertificateRequestProperties const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL InstallCertificateAsync(void* certificate, Windows::Security::Cryptography::Certificates::InstallOptions installOption, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(InstallCertificateAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, Windows::Security::Cryptography::Certificates::InstallOptions const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().InstallCertificateAsync(*reinterpret_cast<hstring const*>(&certificate), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ImportPfxDataAsync(void* pfxData, void* password, Windows::Security::Cryptography::Certificates::ExportOption exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions installOption, void* friendlyName, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ImportPfxDataAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, hstring const, Windows::Security::Cryptography::Certificates::ExportOption const, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const, Windows::Security::Cryptography::Certificates::InstallOptions const, hstring const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ImportPfxDataToKspAsync(void* pfxData, void* password, Windows::Security::Cryptography::Certificates::ExportOption exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions installOption, void* friendlyName, void* keyStorageProvider, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ImportPfxDataAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, hstring const, Windows::Security::Cryptography::Certificates::ExportOption const, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const, Windows::Security::Cryptography::Certificates::InstallOptions const, hstring const, hstring const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::ExportOption const*>(&exportable), *reinterpret_cast<Windows::Security::Cryptography::Certificates::KeyProtectionLevel const*>(&keyProtectionLevel), *reinterpret_cast<Windows::Security::Cryptography::Certificates::InstallOptions const*>(&installOption), *reinterpret_cast<hstring const*>(&friendlyName), *reinterpret_cast<hstring const*>(&keyStorageProvider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2>
{
    int32_t WINRT_CALL ImportPfxDataToKspWithParametersAsync(void* pfxData, void* password, void* pfxImportParameters, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ImportPfxDataAsync, WINRT_WRAP(Windows::Foundation::IAsyncAction), hstring const, hstring const, Windows::Security::Cryptography::Certificates::PfxImportParameters const);
            *value = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ImportPfxDataAsync(*reinterpret_cast<hstring const*>(&pfxData), *reinterpret_cast<hstring const*>(&password), *reinterpret_cast<Windows::Security::Cryptography::Certificates::PfxImportParameters const*>(&pfxImportParameters)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Certificates::IUserCertificateStore> : produce_base<D, Windows::Security::Cryptography::Certificates::IUserCertificateStore>
{
    int32_t WINRT_CALL RequestAddAsync(void* certificate, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RequestAddAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<bool>), Windows::Security::Cryptography::Certificates::Certificate const);
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestAddAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RequestDeleteAsync(void* certificate, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RequestDeleteAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<bool>), Windows::Security::Cryptography::Certificates::Certificate const);
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestDeleteAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Name(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Name, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

inline Certificate::Certificate(Windows::Storage::Streams::IBuffer const& certBlob) :
    Certificate(impl::call_factory<Certificate, Windows::Security::Cryptography::Certificates::ICertificateFactory>([&](auto&& f) { return f.CreateCertificate(certBlob); }))
{}

inline Windows::Foundation::IAsyncOperation<hstring> CertificateEnrollmentManager::CreateRequestAsync(Windows::Security::Cryptography::Certificates::CertificateRequestProperties const& request)
{
    return impl::call_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>([&](auto&& f) { return f.CreateRequestAsync(request); });
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::InstallCertificateAsync(param::hstring const& certificate, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption)
{
    return impl::call_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>([&](auto&& f) { return f.InstallCertificateAsync(certificate, installOption); });
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName)
{
    return impl::call_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics>([&](auto&& f) { return f.ImportPfxDataAsync(pfxData, password, exportable, keyProtectionLevel, installOption, friendlyName); });
}

inline Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager CertificateEnrollmentManager::UserCertificateEnrollmentManager()
{
    return impl::call_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>([&](auto&& f) { return f.UserCertificateEnrollmentManager(); });
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::ExportOption const& exportable, Windows::Security::Cryptography::Certificates::KeyProtectionLevel const& keyProtectionLevel, Windows::Security::Cryptography::Certificates::InstallOptions const& installOption, param::hstring const& friendlyName, param::hstring const& keyStorageProvider)
{
    return impl::call_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2>([&](auto&& f) { return f.ImportPfxDataAsync(pfxData, password, exportable, keyProtectionLevel, installOption, friendlyName, keyStorageProvider); });
}

inline Windows::Foundation::IAsyncAction CertificateEnrollmentManager::ImportPfxDataAsync(param::hstring const& pfxData, param::hstring const& password, Windows::Security::Cryptography::Certificates::PfxImportParameters const& pfxImportParameters)
{
    return impl::call_factory<CertificateEnrollmentManager, Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3>([&](auto&& f) { return f.ImportPfxDataAsync(pfxData, password, pfxImportParameters); });
}

inline CertificateExtension::CertificateExtension() :
    CertificateExtension(impl::call_factory<CertificateExtension>([](auto&& f) { return f.template ActivateInstance<CertificateExtension>(); }))
{}

inline CertificateKeyUsages::CertificateKeyUsages() :
    CertificateKeyUsages(impl::call_factory<CertificateKeyUsages>([](auto&& f) { return f.template ActivateInstance<CertificateKeyUsages>(); }))
{}

inline CertificateQuery::CertificateQuery() :
    CertificateQuery(impl::call_factory<CertificateQuery>([](auto&& f) { return f.template ActivateInstance<CertificateQuery>(); }))
{}

inline CertificateRequestProperties::CertificateRequestProperties() :
    CertificateRequestProperties(impl::call_factory<CertificateRequestProperties>([](auto&& f) { return f.template ActivateInstance<CertificateRequestProperties>(); }))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> CertificateStores::FindAllAsync()
{
    return impl::call_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>([&](auto&& f) { return f.FindAllAsync(); });
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate>> CertificateStores::FindAllAsync(Windows::Security::Cryptography::Certificates::CertificateQuery const& query)
{
    return impl::call_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>([&](auto&& f) { return f.FindAllAsync(query); });
}

inline Windows::Security::Cryptography::Certificates::CertificateStore CertificateStores::TrustedRootCertificationAuthorities()
{
    return impl::call_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>([&](auto&& f) { return f.TrustedRootCertificationAuthorities(); });
}

inline Windows::Security::Cryptography::Certificates::CertificateStore CertificateStores::IntermediateCertificationAuthorities()
{
    return impl::call_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>([&](auto&& f) { return f.IntermediateCertificationAuthorities(); });
}

inline Windows::Security::Cryptography::Certificates::CertificateStore CertificateStores::GetStoreByName(param::hstring const& storeName)
{
    return impl::call_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics>([&](auto&& f) { return f.GetStoreByName(storeName); });
}

inline Windows::Security::Cryptography::Certificates::UserCertificateStore CertificateStores::GetUserStoreByName(param::hstring const& storeName)
{
    return impl::call_factory<CertificateStores, Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2>([&](auto&& f) { return f.GetUserStoreByName(storeName); });
}

inline ChainBuildingParameters::ChainBuildingParameters() :
    ChainBuildingParameters(impl::call_factory<ChainBuildingParameters>([](auto&& f) { return f.template ActivateInstance<ChainBuildingParameters>(); }))
{}

inline ChainValidationParameters::ChainValidationParameters() :
    ChainValidationParameters(impl::call_factory<ChainValidationParameters>([](auto&& f) { return f.template ActivateInstance<ChainValidationParameters>(); }))
{}

inline CmsAttachedSignature::CmsAttachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) :
    CmsAttachedSignature(impl::call_factory<CmsAttachedSignature, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory>([&](auto&& f) { return f.CreateCmsAttachedSignature(inputBlob); }))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CmsAttachedSignature::GenerateSignatureAsync(Windows::Storage::Streams::IBuffer const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates)
{
    return impl::call_factory<CmsAttachedSignature, Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics>([&](auto&& f) { return f.GenerateSignatureAsync(data, signers, certificates); });
}

inline CmsDetachedSignature::CmsDetachedSignature(Windows::Storage::Streams::IBuffer const& inputBlob) :
    CmsDetachedSignature(impl::call_factory<CmsDetachedSignature, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory>([&](auto&& f) { return f.CreateCmsDetachedSignature(inputBlob); }))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CmsDetachedSignature::GenerateSignatureAsync(Windows::Storage::Streams::IInputStream const& data, param::async_iterable<Windows::Security::Cryptography::Certificates::CmsSignerInfo> const& signers, param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates)
{
    return impl::call_factory<CmsDetachedSignature, Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics>([&](auto&& f) { return f.GenerateSignatureAsync(data, signers, certificates); });
}

inline CmsSignerInfo::CmsSignerInfo() :
    CmsSignerInfo(impl::call_factory<CmsSignerInfo>([](auto&& f) { return f.template ActivateInstance<CmsSignerInfo>(); }))
{}

inline hstring KeyAlgorithmNames::Rsa()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Rsa(); });
}

inline hstring KeyAlgorithmNames::Dsa()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Dsa(); });
}

inline hstring KeyAlgorithmNames::Ecdh256()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Ecdh256(); });
}

inline hstring KeyAlgorithmNames::Ecdh384()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Ecdh384(); });
}

inline hstring KeyAlgorithmNames::Ecdh521()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Ecdh521(); });
}

inline hstring KeyAlgorithmNames::Ecdsa256()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Ecdsa256(); });
}

inline hstring KeyAlgorithmNames::Ecdsa384()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Ecdsa384(); });
}

inline hstring KeyAlgorithmNames::Ecdsa521()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics>([&](auto&& f) { return f.Ecdsa521(); });
}

inline hstring KeyAlgorithmNames::Ecdsa()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>([&](auto&& f) { return f.Ecdsa(); });
}

inline hstring KeyAlgorithmNames::Ecdh()
{
    return impl::call_factory<KeyAlgorithmNames, Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2>([&](auto&& f) { return f.Ecdh(); });
}

inline Windows::Foundation::IAsyncOperation<hstring> KeyAttestationHelper::DecryptTpmAttestationCredentialAsync(param::hstring const& credential)
{
    return impl::call_factory<KeyAttestationHelper, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>([&](auto&& f) { return f.DecryptTpmAttestationCredentialAsync(credential); });
}

inline hstring KeyAttestationHelper::GetTpmAttestationCredentialId(param::hstring const& credential)
{
    return impl::call_factory<KeyAttestationHelper, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics>([&](auto&& f) { return f.GetTpmAttestationCredentialId(credential); });
}

inline Windows::Foundation::IAsyncOperation<hstring> KeyAttestationHelper::DecryptTpmAttestationCredentialAsync(param::hstring const& credential, param::hstring const& containerName)
{
    return impl::call_factory<KeyAttestationHelper, Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2>([&](auto&& f) { return f.DecryptTpmAttestationCredentialAsync(credential, containerName); });
}

inline hstring KeyStorageProviderNames::SoftwareKeyStorageProvider()
{
    return impl::call_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>([&](auto&& f) { return f.SoftwareKeyStorageProvider(); });
}

inline hstring KeyStorageProviderNames::SmartcardKeyStorageProvider()
{
    return impl::call_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>([&](auto&& f) { return f.SmartcardKeyStorageProvider(); });
}

inline hstring KeyStorageProviderNames::PlatformKeyStorageProvider()
{
    return impl::call_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics>([&](auto&& f) { return f.PlatformKeyStorageProvider(); });
}

inline hstring KeyStorageProviderNames::PassportKeyStorageProvider()
{
    return impl::call_factory<KeyStorageProviderNames, Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2>([&](auto&& f) { return f.PassportKeyStorageProvider(); });
}

inline PfxImportParameters::PfxImportParameters() :
    PfxImportParameters(impl::call_factory<PfxImportParameters>([](auto&& f) { return f.template ActivateInstance<PfxImportParameters>(); }))
{}

inline hstring StandardCertificateStoreNames::Personal()
{
    return impl::call_factory<StandardCertificateStoreNames, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>([&](auto&& f) { return f.Personal(); });
}

inline hstring StandardCertificateStoreNames::TrustedRootCertificationAuthorities()
{
    return impl::call_factory<StandardCertificateStoreNames, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>([&](auto&& f) { return f.TrustedRootCertificationAuthorities(); });
}

inline hstring StandardCertificateStoreNames::IntermediateCertificationAuthorities()
{
    return impl::call_factory<StandardCertificateStoreNames, Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics>([&](auto&& f) { return f.IntermediateCertificationAuthorities(); });
}

inline SubjectAlternativeNameInfo::SubjectAlternativeNameInfo() :
    SubjectAlternativeNameInfo(impl::call_factory<SubjectAlternativeNameInfo>([](auto&& f) { return f.template ActivateInstance<SubjectAlternativeNameInfo>(); }))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificate> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificate2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificate3> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificate3> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateChain> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateChain> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateExtension> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateExtension> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateFactory> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateFactory> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateKeyUsages> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateQuery2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateStore2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IChainBuildingParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IChainBuildingParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IChainValidationParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IChainValidationParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignature> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignature> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsSignerInfo> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsSignerInfo> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ICmsTimestampInfo> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IPfxImportParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IPfxImportParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateStore> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::IUserCertificateStore> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::Certificate> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::Certificate> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateChain> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateChain> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateEnrollmentManager> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateExtension> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateExtension> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateKeyUsages> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateKeyUsages> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateQuery> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateQuery> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateRequestProperties> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateRequestProperties> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateStore> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateStore> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CertificateStores> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CertificateStores> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ChainBuildingParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ChainBuildingParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::ChainValidationParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::ChainValidationParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsAttachedSignature> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CmsAttachedSignature> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsDetachedSignature> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CmsDetachedSignature> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsSignerInfo> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CmsSignerInfo> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::CmsTimestampInfo> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::CmsTimestampInfo> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::KeyAlgorithmNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyAttestationHelper> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::KeyAttestationHelper> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::KeyStorageProviderNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::KeyStorageProviderNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::PfxImportParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::PfxImportParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::StandardCertificateStoreNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::SubjectAlternativeNameInfo> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::UserCertificateEnrollmentManager> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Certificates::UserCertificateStore> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Certificates::UserCertificateStore> {};

}
