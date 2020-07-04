// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.Effects.2.h"
#include "winrt/impl/Windows.UI.Composition.Effects.2.h"
#include "winrt/Windows.UI.Composition.h"

namespace winrt::impl {

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::AmbientAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_AmbientAmount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::AmbientAmount(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_AmbientAmount(value));
}

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::DiffuseAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_DiffuseAmount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::DiffuseAmount(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_DiffuseAmount(value));
}

template <typename D> Windows::Graphics::Effects::IGraphicsEffectSource consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::NormalMapSource() const
{
    Windows::Graphics::Effects::IGraphicsEffectSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_NormalMapSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::NormalMapSource(Windows::Graphics::Effects::IGraphicsEffectSource const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_NormalMapSource(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularAmount() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_SpecularAmount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularAmount(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_SpecularAmount(value));
}

template <typename D> float consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularShine() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->get_SpecularShine(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect<D>::SpecularShine(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect)->put_SpecularShine(value));
}

template <typename D> Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel consume_Windows_UI_Composition_Effects_ISceneLightingEffect2<D>::ReflectanceModel() const
{
    Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel value{};
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect2)->get_ReflectanceModel(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Composition_Effects_ISceneLightingEffect2<D>::ReflectanceModel(Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Composition::Effects::ISceneLightingEffect2)->put_ReflectanceModel(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::UI::Composition::Effects::ISceneLightingEffect> : produce_base<D, Windows::UI::Composition::Effects::ISceneLightingEffect>
{
    HRESULT __stdcall get_AmbientAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().AmbientAmount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AmbientAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AmbientAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DiffuseAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().DiffuseAmount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DiffuseAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DiffuseAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NormalMapSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Effects::IGraphicsEffectSource>(this->shim().NormalMapSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NormalMapSource(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NormalMapSource(*reinterpret_cast<Windows::Graphics::Effects::IGraphicsEffectSource const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularAmount(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().SpecularAmount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularAmount(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularAmount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpecularShine(float* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<float>(this->shim().SpecularShine());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SpecularShine(float value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpecularShine(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Composition::Effects::ISceneLightingEffect2> : produce_base<D, Windows::UI::Composition::Effects::ISceneLightingEffect2>
{
    HRESULT __stdcall get_ReflectanceModel(Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel>(this->shim().ReflectanceModel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReflectanceModel(Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReflectanceModel(*reinterpret_cast<Windows::UI::Composition::Effects::SceneLightingEffectReflectanceModel const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Effects {

inline SceneLightingEffect::SceneLightingEffect() :
    SceneLightingEffect(get_activation_factory<SceneLightingEffect>().ActivateInstance<SceneLightingEffect>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect> {};
template<> struct hash<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect2> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Effects::ISceneLightingEffect2> {};
template<> struct hash<winrt::Windows::UI::Composition::Effects::SceneLightingEffect> : winrt::impl::hash_base<winrt::Windows::UI::Composition::Effects::SceneLightingEffect> {};

}

WINRT_WARNING_POP
