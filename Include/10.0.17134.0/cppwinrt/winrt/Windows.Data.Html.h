// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Data.Html.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Data_Html_IHtmlUtilities<D>::ConvertToText(param::hstring const& html) const
{
    hstring text{};
    check_hresult(WINRT_SHIM(Windows::Data::Html::IHtmlUtilities)->ConvertToText(get_abi(html), put_abi(text)));
    return text;
}

template <typename D>
struct produce<D, Windows::Data::Html::IHtmlUtilities> : produce_base<D, Windows::Data::Html::IHtmlUtilities>
{
    HRESULT __stdcall ConvertToText(HSTRING html, HSTRING* text) noexcept final
    {
        try
        {
            *text = nullptr;
            typename D::abi_guard guard(this->shim());
            *text = detach_from<hstring>(this->shim().ConvertToText(*reinterpret_cast<hstring const*>(&html)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Data::Html {

inline hstring HtmlUtilities::ConvertToText(param::hstring const& html)
{
    return get_activation_factory<HtmlUtilities, Windows::Data::Html::IHtmlUtilities>().ConvertToText(html);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Data::Html::IHtmlUtilities> : winrt::impl::hash_base<winrt::Windows::Data::Html::IHtmlUtilities> {};
template<> struct hash<winrt::Windows::Data::Html::HtmlUtilities> : winrt::impl::hash_base<winrt::Windows::Data::Html::HtmlUtilities> {};

}

WINRT_WARNING_POP
