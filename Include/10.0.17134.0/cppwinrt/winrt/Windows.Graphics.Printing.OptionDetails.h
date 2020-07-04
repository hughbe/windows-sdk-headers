// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.Printing.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Printing.OptionDetails.2.h"
#include "winrt/Windows.Graphics.Printing.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintBindingOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintBindingOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintBindingOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintBindingOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintBorderingOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintBorderingOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintBorderingOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintBorderingOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCollationOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCollationOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCollationOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCollationOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintColorModeOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintColorModeOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintColorModeOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintColorModeOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCopiesOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCopiesOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCopiesOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCopiesOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>::ItemId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails)->get_ItemId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>::ItemDisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails)->put_ItemDisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>::ItemDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails)->get_ItemDisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails<D>::AddItem(param::hstring const& itemId, param::hstring const& displayName) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails)->AddItem(get_abi(itemId), get_abi(displayName)));
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails2<D>::AddItem(param::hstring const& itemId, param::hstring const& displayName, param::hstring const& description, Windows::Storage::Streams::IRandomAccessStreamWithContentType const& icon) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2)->AddItem(get_abi(itemId), get_abi(displayName), get_abi(description), get_abi(icon)));
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails3<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails3<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails3<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails3<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails<D>::MaxCharacters(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails)->put_MaxCharacters(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails<D>::MaxCharacters() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails)->get_MaxCharacters(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails2<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails2<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails2<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails2<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomToggleOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomToggleOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomToggleOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomToggleOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintDuplexOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintDuplexOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintDuplexOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintDuplexOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintHolePunchOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintHolePunchOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintHolePunchOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintHolePunchOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::IInspectable> consume_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails<D>::Items() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails)->get_Items(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaSizeOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaSizeOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaSizeOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaSizeOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaTypeOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaTypeOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaTypeOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaTypeOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails<D>::MinValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails)->get_MinValue(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails<D>::MaxValue() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails)->get_MaxValue(&value));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::OptionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_OptionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintOptionType consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::OptionType() const
{
    Windows::Graphics::Printing::OptionDetails::PrintOptionType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_OptionType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::ErrorText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->put_ErrorText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::ErrorText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_ErrorText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->put_State(get_abi(value)));
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintOptionStates consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::State() const
{
    Windows::Graphics::Printing::OptionDetails::PrintOptionStates value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->get_Value(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>::TrySetValue(Windows::Foundation::IInspectable const& value) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails)->TrySetValue(get_abi(value), &succeeded));
    return succeeded;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintOrientationOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintOrientationOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintOrientationOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintOrientationOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintPageRangeOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintPageRangeOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintPageRangeOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintPageRangeOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintQualityOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintQualityOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintQualityOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintQualityOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintStapleOptionDetails<D>::WarningText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails)->put_WarningText(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintStapleOptionDetails<D>::WarningText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails)->get_WarningText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintStapleOptionDetails<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_Graphics_Printing_OptionDetails_IPrintStapleOptionDetails<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails)->get_Description(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs<D>::OptionId() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs)->get_OptionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::Options() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->get_Options(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::CreateItemListOption(param::hstring const& optionId, param::hstring const& displayName) const
{
    Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails itemListOption{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->CreateItemListOption(get_abi(optionId), get_abi(displayName), put_abi(itemListOption)));
    return itemListOption;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::CreateTextOption(param::hstring const& optionId, param::hstring const& displayName) const
{
    Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails textOption{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->CreateTextOption(get_abi(optionId), get_abi(displayName), put_abi(textOption)));
    return textOption;
}

template <typename D> event_token consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::OptionChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->add_OptionChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::OptionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>(this, &abi_t<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>::remove_OptionChanged, OptionChanged(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::OptionChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->remove_OptionChanged(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::BeginValidation(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->add_BeginValidation(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::BeginValidation(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>(this, &abi_t<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>::remove_BeginValidation, BeginValidation(eventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>::BeginValidation(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails)->remove_BeginValidation(get_abi(eventCookie)));
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails2<D>::CreateToggleOption(param::hstring const& optionId, param::hstring const& displayName) const
{
    Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails toggleOption{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2)->CreateToggleOption(get_abi(optionId), get_abi(displayName), put_abi(toggleOption)));
    return toggleOption;
}

template <typename D> Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic<D>::GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions) const
{
    Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails printTaskOptionDetails{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic)->GetFromPrintTaskOptions(get_abi(printTaskOptions), put_abi(printTaskOptionDetails)));
    return printTaskOptionDetails;
}

template <typename D> uint32_t consume_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails<D>::MaxCharacters() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails)->get_MaxCharacters(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>
{
    HRESULT __stdcall get_ItemId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ItemId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ItemDisplayName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ItemDisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ItemDisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ItemDisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>
{
    HRESULT __stdcall AddItem(HSTRING itemId, HSTRING displayName) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddItem(*reinterpret_cast<hstring const*>(&itemId), *reinterpret_cast<hstring const*>(&displayName));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2>
{
    HRESULT __stdcall AddItem(HSTRING itemId, HSTRING displayName, HSTRING description, void* icon) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddItem(*reinterpret_cast<hstring const*>(&itemId), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&description), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamWithContentType const*>(&icon));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>
{
    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
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
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>
{
    HRESULT __stdcall put_MaxCharacters(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxCharacters(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCharacters(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxCharacters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
{
    HRESULT __stdcall get_Items(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Foundation::IInspectable>>(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>
{
    HRESULT __stdcall get_MinValue(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MinValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxValue(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
{
    HRESULT __stdcall get_OptionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OptionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OptionType(Windows::Graphics::Printing::OptionDetails::PrintOptionType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::OptionDetails::PrintOptionType>(this->shim().OptionType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ErrorText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().State(*reinterpret_cast<Windows::Graphics::Printing::OptionDetails::PrintOptionStates const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Printing::OptionDetails::PrintOptionStates>(this->shim().State());
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
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetValue(void* value, bool* succeeded) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TrySetValue(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails>
{
    HRESULT __stdcall put_WarningText(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WarningText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WarningText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().WarningText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>
{
    HRESULT __stdcall get_OptionId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().OptionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>
{
    HRESULT __stdcall get_Options(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>>(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateItemListOption(HSTRING optionId, HSTRING displayName, void** itemListOption) noexcept final
    {
        try
        {
            *itemListOption = nullptr;
            typename D::abi_guard guard(this->shim());
            *itemListOption = detach_from<Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>(this->shim().CreateItemListOption(*reinterpret_cast<hstring const*>(&optionId), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateTextOption(HSTRING optionId, HSTRING displayName, void** textOption) noexcept final
    {
        try
        {
            *textOption = nullptr;
            typename D::abi_guard guard(this->shim());
            *textOption = detach_from<Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>(this->shim().CreateTextOption(*reinterpret_cast<hstring const*>(&optionId), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_OptionChanged(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().OptionChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_OptionChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OptionChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_BeginValidation(void* eventHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().BeginValidation(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_BeginValidation(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginValidation(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2>
{
    HRESULT __stdcall CreateToggleOption(HSTRING optionId, HSTRING displayName, void** toggleOption) noexcept final
    {
        try
        {
            *toggleOption = nullptr;
            typename D::abi_guard guard(this->shim());
            *toggleOption = detach_from<Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails>(this->shim().CreateToggleOption(*reinterpret_cast<hstring const*>(&optionId), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>
{
    HRESULT __stdcall GetFromPrintTaskOptions(void* printTaskOptions, void** printTaskOptionDetails) noexcept final
    {
        try
        {
            *printTaskOptionDetails = nullptr;
            typename D::abi_guard guard(this->shim());
            *printTaskOptionDetails = detach_from<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>(this->shim().GetFromPrintTaskOptions(*reinterpret_cast<Windows::Graphics::Printing::PrintTaskOptions const*>(&printTaskOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> : produce_base<D, Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>
{
    HRESULT __stdcall get_MaxCharacters(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxCharacters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::OptionDetails {

inline Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails PrintTaskOptionDetails::GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions)
{
    return get_activation_factory<PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>().GetFromPrintTaskOptions(printTaskOptions);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintPageRangeOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintPageRangeOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails> : winrt::impl::hash_base<winrt::Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails> {};

}

WINRT_WARNING_POP
