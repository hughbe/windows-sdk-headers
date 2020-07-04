// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Data.Xml.Dom.2.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.2.h"
#include "winrt/Windows.Graphics.Printing.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::XmlNamespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_XmlNamespace(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::XmlNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_XmlNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::DocumentBindingFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_DocumentBindingFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::DocumentCollateFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_DocumentCollateFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::DocumentDuplexFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_DocumentDuplexFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::DocumentHolePunchFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_DocumentHolePunchFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::DocumentInputBinFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_DocumentInputBinFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::DocumentNUpFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_DocumentNUpFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::DocumentStapleFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_DocumentStapleFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::JobPasscodeFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_JobPasscodeFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::PageBorderlessFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_PageBorderlessFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::PageMediaSizeFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_PageMediaSizeFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::PageMediaTypeFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_PageMediaTypeFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::PageOrientationFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_PageOrientationFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::PageOutputColorFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_PageOutputColorFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::PageOutputQualityFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_PageOutputQualityFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::PageResolutionFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->get_PageResolutionFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::GetFeature(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->GetFeature(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketCapabilities<D>::GetParameterDefinition(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities)->GetParameterDefinition(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::XmlNamespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->get_XmlNamespace(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::XmlNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->get_XmlNode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketOption consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::GetOption(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketOption result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->GetOption(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Printing::PrintTicket::PrintTicketOption> consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::Options() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Printing::PrintTicket::PrintTicketOption> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->get_Options(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketOption consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::GetSelectedOption() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketOption value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->GetSelectedOption(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::SetSelectedOption(Windows::Graphics::Printing::PrintTicket::PrintTicketOption const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->SetSelectedOption(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketFeature<D>::SelectionType() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature)->get_SelectionType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::XmlNamespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->get_XmlNamespace(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::XmlNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->get_XmlNode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::GetPropertyNode(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Data::Xml::Dom::IXmlNode result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->GetPropertyNode(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::GetScoredPropertyNode(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Data::Xml::Dom::IXmlNode result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->GetScoredPropertyNode(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketValue consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::GetPropertyValue(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketValue result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->GetPropertyValue(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketValue consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketOption<D>::GetScoredPropertyValue(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketValue result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketOption)->GetScoredPropertyValue(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>::XmlNamespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition)->get_XmlNamespace(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>::XmlNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition)->get_XmlNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>::DataType() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition)->get_DataType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>::UnitType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition)->get_UnitType(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>::RangeMin() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition)->get_RangeMin(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterDefinition<D>::RangeMax() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition)->get_RangeMax(&value));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer<D>::XmlNamespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer)->get_XmlNamespace(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer<D>::XmlNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer)->get_XmlNode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer<D>::Value(Windows::Graphics::Printing::PrintTicket::PrintTicketValue const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer)->put_Value(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketValue consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketParameterInitializer<D>::Value() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketValue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketValueType consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue<D>::Type() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketValueType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketValue)->get_Type(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue<D>::GetValueAsInteger() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketValue)->GetValueAsInteger(&value));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IPrintTicketValue<D>::GetValueAsString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IPrintTicketValue)->GetValueAsString(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::XmlNamespace() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_XmlNamespace(put_abi(value)));
    return value;
}

