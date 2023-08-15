﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "winrt/base.h"

#include "winrt/impl/Windows.Foundation.Metadata.2.h"
#include "winrt/Windows.Foundation.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsTypePresent(param::hstring const& typeName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsTypePresent(get_abi(typeName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsMethodPresent(get_abi(typeName), get_abi(methodName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsMethodPresentWithArity(get_abi(typeName), get_abi(methodName), inputParameterCount, &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsEventPresent(param::hstring const& typeName, param::hstring const& eventName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsEventPresent(get_abi(typeName), get_abi(eventName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsPropertyPresent(get_abi(typeName), get_abi(propertyName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsReadOnlyPropertyPresent(get_abi(typeName), get_abi(propertyName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsWriteablePropertyPresent(get_abi(typeName), get_abi(propertyName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsEnumNamedValuePresent(get_abi(enumTypeName), get_abi(valueName), &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsApiContractPresentByMajor(get_abi(contractName), majorVersion, &result));
    return result;
}

template <typename D> bool consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsApiContractPresentByMajorAndMinor(get_abi(contractName), majorVersion, minorVersion, &result));
    return result;
}

template <typename D>
struct produce<D, Windows::Foundation::Metadata::IApiInformationStatics> : produce_base<D, Windows::Foundation::Metadata::IApiInformationStatics>
{
    int32_t WINRT_CALL IsTypePresent(void* typeName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsTypePresent, WINRT_WRAP(bool), hstring const&);
            *result = detach_from<bool>(this->shim().IsTypePresent(*reinterpret_cast<hstring const*>(&typeName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsMethodPresent(void* typeName, void* methodName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsMethodPresent, WINRT_WRAP(bool), hstring const&, hstring const&);
            *result = detach_from<bool>(this->shim().IsMethodPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&methodName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsMethodPresentWithArity(void* typeName, void* methodName, uint32_t inputParameterCount, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsMethodPresent, WINRT_WRAP(bool), hstring const&, hstring const&, uint32_t);
            *result = detach_from<bool>(this->shim().IsMethodPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&methodName), inputParameterCount));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsEventPresent(void* typeName, void* eventName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsEventPresent, WINRT_WRAP(bool), hstring const&, hstring const&);
            *result = detach_from<bool>(this->shim().IsEventPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&eventName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsPropertyPresent(void* typeName, void* propertyName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsPropertyPresent, WINRT_WRAP(bool), hstring const&, hstring const&);
            *result = detach_from<bool>(this->shim().IsPropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsReadOnlyPropertyPresent(void* typeName, void* propertyName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsReadOnlyPropertyPresent, WINRT_WRAP(bool), hstring const&, hstring const&);
            *result = detach_from<bool>(this->shim().IsReadOnlyPropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsWriteablePropertyPresent(void* typeName, void* propertyName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsWriteablePropertyPresent, WINRT_WRAP(bool), hstring const&, hstring const&);
            *result = detach_from<bool>(this->shim().IsWriteablePropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsEnumNamedValuePresent(void* enumTypeName, void* valueName, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsEnumNamedValuePresent, WINRT_WRAP(bool), hstring const&, hstring const&);
            *result = detach_from<bool>(this->shim().IsEnumNamedValuePresent(*reinterpret_cast<hstring const*>(&enumTypeName), *reinterpret_cast<hstring const*>(&valueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsApiContractPresentByMajor(void* contractName, uint16_t majorVersion, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsApiContractPresent, WINRT_WRAP(bool), hstring const&, uint16_t);
            *result = detach_from<bool>(this->shim().IsApiContractPresent(*reinterpret_cast<hstring const*>(&contractName), majorVersion));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL IsApiContractPresentByMajorAndMinor(void* contractName, uint16_t majorVersion, uint16_t minorVersion, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(IsApiContractPresent, WINRT_WRAP(bool), hstring const&, uint16_t, uint16_t);
            *result = detach_from<bool>(this->shim().IsApiContractPresent(*reinterpret_cast<hstring const*>(&contractName), majorVersion, minorVersion));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata {

inline bool ApiInformation::IsTypePresent(param::hstring const& typeName)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsTypePresent(typeName); });
}

inline bool ApiInformation::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsMethodPresent(typeName, methodName); });
}

inline bool ApiInformation::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsMethodPresent(typeName, methodName, inputParameterCount); });
}

inline bool ApiInformation::IsEventPresent(param::hstring const& typeName, param::hstring const& eventName)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsEventPresent(typeName, eventName); });
}

inline bool ApiInformation::IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsPropertyPresent(typeName, propertyName); });
}

inline bool ApiInformation::IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsReadOnlyPropertyPresent(typeName, propertyName); });
}

inline bool ApiInformation::IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsWriteablePropertyPresent(typeName, propertyName); });
}

inline bool ApiInformation::IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsEnumNamedValuePresent(enumTypeName, valueName); });
}

inline bool ApiInformation::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsApiContractPresent(contractName, majorVersion); });
}

inline bool ApiInformation::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion)
{
    return impl::call_factory<ApiInformation, Windows::Foundation::Metadata::IApiInformationStatics>([&](auto&& f) { return f.IsApiContractPresent(contractName, majorVersion, minorVersion); });
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Foundation::Metadata::IApiInformationStatics> : winrt::impl::hash_base<winrt::Windows::Foundation::Metadata::IApiInformationStatics> {};
template<> struct hash<winrt::Windows::Foundation::Metadata::ApiInformation> : winrt::impl::hash_base<winrt::Windows::Foundation::Metadata::ApiInformation> {};

}
