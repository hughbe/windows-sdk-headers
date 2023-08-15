﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "winrt/base.h"

#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Globalization.NumberFormatting.2.h"
#include "winrt/Windows.Globalization.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter<D>::Currency() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter)->get_Currency(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter<D>::Currency(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter)->put_Currency(get_abi(value)));
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatterMode consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>::Mode() const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatterMode value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter2)->get_Mode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>::Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter2)->put_Mode(get_abi(value)));
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ICurrencyFormatter2<D>::ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& roundingAlgorithm) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatter2)->ApplyRoundingForCurrency(get_abi(roundingAlgorithm)));
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatter consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory<D>::CreateCurrencyFormatterCode(param::hstring const& currencyCode) const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory)->CreateCurrencyFormatterCode(get_abi(currencyCode), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::CurrencyFormatter consume_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory<D>::CreateCurrencyFormatterCodeContext(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::CurrencyFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory)->CreateCurrencyFormatterCodeContext(get_abi(currencyCode), get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::DecimalFormatter consume_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory<D>::CreateDecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::DecimalFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IDecimalFormatterFactory)->CreateDecimalFormatter(get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::RoundingAlgorithm consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::RoundingAlgorithm() const
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->get_RoundingAlgorithm(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->put_RoundingAlgorithm(get_abi(value)));
}

template <typename D> double consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::Increment() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->get_Increment(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_IIncrementNumberRounder<D>::Increment(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IIncrementNumberRounder)->put_Increment(value));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>::Format(int64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter)->FormatInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>::Format(uint64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter)->FormatUInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter<D>::Format(double value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter)->FormatDouble(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>::FormatInt(int64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter2)->FormatInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>::FormatUInt(uint64_t value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter2)->FormatUInt(value, put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatter2<D>::FormatDouble(double value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatter2)->FormatDouble(value, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::GeographicRegion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_GeographicRegion(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IntegerDigits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_IntegerDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IntegerDigits(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_IntegerDigits(value));
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::FractionDigits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_FractionDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::FractionDigits(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_FractionDigits(value));
}

template <typename D> bool consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsGrouped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_IsGrouped(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsGrouped(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_IsGrouped(value));
}

template <typename D> bool consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsDecimalPointAlwaysDisplayed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_IsDecimalPointAlwaysDisplayed(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::IsDecimalPointAlwaysDisplayed(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_IsDecimalPointAlwaysDisplayed(value));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::NumeralSystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_NumeralSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::NumeralSystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->put_NumeralSystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumberFormatterOptions<D>::ResolvedGeographicRegion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberFormatterOptions)->get_ResolvedGeographicRegion(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int64_t> consume_Windows_Globalization_NumberFormatting_INumberParser<D>::ParseInt(param::hstring const& text) const
{
    Windows::Foundation::IReference<int64_t> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberParser)->ParseInt(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Globalization_NumberFormatting_INumberParser<D>::ParseUInt(param::hstring const& text) const
{
    Windows::Foundation::IReference<uint64_t> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberParser)->ParseUInt(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IReference<double> consume_Windows_Globalization_NumberFormatting_INumberParser<D>::ParseDouble(param::hstring const& text) const
{
    Windows::Foundation::IReference<double> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberParser)->ParseDouble(get_abi(text), put_abi(result)));
    return result;
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundInt32(int32_t value) const
{
    int32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundInt32(value, &result));
    return result;
}

template <typename D> uint32_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundUInt32(uint32_t value) const
{
    uint32_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundUInt32(value, &result));
    return result;
}

template <typename D> int64_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundInt64(int64_t value) const
{
    int64_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundInt64(value, &result));
    return result;
}

template <typename D> uint64_t consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundUInt64(uint64_t value) const
{
    uint64_t result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundUInt64(value, &result));
    return result;
}

template <typename D> float consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundSingle(float value) const
{
    float result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundSingle(value, &result));
    return result;
}

template <typename D> double consume_Windows_Globalization_NumberFormatting_INumberRounder<D>::RoundDouble(double value) const
{
    double result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounder)->RoundDouble(value, &result));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::INumberRounder consume_Windows_Globalization_NumberFormatting_INumberRounderOption<D>::NumberRounder() const
{
    Windows::Globalization::NumberFormatting::INumberRounder value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounderOption)->get_NumberRounder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumberRounderOption<D>::NumberRounder(Windows::Globalization::NumberFormatting::INumberRounder const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumberRounderOption)->put_NumberRounder(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::Languages() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->get_Languages(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::ResolvedLanguage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->get_ResolvedLanguage(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::NumeralSystem() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->get_NumeralSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::NumeralSystem(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->put_NumeralSystem(get_abi(value)));
}

template <typename D> hstring consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslator<D>::TranslateNumerals(param::hstring const& value) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslator)->TranslateNumerals(get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::NumeralSystemTranslator consume_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory<D>::Create(param::iterable<hstring> const& languages) const
{
    Windows::Globalization::NumberFormatting::NumeralSystemTranslator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory)->Create(get_abi(languages), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::PercentFormatter consume_Windows_Globalization_NumberFormatting_IPercentFormatterFactory<D>::CreatePercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::PercentFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IPercentFormatterFactory)->CreatePercentFormatter(get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> Windows::Globalization::NumberFormatting::PermilleFormatter consume_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory<D>::CreatePermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) const
{
    Windows::Globalization::NumberFormatting::PermilleFormatter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::IPermilleFormatterFactory)->CreatePermilleFormatter(get_abi(languages), get_abi(geographicRegion), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Globalization_NumberFormatting_ISignedZeroOption<D>::IsZeroSigned() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignedZeroOption)->get_IsZeroSigned(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignedZeroOption<D>::IsZeroSigned(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignedZeroOption)->put_IsZeroSigned(value));
}

template <typename D> Windows::Globalization::NumberFormatting::RoundingAlgorithm consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::RoundingAlgorithm() const
{
    Windows::Globalization::NumberFormatting::RoundingAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->get_RoundingAlgorithm(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->put_RoundingAlgorithm(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::SignificantDigits() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->get_SignificantDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder<D>::SignificantDigits(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder)->put_SignificantDigits(value));
}

template <typename D> int32_t consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption<D>::SignificantDigits() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsOption)->get_SignificantDigits(&value));
    return value;
}

