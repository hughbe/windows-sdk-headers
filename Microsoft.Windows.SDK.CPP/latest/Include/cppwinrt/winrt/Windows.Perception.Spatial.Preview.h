// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "winrt/base.h"

#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.Perception.Spatial.Preview.2.h"
#include "winrt/Windows.Perception.Spatial.h"

namespace winrt::impl {

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics<D>::CreateCoordinateSystemForNode(winrt::guid const& nodeId) const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics)->CreateCoordinateSystemForNode(get_abi(nodeId), put_abi(result)));
    return result;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics<D>::CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition) const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics)->CreateCoordinateSystemForNodeWithPosition(get_abi(nodeId), get_abi(relativePosition), put_abi(result)));
    return result;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics<D>::CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics)->CreateCoordinateSystemForNodeWithPositionAndOrientation(get_abi(nodeId), get_abi(relativePosition), get_abi(relativeOrientation), put_abi(result)));
    return result;
}

template <typename D> Windows::Perception::Spatial::SpatialLocator consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics<D>::CreateLocatorForNode(winrt::guid const& nodeId) const
{
    Windows::Perception::Spatial::SpatialLocator result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics)->CreateLocatorForNode(get_abi(nodeId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics> : produce_base<D, Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>
{
    int32_t WINRT_CALL CreateCoordinateSystemForNode(winrt::guid nodeId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCoordinateSystemForNode, WINRT_WRAP(Windows::Perception::Spatial::SpatialCoordinateSystem), winrt::guid const&);
            *result = detach_from<Windows::Perception::Spatial::SpatialCoordinateSystem>(this->shim().CreateCoordinateSystemForNode(*reinterpret_cast<winrt::guid const*>(&nodeId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CreateCoordinateSystemForNodeWithPosition(winrt::guid nodeId, Windows::Foundation::Numerics::float3 relativePosition, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCoordinateSystemForNode, WINRT_WRAP(Windows::Perception::Spatial::SpatialCoordinateSystem), winrt::guid const&, Windows::Foundation::Numerics::float3 const&);
            *result = detach_from<Windows::Perception::Spatial::SpatialCoordinateSystem>(this->shim().CreateCoordinateSystemForNode(*reinterpret_cast<winrt::guid const*>(&nodeId), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CreateCoordinateSystemForNodeWithPositionAndOrientation(winrt::guid nodeId, Windows::Foundation::Numerics::float3 relativePosition, Windows::Foundation::Numerics::quaternion relativeOrientation, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateCoordinateSystemForNode, WINRT_WRAP(Windows::Perception::Spatial::SpatialCoordinateSystem), winrt::guid const&, Windows::Foundation::Numerics::float3 const&, Windows::Foundation::Numerics::quaternion const&);
            *result = detach_from<Windows::Perception::Spatial::SpatialCoordinateSystem>(this->shim().CreateCoordinateSystemForNode(*reinterpret_cast<winrt::guid const*>(&nodeId), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&relativePosition), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&relativeOrientation)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL CreateLocatorForNode(winrt::guid nodeId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CreateLocatorForNode, WINRT_WRAP(Windows::Perception::Spatial::SpatialLocator), winrt::guid const&);
            *result = detach_from<Windows::Perception::Spatial::SpatialLocator>(this->shim().CreateLocatorForNode(*reinterpret_cast<winrt::guid const*>(&nodeId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview {

inline Windows::Perception::Spatial::SpatialCoordinateSystem SpatialGraphInteropPreview::CreateCoordinateSystemForNode(winrt::guid const& nodeId)
{
    return impl::call_factory<SpatialGraphInteropPreview, Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>([&](auto&& f) { return f.CreateCoordinateSystemForNode(nodeId); });
}

inline Windows::Perception::Spatial::SpatialCoordinateSystem SpatialGraphInteropPreview::CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition)
{
    return impl::call_factory<SpatialGraphInteropPreview, Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>([&](auto&& f) { return f.CreateCoordinateSystemForNode(nodeId, relativePosition); });
}

inline Windows::Perception::Spatial::SpatialCoordinateSystem SpatialGraphInteropPreview::CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation)
{
    return impl::call_factory<SpatialGraphInteropPreview, Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>([&](auto&& f) { return f.CreateCoordinateSystemForNode(nodeId, relativePosition, relativeOrientation); });
}

inline Windows::Perception::Spatial::SpatialLocator SpatialGraphInteropPreview::CreateLocatorForNode(winrt::guid const& nodeId)
{
    return impl::call_factory<SpatialGraphInteropPreview, Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>([&](auto&& f) { return f.CreateLocatorForNode(nodeId); });
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics> {};
template<> struct hash<winrt::Windows::Perception::Spatial::Preview::SpatialGraphInteropPreview> : winrt::impl::hash_base<winrt::Windows::Perception::Spatial::Preview::SpatialGraphInteropPreview> {};

}
