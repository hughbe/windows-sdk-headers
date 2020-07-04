// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Country() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Country(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Country(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Country(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::AddressLines() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_AddressLines(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::AddressLines(param::async_vector_view<hstring> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_AddressLines(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Region() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Region(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Region(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Region(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::City() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_City(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::City(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_City(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::DependentLocality() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_DependentLocality(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::DependentLocality(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_DependentLocality(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PostalCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_PostalCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PostalCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_PostalCode(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::SortingCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_SortingCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::SortingCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_SortingCode(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::LanguageCode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_LanguageCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::LanguageCode(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_LanguageCode(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Organization() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Organization(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Organization(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Organization(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Recipient() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Recipient(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Recipient(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Recipient(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_PhoneNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PhoneNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_PhoneNumber(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Properties() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult<D>::Status() const
{
    Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const& value) const
{
    Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory)->Create(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Currency() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_Currency(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Currency(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_Currency(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::CurrencySystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_CurrencySystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::CurrencySystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_CurrencySystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Value() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_Value(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Value(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_Value(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>::Create(param::hstring const& value, param::hstring const& currency) const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory)->Create(get_abi(value), get_abi(currency), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>::CreateWithCurrencySystem(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory)->CreateWithCurrencySystem(get_abi(value), get_abi(currency), get_abi(currencySystem), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Total() const
{
    Windows::ApplicationModel::Payments::PaymentItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_Total(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Total(Windows::ApplicationModel::Payments::PaymentItem const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_Total(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::DisplayItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_DisplayItems(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::DisplayItems(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentItem> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_DisplayItems(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::ShippingOptions() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_ShippingOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::ShippingOptions(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentShippingOption> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_ShippingOptions(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Modifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_Modifiers(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Modifiers(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_Modifiers(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentItem const& total) const
{
    Windows::ApplicationModel::Payments::PaymentDetails result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsFactory)->Create(get_abi(total), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>::CreateWithDisplayItems(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) const
{
    Windows::ApplicationModel::Payments::PaymentDetails result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsFactory)->CreateWithDisplayItems(get_abi(total), get_abi(displayItems), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::JsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_JsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::SupportedMethodIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_SupportedMethodIds(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::Total() const
{
    Windows::ApplicationModel::Payments::PaymentItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_Total(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::AdditionalDisplayItems() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_AdditionalDisplayItems(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::Create(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->Create(get_abi(supportedMethodIds), get_abi(total), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItems(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->CreateWithAdditionalDisplayItems(get_abi(supportedMethodIds), get_abi(total), get_abi(additionalDisplayItems), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetailsModifier consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItemsAndJsonData(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) const
{
    Windows::ApplicationModel::Payments::PaymentDetailsModifier result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->CreateWithAdditionalDisplayItemsAndJsonData(get_abi(supportedMethodIds), get_abi(total), get_abi(additionalDisplayItems), get_abi(jsonData), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Label(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Amount() const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Amount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Amount(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Pending() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Pending(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Pending(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Pending(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentItem consume_Windows_ApplicationModel_Payments_IPaymentItemFactory<D>::Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const
{
    Windows::ApplicationModel::Payments::PaymentItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentItemFactory)->Create(get_abi(label), get_abi(amount), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::GetSupportedMethodIdsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->GetSupportedMethodIdsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->SubmitPaymentRequestAsync(get_abi(paymentRequest), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const& changeHandler) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->SubmitPaymentRequestWithChangeHandlerAsync(get_abi(paymentRequest), get_abi(changeHandler), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult> consume_Windows_ApplicationModel_Payments_IPaymentMediator2<D>::CanMakePaymentAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator2)->CanMakePaymentAsync(get_abi(paymentRequest), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>::PackageFullName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfo)->get_PackageFullName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfo)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMerchantInfo consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory<D>::Create(Windows::Foundation::Uri const& uri) const
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory)->Create(get_abi(uri), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>::SupportedMethodIds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodData)->get_SupportedMethodIds(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>::JsonData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodData)->get_JsonData(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMethodData consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>::Create(param::iterable<hstring> const& supportedMethodIds) const
{
    Windows::ApplicationModel::Payments::PaymentMethodData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodDataFactory)->Create(get_abi(supportedMethodIds), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMethodData consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>::CreateWithJsonData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) const
{
    Windows::ApplicationModel::Payments::PaymentMethodData result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodDataFactory)->CreateWithJsonData(get_abi(supportedMethodIds), get_abi(jsonData), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerEmail() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerEmail(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerEmail(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerName() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerName(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptionPresence consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerPhoneNumber() const
{
    Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerPhoneNumber(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestShipping() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestShipping(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestShipping(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestShipping(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingType consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::ShippingType() const
{
    Windows::ApplicationModel::Payments::PaymentShippingType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_ShippingType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_ShippingType(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentMerchantInfo consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::MerchantInfo() const
{
    Windows::ApplicationModel::Payments::PaymentMerchantInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_MerchantInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::Details() const
{
    Windows::ApplicationModel::Payments::PaymentDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_Details(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::MethodData() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_MethodData(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentOptions consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::Options() const
{
    Windows::ApplicationModel::Payments::PaymentOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_Options(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentRequest2<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest2)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangeKind consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::ChangeKind() const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangeKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_ChangeKind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentAddress consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::ShippingAddress() const
{
    Windows::ApplicationModel::Payments::PaymentAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_ShippingAddress(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::SelectedShippingOption() const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_SelectedShippingOption(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::Acknowledge(Windows::ApplicationModel::Payments::PaymentRequestChangedResult const& changeResult) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->Acknowledge(get_abi(changeResult)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_ChangeAcceptedByMerchant(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_ChangeAcceptedByMerchant(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::Message(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_Message(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentDetails consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails() const
{
    Windows::ApplicationModel::Payments::PaymentDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_UpdatedPaymentDetails(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails(Windows::ApplicationModel::Payments::PaymentDetails const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_UpdatedPaymentDetails(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangedResult consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>::Create(bool changeAcceptedByMerchant) const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory)->Create(changeAcceptedByMerchant, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestChangedResult consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>::CreateWithPaymentDetails(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) const
{
    Windows::ApplicationModel::Payments::PaymentRequestChangedResult result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory)->CreateWithPaymentDetails(changeAcceptedByMerchant, get_abi(updatedPaymentDetails), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->Create(get_abi(details), get_abi(methodData), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::CreateWithMerchantInfo(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->CreateWithMerchantInfo(get_abi(details), get_abi(methodData), get_abi(merchantInfo), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::CreateWithMerchantInfoAndOptions(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->CreateWithMerchantInfoAndOptions(get_abi(details), get_abi(methodData), get_abi(merchantInfo), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequest consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory2<D>::CreateWithMerchantInfoOptionsAndId(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options, param::hstring const& id) const
{
    Windows::ApplicationModel::Payments::PaymentRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory2)->CreateWithMerchantInfoOptionsAndId(get_abi(details), get_abi(methodData), get_abi(merchantInfo), get_abi(options), get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentRequestStatus consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>::Status() const
{
    Windows::ApplicationModel::Payments::PaymentRequestStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentResponse consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>::Response() const
{
    Windows::ApplicationModel::Payments::PaymentResponse value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult)->get_Response(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PaymentToken() const
{
    Windows::ApplicationModel::Payments::PaymentToken value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PaymentToken(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::ShippingOption() const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_ShippingOption(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentAddress consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::ShippingAddress() const
{
    Windows::ApplicationModel::Payments::PaymentAddress value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_ShippingAddress(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerEmail() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerEmail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerPhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const& status) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->CompleteAsync(get_abi(status), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Label(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentCurrencyAmount consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Amount() const
{
    Windows::ApplicationModel::Payments::PaymentCurrencyAmount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Amount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Amount(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Tag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Tag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Tag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Tag(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::IsSelected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_IsSelected(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::IsSelected(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_IsSelected(value));
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->Create(get_abi(label), get_abi(amount), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::CreateWithSelected(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->CreateWithSelected(get_abi(label), get_abi(amount), selected, put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentShippingOption consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::CreateWithSelectedAndTag(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) const
{
    Windows::ApplicationModel::Payments::PaymentShippingOption result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->CreateWithSelectedAndTag(get_abi(label), get_abi(amount), selected, get_abi(tag), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentToken<D>::PaymentMethodId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentToken)->get_PaymentMethodId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Payments_IPaymentToken<D>::JsonDetails() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentToken)->get_JsonDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>::Create(param::hstring const& paymentMethodId) const
{
    Windows::ApplicationModel::Payments::PaymentToken result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentTokenFactory)->Create(get_abi(paymentMethodId), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Payments::PaymentToken consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>::CreateWithJsonDetails(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) const
{
    Windows::ApplicationModel::Payments::PaymentToken result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Payments::IPaymentTokenFactory)->CreateWithJsonDetails(get_abi(paymentMethodId), get_abi(jsonDetails), put_abi(result)));
    return result;
}

template <> struct delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* paymentRequest, void* args) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const*>(&args));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentAddress> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentAddress>
{
    HRESULT __stdcall get_Country(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Country());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Country(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Country(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AddressLines(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AddressLines());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AddressLines(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddressLines(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Region(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Region());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Region(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Region(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_City(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().City());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_City(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().City(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DependentLocality(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DependentLocality());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DependentLocality(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DependentLocality(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PostalCode(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PostalCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PostalCode(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostalCode(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SortingCode(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SortingCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SortingCode(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortingCode(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageCode(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LanguageCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LanguageCode(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LanguageCode(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Organization(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Organization());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Organization(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Organization(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Recipient(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Recipient());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Recipient(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recipient(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PhoneNumber(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneNumber(*reinterpret_cast<hstring const*>(&value));
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
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
{
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
{
    HRESULT __stdcall Create(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
{
    HRESULT __stdcall get_Currency(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Currency());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Currency(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Currency(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrencySystem(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CurrencySystem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CurrencySystem(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrencySystem(*reinterpret_cast<hstring const*>(&value));
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
struct produce<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
{
    HRESULT __stdcall Create(HSTRING value, HSTRING currency, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().Create(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<hstring const*>(&currency)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithCurrencySystem(HSTRING value, HSTRING currency, HSTRING currencySystem, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().CreateWithCurrencySystem(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<hstring const*>(&currency), *reinterpret_cast<hstring const*>(&currencySystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetails> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetails>
{
    HRESULT __stdcall get_Total(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentItem>(this->shim().Total());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Total(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Total(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayItems(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>>(this->shim().DisplayItems());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayItems(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayItems(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingOptions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption>>(this->shim().ShippingOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShippingOptions(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingOptions(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Modifiers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier>>(this->shim().Modifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Modifiers(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Modifiers(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
{
    HRESULT __stdcall Create(void* total, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithDisplayItems(void* total, void* displayItems, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().CreateWithDisplayItems(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&displayItems)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifier> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
{
    HRESULT __stdcall get_JsonData(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JsonData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedMethodIds(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().SupportedMethodIds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Total(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentItem>(this->shim().Total());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AdditionalDisplayItems(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>>(this->shim().AdditionalDisplayItems());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
{
    HRESULT __stdcall Create(void* supportedMethodIds, void* total, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetailsModifier>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAdditionalDisplayItems(void* supportedMethodIds, void* total, void* additionalDisplayItems, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetailsModifier>(this->shim().CreateWithAdditionalDisplayItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&additionalDisplayItems)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAdditionalDisplayItemsAndJsonData(void* supportedMethodIds, void* total, void* additionalDisplayItems, HSTRING jsonData, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetailsModifier>(this->shim().CreateWithAdditionalDisplayItemsAndJsonData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&additionalDisplayItems), *reinterpret_cast<hstring const*>(&jsonData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentItem> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentItem>
{
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

    HRESULT __stdcall get_Amount(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pending(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Pending());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Pending(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pending(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentItemFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentItemFactory>
{
    HRESULT __stdcall Create(HSTRING label, void* amount, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentItem>(this->shim().Create(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMediator> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMediator>
{
    HRESULT __stdcall GetSupportedMethodIdsAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>>(this->shim().GetSupportedMethodIdsAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SubmitPaymentRequestAsync(void* paymentRequest, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>>(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SubmitPaymentRequestWithChangeHandlerAsync(void* paymentRequest, void* changeHandler, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>>(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const*>(&changeHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMediator2> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMediator2>
{
    HRESULT __stdcall CanMakePaymentAsync(void* paymentRequest, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>>(this->shim().CanMakePaymentAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfo> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
{
    HRESULT __stdcall get_PackageFullName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageFullName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
{
    HRESULT __stdcall Create(void* uri, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentMerchantInfo>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMethodData> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMethodData>
{
    HRESULT __stdcall get_SupportedMethodIds(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().SupportedMethodIds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JsonData(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JsonData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
{
    HRESULT __stdcall Create(void* supportedMethodIds, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentMethodData>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithJsonData(void* supportedMethodIds, HSTRING jsonData, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentMethodData>(this->shim().CreateWithJsonData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<hstring const*>(&jsonData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentOptions> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentOptions>
{
    HRESULT __stdcall get_RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptionPresence>(this->shim().RequestPayerEmail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerEmail(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptionPresence>(this->shim().RequestPayerName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerName(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptionPresence>(this->shim().RequestPayerPhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerPhoneNumber(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RequestShipping(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequestShipping());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RequestShipping(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestShipping(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentShippingType>(this->shim().ShippingType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingType(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentShippingType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequest> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequest>
{
    HRESULT __stdcall get_MerchantInfo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentMerchantInfo>(this->shim().MerchantInfo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Details(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().Details());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MethodData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData>>(this->shim().MethodData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Options(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptions>(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequest2> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequest2>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
{
    HRESULT __stdcall get_ChangeKind(Windows::ApplicationModel::Payments::PaymentRequestChangeKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>(this->shim().ChangeKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentAddress>(this->shim().ShippingAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectedShippingOption(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().SelectedShippingOption());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Acknowledge(void* changeResult) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Acknowledge(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedResult const*>(&changeResult));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
{
    HRESULT __stdcall get_ChangeAcceptedByMerchant(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ChangeAcceptedByMerchant());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ChangeAcceptedByMerchant(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeAcceptedByMerchant(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Message(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UpdatedPaymentDetails(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().UpdatedPaymentDetails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UpdatedPaymentDetails(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdatedPaymentDetails(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
{
    HRESULT __stdcall Create(bool changeAcceptedByMerchant, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>(this->shim().Create(changeAcceptedByMerchant));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPaymentDetails(bool changeAcceptedByMerchant, void* updatedPaymentDetails, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>(this->shim().CreateWithPaymentDetails(changeAcceptedByMerchant, *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&updatedPaymentDetails)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory>
{
    HRESULT __stdcall Create(void* details, void* methodData, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithMerchantInfo(void* details, void* methodData, void* merchantInfo, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().CreateWithMerchantInfo(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithMerchantInfoAndOptions(void* details, void* methodData, void* merchantInfo, void* options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().CreateWithMerchantInfoAndOptions(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory2> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory2>
{
    HRESULT __stdcall CreateWithMerchantInfoOptionsAndId(void* details, void* methodData, void* merchantInfo, void* options, HSTRING id, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().CreateWithMerchantInfoOptionsAndId(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptions const*>(&options), *reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
{
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Payments::PaymentRequestStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentRequestStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Response(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentResponse>(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentResponse> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentResponse>
{
    HRESULT __stdcall get_PaymentToken(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentToken>(this->shim().PaymentToken());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingOption(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().ShippingOption());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShippingAddress(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentAddress>(this->shim().ShippingAddress());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PayerEmail(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerEmail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PayerName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PayerPhoneNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerPhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus status, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CompleteAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const*>(&status)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentShippingOption> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentShippingOption>
{
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

    HRESULT __stdcall get_Amount(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().Amount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Amount(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Tag(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Tag());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Tag(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSelected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSelected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsSelected(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSelected(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
{
    HRESULT __stdcall Create(HSTRING label, void* amount, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().Create(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSelected(HSTRING label, void* amount, bool selected, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().CreateWithSelected(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount), selected));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithSelectedAndTag(HSTRING label, void* amount, bool selected, HSTRING tag, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().CreateWithSelectedAndTag(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount), selected, *reinterpret_cast<hstring const*>(&tag)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentToken> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentToken>
{
    HRESULT __stdcall get_PaymentMethodId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PaymentMethodId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JsonDetails(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JsonDetails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Payments::IPaymentTokenFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentTokenFactory>
{
    HRESULT __stdcall Create(HSTRING paymentMethodId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentToken>(this->shim().Create(*reinterpret_cast<hstring const*>(&paymentMethodId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithJsonDetails(HSTRING paymentMethodId, HSTRING jsonDetails, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentToken>(this->shim().CreateWithJsonDetails(*reinterpret_cast<hstring const*>(&paymentMethodId), *reinterpret_cast<hstring const*>(&jsonDetails)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments {

inline PaymentAddress::PaymentAddress() :
    PaymentAddress(get_activation_factory<PaymentAddress>().ActivateInstance<PaymentAddress>())
{}

inline PaymentCanMakePaymentResult::PaymentCanMakePaymentResult(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const& value) :
    PaymentCanMakePaymentResult(get_activation_factory<PaymentCanMakePaymentResult, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>().Create(value))
{}

inline PaymentCurrencyAmount::PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency) :
    PaymentCurrencyAmount(get_activation_factory<PaymentCurrencyAmount, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>().Create(value, currency))
{}

inline PaymentCurrencyAmount::PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) :
    PaymentCurrencyAmount(get_activation_factory<PaymentCurrencyAmount, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>().CreateWithCurrencySystem(value, currency, currencySystem))
{}

inline PaymentDetails::PaymentDetails() :
    PaymentDetails(get_activation_factory<PaymentDetails>().ActivateInstance<PaymentDetails>())
{}

inline PaymentDetails::PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total) :
    PaymentDetails(get_activation_factory<PaymentDetails, Windows::ApplicationModel::Payments::IPaymentDetailsFactory>().Create(total))
{}

inline PaymentDetails::PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) :
    PaymentDetails(get_activation_factory<PaymentDetails, Windows::ApplicationModel::Payments::IPaymentDetailsFactory>().CreateWithDisplayItems(total, displayItems))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>().Create(supportedMethodIds, total))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>().CreateWithAdditionalDisplayItems(supportedMethodIds, total, additionalDisplayItems))
{}

inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) :
    PaymentDetailsModifier(get_activation_factory<PaymentDetailsModifier, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>().CreateWithAdditionalDisplayItemsAndJsonData(supportedMethodIds, total, additionalDisplayItems, jsonData))
{}

inline PaymentItem::PaymentItem(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) :
    PaymentItem(get_activation_factory<PaymentItem, Windows::ApplicationModel::Payments::IPaymentItemFactory>().Create(label, amount))
{}

inline PaymentMediator::PaymentMediator() :
    PaymentMediator(get_activation_factory<PaymentMediator>().ActivateInstance<PaymentMediator>())
{}

inline PaymentMerchantInfo::PaymentMerchantInfo() :
    PaymentMerchantInfo(get_activation_factory<PaymentMerchantInfo>().ActivateInstance<PaymentMerchantInfo>())
{}

inline PaymentMerchantInfo::PaymentMerchantInfo(Windows::Foundation::Uri const& uri) :
    PaymentMerchantInfo(get_activation_factory<PaymentMerchantInfo, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>().Create(uri))
{}

inline PaymentMethodData::PaymentMethodData(param::iterable<hstring> const& supportedMethodIds) :
    PaymentMethodData(get_activation_factory<PaymentMethodData, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>().Create(supportedMethodIds))
{}

inline PaymentMethodData::PaymentMethodData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) :
    PaymentMethodData(get_activation_factory<PaymentMethodData, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>().CreateWithJsonData(supportedMethodIds, jsonData))
{}

inline PaymentOptions::PaymentOptions() :
    PaymentOptions(get_activation_factory<PaymentOptions>().ActivateInstance<PaymentOptions>())
{}

inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) :
    PaymentRequest(get_activation_factory<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestFactory>().Create(details, methodData))
{}

inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) :
    PaymentRequest(get_activation_factory<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestFactory>().CreateWithMerchantInfo(details, methodData, merchantInfo))
{}

inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) :
    PaymentRequest(get_activation_factory<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestFactory>().CreateWithMerchantInfoAndOptions(details, methodData, merchantInfo, options))
{}

inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options, param::hstring const& id) :
    PaymentRequest(get_activation_factory<PaymentRequest, Windows::ApplicationModel::Payments::IPaymentRequestFactory2>().CreateWithMerchantInfoOptionsAndId(details, methodData, merchantInfo, options, id))
{}

inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant) :
    PaymentRequestChangedResult(get_activation_factory<PaymentRequestChangedResult, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>().Create(changeAcceptedByMerchant))
{}

inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) :
    PaymentRequestChangedResult(get_activation_factory<PaymentRequestChangedResult, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>().CreateWithPaymentDetails(changeAcceptedByMerchant, updatedPaymentDetails))
{}

inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>().Create(label, amount))
{}

inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>().CreateWithSelected(label, amount, selected))
{}

inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) :
    PaymentShippingOption(get_activation_factory<PaymentShippingOption, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>().CreateWithSelectedAndTag(label, amount, selected, tag))
{}

inline PaymentToken::PaymentToken(param::hstring const& paymentMethodId) :
    PaymentToken(get_activation_factory<PaymentToken, Windows::ApplicationModel::Payments::IPaymentTokenFactory>().Create(paymentMethodId))
{}

inline PaymentToken::PaymentToken(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) :
    PaymentToken(get_activation_factory<PaymentToken, Windows::ApplicationModel::Payments::IPaymentTokenFactory>().CreateWithJsonDetails(paymentMethodId, jsonDetails))
{}

template <typename L> PaymentRequestChangedHandler::PaymentRequestChangedHandler(L handler) :
    PaymentRequestChangedHandler(impl::make_delegate<PaymentRequestChangedHandler>(std::forward<L>(handler)))
{}

template <typename F> PaymentRequestChangedHandler::PaymentRequestChangedHandler(F* handler) :
    PaymentRequestChangedHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> PaymentRequestChangedHandler::PaymentRequestChangedHandler(O* object, M method) :
    PaymentRequestChangedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void PaymentRequestChangedHandler::operator()(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const& args) const
{
    check_hresult((*(impl::abi_t<PaymentRequestChangedHandler>**)this)->Invoke(get_abi(paymentRequest), get_abi(args)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentAddress> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentAddress> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentItemFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentItemFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMediator> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentMediator> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMediator2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentMediator2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodData> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentMethodData> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentOptions> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequest> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequest> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequest2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequest2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentResponse> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentResponse> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentToken> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentToken> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentTokenFactory> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::IPaymentTokenFactory> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentAddress> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentAddress> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentDetailsModifier> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentDetailsModifier> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMediator> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentMediator> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMethodData> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentMethodData> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentOptions> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequest> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentRequest> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentResponse> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentResponse> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentShippingOption> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentShippingOption> {};
template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentToken> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Payments::PaymentToken> {};

}

WINRT_WARNING_POP
