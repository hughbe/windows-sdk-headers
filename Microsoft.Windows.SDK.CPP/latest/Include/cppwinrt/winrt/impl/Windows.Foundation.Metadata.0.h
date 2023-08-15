﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Metadata {

enum class AttributeTargets : uint32_t
{
    All = 0xFFFFFFFF,
    Delegate = 0x1,
    Enum = 0x2,
    Event = 0x4,
    Field = 0x8,
    Interface = 0x10,
    Method = 0x40,
    Parameter = 0x80,
    Property = 0x100,
    RuntimeClass = 0x200,
    Struct = 0x400,
    InterfaceImpl = 0x800,
    ApiContract = 0x2000,
};

enum class CompositionType : int32_t
{
    Protected = 1,
    Public = 2,
};

enum class DeprecationType : int32_t
{
    Deprecate = 0,
    Remove = 1,
};

enum class FeatureStage : int32_t
{
    AlwaysDisabled = 0,
    DisabledByDefault = 1,
    EnabledByDefault = 2,
    AlwaysEnabled = 3,
};

enum class GCPressureAmount : int32_t
{
    Low = 0,
    Medium = 1,
    High = 2,
};

enum class MarshalingType : int32_t
{
    None = 1,
    Agile = 2,
    Standard = 3,
    InvalidMarshaling = 0,
};

enum class Platform : int32_t
{
    Windows = 0,
    WindowsPhone = 1,
};

enum class ThreadingModel : int32_t
{
    STA = 1,
    MTA = 2,
    Both = 3,
    InvalidThreading = 0,
};

struct IApiInformationStatics;
struct ApiInformation;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::Foundation::Metadata::AttributeTargets> : std::true_type {};
template <> struct category<Windows::Foundation::Metadata::IApiInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::Foundation::Metadata::ApiInformation>{ using type = class_category; };
template <> struct category<Windows::Foundation::Metadata::AttributeTargets>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::CompositionType>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::DeprecationType>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::FeatureStage>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::GCPressureAmount>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::MarshalingType>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::Platform>{ using type = enum_category; };
template <> struct category<Windows::Foundation::Metadata::ThreadingModel>{ using type = enum_category; };
template <> struct name<Windows::Foundation::Metadata::IApiInformationStatics>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.IApiInformationStatics" }; };
template <> struct name<Windows::Foundation::Metadata::ApiInformation>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.ApiInformation" }; };
template <> struct name<Windows::Foundation::Metadata::AttributeTargets>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.AttributeTargets" }; };
template <> struct name<Windows::Foundation::Metadata::CompositionType>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.CompositionType" }; };
template <> struct name<Windows::Foundation::Metadata::DeprecationType>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.DeprecationType" }; };
template <> struct name<Windows::Foundation::Metadata::FeatureStage>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.FeatureStage" }; };
template <> struct name<Windows::Foundation::Metadata::GCPressureAmount>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.GCPressureAmount" }; };
template <> struct name<Windows::Foundation::Metadata::MarshalingType>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.MarshalingType" }; };
template <> struct name<Windows::Foundation::Metadata::Platform>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.Platform" }; };
template <> struct name<Windows::Foundation::Metadata::ThreadingModel>{ static constexpr auto & value{ L"Windows.Foundation.Metadata.ThreadingModel" }; };
template <> struct guid_storage<Windows::Foundation::Metadata::IApiInformationStatics>{ static constexpr guid value{ 0x997439FE,0xF681,0x4A11,{ 0xB4,0x16,0xC1,0x3A,0x47,0xE8,0xBA,0x36 } }; };

template <> struct abi<Windows::Foundation::Metadata::IApiInformationStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL IsTypePresent(void* typeName, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsMethodPresent(void* typeName, void* methodName, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsMethodPresentWithArity(void* typeName, void* methodName, uint32_t inputParameterCount, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsEventPresent(void* typeName, void* eventName, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsPropertyPresent(void* typeName, void* propertyName, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsReadOnlyPropertyPresent(void* typeName, void* propertyName, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsWriteablePropertyPresent(void* typeName, void* propertyName, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsEnumNamedValuePresent(void* enumTypeName, void* valueName, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsApiContractPresentByMajor(void* contractName, uint16_t majorVersion, bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL IsApiContractPresentByMajorAndMinor(void* contractName, uint16_t majorVersion, uint16_t minorVersion, bool* result) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Foundation_Metadata_IApiInformationStatics
{
    bool IsTypePresent(param::hstring const& typeName) const;
    bool IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName) const;
    bool IsMethodPresent(param::hstring const& typeName, param::hstring const& methodName, uint32_t inputParameterCount) const;
    bool IsEventPresent(param::hstring const& typeName, param::hstring const& eventName) const;
    bool IsPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
    bool IsReadOnlyPropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
    bool IsWriteablePropertyPresent(param::hstring const& typeName, param::hstring const& propertyName) const;
    bool IsEnumNamedValuePresent(param::hstring const& enumTypeName, param::hstring const& valueName) const;
    bool IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion) const;
    bool IsApiContractPresent(param::hstring const& contractName, uint16_t majorVersion, uint16_t minorVersion) const;
};
template <> struct consume<Windows::Foundation::Metadata::IApiInformationStatics> { template <typename D> using type = consume_Windows_Foundation_Metadata_IApiInformationStatics<D>; };

}
