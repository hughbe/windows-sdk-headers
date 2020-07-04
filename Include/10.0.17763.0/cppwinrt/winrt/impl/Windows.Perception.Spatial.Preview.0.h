// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial {

struct SpatialCoordinateSystem;
struct SpatialLocator;

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview {

struct ISpatialGraphInteropPreviewStatics;
struct SpatialGraphInteropPreview;

}

namespace winrt::impl {

template <> struct category<Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>{ using type = interface_category; };
template <> struct category<Windows::Perception::Spatial::Preview::SpatialGraphInteropPreview>{ using type = class_category; };
template <> struct name<Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>{ static constexpr auto & value{ L"Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics" }; };
template <> struct name<Windows::Perception::Spatial::Preview::SpatialGraphInteropPreview>{ static constexpr auto & value{ L"Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview" }; };
template <> struct guid_storage<Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>{ static constexpr guid value{ 0xC042644C,0x20D8,0x4ED0,{ 0xAE,0xF7,0x68,0x05,0xB8,0xE5,0x3F,0x55 } }; };

template <> struct abi<Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateCoordinateSystemForNode(winrt::guid nodeId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateCoordinateSystemForNodeWithPosition(winrt::guid nodeId, Windows::Foundation::Numerics::float3 relativePosition, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateCoordinateSystemForNodeWithPositionAndOrientation(winrt::guid nodeId, Windows::Foundation::Numerics::float3 relativePosition, Windows::Foundation::Numerics::quaternion relativeOrientation, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateLocatorForNode(winrt::guid nodeId, void** result) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics
{
    Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId) const;
    Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition) const;
    Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation) const;
    Windows::Perception::Spatial::SpatialLocator CreateLocatorForNode(winrt::guid const& nodeId) const;
};
template <> struct consume<Windows::Perception::Spatial::Preview::ISpatialGraphInteropPreviewStatics> { template <typename D> using type = consume_Windows_Perception_Spatial_Preview_ISpatialGraphInteropPreviewStatics<D>; };

}