template <typename D> void consume_Windows_Globalization_NumberFormatting_ISignificantDigitsOption<D>::SignificantDigits(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Globalization::NumberFormatting::ISignificantDigitsOption)->put_SignificantDigits(value));
}

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter> : produce_base<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter>
{
    int32_t WINRT_CALL get_Currency(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Currency, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().Currency());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Currency(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Currency, WINRT_WRAP(void), hstring const&);
            this->shim().Currency(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter2> : produce_base<D, Windows::Globalization::NumberFormatting::ICurrencyFormatter2>
{
    int32_t WINRT_CALL get_Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Mode, WINRT_WRAP(Windows::Globalization::NumberFormatting::CurrencyFormatterMode));
            *value = detach_from<Windows::Globalization::NumberFormatting::CurrencyFormatterMode>(this->shim().Mode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Mode(Windows::Globalization::NumberFormatting::CurrencyFormatterMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Mode, WINRT_WRAP(void), Windows::Globalization::NumberFormatting::CurrencyFormatterMode const&);
            this->shim().Mode(*reinterpret_cast<Windows::Globalization::NumberFormatting::CurrencyFormatterMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ApplyRoundingForCurrency(Windows::Globalization::NumberFormatting::RoundingAlgorithm roundingAlgorithm) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ApplyRoundingForCurrency, WINRT_WRAP(void), Windows::Globalization::NumberFormatting::RoundingAlgorithm const&);
            this->shim().ApplyRoundingForCurrency(*reinterpret_cast<Windows::Globalization::NumberFormatting::RoundingAlgorithm const*>(&roundingAlgorithm));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>
{
    int32_t WINRT_CALL CreateCurrencyFormatterCode(void* currencyCode, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCurrencyFormatterCode, WINRT_WRAP(Windows::Globalization::NumberFormatting::CurrencyFormatter), hstring const&);
            *result = detach_from<Windows::Globalization::NumberFormatting::CurrencyFormatter>(this->shim().CreateCurrencyFormatterCode(*reinterpret_cast<hstring const*>(&currencyCode)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CreateCurrencyFormatterCodeContext(void* currencyCode, void* languages, void* geographicRegion, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCurrencyFormatterCodeContext, WINRT_WRAP(Windows::Globalization::NumberFormatting::CurrencyFormatter), hstring const&, Windows::Foundation::Collections::IIterable<hstring> const&, hstring const&);
            *result = detach_from<Windows::Globalization::NumberFormatting::CurrencyFormatter>(this->shim().CreateCurrencyFormatterCodeContext(*reinterpret_cast<hstring const*>(&currencyCode), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IDecimalFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>
{
    int32_t WINRT_CALL CreateDecimalFormatter(void* languages, void* geographicRegion, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateDecimalFormatter, WINRT_WRAP(Windows::Globalization::NumberFormatting::DecimalFormatter), Windows::Foundation::Collections::IIterable<hstring> const&, hstring const&);
            *result = detach_from<Windows::Globalization::NumberFormatting::DecimalFormatter>(this->shim().CreateDecimalFormatter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IIncrementNumberRounder> : produce_base<D, Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
{
    int32_t WINRT_CALL get_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundingAlgorithm, WINRT_WRAP(Windows::Globalization::NumberFormatting::RoundingAlgorithm));
            *value = detach_from<Windows::Globalization::NumberFormatting::RoundingAlgorithm>(this->shim().RoundingAlgorithm());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundingAlgorithm, WINRT_WRAP(void), Windows::Globalization::NumberFormatting::RoundingAlgorithm const&);
            this->shim().RoundingAlgorithm(*reinterpret_cast<Windows::Globalization::NumberFormatting::RoundingAlgorithm const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_Increment(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Increment, WINRT_WRAP(double));
            *value = detach_from<double>(this->shim().Increment());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_Increment(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Increment, WINRT_WRAP(void), double);
            this->shim().Increment(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberFormatter> : produce_base<D, Windows::Globalization::NumberFormatting::INumberFormatter>
{
    int32_t WINRT_CALL FormatInt(int64_t value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Format, WINRT_WRAP(hstring), int64_t);
            *result = detach_from<hstring>(this->shim().Format(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL FormatUInt(uint64_t value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Format, WINRT_WRAP(hstring), uint64_t);
            *result = detach_from<hstring>(this->shim().Format(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL FormatDouble(double value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Format, WINRT_WRAP(hstring), double);
            *result = detach_from<hstring>(this->shim().Format(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberFormatter2> : produce_base<D, Windows::Globalization::NumberFormatting::INumberFormatter2>
{
    int32_t WINRT_CALL FormatInt(int64_t value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FormatInt, WINRT_WRAP(hstring), int64_t);
            *result = detach_from<hstring>(this->shim().FormatInt(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL FormatUInt(uint64_t value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FormatUInt, WINRT_WRAP(hstring), uint64_t);
            *result = detach_from<hstring>(this->shim().FormatUInt(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL FormatDouble(double value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FormatDouble, WINRT_WRAP(hstring), double);
            *result = detach_from<hstring>(this->shim().FormatDouble(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberFormatterOptions> : produce_base<D, Windows::Globalization::NumberFormatting::INumberFormatterOptions>
{
    int32_t WINRT_CALL get_Languages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Languages, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Languages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_GeographicRegion(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(GeographicRegion, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().GeographicRegion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IntegerDigits(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IntegerDigits, WINRT_WRAP(int32_t));
            *value = detach_from<int32_t>(this->shim().IntegerDigits());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IntegerDigits(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IntegerDigits, WINRT_WRAP(void), int32_t);
            this->shim().IntegerDigits(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FractionDigits(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FractionDigits, WINRT_WRAP(int32_t));
            *value = detach_from<int32_t>(this->shim().FractionDigits());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_FractionDigits(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FractionDigits, WINRT_WRAP(void), int32_t);
            this->shim().FractionDigits(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IsGrouped(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsGrouped, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IsGrouped());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IsGrouped(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsGrouped, WINRT_WRAP(void), bool);
            this->shim().IsGrouped(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_IsDecimalPointAlwaysDisplayed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsDecimalPointAlwaysDisplayed, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IsDecimalPointAlwaysDisplayed());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IsDecimalPointAlwaysDisplayed(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsDecimalPointAlwaysDisplayed, WINRT_WRAP(void), bool);
            this->shim().IsDecimalPointAlwaysDisplayed(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_NumeralSystem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NumeralSystem, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().NumeralSystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_NumeralSystem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NumeralSystem, WINRT_WRAP(void), hstring const&);
            this->shim().NumeralSystem(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ResolvedLanguage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ResolvedLanguage, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ResolvedLanguage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ResolvedGeographicRegion(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ResolvedGeographicRegion, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ResolvedGeographicRegion());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberParser> : produce_base<D, Windows::Globalization::NumberFormatting::INumberParser>
{
    int32_t WINRT_CALL ParseInt(void* text, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ParseInt, WINRT_WRAP(Windows::Foundation::IReference<int64_t>), hstring const&);
            *result = detach_from<Windows::Foundation::IReference<int64_t>>(this->shim().ParseInt(*reinterpret_cast<hstring const*>(&text)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ParseUInt(void* text, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ParseUInt, WINRT_WRAP(Windows::Foundation::IReference<uint64_t>), hstring const&);
            *result = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().ParseUInt(*reinterpret_cast<hstring const*>(&text)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL ParseDouble(void* text, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ParseDouble, WINRT_WRAP(Windows::Foundation::IReference<double>), hstring const&);
            *result = detach_from<Windows::Foundation::IReference<double>>(this->shim().ParseDouble(*reinterpret_cast<hstring const*>(&text)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberRounder> : produce_base<D, Windows::Globalization::NumberFormatting::INumberRounder>
{
    int32_t WINRT_CALL RoundInt32(int32_t value, int32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundInt32, WINRT_WRAP(int32_t), int32_t);
            *result = detach_from<int32_t>(this->shim().RoundInt32(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RoundUInt32(uint32_t value, uint32_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundUInt32, WINRT_WRAP(uint32_t), uint32_t);
            *result = detach_from<uint32_t>(this->shim().RoundUInt32(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RoundInt64(int64_t value, int64_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundInt64, WINRT_WRAP(int64_t), int64_t);
            *result = detach_from<int64_t>(this->shim().RoundInt64(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RoundUInt64(uint64_t value, uint64_t* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundUInt64, WINRT_WRAP(uint64_t), uint64_t);
            *result = detach_from<uint64_t>(this->shim().RoundUInt64(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RoundSingle(float value, float* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundSingle, WINRT_WRAP(float), float);
            *result = detach_from<float>(this->shim().RoundSingle(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL RoundDouble(double value, double* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundDouble, WINRT_WRAP(double), double);
            *result = detach_from<double>(this->shim().RoundDouble(value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumberRounderOption> : produce_base<D, Windows::Globalization::NumberFormatting::INumberRounderOption>
{
    int32_t WINRT_CALL get_NumberRounder(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NumberRounder, WINRT_WRAP(Windows::Globalization::NumberFormatting::INumberRounder));
            *value = detach_from<Windows::Globalization::NumberFormatting::INumberRounder>(this->shim().NumberRounder());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_NumberRounder(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NumberRounder, WINRT_WRAP(void), Windows::Globalization::NumberFormatting::INumberRounder const&);
            this->shim().NumberRounder(*reinterpret_cast<Windows::Globalization::NumberFormatting::INumberRounder const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslator> : produce_base<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslator>
{
    int32_t WINRT_CALL get_Languages(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Languages, WINRT_WRAP(Windows::Foundation::Collections::IVectorView<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().Languages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_ResolvedLanguage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ResolvedLanguage, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().ResolvedLanguage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_NumeralSystem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NumeralSystem, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().NumeralSystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_NumeralSystem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(NumeralSystem, WINRT_WRAP(void), hstring const&);
            this->shim().NumeralSystem(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL TranslateNumerals(void* value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(TranslateNumerals, WINRT_WRAP(hstring), hstring const&);
            *result = detach_from<hstring>(this->shim().TranslateNumerals(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory> : produce_base<D, Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>
{
    int32_t WINRT_CALL Create(void* languages, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(Create, WINRT_WRAP(Windows::Globalization::NumberFormatting::NumeralSystemTranslator), Windows::Foundation::Collections::IIterable<hstring> const&);
            *result = detach_from<Windows::Globalization::NumberFormatting::NumeralSystemTranslator>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IPercentFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::IPercentFormatterFactory>
{
    int32_t WINRT_CALL CreatePercentFormatter(void* languages, void* geographicRegion, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreatePercentFormatter, WINRT_WRAP(Windows::Globalization::NumberFormatting::PercentFormatter), Windows::Foundation::Collections::IIterable<hstring> const&, hstring const&);
            *result = detach_from<Windows::Globalization::NumberFormatting::PercentFormatter>(this->shim().CreatePercentFormatter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::IPermilleFormatterFactory> : produce_base<D, Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>
{
    int32_t WINRT_CALL CreatePermilleFormatter(void* languages, void* geographicRegion, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreatePermilleFormatter, WINRT_WRAP(Windows::Globalization::NumberFormatting::PermilleFormatter), Windows::Foundation::Collections::IIterable<hstring> const&, hstring const&);
            *result = detach_from<Windows::Globalization::NumberFormatting::PermilleFormatter>(this->shim().CreatePermilleFormatter(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&languages), *reinterpret_cast<hstring const*>(&geographicRegion)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ISignedZeroOption> : produce_base<D, Windows::Globalization::NumberFormatting::ISignedZeroOption>
{
    int32_t WINRT_CALL get_IsZeroSigned(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsZeroSigned, WINRT_WRAP(bool));
            *value = detach_from<bool>(this->shim().IsZeroSigned());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_IsZeroSigned(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsZeroSigned, WINRT_WRAP(void), bool);
            this->shim().IsZeroSigned(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder> : produce_base<D, Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
{
    int32_t WINRT_CALL get_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundingAlgorithm, WINRT_WRAP(Windows::Globalization::NumberFormatting::RoundingAlgorithm));
            *value = detach_from<Windows::Globalization::NumberFormatting::RoundingAlgorithm>(this->shim().RoundingAlgorithm());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_RoundingAlgorithm(Windows::Globalization::NumberFormatting::RoundingAlgorithm value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(RoundingAlgorithm, WINRT_WRAP(void), Windows::Globalization::NumberFormatting::RoundingAlgorithm const&);
            this->shim().RoundingAlgorithm(*reinterpret_cast<Windows::Globalization::NumberFormatting::RoundingAlgorithm const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SignificantDigits(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SignificantDigits, WINRT_WRAP(uint32_t));
            *value = detach_from<uint32_t>(this->shim().SignificantDigits());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SignificantDigits(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SignificantDigits, WINRT_WRAP(void), uint32_t);
            this->shim().SignificantDigits(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::NumberFormatting::ISignificantDigitsOption> : produce_base<D, Windows::Globalization::NumberFormatting::ISignificantDigitsOption>
{
    int32_t WINRT_CALL get_SignificantDigits(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SignificantDigits, WINRT_WRAP(int32_t));
            *value = detach_from<int32_t>(this->shim().SignificantDigits());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SignificantDigits(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SignificantDigits, WINRT_WRAP(void), int32_t);
            this->shim().SignificantDigits(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Globalization::NumberFormatting {

inline CurrencyFormatter::CurrencyFormatter(param::hstring const& currencyCode) :
    CurrencyFormatter(impl::call_factory<CurrencyFormatter, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>([&](auto&& f) { return f.CreateCurrencyFormatterCode(currencyCode); }))
{}

inline CurrencyFormatter::CurrencyFormatter(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    CurrencyFormatter(impl::call_factory<CurrencyFormatter, Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory>([&](auto&& f) { return f.CreateCurrencyFormatterCodeContext(currencyCode, languages, geographicRegion); }))
{}

inline DecimalFormatter::DecimalFormatter() :
    DecimalFormatter(impl::call_factory<DecimalFormatter>([](auto&& f) { return f.template ActivateInstance<DecimalFormatter>(); }))
{}

inline DecimalFormatter::DecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    DecimalFormatter(impl::call_factory<DecimalFormatter, Windows::Globalization::NumberFormatting::IDecimalFormatterFactory>([&](auto&& f) { return f.CreateDecimalFormatter(languages, geographicRegion); }))
{}

inline IncrementNumberRounder::IncrementNumberRounder() :
    IncrementNumberRounder(impl::call_factory<IncrementNumberRounder>([](auto&& f) { return f.template ActivateInstance<IncrementNumberRounder>(); }))
{}

inline NumeralSystemTranslator::NumeralSystemTranslator() :
    NumeralSystemTranslator(impl::call_factory<NumeralSystemTranslator>([](auto&& f) { return f.template ActivateInstance<NumeralSystemTranslator>(); }))
{}

inline NumeralSystemTranslator::NumeralSystemTranslator(param::iterable<hstring> const& languages) :
    NumeralSystemTranslator(impl::call_factory<NumeralSystemTranslator, Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory>([&](auto&& f) { return f.Create(languages); }))
{}

inline PercentFormatter::PercentFormatter() :
    PercentFormatter(impl::call_factory<PercentFormatter>([](auto&& f) { return f.template ActivateInstance<PercentFormatter>(); }))
{}

inline PercentFormatter::PercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    PercentFormatter(impl::call_factory<PercentFormatter, Windows::Globalization::NumberFormatting::IPercentFormatterFactory>([&](auto&& f) { return f.CreatePercentFormatter(languages, geographicRegion); }))
{}

inline PermilleFormatter::PermilleFormatter() :
    PermilleFormatter(impl::call_factory<PermilleFormatter>([](auto&& f) { return f.template ActivateInstance<PermilleFormatter>(); }))
{}

inline PermilleFormatter::PermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion) :
    PermilleFormatter(impl::call_factory<PermilleFormatter, Windows::Globalization::NumberFormatting::IPermilleFormatterFactory>([&](auto&& f) { return f.CreatePermilleFormatter(languages, geographicRegion); }))
{}

inline SignificantDigitsNumberRounder::SignificantDigitsNumberRounder() :
    SignificantDigitsNumberRounder(impl::call_factory<SignificantDigitsNumberRounder>([](auto&& f) { return f.template ActivateInstance<SignificantDigitsNumberRounder>(); }))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter2> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter2> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IDecimalFormatterFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::IDecimalFormatterFactory> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IIncrementNumberRounder> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::IIncrementNumberRounder> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberFormatter> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumberFormatter> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberFormatter2> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumberFormatter2> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberParser> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumberParser> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberRounder> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumberRounder> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumberRounderOption> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumberRounderOption> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslator> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslator> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IPercentFormatterFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::IPercentFormatterFactory> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IPermilleFormatterFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::IPermilleFormatterFactory> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::CurrencyFormatter> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::CurrencyFormatter> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::DecimalFormatter> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::DecimalFormatter> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::IncrementNumberRounder> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::IncrementNumberRounder> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::NumeralSystemTranslator> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::NumeralSystemTranslator> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::PercentFormatter> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::PercentFormatter> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::PermilleFormatter> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::PermilleFormatter> {};
template<> struct hash<winrt::Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder> : winrt::impl::hash_base<winrt::Windows::Globalization::NumberFormatting::SignificantDigitsNumberRounder> {};

}
