// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Text.2.h"
#include "winrt/impl/Windows.Globalization.Fonts.2.h"
#include "winrt/Windows.Globalization.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontFamily() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontFamily(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontWeight() const
{
    Windows::UI::Text::FontWeight weight{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontWeight(put_abi(weight)));
    return weight;
}

template <typename D> Windows::UI::Text::FontStretch consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontStretch() const
{
    Windows::UI::Text::FontStretch stretch{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontStretch(put_abi(stretch)));
    return stretch;
}

template <typename D> Windows::UI::Text::FontStyle consume_Windows_Globalization_Fonts_ILanguageFont<D>::FontStyle() const
{
    Windows::UI::Text::FontStyle style{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_FontStyle(put_abi(style)));
    return style;
}

template <typename D> double consume_Windows_Globalization_Fonts_ILanguageFont<D>::ScaleFactor() const
{
    double scale{};
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFont)->get_ScaleFactor(&scale));
    return scale;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UITextFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UITextFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UIHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UIHeadingFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UITitleFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UITitleFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UICaptionFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UICaptionFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::UINotificationHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_UINotificationHeadingFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::TraditionalDocumentFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_TraditionalDocumentFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::ModernDocumentFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_ModernDocumentFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::DocumentHeadingFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_DocumentHeadingFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::FixedWidthTextFont() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_FixedWidthTextFont(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::DocumentAlternate1Font() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_DocumentAlternate1Font(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFont consume_Windows_Globalization_Fonts_ILanguageFontGroup<D>::DocumentAlternate2Font() const
{
    Windows::Globalization::Fonts::LanguageFont value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroup)->get_DocumentAlternate2Font(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Fonts::LanguageFontGroup consume_Windows_Globalization_Fonts_ILanguageFontGroupFactory<D>::CreateLanguageFontGroup(param::hstring const& languageTag) const
{
    Windows::Globalization::Fonts::LanguageFontGroup recommendedFonts{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Globalization::Fonts::ILanguageFontGroupFactory)->CreateLanguageFontGroup(get_abi(languageTag), put_abi(recommendedFonts)));
    return recommendedFonts;
}

template <typename D>
struct produce<D, Windows::Globalization::Fonts::ILanguageFont> : produce_base<D, Windows::Globalization::Fonts::ILanguageFont>
{
    HRESULT __stdcall get_FontFamily(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FontFamily());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FontWeight(struct struct_Windows_UI_Text_FontWeight* weight) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *weight = detach_from<Windows::UI::Text::FontWeight>(this->shim().FontWeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FontStretch(Windows::UI::Text::FontStretch* stretch) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *stretch = detach_from<Windows::UI::Text::FontStretch>(this->shim().FontStretch());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyle(Windows::UI::Text::FontStyle* style) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *style = detach_from<Windows::UI::Text::FontStyle>(this->shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaleFactor(double* scale) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *scale = detach_from<double>(this->shim().ScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::Fonts::ILanguageFontGroup> : produce_base<D, Windows::Globalization::Fonts::ILanguageFontGroup>
{
    HRESULT __stdcall get_UITextFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().UITextFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UIHeadingFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().UIHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UITitleFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().UITitleFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UICaptionFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().UICaptionFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UINotificationHeadingFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().UINotificationHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TraditionalDocumentFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().TraditionalDocumentFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModernDocumentFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().ModernDocumentFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentHeadingFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().DocumentHeadingFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FixedWidthTextFont(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().FixedWidthTextFont());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentAlternate1Font(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().DocumentAlternate1Font());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DocumentAlternate2Font(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Fonts::LanguageFont>(this->shim().DocumentAlternate2Font());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Globalization::Fonts::ILanguageFontGroupFactory> : produce_base<D, Windows::Globalization::Fonts::ILanguageFontGroupFactory>
{
    HRESULT __stdcall CreateLanguageFontGroup(HSTRING languageTag, void** recommendedFonts) noexcept final
    {
        try
        {
            *recommendedFonts = nullptr;
            typename D::abi_guard guard(this->shim());
            *recommendedFonts = detach_from<Windows::Globalization::Fonts::LanguageFontGroup>(this->shim().CreateLanguageFontGroup(*reinterpret_cast<hstring const*>(&languageTag)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Globalization::Fonts {

inline LanguageFontGroup::LanguageFontGroup(param::hstring const& languageTag) :
    LanguageFontGroup(get_activation_factory<LanguageFontGroup, Windows::Globalization::Fonts::ILanguageFontGroupFactory>().CreateLanguageFontGroup(languageTag))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Globalization::Fonts::ILanguageFont> : winrt::impl::hash_base<winrt::Windows::Globalization::Fonts::ILanguageFont> {};
template<> struct hash<winrt::Windows::Globalization::Fonts::ILanguageFontGroup> : winrt::impl::hash_base<winrt::Windows::Globalization::Fonts::ILanguageFontGroup> {};
template<> struct hash<winrt::Windows::Globalization::Fonts::ILanguageFontGroupFactory> : winrt::impl::hash_base<winrt::Windows::Globalization::Fonts::ILanguageFontGroupFactory> {};
template<> struct hash<winrt::Windows::Globalization::Fonts::LanguageFont> : winrt::impl::hash_base<winrt::Windows::Globalization::Fonts::LanguageFont> {};
template<> struct hash<winrt::Windows::Globalization::Fonts::LanguageFontGroup> : winrt::impl::hash_base<winrt::Windows::Globalization::Fonts::LanguageFontGroup> {};

}

WINRT_WARNING_POP
