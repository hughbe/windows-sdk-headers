// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Data_Xml_Xsl_2_H
#define WINRT_Windows_Data_Xml_Xsl_2_H
#include "winrt/impl/Windows.Data.Xml.Dom.1.h"
#include "winrt/impl/Windows.Data.Xml.Xsl.1.h"
namespace winrt::Windows::Data::Xml::Xsl
{
    struct __declspec(empty_bases) XsltProcessor : Windows::Data::Xml::Xsl::IXsltProcessor,
        impl::require<XsltProcessor, Windows::Data::Xml::Xsl::IXsltProcessor2>
    {
        XsltProcessor(std::nullptr_t) noexcept {}
        XsltProcessor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Data::Xml::Xsl::IXsltProcessor(ptr, take_ownership_from_abi) {}
        XsltProcessor(Windows::Data::Xml::Dom::XmlDocument const& document);
    };
}
#endif
