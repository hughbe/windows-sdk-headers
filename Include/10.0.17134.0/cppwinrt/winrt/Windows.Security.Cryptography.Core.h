// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.2.h"
#include "winrt/Windows.Security.Cryptography.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaPkcs1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaPkcs1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaOaepSha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaOaepSha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP256Sha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_EcdsaP256Sha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP384Sha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_EcdsaP384Sha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::EcdsaP521Sha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_EcdsaP521Sha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::DsaSha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_DsaSha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::DsaSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_DsaSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPkcs1Sha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPkcs1Sha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics<D>::RsaSignPssSha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics)->get_RsaSignPssSha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2)->get_EcdsaSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2)->get_EcdsaSha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2<D>::EcdsaSha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2)->get_EcdsaSha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->get_AlgorithmName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::CreateKeyPair(uint32_t keySize) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->CreateKeyPair(keySize, put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportDefaultPrivateKeyBlob(get_abi(keyBlob), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportKeyPair(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportKeyPairWithBlobType(get_abi(keyBlob), get_abi(BlobType), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportDefaultPublicKeyBlob(get_abi(keyBlob), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider<D>::ImportPublicKey(Windows::Storage::Streams::IBuffer const& keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider)->ImportPublicKeyWithBlobType(get_abi(keyBlob), get_abi(BlobType), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2<D>::CreateKeyPairWithCurveName(param::hstring const& curveName) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2)->CreateKeyPairWithCurveName(get_abi(curveName), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2<D>::CreateKeyPairWithCurveParameters(array_view<uint8_t const> parameters) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2)->CreateKeyPairWithCurveParameters(parameters.size(), get_abi(parameters), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider consume_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
{
    Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider provider{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics)->OpenAlgorithm(get_abi(algorithm), put_abi(provider)));
    return provider;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::Encrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->Encrypt(get_abi(key), get_abi(data), get_abi(iv), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::Decrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->Decrypt(get_abi(key), get_abi(data), get_abi(iv), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::EncryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticatedData) const
{
    Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->EncryptAndAuthenticate(get_abi(key), get_abi(data), get_abi(nonce), get_abi(authenticatedData), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::DecryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticationTag, Windows::Storage::Streams::IBuffer const& authenticatedData) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->DecryptAndAuthenticate(get_abi(key), get_abi(data), get_abi(nonce), get_abi(authenticationTag), get_abi(authenticatedData), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::Sign(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->Sign(get_abi(key), get_abi(data), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::VerifySignature(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const
{
    bool isAuthenticated{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->VerifySignature(get_abi(key), get_abi(data), get_abi(signature), &isAuthenticated));
    return isAuthenticated;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics<D>::DeriveKeyMaterial(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Security::Cryptography::Core::KeyDerivationParameters const& parameters, uint32_t desiredKeySize) const
{
    Windows::Storage::Streams::IBuffer keyMaterial{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics)->DeriveKeyMaterial(get_abi(key), get_abi(parameters), desiredKeySize, put_abi(keyMaterial)));
    return keyMaterial;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::SignHashedData(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->SignHashedData(get_abi(key), get_abi(data), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature) const
{
    bool isAuthenticated{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->VerifySignatureWithHashInput(get_abi(key), get_abi(data), get_abi(signature), &isAuthenticated));
    return isAuthenticated;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::DecryptAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->DecryptAsync(get_abi(key), get_abi(data), get_abi(iv), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::SignAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->SignAsync(get_abi(key), get_abi(data), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2<D>::SignHashedDataAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicEngineStatics2)->SignHashedDataAsync(get_abi(key), get_abi(data), put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::KeySize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->get_KeySize(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::Export() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportDefaultPrivateKeyBlobType(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::Export(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const& BlobType) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportPrivateKeyWithBlobType(get_abi(BlobType), put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::ExportPublicKey() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportDefaultPublicKeyBlobType(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_ICryptographicKey<D>::ExportPublicKey(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const& BlobType) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ICryptographicKey)->ExportPublicKeyWithBlobType(get_abi(BlobType), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP160r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP160r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP160t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP160t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP192r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP192r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP192t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP192t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP224r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP224r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP224t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP224t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP256r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP256r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP256t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP256t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP320r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP320r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP320t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP320t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP384r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP384r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP384t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP384t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP512r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP512r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::BrainpoolP512t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_BrainpoolP512t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Curve25519() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Curve25519(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Ec192wapi() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Ec192wapi(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP192() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP192(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP224() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP224(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NistP521() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NistP521(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NumsP256t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NumsP256t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NumsP384t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NumsP384t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::NumsP512t1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_NumsP512t1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP160k1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP160k1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP160r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP160r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP160r2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP160r2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP192k1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP192k1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP192r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP192r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP224k1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP224k1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP224r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP224r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP256k1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP256k1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP256r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP256r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP384r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP384r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::SecP521r1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_SecP521r1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Wtls7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Wtls7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Wtls9() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Wtls9(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::Wtls12() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_Wtls12(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P192v1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P192v1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P192v2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P192v2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P192v3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P192v3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P239v1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P239v1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P239v2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P239v2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P239v3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P239v3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::X962P256v1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_X962P256v1(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Security_Cryptography_Core_IEccCurveNamesStatics<D>::AllEccCurveNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEccCurveNamesStatics)->get_AllEccCurveNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData<D>::EncryptedData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData)->get_EncryptedData(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData<D>::AuthenticationTag() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData)->get_AuthenticationTag(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Md5() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Md5(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics<D>::Sha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics)->get_Sha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->get_AlgorithmName(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::HashLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->get_HashLength(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::HashData(Windows::Storage::Streams::IBuffer const& data) const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->HashData(get_abi(data), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicHash consume_Windows_Security_Cryptography_Core_IHashAlgorithmProvider<D>::CreateHash() const
{
    Windows::Security::Cryptography::Core::CryptographicHash Value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProvider)->CreateHash(put_abi(Value)));
    return Value;
}

template <typename D> Windows::Security::Cryptography::Core::HashAlgorithmProvider consume_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
{
    Windows::Security::Cryptography::Core::HashAlgorithmProvider provider{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics)->OpenAlgorithm(get_abi(algorithm), put_abi(provider)));
    return provider;
}

template <typename D> void consume_Windows_Security_Cryptography_Core_IHashComputation<D>::Append(Windows::Storage::Streams::IBuffer const& data) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashComputation)->Append(get_abi(data)));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_IHashComputation<D>::GetValueAndReset() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IHashComputation)->GetValueAndReset(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Md5() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Md5(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Pbkdf2Sha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Pbkdf2Sha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacMd5() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacMd5(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp800108CtrHmacSha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp800108CtrHmacSha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatMd5() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatMd5(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics<D>::Sp80056aConcatSha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics)->get_Sp80056aConcatSha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfMd5() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfMd5(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2<D>::CapiKdfSha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2)->get_CapiKdfSha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider)->get_AlgorithmName(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider<D>::CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider)->CreateKey(get_abi(keyMaterial), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider consume_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
{
    Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider provider{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics)->OpenAlgorithm(get_abi(algorithm), put_abi(provider)));
    return provider;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>::KdfGenericBinary() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters)->get_KdfGenericBinary(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>::KdfGenericBinary(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters)->put_KdfGenericBinary(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters<D>::IterationCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters)->get_IterationCount(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2<D>::Capi1KdfTargetAlgorithm() const
{
    Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters2)->get_Capi1KdfTargetAlgorithm(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Cryptography_Core_IKeyDerivationParameters2<D>::Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParameters2)->put_Capi1KdfTargetAlgorithm(get_abi(value)));
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>::BuildForPbkdf2(Windows::Storage::Streams::IBuffer const& pbkdf2Salt, uint32_t iterationCount) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics)->BuildForPbkdf2(get_abi(pbkdf2Salt), iterationCount, put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>::BuildForSP800108(Windows::Storage::Streams::IBuffer const& label, Windows::Storage::Streams::IBuffer const& context) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics)->BuildForSP800108(get_abi(label), get_abi(context), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics<D>::BuildForSP80056a(Windows::Storage::Streams::IBuffer const& algorithmId, Windows::Storage::Streams::IBuffer const& partyUInfo, Windows::Storage::Streams::IBuffer const& partyVInfo, Windows::Storage::Streams::IBuffer const& suppPubInfo, Windows::Storage::Streams::IBuffer const& suppPrivInfo) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics)->BuildForSP80056a(get_abi(algorithmId), get_abi(partyUInfo), get_abi(partyVInfo), get_abi(suppPubInfo), get_abi(suppPrivInfo), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::KeyDerivationParameters consume_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2<D>::BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& capi1KdfTargetAlgorithm) const
{
    Windows::Security::Cryptography::Core::KeyDerivationParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2)->BuildForCapi1Kdf(get_abi(capi1KdfTargetAlgorithm), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacMd5() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacMd5(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha256() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha256(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha384() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha384(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::HmacSha512() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_HmacSha512(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics<D>::AesCmac() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics)->get_AesCmac(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider)->get_AlgorithmName(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>::MacLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider)->get_MacLength(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider<D>::CreateKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicKey macKey{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider)->CreateKey(get_abi(keyMaterial), put_abi(macKey)));
    return macKey;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicHash consume_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2<D>::CreateHash(Windows::Storage::Streams::IBuffer const& keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicHash value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProvider2)->CreateHash(get_abi(keyMaterial), put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::MacAlgorithmProvider consume_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
{
    Windows::Security::Cryptography::Core::MacAlgorithmProvider provider{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics)->OpenAlgorithm(get_abi(algorithm), put_abi(provider)));
    return provider;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics<D>::OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics)->OpenKeyPairFromCertificateAsync(get_abi(certificate), get_abi(hashAlgorithmName), get_abi(padding), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics<D>::OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics)->OpenPublicKeyFromCertificate(get_abi(certificate), get_abi(hashAlgorithmName), get_abi(padding), put_abi(key)));
    return key;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesCbc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesCbc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesEcb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesEcb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesCbc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesCbc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesEcb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesEcb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2Cbc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2Cbc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2Ecb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2Ecb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesCbc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesCbc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesEcb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesEcb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesGcm() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesGcm(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesCcm() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesCcm(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesCbcPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesCbcPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::AesEcbPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_AesEcbPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesCbcPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesCbcPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::DesEcbPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_DesEcbPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesCbcPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesCbcPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::TripleDesEcbPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_TripleDesEcbPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2CbcPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2CbcPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc2EcbPkcs7() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc2EcbPkcs7(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics<D>::Rc4() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics)->get_Rc4(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>::AlgorithmName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider)->get_AlgorithmName(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>::BlockLength() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider)->get_BlockLength(&value));
    return value;
}

template <typename D> Windows::Security::Cryptography::Core::CryptographicKey consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider<D>::CreateSymmetricKey(Windows::Storage::Streams::IBuffer const& keyMaterial) const
{
    Windows::Security::Cryptography::Core::CryptographicKey key{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider)->CreateSymmetricKey(get_abi(keyMaterial), put_abi(key)));
    return key;
}

template <typename D> Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider consume_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics<D>::OpenAlgorithm(param::hstring const& algorithm) const
{
    Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider provider{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics)->OpenAlgorithm(get_abi(algorithm), put_abi(provider)));
    return provider;
}

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>
{
    HRESULT __stdcall get_RsaPkcs1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaPkcs1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaOaepSha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaOaepSha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaP256Sha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaP256Sha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaP384Sha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaP384Sha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaP521Sha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaP521Sha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DsaSha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DsaSha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DsaSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DsaSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPkcs1Sha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPkcs1Sha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RsaSignPssSha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RsaSignPssSha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>
{
    HRESULT __stdcall get_EcdsaSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaSha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaSha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EcdsaSha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EcdsaSha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateKeyPair(uint32_t keySize, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKeyPair(keySize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ImportDefaultPrivateKeyBlob(void* keyBlob, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportKeyPair(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ImportKeyPairWithBlobType(void* keyBlob, Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportKeyPair(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const*>(&BlobType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ImportDefaultPublicKeyBlob(void* keyBlob, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportPublicKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ImportPublicKeyWithBlobType(void* keyBlob, Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().ImportPublicKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyBlob), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const*>(&BlobType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2>
{
    HRESULT __stdcall CreateKeyPairWithCurveName(HSTRING curveName, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKeyPairWithCurveName(*reinterpret_cast<hstring const*>(&curveName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateKeyPairWithCurveParameters(uint32_t __parametersSize, uint8_t* parameters, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKeyPairWithCurveParameters(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(parameters), reinterpret_cast<uint8_t const *>(parameters) + __parametersSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>
{
    HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, void** provider) noexcept final
    {
        try
        {
            *provider = nullptr;
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>
{
    HRESULT __stdcall Encrypt(void* key, void* data, void* iv, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Encrypt(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&iv)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Decrypt(void* key, void* data, void* iv, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Decrypt(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&iv)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EncryptAndAuthenticate(void* key, void* data, void* nonce, void* authenticatedData, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData>(this->shim().EncryptAndAuthenticate(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&nonce), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&authenticatedData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DecryptAndAuthenticate(void* key, void* data, void* nonce, void* authenticationTag, void* authenticatedData, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DecryptAndAuthenticate(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&nonce), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&authenticationTag), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&authenticatedData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Sign(void* key, void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Sign(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall VerifySignature(void* key, void* data, void* signature, bool* isAuthenticated) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isAuthenticated = detach_from<bool>(this->shim().VerifySignature(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&signature)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeriveKeyMaterial(void* key, void* parameters, uint32_t desiredKeySize, void** keyMaterial) noexcept final
    {
        try
        {
            *keyMaterial = nullptr;
            typename D::abi_guard guard(this->shim());
            *keyMaterial = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().DeriveKeyMaterial(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Security::Cryptography::Core::KeyDerivationParameters const*>(&parameters), desiredKeySize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>
{
    HRESULT __stdcall SignHashedData(void* key, void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().SignHashedData(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall VerifySignatureWithHashInput(void* key, void* data, void* signature, bool* isAuthenticated) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isAuthenticated = detach_from<bool>(this->shim().VerifySignatureWithHashInput(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&signature)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DecryptAsync(void* key, void* data, void* iv, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().DecryptAsync(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&iv)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SignAsync(void* key, void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().SignAsync(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SignHashedDataAsync(void* key, void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>>(this->shim().SignHashedDataAsync(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicKey const*>(&key), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ICryptographicKey> : produce_base<D, Windows::Security::Cryptography::Core::ICryptographicKey>
{
    HRESULT __stdcall get_KeySize(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().KeySize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ExportDefaultPrivateKeyBlobType(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Export());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ExportPrivateKeyWithBlobType(Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Export(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType const*>(&BlobType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ExportDefaultPublicKeyBlobType(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ExportPublicKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ExportPublicKeyWithBlobType(Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().ExportPublicKey(*reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType const*>(&BlobType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IEccCurveNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>
{
    HRESULT __stdcall get_BrainpoolP160r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP160r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP160t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP160t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP192r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP192r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP192t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP192t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP224r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP224r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP224t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP224t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP256r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP256r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP256t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP256t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP320r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP320r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP320t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP320t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP384r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP384r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP384t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP384t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP512r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP512r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BrainpoolP512t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BrainpoolP512t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Curve25519(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Curve25519());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Ec192wapi(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Ec192wapi());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NistP192(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP192());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NistP224(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP224());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NistP256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NistP384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NistP521(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NistP521());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NumsP256t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NumsP256t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NumsP384t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NumsP384t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NumsP512t1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().NumsP512t1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP160k1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP160k1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP160r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP160r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP160r2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP160r2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP192k1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP192k1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP192r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP192r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP224k1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP224k1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP224r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP224r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP256k1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP256k1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP256r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP256r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP384r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP384r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecP521r1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SecP521r1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Wtls7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Wtls7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Wtls9(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Wtls9());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Wtls12(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Wtls12());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X962P192v1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P192v1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X962P192v2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P192v2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X962P192v3(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P192v3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X962P239v1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P239v1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X962P239v2(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P239v2());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X962P239v3(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P239v3());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_X962P256v1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().X962P256v1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllEccCurveNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AllEccCurveNames());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> : produce_base<D, Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData>
{
    HRESULT __stdcall get_EncryptedData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().EncryptedData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationTag(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().AuthenticationTag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>
{
    HRESULT __stdcall get_Md5(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Md5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HashLength(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().HashLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall HashData(void* data, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().HashData(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateHash(void** Value) noexcept final
    {
        try
        {
            *Value = nullptr;
            typename D::abi_guard guard(this->shim());
            *Value = detach_from<Windows::Security::Cryptography::Core::CryptographicHash>(this->shim().CreateHash());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>
{
    HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, void** provider) noexcept final
    {
        try
        {
            *provider = nullptr;
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::HashAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IHashComputation> : produce_base<D, Windows::Security::Cryptography::Core::IHashComputation>
{
    HRESULT __stdcall Append(void* data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetValueAndReset(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetValueAndReset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>
{
    HRESULT __stdcall get_Pbkdf2Md5(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Md5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pbkdf2Sha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Pbkdf2Sha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacMd5(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacMd5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp800108CtrHmacSha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp800108CtrHmacSha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatMd5(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatMd5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sp80056aConcatSha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sp80056aConcatSha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>
{
    HRESULT __stdcall get_CapiKdfMd5(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfMd5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CapiKdfSha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CapiKdfSha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateKey(void* keyMaterial, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>
{
    HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, void** provider) noexcept final
    {
        try
        {
            *provider = nullptr;
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters>
{
    HRESULT __stdcall get_KdfGenericBinary(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().KdfGenericBinary());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_KdfGenericBinary(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KdfGenericBinary(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IterationCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().IterationCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParameters2>
{
    HRESULT __stdcall get_Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm>(this->shim().Capi1KdfTargetAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Capi1KdfTargetAlgorithm(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Capi1KdfTargetAlgorithm(*reinterpret_cast<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>
{
    HRESULT __stdcall BuildForPbkdf2(void* pbkdf2Salt, uint32_t iterationCount, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForPbkdf2(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&pbkdf2Salt), iterationCount));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BuildForSP800108(void* label, void* context, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForSP800108(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&label), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&context)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BuildForSP80056a(void* algorithmId, void* partyUInfo, void* partyVInfo, void* suppPubInfo, void* suppPrivInfo, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForSP80056a(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&algorithmId), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&partyUInfo), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&partyVInfo), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&suppPubInfo), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&suppPrivInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> : produce_base<D, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>
{
    HRESULT __stdcall BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm capi1KdfTargetAlgorithm, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::KeyDerivationParameters>(this->shim().BuildForCapi1Kdf(*reinterpret_cast<Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const*>(&capi1KdfTargetAlgorithm)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>
{
    HRESULT __stdcall get_HmacMd5(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacMd5());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha1(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha1());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha256(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha256());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha384(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha384());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HmacSha512(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HmacSha512());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AesCmac(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCmac());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MacLength(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MacLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateKey(void* keyMaterial, void** macKey) noexcept final
    {
        try
        {
            *macKey = nullptr;
            typename D::abi_guard guard(this->shim());
            *macKey = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProvider2>
{
    HRESULT __stdcall CreateHash(void* keyMaterial, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Security::Cryptography::Core::CryptographicHash>(this->shim().CreateHash(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>
{
    HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, void** provider) noexcept final
    {
        try
        {
            *provider = nullptr;
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::MacAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>
{
    HRESULT __stdcall OpenKeyPairFromCertificateAsync(void* certificate, HSTRING hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey>>(this->shim().OpenKeyPairFromCertificateAsync(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate), *reinterpret_cast<hstring const*>(&hashAlgorithmName), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPadding const*>(&padding)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OpenPublicKeyFromCertificate(void* certificate, HSTRING hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding padding, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().OpenPublicKeyFromCertificate(*reinterpret_cast<Windows::Security::Cryptography::Certificates::Certificate const*>(&certificate), *reinterpret_cast<hstring const*>(&hashAlgorithmName), *reinterpret_cast<Windows::Security::Cryptography::Core::CryptographicPadding const*>(&padding)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>
{
    HRESULT __stdcall get_DesCbc(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesCbc());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesEcb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesEcb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesCbc(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesCbc());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesEcb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesEcb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2Cbc(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2Cbc());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2Ecb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2Ecb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AesCbc(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCbc());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AesEcb(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesEcb());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AesGcm(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesGcm());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AesCcm(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCcm());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AesCbcPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesCbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AesEcbPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AesEcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesCbcPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesCbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesEcbPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DesEcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesCbcPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesCbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TripleDesEcbPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TripleDesEcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2CbcPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2CbcPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rc2EcbPkcs7(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc2EcbPkcs7());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rc4(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Rc4());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider>
{
    HRESULT __stdcall get_AlgorithmName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlgorithmName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BlockLength(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().BlockLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSymmetricKey(void* keyMaterial, void** key) noexcept final
    {
        try
        {
            *key = nullptr;
            typename D::abi_guard guard(this->shim());
            *key = detach_from<Windows::Security::Cryptography::Core::CryptographicKey>(this->shim().CreateSymmetricKey(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&keyMaterial)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> : produce_base<D, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>
{
    HRESULT __stdcall OpenAlgorithm(HSTRING algorithm, void** provider) noexcept final
    {
        try
        {
            *provider = nullptr;
            typename D::abi_guard guard(this->shim());
            *provider = detach_from<Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider>(this->shim().OpenAlgorithm(*reinterpret_cast<hstring const*>(&algorithm)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Core {

inline hstring AsymmetricAlgorithmNames::RsaPkcs1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaPkcs1();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaOaepSha1();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaOaepSha256();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaOaepSha384();
}

inline hstring AsymmetricAlgorithmNames::RsaOaepSha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaOaepSha512();
}

inline hstring AsymmetricAlgorithmNames::EcdsaP256Sha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().EcdsaP256Sha256();
}

inline hstring AsymmetricAlgorithmNames::EcdsaP384Sha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().EcdsaP384Sha384();
}

inline hstring AsymmetricAlgorithmNames::EcdsaP521Sha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().EcdsaP521Sha512();
}

inline hstring AsymmetricAlgorithmNames::DsaSha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().DsaSha1();
}

inline hstring AsymmetricAlgorithmNames::DsaSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().DsaSha256();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha1();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha256();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha384();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPkcs1Sha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPkcs1Sha512();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha1()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha1();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha256();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha384();
}

inline hstring AsymmetricAlgorithmNames::RsaSignPssSha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics>().RsaSignPssSha512();
}

inline hstring AsymmetricAlgorithmNames::EcdsaSha256()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>().EcdsaSha256();
}

inline hstring AsymmetricAlgorithmNames::EcdsaSha384()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>().EcdsaSha384();
}

inline hstring AsymmetricAlgorithmNames::EcdsaSha512()
{
    return get_activation_factory<AsymmetricAlgorithmNames, Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2>().EcdsaSha512();
}

inline Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider AsymmetricKeyAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
{
    return get_activation_factory<AsymmetricKeyAlgorithmProvider, Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::Encrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>().Encrypt(key, data, iv);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::Decrypt(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>().Decrypt(key, data, iv);
}

inline Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData CryptographicEngine::EncryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticatedData)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>().EncryptAndAuthenticate(key, data, nonce, authenticatedData);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::DecryptAndAuthenticate(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& nonce, Windows::Storage::Streams::IBuffer const& authenticationTag, Windows::Storage::Streams::IBuffer const& authenticatedData)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>().DecryptAndAuthenticate(key, data, nonce, authenticationTag, authenticatedData);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::Sign(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>().Sign(key, data);
}

inline bool CryptographicEngine::VerifySignature(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>().VerifySignature(key, data, signature);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::DeriveKeyMaterial(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Security::Cryptography::Core::KeyDerivationParameters const& parameters, uint32_t desiredKeySize)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics>().DeriveKeyMaterial(key, parameters, desiredKeySize);
}

inline Windows::Storage::Streams::IBuffer CryptographicEngine::SignHashedData(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>().SignHashedData(key, data);
}

inline bool CryptographicEngine::VerifySignatureWithHashInput(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& signature)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>().VerifySignatureWithHashInput(key, data, signature);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CryptographicEngine::DecryptAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data, Windows::Storage::Streams::IBuffer const& iv)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>().DecryptAsync(key, data, iv);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CryptographicEngine::SignAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>().SignAsync(key, data);
}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> CryptographicEngine::SignHashedDataAsync(Windows::Security::Cryptography::Core::CryptographicKey const& key, Windows::Storage::Streams::IBuffer const& data)
{
    return get_activation_factory<CryptographicEngine, Windows::Security::Cryptography::Core::ICryptographicEngineStatics2>().SignHashedDataAsync(key, data);
}

inline hstring EccCurveNames::BrainpoolP160r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP160r1();
}

inline hstring EccCurveNames::BrainpoolP160t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP160t1();
}

inline hstring EccCurveNames::BrainpoolP192r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP192r1();
}

inline hstring EccCurveNames::BrainpoolP192t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP192t1();
}

inline hstring EccCurveNames::BrainpoolP224r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP224r1();
}

inline hstring EccCurveNames::BrainpoolP224t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP224t1();
}

inline hstring EccCurveNames::BrainpoolP256r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP256r1();
}

inline hstring EccCurveNames::BrainpoolP256t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP256t1();
}

inline hstring EccCurveNames::BrainpoolP320r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP320r1();
}

inline hstring EccCurveNames::BrainpoolP320t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP320t1();
}

inline hstring EccCurveNames::BrainpoolP384r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP384r1();
}

inline hstring EccCurveNames::BrainpoolP384t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP384t1();
}

inline hstring EccCurveNames::BrainpoolP512r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP512r1();
}

inline hstring EccCurveNames::BrainpoolP512t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().BrainpoolP512t1();
}

inline hstring EccCurveNames::Curve25519()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().Curve25519();
}

inline hstring EccCurveNames::Ec192wapi()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().Ec192wapi();
}

inline hstring EccCurveNames::NistP192()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NistP192();
}

inline hstring EccCurveNames::NistP224()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NistP224();
}

inline hstring EccCurveNames::NistP256()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NistP256();
}

inline hstring EccCurveNames::NistP384()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NistP384();
}

inline hstring EccCurveNames::NistP521()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NistP521();
}

inline hstring EccCurveNames::NumsP256t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NumsP256t1();
}

inline hstring EccCurveNames::NumsP384t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NumsP384t1();
}

inline hstring EccCurveNames::NumsP512t1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().NumsP512t1();
}

inline hstring EccCurveNames::SecP160k1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP160k1();
}

inline hstring EccCurveNames::SecP160r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP160r1();
}

inline hstring EccCurveNames::SecP160r2()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP160r2();
}

inline hstring EccCurveNames::SecP192k1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP192k1();
}

inline hstring EccCurveNames::SecP192r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP192r1();
}

inline hstring EccCurveNames::SecP224k1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP224k1();
}

inline hstring EccCurveNames::SecP224r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP224r1();
}

inline hstring EccCurveNames::SecP256k1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP256k1();
}

inline hstring EccCurveNames::SecP256r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP256r1();
}

inline hstring EccCurveNames::SecP384r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP384r1();
}

inline hstring EccCurveNames::SecP521r1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().SecP521r1();
}

inline hstring EccCurveNames::Wtls7()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().Wtls7();
}

inline hstring EccCurveNames::Wtls9()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().Wtls9();
}

inline hstring EccCurveNames::Wtls12()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().Wtls12();
}

inline hstring EccCurveNames::X962P192v1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().X962P192v1();
}

inline hstring EccCurveNames::X962P192v2()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().X962P192v2();
}

inline hstring EccCurveNames::X962P192v3()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().X962P192v3();
}

inline hstring EccCurveNames::X962P239v1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().X962P239v1();
}

inline hstring EccCurveNames::X962P239v2()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().X962P239v2();
}

inline hstring EccCurveNames::X962P239v3()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().X962P239v3();
}

inline hstring EccCurveNames::X962P256v1()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().X962P256v1();
}

inline Windows::Foundation::Collections::IVectorView<hstring> EccCurveNames::AllEccCurveNames()
{
    return get_activation_factory<EccCurveNames, Windows::Security::Cryptography::Core::IEccCurveNamesStatics>().AllEccCurveNames();
}

inline hstring HashAlgorithmNames::Md5()
{
    return get_activation_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>().Md5();
}

inline hstring HashAlgorithmNames::Sha1()
{
    return get_activation_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>().Sha1();
}

inline hstring HashAlgorithmNames::Sha256()
{
    return get_activation_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>().Sha256();
}

inline hstring HashAlgorithmNames::Sha384()
{
    return get_activation_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>().Sha384();
}

inline hstring HashAlgorithmNames::Sha512()
{
    return get_activation_factory<HashAlgorithmNames, Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>().Sha512();
}

inline Windows::Security::Cryptography::Core::HashAlgorithmProvider HashAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
{
    return get_activation_factory<HashAlgorithmProvider, Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Md5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Md5();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha1();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha256();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha384();
}

inline hstring KeyDerivationAlgorithmNames::Pbkdf2Sha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Pbkdf2Sha512();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacMd5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacMd5();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha1();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha256();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha384();
}

inline hstring KeyDerivationAlgorithmNames::Sp800108CtrHmacSha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp800108CtrHmacSha512();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatMd5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatMd5();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha1();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha256();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha384();
}

inline hstring KeyDerivationAlgorithmNames::Sp80056aConcatSha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics>().Sp80056aConcatSha512();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfMd5()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>().CapiKdfMd5();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha1()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha1();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha256()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha256();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha384()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha384();
}

inline hstring KeyDerivationAlgorithmNames::CapiKdfSha512()
{
    return get_activation_factory<KeyDerivationAlgorithmNames, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2>().CapiKdfSha512();
}

inline Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider KeyDerivationAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
{
    return get_activation_factory<KeyDerivationAlgorithmProvider, Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForPbkdf2(Windows::Storage::Streams::IBuffer const& pbkdf2Salt, uint32_t iterationCount)
{
    return get_activation_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>().BuildForPbkdf2(pbkdf2Salt, iterationCount);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForSP800108(Windows::Storage::Streams::IBuffer const& label, Windows::Storage::Streams::IBuffer const& context)
{
    return get_activation_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>().BuildForSP800108(label, context);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForSP80056a(Windows::Storage::Streams::IBuffer const& algorithmId, Windows::Storage::Streams::IBuffer const& partyUInfo, Windows::Storage::Streams::IBuffer const& partyVInfo, Windows::Storage::Streams::IBuffer const& suppPubInfo, Windows::Storage::Streams::IBuffer const& suppPrivInfo)
{
    return get_activation_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics>().BuildForSP80056a(algorithmId, partyUInfo, partyVInfo, suppPubInfo, suppPrivInfo);
}

inline Windows::Security::Cryptography::Core::KeyDerivationParameters KeyDerivationParameters::BuildForCapi1Kdf(Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm const& capi1KdfTargetAlgorithm)
{
    return get_activation_factory<KeyDerivationParameters, Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2>().BuildForCapi1Kdf(capi1KdfTargetAlgorithm);
}

inline hstring MacAlgorithmNames::HmacMd5()
{
    return get_activation_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>().HmacMd5();
}

inline hstring MacAlgorithmNames::HmacSha1()
{
    return get_activation_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>().HmacSha1();
}

inline hstring MacAlgorithmNames::HmacSha256()
{
    return get_activation_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>().HmacSha256();
}

inline hstring MacAlgorithmNames::HmacSha384()
{
    return get_activation_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>().HmacSha384();
}

inline hstring MacAlgorithmNames::HmacSha512()
{
    return get_activation_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>().HmacSha512();
}

inline hstring MacAlgorithmNames::AesCmac()
{
    return get_activation_factory<MacAlgorithmNames, Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics>().AesCmac();
}

inline Windows::Security::Cryptography::Core::MacAlgorithmProvider MacAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
{
    return get_activation_factory<MacAlgorithmProvider, Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> PersistedKeyProvider::OpenKeyPairFromCertificateAsync(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding)
{
    return get_activation_factory<PersistedKeyProvider, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>().OpenKeyPairFromCertificateAsync(certificate, hashAlgorithmName, padding);
}

inline Windows::Security::Cryptography::Core::CryptographicKey PersistedKeyProvider::OpenPublicKeyFromCertificate(Windows::Security::Cryptography::Certificates::Certificate const& certificate, param::hstring const& hashAlgorithmName, Windows::Security::Cryptography::Core::CryptographicPadding const& padding)
{
    return get_activation_factory<PersistedKeyProvider, Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics>().OpenPublicKeyFromCertificate(certificate, hashAlgorithmName, padding);
}

inline hstring SymmetricAlgorithmNames::DesCbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().DesCbc();
}

inline hstring SymmetricAlgorithmNames::DesEcb()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().DesEcb();
}

inline hstring SymmetricAlgorithmNames::TripleDesCbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().TripleDesCbc();
}

inline hstring SymmetricAlgorithmNames::TripleDesEcb()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().TripleDesEcb();
}

inline hstring SymmetricAlgorithmNames::Rc2Cbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().Rc2Cbc();
}

inline hstring SymmetricAlgorithmNames::Rc2Ecb()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().Rc2Ecb();
}

inline hstring SymmetricAlgorithmNames::AesCbc()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().AesCbc();
}

inline hstring SymmetricAlgorithmNames::AesEcb()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().AesEcb();
}

inline hstring SymmetricAlgorithmNames::AesGcm()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().AesGcm();
}

inline hstring SymmetricAlgorithmNames::AesCcm()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().AesCcm();
}

inline hstring SymmetricAlgorithmNames::AesCbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().AesCbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::AesEcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().AesEcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::DesCbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().DesCbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::DesEcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().DesEcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::TripleDesCbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().TripleDesCbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::TripleDesEcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().TripleDesEcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::Rc2CbcPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().Rc2CbcPkcs7();
}

inline hstring SymmetricAlgorithmNames::Rc2EcbPkcs7()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().Rc2EcbPkcs7();
}

inline hstring SymmetricAlgorithmNames::Rc4()
{
    return get_activation_factory<SymmetricAlgorithmNames, Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics>().Rc4();
}

inline Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider SymmetricKeyAlgorithmProvider::OpenAlgorithm(param::hstring const& algorithm)
{
    return get_activation_factory<SymmetricKeyAlgorithmProvider, Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics>().OpenAlgorithm(algorithm);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ICryptographicEngineStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::ICryptographicKey> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ICryptographicKey> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IEccCurveNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IEccCurveNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IHashComputation> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IHashComputation> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParameters2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProvider2> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::AsymmetricAlgorithmNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::AsymmetricKeyAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::CryptographicEngine> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::CryptographicEngine> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::CryptographicHash> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::CryptographicHash> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::CryptographicKey> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::CryptographicKey> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::EccCurveNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::EccCurveNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::EncryptedAndAuthenticatedData> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::HashAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::HashAlgorithmNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::HashAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::HashAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::KeyDerivationAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::KeyDerivationParameters> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::KeyDerivationParameters> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::MacAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::MacAlgorithmNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::MacAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::MacAlgorithmProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::PersistedKeyProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::PersistedKeyProvider> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::SymmetricAlgorithmNames> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::SymmetricAlgorithmNames> {};
template<> struct hash<winrt::Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider> : winrt::impl::hash_base<winrt::Windows::Security::Cryptography::Core::SymmetricKeyAlgorithmProvider> {};

}

WINRT_WARNING_POP
