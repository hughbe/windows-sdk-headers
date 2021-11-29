// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Data_Xml_Xsl_0_H
#define WINRT_Windows_Data_Xml_Xsl_0_H
WINRT_EXPORT namespace winrt::Windows::Data::Xml::Dom
{
    struct IXmlNode;
    struct XmlDocument;
}
WINRT_EXPORT namespace winrt::Windows::Data::Xml::Xsl
{
    struct IXsltProcessor;
    struct IXsltProcessor2;
    struct IXsltProcessorFactory;
    struct XsltProcessor;
}
namespace winrt::impl
{
    template <> struct category<Windows::Data::Xml::Xsl::IXsltProcessor>{ using type = interface_category; };
    template <> struct category<Windows::Data::Xml::Xsl::IXsltProcessor2>{ using type = interface_category; };
    template <> struct category<Windows::Data::Xml::Xsl::IXsltProcessorFactory>{ using type = interface_category; };
    template <> struct category<Windows::Data::Xml::Xsl::XsltProcessor>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Data::Xml::Xsl::XsltProcessor> = L"Windows.Data.Xml.Xsl.XsltProcessor";
    template <> inline constexpr auto& name_v<Windows::Data::Xml::Xsl::IXsltProcessor> = L"Windows.Data.Xml.Xsl.IXsltProcessor";
    template <> inline constexpr auto& name_v<Windows::Data::Xml::Xsl::IXsltProcessor2> = L"Windows.Data.Xml.Xsl.IXsltProcessor2";
    template <> inline constexpr auto& name_v<Windows::Data::Xml::Xsl::IXsltProcessorFactory> = L"Windows.Data.Xml.Xsl.IXsltProcessorFactory";
    template <> inline constexpr guid guid_v<Windows::Data::Xml::Xsl::IXsltProcessor>{ 0x7B64703F,0x550C,0x48C6,{ 0xA9,0x0F,0x93,0xA5,0xB9,0x64,0x51,0x8F } }; // 7B64703F-550C-48C6-A90F-93A5B964518F
    template <> inline constexpr guid guid_v<Windows::Data::Xml::Xsl::IXsltProcessor2>{ 0x8DA45C56,0x97A5,0x44CB,{ 0xA8,0xBE,0x27,0xD8,0x62,0x80,0xC7,0x0A } }; // 8DA45C56-97A5-44CB-A8BE-27D86280C70A
    template <> inline constexpr guid guid_v<Windows::Data::Xml::Xsl::IXsltProcessorFactory>{ 0x274146C0,0x9A51,0x4663,{ 0xBF,0x30,0x0E,0xF7,0x42,0x14,0x6F,0x20 } }; // 274146C0-9A51-4663-BF30-0EF742146F20
    template <> struct default_interface<Windows::Data::Xml::Xsl::XsltProcessor>{ using type = Windows::Data::Xml::Xsl::IXsltProcessor; };
    template <> struct abi<Windows::Data::Xml::Xsl::IXsltProcessor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TransformToString(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Xml::Xsl::IXsltProcessor2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TransformToDocument(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Xml::Xsl::IXsltProcessorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Data_Xml_Xsl_IXsltProcessor
    {
        WINRT_IMPL_AUTO(hstring) TransformToString(Windows::Data::Xml::Dom::IXmlNode const& inputNode) const;
    };
    template <> struct consume<Windows::Data::Xml::Xsl::IXsltProcessor>
    {
        template <typename D> using type = consume_Windows_Data_Xml_Xsl_IXsltProcessor<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Xml_Xsl_IXsltProcessor2
    {
        WINRT_IMPL_AUTO(Windows::Data::Xml::Dom::XmlDocument) TransformToDocument(Windows::Data::Xml::Dom::IXmlNode const& inputNode) const;
    };
    template <> struct consume<Windows::Data::Xml::Xsl::IXsltProcessor2>
    {
        template <typename D> using type = consume_Windows_Data_Xml_Xsl_IXsltProcessor2<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Xml_Xsl_IXsltProcessorFactory
    {
        WINRT_IMPL_AUTO(Windows::Data::Xml::Xsl::XsltProcessor) CreateInstance(Windows::Data::Xml::Dom::XmlDocument const& document) const;
    };
    template <> struct consume<Windows::Data::Xml::Xsl::IXsltProcessorFactory>
    {
        template <typename D> using type = consume_Windows_Data_Xml_Xsl_IXsltProcessorFactory<D>;
    };
}
#endif
