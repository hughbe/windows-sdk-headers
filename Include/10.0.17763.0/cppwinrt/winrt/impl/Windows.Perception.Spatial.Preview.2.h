// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Perception.Spatial.Preview.1.h"

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview {

struct SpatialGraphInteropPreview
{
    SpatialGraphInteropPreview() = delete;
    static Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId);
    static Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition);
    static Windows::Perception::Spatial::SpatialCoordinateSystem CreateCoordinateSystemForNode(winrt::guid const& nodeId, Windows::Foundation::Numerics::float3 const& relativePosition, Windows::Foundation::Numerics::quaternion const& relativeOrientation);
    static Windows::Perception::Spatial::SpatialLocator CreateLocatorForNode(winrt::guid const& nodeId);
};

}
