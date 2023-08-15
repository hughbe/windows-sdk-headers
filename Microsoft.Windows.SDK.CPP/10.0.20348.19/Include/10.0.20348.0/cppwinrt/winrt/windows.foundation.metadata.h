// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_Metadata_H
#define WINRT_Windows_Foundation_Metadata_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Foundation.h"
#include "winrt/impl/Windows.Foundation.Metadata.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsTypePresent(param::hstring const& typeName) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsTypePresent(*(void**)(&typeName), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsMethodPresent(*(void**)(&typeName), *(void**)(&methodName), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsMethodPresentWithArity(*(void**)(&typeName), *(void**)(&methodName), inputParameterCount, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsEventPresent(param::hstring const& typeName, param::hstring const& eventName) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsEventPresent(*(void**)(&typeName), *(void**)(&eventName), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsPropertyPresent(*(void**)(&typeName), *(void**)(&propertyName), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsReadOnlyPropertyPresent(*(void**)(&typeName), *(void**)(&propertyName), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsWriteablePropertyPresent(*(void**)(&typeName), *(void**)(&propertyName), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsEnumNamedValuePresent(*(void**)(&enumTypeName), *(void**)(&valueName), &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsApiContractPresentByMajor(*(void**)(&contractName), majorVersion, &result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Foundation_Metadata_IApiInformationStatics<D>::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion) const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Foundation::Metadata::IApiInformationStatics)->IsApiContractPresentByMajorAndMinor(*(void**)(&contractName), majorVersion, minorVersion, &result));
        return result;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Foundation::Metadata::IApiInformationStatics> : produce_base<D, Windows::Foundation::Metadata::IApiInformationStatics>
    {
        int32_t __stdcall IsTypePresent(void* typeName, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsTypePresent(*reinterpret_cast<hstring const*>(&typeName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsMethodPresent(void* typeName, void* methodName, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsMethodPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&methodName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsMethodPresentWithArity(void* typeName, void* methodName, uint32_t inputParameterCount, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsMethodPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&methodName), inputParameterCount));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsEventPresent(void* typeName, void* eventName, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEventPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&eventName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsPropertyPresent(void* typeName, void* propertyName, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsPropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsReadOnlyPropertyPresent(void* typeName, void* propertyName, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsReadOnlyPropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsWriteablePropertyPresent(void* typeName, void* propertyName, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsWriteablePropertyPresent(*reinterpret_cast<hstring const*>(&typeName), *reinterpret_cast<hstring const*>(&propertyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsEnumNamedValuePresent(void* enumTypeName, void* valueName, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEnumNamedValuePresent(*reinterpret_cast<hstring const*>(&enumTypeName), *reinterpret_cast<hstring const*>(&valueName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsApiContractPresentByMajor(void* contractName, uint16_t majorVersion, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsApiContractPresent(*reinterpret_cast<hstring const*>(&contractName), majorVersion));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsApiContractPresentByMajorAndMinor(void* contractName, uint16_t majorVersion, uint16_t minorVersion, bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsApiContractPresent(*reinterpret_cast<hstring const*>(&contractName), majorVersion, minorVersion));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata
{
    constexpr auto operator|(AttributeTargets const left, AttributeTargets const right) noexcept
    {
        return static_cast<AttributeTargets>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(AttributeTargets& left, AttributeTargets const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(AttributeTargets const left, AttributeTargets const right) noexcept
    {
        return static_cast<AttributeTargets>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(AttributeTargets& left, AttributeTargets const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(AttributeTargets const value) noexcept
    {
        return static_cast<AttributeTargets>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(AttributeTargets const left, AttributeTargets const right) noexcept
    {
        return static_cast<AttributeTargets>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(AttributeTargets& left, AttributeTargets const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto ApiInformation::IsTypePresent(param::hstring const& typeName)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsTypePresent(typeName); });
    }
    inline auto ApiInformation::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsMethodPresent(typeName, methodName); });
    }
    inline auto ApiInformation::IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsMethodPresent(typeName, methodName, inputParameterCount); });
    }
    inline auto ApiInformation::IsEventPresent(param::hstring const& typeName, param::hstring const& eventName)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsEventPresent(typeName, eventName); });
    }
    inline auto ApiInformation::IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsPropertyPresent(typeName, propertyName); });
    }
    inline auto ApiInformation::IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsReadOnlyPropertyPresent(typeName, propertyName); });
    }
    inline auto ApiInformation::IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsWriteablePropertyPresent(typeName, propertyName); });
    }
    inline auto ApiInformation::IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsEnumNamedValuePresent(enumTypeName, valueName); });
    }
    inline auto ApiInformation::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsApiContractPresent(contractName, majorVersion); });
    }
    inline auto ApiInformation::IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion)
    {
        return impl::call_factory<ApiInformation, IApiInformationStatics>([&](IApiInformationStatics const& f) { return f.IsApiContractPresent(contractName, majorVersion, minorVersion); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Foundation::Metadata::IApiInformationStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Foundation::Metadata::ApiInformation> : winrt::impl::hash_base {};
#endif
}
#endif
