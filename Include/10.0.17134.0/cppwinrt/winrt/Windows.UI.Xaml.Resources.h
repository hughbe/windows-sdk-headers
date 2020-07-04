// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Xaml.Resources.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::Resources::CustomXamlResourceLoader consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Resources::CustomXamlResourceLoader instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides<D>::GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides)->GetResource(get_abi(resourceId), get_abi(objectType), get_abi(propertyName), get_abi(propertyType), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Resources::CustomXamlResourceLoader consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>::Current() const
{
    Windows::UI::Xaml::Resources::CustomXamlResourceLoader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics)->get_Current(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>::Current(Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics)->put_Current(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>
{
    HRESULT __stdcall CreateInstance(void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Resources::CustomXamlResourceLoader>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
{
    HRESULT __stdcall GetResource(HSTRING resourceId, HSTRING objectType, HSTRING propertyName, HSTRING propertyType, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().GetResource(*reinterpret_cast<hstring const*>(&resourceId), *reinterpret_cast<hstring const*>(&objectType), *reinterpret_cast<hstring const*>(&propertyName), *reinterpret_cast<hstring const*>(&propertyType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> : produce_base<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>
{
    HRESULT __stdcall get_Current(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Resources::CustomXamlResourceLoader>(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Current(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Current(*reinterpret_cast<Windows::UI::Xaml::Resources::CustomXamlResourceLoader const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename T, typename D>
struct WINRT_EBO produce_dispatch_to_overridable<T, D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    : produce_dispatch_to_overridable_base<T, D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
{
    Windows::Foundation::IInspectable GetResource(hstring const& resourceId, hstring const& objectType, hstring const& propertyName, hstring const& propertyType)
    {
        Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides overridable = this->shim_overridable();
        if (overridable)
        {
            return overridable.GetResource(resourceId, objectType, propertyName, propertyType);
        }
        return this->shim().GetResource(resourceId, objectType, propertyName, propertyType);
    }
};
}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Resources {

inline CustomXamlResourceLoader::CustomXamlResourceLoader()
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>().CreateInstance(outer, inner);
}

inline Windows::UI::Xaml::Resources::CustomXamlResourceLoader CustomXamlResourceLoader::Current()
{
    return get_activation_factory<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>().Current();
}

inline void CustomXamlResourceLoader::Current(Windows::UI::Xaml::Resources::CustomXamlResourceLoader const& value)
{
    get_activation_factory<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>().Current(value);
}

template <typename D> Windows::Foundation::IInspectable ICustomXamlResourceLoaderOverridesT<D>::GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const
{
    return shim().template try_as<ICustomXamlResourceLoaderOverrides>().GetResource(resourceId, objectType, propertyName, propertyType);
}

template <typename D, typename... Interfaces>
struct CustomXamlResourceLoaderT :
    implements<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Resources::ICustomXamlResourceLoader>,
    Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverridesT<D>
{
    using composable = CustomXamlResourceLoader;

protected:
    CustomXamlResourceLoaderT()
    {
        get_activation_factory<Windows::UI::Xaml::Resources::CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader> {};
template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> {};
template<> struct hash<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> {};
template<> struct hash<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Resources::CustomXamlResourceLoader> {};

}

WINRT_WARNING_POP