template <typename D> Windows::Data::Xml::Dom::IXmlNode consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::XmlNode() const
{
    Windows::Data::Xml::Dom::IXmlNode value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_XmlNode(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::GetCapabilities() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->GetCapabilities(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::DocumentBindingFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_DocumentBindingFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::DocumentCollateFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_DocumentCollateFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::DocumentDuplexFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_DocumentDuplexFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::DocumentHolePunchFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_DocumentHolePunchFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::DocumentInputBinFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_DocumentInputBinFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::DocumentNUpFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_DocumentNUpFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::DocumentStapleFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_DocumentStapleFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::JobPasscodeFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_JobPasscodeFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::PageBorderlessFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_PageBorderlessFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::PageMediaSizeFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_PageMediaSizeFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::PageMediaTypeFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_PageMediaTypeFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::PageOrientationFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_PageOrientationFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::PageOutputColorFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_PageOutputColorFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::PageOutputQualityFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_PageOutputQualityFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::PageResolutionFeature() const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->get_PageResolutionFeature(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketFeature consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::GetFeature(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketFeature result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->GetFeature(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::NotifyXmlChangedAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->NotifyXmlChangedAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult> consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::ValidateAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->ValidateAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::GetParameterInitializer(param::hstring const& name, param::hstring const& xmlNamespace) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->GetParameterInitializer(get_abi(name), get_abi(xmlNamespace), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::SetParameterInitializerAsInteger(param::hstring const& name, param::hstring const& xmlNamespace, int32_t integerValue) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->SetParameterInitializerAsInteger(get_abi(name), get_abi(xmlNamespace), integerValue, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::SetParameterInitializerAsString(param::hstring const& name, param::hstring const& xmlNamespace, param::hstring const& stringValue) const
{
    Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->SetParameterInitializerAsString(get_abi(name), get_abi(xmlNamespace), get_abi(stringValue), put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicket<D>::MergeAndValidateTicket(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& deltaShemaTicket) const
{
    Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket)->MergeAndValidateTicket(get_abi(deltaShemaTicket), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult<D>::Validated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult)->get_Validated(&value));
    return value;
}

template <typename D> HRESULT consume_Windows_Graphics_Printing_PrintTicket_IWorkflowPrintTicketValidationResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNamespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().XmlNamespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().XmlNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentBindingFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentBindingFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentCollateFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentCollateFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentDuplexFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentDuplexFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentHolePunchFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentHolePunchFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentInputBinFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentInputBinFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentNUpFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentNUpFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentStapleFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentStapleFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JobPasscodeFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().JobPasscodeFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageBorderlessFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageBorderlessFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageMediaSizeFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageMediaSizeFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageMediaTypeFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageMediaTypeFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageOrientationFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageOrientationFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageOutputColorFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageOutputColorFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageOutputQualityFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageOutputQualityFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageResolutionFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageResolutionFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetFeature(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().GetFeature(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetParameterDefinition(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition>(this->shim().GetParameterDefinition(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNamespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().XmlNamespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().XmlNode());
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

    HRESULT __stdcall GetOption(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>(this->shim().GetOption(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Options(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>>(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSelectedOption(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketOption>(this->shim().GetSelectedOption());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetSelectedOption(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSelectedOption(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::PrintTicketOption const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionType(Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeatureSelectionType>(this->shim().SelectionType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketOption> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketOption>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNamespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().XmlNamespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().XmlNode());
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

    HRESULT __stdcall GetPropertyNode(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().GetPropertyNode(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetScoredPropertyNode(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().GetScoredPropertyNode(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPropertyValue(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>(this->shim().GetPropertyValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetScoredPropertyValue(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>(this->shim().GetScoredPropertyValue(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNamespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().XmlNamespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().XmlNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DataType(Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDataType>(this->shim().DataType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UnitType(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UnitType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RangeMin(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RangeMin());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RangeMax(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().RangeMax());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNamespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().XmlNamespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().XmlNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Value(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::PrintTicketValue const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketValue>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketValue> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IPrintTicketValue>
{
    HRESULT __stdcall get_Type(Windows::Graphics::Printing::PrintTicket::PrintTicketValueType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketValueType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetValueAsInteger(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().GetValueAsInteger());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetValueAsString(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetValueAsString());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNamespace(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().XmlNamespace());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_XmlNode(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Data::Xml::Dom::IXmlNode>(this->shim().XmlNode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCapabilities(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities>(this->shim().GetCapabilities());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentBindingFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentBindingFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentCollateFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentCollateFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentDuplexFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentDuplexFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentHolePunchFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentHolePunchFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentInputBinFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentInputBinFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentNUpFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentNUpFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentStapleFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().DocumentStapleFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JobPasscodeFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().JobPasscodeFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageBorderlessFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageBorderlessFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageMediaSizeFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageMediaSizeFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageMediaTypeFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageMediaTypeFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageOrientationFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageOrientationFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageOutputColorFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageOutputColorFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageOutputQualityFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageOutputQualityFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageResolutionFeature(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().PageResolutionFeature());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetFeature(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketFeature>(this->shim().GetFeature(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NotifyXmlChangedAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().NotifyXmlChangedAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ValidateAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult>>(this->shim().ValidateAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetParameterInitializer(HSTRING name, HSTRING xmlNamespace, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>(this->shim().GetParameterInitializer(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetParameterInitializerAsInteger(HSTRING name, HSTRING xmlNamespace, int32_t integerValue, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>(this->shim().SetParameterInitializerAsInteger(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace), integerValue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetParameterInitializerAsString(HSTRING name, HSTRING xmlNamespace, HSTRING stringValue, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer>(this->shim().SetParameterInitializerAsString(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&xmlNamespace), *reinterpret_cast<hstring const*>(&stringValue)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MergeAndValidateTicket(void* deltaShemaTicket, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket>(this->shim().MergeAndValidateTicket(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const*>(&deltaShemaTicket)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult> : produce_base<D, Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult>
{
    HRESULT __stdcall get_Validated(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Validated());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedError(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::PrintTicket {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketCapabilities> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketFeature> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketOption> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterDefinition> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketParameterInitializer> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketValue> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IPrintTicketValue> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicket> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::IWorkflowPrintTicketValidationResult> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketCapabilities> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketFeature> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketFeature> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketOption> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketOption> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterDefinition> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketParameterInitializer> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketValue> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::PrintTicketValue> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> {};
template<> struct hash<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicketValidationResult> {};

}

WINRT_WARNING_POP
